module CHIP(clk,
            rst_n,
            // For mem_D
            mem_wen_D,
            mem_addr_D,
            mem_wdata_D,
            mem_rdata_D,
            // For mem_I
            mem_addr_I,
            mem_rdata_I);

    input         clk, rst_n ;
    // For mem_D
    output        mem_wen_D  ;
    output [31:0] mem_addr_D ;
    output [31:0] mem_wdata_D;
    input  [31:0] mem_rdata_D;
    // For mem_I
    output [31:0] mem_addr_I ;
    input  [31:0] mem_rdata_I;
    
    //---------------------------------------//
    // Do not modify this part!!!            //
    // Exception: You may change wire to reg //
    reg    [31:0] PC          ;              //
    wire   [31:0] PC_nxt      ;              //
    wire          regWrite    ;              //
    wire   [ 4:0] rs1, rs2, rd;              //
    wire   [31:0] rs1_data    ;              //
    wire   [31:0] rs2_data    ;              //
    wire   [31:0] rd_data     ;              //
    //------------------------------------s---//

    // Todo: other wire/reg
    wire          branch      ;
    wire          MemRead     ;
    wire          MemtoReg    ;
    wire   [1:0]  ALUop       ;
    wire          ALUzer, ALUgreat;
    wire          MemWrite    ;
    wire          ALUSrc      ;

    wire   [6:0]  opcode      ;
    wire   [2:0]  funct3      ;
    wire   [1:0]  inst3025    ;
    wire   [3:0]  ALU_mode    ;
    wire   [31:0] imm         ;      //immediate generator
    wire   [31:0] out         ;

    wire          valid, ready;
    wire   [31:0] memout      ;
    assign mem_addr_I = PC;

    PCjumper pc0(
        .instruction(mem_rdata_I),
    	.branch(branch),
    	.ALUzer(ALUzer),
        .ALUgreat(ALUgreat), 
    	.imm(imm), 
    	.PC_nxt(PC_nxt), 
    	.PC(PC),
        .jalr_rs1(rs1_data),
        .ready(ready));


    ID id0(
    	.clk(clk),
    	.rst_n(rst_n),
    	.instruction(mem_rdata_I),
    	.a1(rs1),
    	.a2(rs2),
    	.w(rd),
    	.branch(branch),
    	.MemRead(MemRead),
    	.MemtoReg(MemtoReg),
    	.ALUop(ALUop),
    	.MemWrite(MemWrite),
    	.ALUSrc(ALUSrc),
    	.regWrite(regWrite), 
    	.funct3(funct3),
    	.inst3025(inst3025),
        .opcode(opcode),
        .valid(valid));

    imm_gen img0(
    	.clk(clk),
    	.rst_n(rst_n),
    	.instruction(mem_rdata_I),
    	.out(imm));

    //---------------------------------------//
    // Do not modify this part!!!            //
    reg_file reg0(                           //
        .clk(clk),                           //
        .rst_n(rst_n),                       //
        .wen(regWrite),                      //
        .a1(rs1),                            //
        .a2(rs2),                            //
        .aw(rd),                             //
        .d(rd_data),                         //
        .q1(rs1_data),                       //
        .q2(rs2_data));                      //
    //---------------------------------------//
    
    ALU_control aluc0(
        .opcode(opcode),
    	.ALUop(ALUop),
    	.ALUmode(ALU_mode),
    	.inst3025(inst3025),
    	.funct3(funct3));

    wire [31:0] ALU_out, mul_out;

    ALU alu0(
    	.PC(PC)                     ,
    	.clk(clk)                   ,
    	.rst_n(rst_n)               ,
    	.mode(ALU_mode)             ,
    	.ALUSrc(ALUSrc)             ,
    	.imm(imm)                   ,
    	.ALUzer(ALUzer)             ,
        .ALUgreat(ALUgreat)         ,
    	.in_A(rs1_data)             ,
    	.in_B(rs2_data)             ,
    	.instruction(mem_rdata_I)   ,
    	.ALU_out(ALU_out)           );

    multDiv mul0(
    	.clk(clk),
    	.rst_n(rst_n),
    	.valid(valid),
    	.ready(ready),
    	.mode(ALU_mode),
    	.in_A(rs1_data),
    	.in_B(rs2_data),
    	.out(mul_out));
    
    
    MEM mem0(
    	.clk(clk), 
	    .rst_n(rst_n), 
	    .MemRead(MemRead), 
	    .MemtoReg(MemtoReg),
	    .MemWrite(MemWrite), 
	    .mode(ALU_mode),
	    .ALU_output(ALU_out), 
	    .mul_output(mul_out),
	    .wr_data(rs2_data), 
	    .memout(rd_data),
        .mem_wen_D(mem_wen_D),
        .mem_addr_D(mem_addr_D),
        .mem_wdata_D(mem_wdata_D),
        .mem_rdata_D(mem_rdata_D));
    // Todo: any combinational/sequential circuit

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            PC <= 32'h00010000; // Do not modify this value!!!
            
        end
        else begin
            PC <= PC_nxt;
            
        end
    end
    
endmodule    

module PCjumper(
    instruction,
	branch, 
	ALUzer,
    ALUgreat, 
	imm, 
	PC_nxt, 
	PC,
    jalr_rs1,
    ready);
    
    input ready;
    input [31:0] instruction;
    input [31:0] jalr_rs1;
    wire [6:0] opcode = instruction[6:0];
    wire [6:0] funct7 = instruction[31:25];
    wire [3:0] funct3 = instruction[14:12];
    input branch, ALUzer, ALUgreat;
    input [31:0] PC, imm;
    output [31:0] PC_nxt;
    assign PC_nxt = (ready)? PC+4:
                    (branch&&ALUzer&&(funct3 == 3'b000))? PC+imm: 
                    (branch&ALUgreat&&(funct3 == 3'b101))? PC+imm:
                    (opcode ==7'b0110011 && funct7 == 7'b0000001)? PC:
                    (opcode ==7'b1101111)? PC + imm: 
                    (opcode ==7'b1100111)? jalr_rs1 + imm : PC+4;

endmodule

module ID(
	clk, 
	rst_n, 
	instruction, 
	a1, 
	a2, 
	w,

	branch, 
	MemRead, 
	MemtoReg, 
	ALUop, 
	MemWrite, 
	ALUSrc, 
	regWrite, 
	inst3025, 
	funct3,
    opcode,
    valid);

    input clk, rst_n;
    input [31:0] instruction;
    output [4:0] a1, a2, w;
    output [6:0] opcode;
    output valid;
    
    assign valid = (instruction[6:0] == 7'b0110011 && instruction[25] == 1'b1)? 1'b1 : 1'b0;

    assign opcode = instruction[6:0];
    assign a1 = instruction[19:15];
    assign a2 = instruction[24:20];
    assign w  = instruction[11:7];


    output branch, MemRead, MemtoReg, MemWrite, ALUSrc, regWrite;
    output [1:0] inst3025, ALUop;
    output [2:0] funct3;
    assign branch    = (opcode == 7'b1100011)? 1'b1 : 1'b0;         //beq, bge
    assign MemRead   = (opcode == 7'b0000011)? 1'b1 : 1'b0;         //lw
    assign MemtoReg  = (opcode == 7'b0000011)? 1'b1 : 1'b0;         //lw


    assign MemWrite  = (opcode == 7'b0100011)? 1'b1 : 1'b0;         //sw
    assign ALUSrc    = (opcode == 7'b0010111||                      //auipc
                        opcode == 7'b1101111||                      //jal 
    	                opcode == 7'b1100111||                      //jalr
    	                opcode == 7'b0010011||                      //addi, slti
                        opcode == 7'b0100011||                      //sw
    	                opcode == 7'b0000011)? 1'b1 : 1'b0;         //lw
    assign regWrite  = (opcode == 7'b0000011)? 1'b1 :               //lw
                       (opcode == 7'b0110011)? 1'b1 :               //add, sub, mul
                       (opcode == 7'b0010011)? 1'b1 :               //addi, slti
                       (opcode == 7'b0010111)? 1'b1 :               //auipc
                       (opcode == 7'b1101111)? 1'b1 :               //jal
                       (opcode == 7'b1100111)? 1'b1 : 1'b0;         //jalr

    assign ALUop     = (opcode == 7'b1100011)? 2'b01:               //beq, bge
                       (opcode == 7'b0010011)? 2'b10:               //I-type
                       (opcode == 7'b0110011)? 2'b10: 2'b00;        //R-type,  all others
    assign funct3    = instruction[14:12];
    assign inst3025  = {instruction[30:30], instruction[25:25]};

endmodule



module imm_gen(
	clk, 
	rst_n, 
	instruction, 
	out);

    input clk, rst_n;
    input [31:0] instruction;
    output [31:0] out;

    wire [6:0] opcode = instruction[6:0];
    assign out = (opcode == 7'b0010111)? {instruction[31:12], 12'b0}:   //auipc
    	         (opcode == 7'b1101111)? {{11{instruction[31]}}, instruction[31], instruction[19:12], instruction[20], instruction[30:21], 1'b0}:   //jal
                 (opcode == 7'b1100111 ||//jalr 
                  opcode == 7'b0000011 ||//lw
                  opcode == 7'b0010011)? {{20{instruction[31]}}, instruction[31:20]} ://addi slti
                 (opcode == 7'b1100011)? {{19{instruction[31]}}, instruction[31], instruction[7], instruction[30:25], instruction[11:8], 1'b0} :   //beq, bge
                 (opcode == 7'b0100011)? {20'b0, instruction[31:25], instruction[11:7]}: 32'b0;//sw

endmodule
    


    
module reg_file(clk, rst_n, wen, a1, a2, aw, d, q1, q2);
   
    parameter BITS = 32;
    parameter word_depth = 32;
    parameter addr_width = 5; // 2^addr_width >= word_depth
    
    input clk, rst_n, wen; // wen: 0:read | 1:write
    input [BITS-1:0] d;
    input [addr_width-1:0] a1, a2, aw;

    output [BITS-1:0] q1, q2;

    reg [BITS-1:0] mem [0:word_depth-1];
    reg [BITS-1:0] mem_nxt [0:word_depth-1];

    integer i;

    assign q1 = mem[a1];
    assign q2 = mem[a2];

    always @(*) begin
        for (i=0; i<word_depth; i=i+1)
            mem_nxt[i] = (wen && (aw == i)) ? d : mem[i];
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            mem[0] <= 0;
            for (i=1; i<word_depth; i=i+1) begin
                case(i)
                    32'd2: mem[i] <= 32'hbffffff0;
                    32'd3: mem[i] <= 32'h10008000;
                    default: mem[i] <= 32'h0;
                endcase
            end
        end
        else begin
            mem[0] <= 0;
            for (i=1; i<word_depth; i=i+1)
                mem[i] <= mem_nxt[i];
        end       
    end
endmodule

module ALU_control(ALUop, ALUmode, inst3025 ,funct3, opcode);
    input [1:0] ALUop;
    input [1:0] inst3025;
    input [2:0] funct3;
    input [6:0] opcode;
    output [3:0] ALUmode;

    reg inst30, inst25;
    reg [3:0] out;

    wire [4:0] modetype = {inst3025, funct3};
    always@ (*) begin
    	case(ALUop)
    	    2'b01: begin
    	    	out = 4'b0110;
    	    end
            2'b00: begin
            	out = 4'b0010;
            end
            2'b10: begin
            	case(opcode)
            	    7'b0010011: begin
            	    	case(funct3) 
                            3'b000:begin
                                out = 4'b0010;
                            end
                            3'b010:begin
                                out = 4'b0111;
                            end
                            default: begin
                                out = 4'b0000;
                            end
                        endcase
            	    end
            	    7'b0110011: begin
                        case(inst3025)
                            2'b00: begin
                                out = 4'b0010;
                            end
                            2'b10: begin
                                out = 4'b0110;
                            end
                            2'b01: begin
                                case(funct3)
                                    3'b000: begin
                                        out = 4'b1111;
                                    end
                                    3'b100: begin
                                        out = 4'b1110;
                                    end
                                    default: begin
                                        out = 4'b0000;
                                    end
                                endcase
                            end
                            default:begin
                                out = 4'b0000;
                            end
                        endcase
                    end
            	    default: begin
            	    	out = 4'b0000;
            	    end
            	endcase
            end
            default: begin
            	out = 4'b0000;
            end
    	endcase
    end

    assign ALUmode = out;

endmodule

module ALU(
	clk         , 
	rst_n       , 
	PC          ,
	mode        ,
	ALUSrc      , 
	in_A        , 
	in_B        , 
	imm         , 
	ALU_out     , 
	ALUzer      , 
    ALUgreat    ,
	instruction );
    input [31:0] PC, instruction;
    input clk, rst_n, ALUSrc;
    input [3:0] mode;
    input [31:0] in_A, in_B, imm;
    output [31:0] ALU_out;
    output ALUzer;
    output ALUgreat;

    wire [31:0] ALU_out_nxt;
    wire ALUzer_nxt;
    wire [6:0]  opcode = instruction[6:0];

    reg [31:0] par1;
    reg [31:0] par2;
    always@ (*) begin
        if(opcode == 7'b1101111) begin
            par1 = PC;
            par2 = 32'd4;
        end

        else if(opcode == 7'b1100111) begin
            par1 = PC;
            par2 = 32'd4;
        end

        else begin

            if(opcode == 7'b0010111) begin
        	    par1 = PC;
            end
    	    else begin
    	        par1 = in_A;
    	    end

    	    if(!ALUSrc) begin
    	        par2 = in_B;
            end
            else begin
    	        par2 = imm;
            end

        end
    end
    
    reg [31:0] for_ALUgreat;
    always@ (*) begin
        for_ALUgreat = par1-par2;
    end

    assign ALUzer = ((par1 - par2)==32'b0)? 1'b1: 1'b0;  

    assign ALUgreat = (for_ALUgreat[31])? 1'b0: 1'b1;
    
    assign ALU_out = (mode == 4'b0110)? par1-par2:
                     (mode == 4'b0010)? par1+par2: 
                     (mode == 4'b0111)? (par1<par2) : 32'b0;


endmodule

module multDiv(
	clk      , 
	rst_n    , 
	valid    , 
	ready    , 
	mode     , 
	in_A     , 
	in_B     , 
	out      );
    // Todo: your HW3
        // Definition of ports
    input         clk, rst_n, valid;
    input  [3:0]  mode; // mode: 0: multu, 1: divu
    output        ready;
    input  [31:0] in_A, in_B;
    output [31:0] out;

    // Definition of states
    parameter IDLE = 2'b00;
    parameter MULT = 2'b01;
    parameter DIV  = 2'b10;
    parameter OUT  = 2'b11;

    // Todo: Wire and reg
    reg  [ 1:0] state, state_nxt;
    reg  [ 4:0] counter, counter_nxt;
    reg  [63:0] shreg, shreg_nxt;
    reg  [31:0] alu_in, alu_in_nxt;
    reg  [32:0] alu_out;


    // Todo 5: wire assignments
    assign ready = (state == OUT)? 1 : 0;
    assign out = shreg[31:0];
    
    // Combinational always block
    // Todo 1: State machine
    always @(*) begin
        case(state)
            IDLE: begin
                if (valid) begin 
                    if (mode == 4'b1111) state_nxt = MULT;
                    else      state_nxt = DIV;
                end
                else state_nxt = IDLE;
            end
            MULT: begin
                if (counter == 5'b11111) begin
                    state_nxt = OUT; 
                end
                else state_nxt = MULT;
            end
            DIV : begin
                if (counter == 5'b11111) begin
                    state_nxt = OUT; 
                end
                else state_nxt = DIV;
            end
            OUT : begin
                state_nxt = IDLE;
            end
        endcase
    end
    // Todo 2: Counter

    always @(*) begin
        case(state)
            MULT: begin
                counter_nxt = counter + 1;
            end
            DIV : begin
                counter_nxt = counter + 1;
            end
            default: counter_nxt = 0;
        endcase
    end
    
    // ALU input
    always @(*) begin
        case(state)
            IDLE: begin
                if (valid) alu_in_nxt = in_B;
                else       alu_in_nxt = 0;
            end
            OUT : alu_in_nxt = 0;
            default: alu_in_nxt = alu_in;
        endcase
    end

    // Todo 3: ALU output

    
    always @(*) begin
        case(state)
            MULT:begin
                if(shreg[0]) alu_out = shreg[63:32] + alu_in;
                else         alu_out = shreg[63:32] + 32'b0;
            end
            DIV :begin
                alu_out = shreg[62:31] - alu_in;
            end
            default: alu_out = 0;
        endcase
    end
    
  // Todo 4: Shift register

    always @(*) begin
        case(state)
            IDLE:begin
                if (valid) shreg_nxt = in_A;
                else       shreg_nxt = 0;
            end
            MULT:begin
                shreg_nxt = {alu_out, shreg[31:1]};
            end
            DIV :begin
                if (shreg[62:31] >= alu_in) begin
                    shreg_nxt = ({alu_out, shreg[30:0]} << 1) + 1;
                end
                else shreg_nxt = shreg << 1;
            end
            default: shreg_nxt = 0;
        endcase
    end


    // Todo: Sequential always block
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            counter <= 5'b0;
            shreg <= 64'b0;
            alu_in <= 32'b0;
        end
        else begin
            state <= state_nxt;
            counter <= counter_nxt;
            shreg <= shreg_nxt;
            alu_in <= alu_in_nxt;
        end
    end

endmodule

module MEM(
	clk, 
	rst_n, 
	MemRead, 
	MemtoReg,
	MemWrite, 
    ALU_output,
    mul_output,
    mode,
    wr_data, 

	memout,
    mem_wen_D,
    mem_addr_D,
    mem_wdata_D,
    mem_rdata_D);

    
    input clk, rst_n, MemRead, MemtoReg, MemWrite;
    input [31:0] mul_output, ALU_output, wr_data, mem_rdata_D;
    input [3:0] mode;
    
    wire [31:0] addr;
    assign addr = (mode == 4'b1111 || mode == 4'b1110)? mul_output : ALU_output;

    output mem_wen_D;
    output [31:0] memout, mem_wdata_D, mem_addr_D;

    assign mem_wen_D = MemWrite;
    assign mem_addr_D = addr;
    assign mem_wdata_D = wr_data;
    assign memout = (!MemtoReg)? addr: mem_rdata_D;
     
endmodule
