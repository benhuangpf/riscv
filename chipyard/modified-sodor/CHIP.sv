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
    reg    [31:0] PC_nxt      ;              //
    reg           regWrite    ;              //
    wire   [ 4:0] rs1, rs2, rd;              //
    wire   [31:0] rs1_data    ;              //
    wire   [31:0] rs2_data    ;              //
    wire   [31:0] rd_data     ;              //
    //------------------------------------s---//

    // Todo: other wire/reg
    reg           branch      ;
    reg           MemRead     ;
    reg           MemtoReg    ;
    reg    [1:0]  ALUop       ;
    reg           ALUzero     ;
    reg           ALUlarge    ;
    reg           MemWrite    ;
    reg           ALUSrc      ;
    reg    [31:0] operand1    ;
    reg    [31:0] operand2    ;
    reg    [31:0] for_ALUlarge;
    reg    [31:0] ALU_out     ;
    reg    [3:0]  ALU_mode    ;
    reg    [31:0] imm         ; 

    wire   [6:0]  opcode      ;
    wire   [6:0]  funct7      ;
    wire   [2:0]  funct3      ;
    wire   [1:0]  inst3025    ;
    assign opcode = mem_rdata_I[6:0];
    assign funct7 = mem_rdata_I[31:25];
    assign funct3 = mem_rdata_I[14:12];
    assign inst3025 = {mem_rdata_I[30:30], mem_rdata_I[25:25]};
    assign rs1 = mem_rdata_I[19:15];
    assign rs2 = mem_rdata_I[24:20];
    assign rd  = mem_rdata_I[11:7];
    
    wire   [31:0] out         ;
    wire          valid       ; 
    wire          ready       ; 
    wire   [31:0] addr        ;
    assign valid = (mem_rdata_I[6:0] == 7'b0110011 && mem_rdata_I[25] == 1'b1)? 1'b1 : 1'b0;
    assign addr = (ALU_mode == 4'b1111 || ALU_mode == 4'b1110)? out : ALU_out;

    assign mem_addr_I = PC;
    assign mem_wen_D = MemWrite;
    assign mem_addr_D = addr;
    assign mem_wdata_D = rs2_data;
    assign rd_data = (!MemtoReg)? addr: mem_rdata_D;

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
 
    MulDiv mul0(
    	.clk(clk),
    	.rst_n(rst_n),
    	.valid(valid),
    	.ready(ready),
    	.mode(ALU_mode),
    	.in_A(rs1_data),
    	.in_B(rs2_data),
    	.out(out));

    // Todo: any combinational/sequential circuit

    //PC_nxt
    always @(*)
    begin
        // mul, div (finish)
        if(ready)
        begin
            PC_nxt = PC + 4;    
        end
        // mul, div
        else if(opcode == 7'b0110011 && funct7 == 7'b0000001)
        begin
            PC_nxt = PC;
        end
        // jal, beq, bne
        else if((opcode == 7'b1101111) || (branch && ALUzero && (funct3 == 3'b000)) || (branch && (!ALUzero) && (funct3 == 3'b001)))
        begin
            PC_nxt = PC + imm;
        end
        // blt
        else if((branch && !ALUlarge && (funct3 == 3'b100)))
        begin
            PC_nxt = PC + imm;
        end
        // jalr
        else if(opcode == 'b1100111)
        begin
            PC_nxt = rs1_data + imm;
        end
        // other
        else 
        begin
            PC_nxt = PC + 4;
        end
    end

    //ID
    always @(*)
    begin
        case(opcode)
            // R-type
            7'b0110011:  
            begin
                branch = 1'b0;
                MemRead = 1'b0;
                MemtoReg = 1'b0;
                MemWrite = 1'b0;
                ALUSrc = 1'b0;
                regWrite = 1'b1;
                ALUop = 2'b10;
            end
            // I-type (addi, slti)
            // new slli
            7'b0010011:  
            begin
                branch = 1'b0;
                MemRead = 1'b0;
                MemtoReg = 1'b0;
                MemWrite = 1'b0;
                ALUSrc = 1'b1;
                regWrite = 1'b1;
                ALUop = 2'b10;
            end
            // beq, bne
            7'b1100011:  
            begin
                branch = 1'b1;
                MemRead = 1'b0;
                MemtoReg = 1'b0;
                MemWrite = 1'b0;
                ALUSrc = 1'b0;
                regWrite = 1'b0;
                ALUop = 2'b01;
            end
            // jal
            7'b1101111:  
            begin
                branch = 1'b0;
                MemRead = 1'b0;
                MemtoReg = 1'b0;
                MemWrite = 1'b0;
                ALUSrc = 1'b1;
                regWrite = 1'b1;
                ALUop = 2'b00;
            end
            // jalr
            7'b1100111:  
            begin
                branch = 1'b0;
                MemRead = 1'b0;
                MemtoReg = 1'b0;
                MemWrite = 1'b0;
                ALUSrc = 1'b1;
                regWrite = 1'b1;
                ALUop = 2'b00;
            end
            // auipc
            7'b0010111:  
            begin
                branch = 1'b0;
                MemRead = 1'b0;
                MemtoReg = 1'b0;
                MemWrite = 1'b0;
                ALUSrc = 1'b1;
                regWrite = 1'b1;
                ALUop = 2'b00;
            end
            // lw
            7'b0000011:  
            begin
                branch = 1'b0;
                MemRead = 1'b1;
                MemtoReg = 1'b1;
                MemWrite = 1'b0;
                ALUSrc = 1'b1;
                regWrite = 1'b1;
                ALUop = 2'b00;
            end
            // sw
            7'b0100011:  
            begin
                branch = 1'b0;
                MemRead = 1'b0;
                MemtoReg = 1'b0;
                MemWrite = 1'b1;
                ALUSrc = 1'b1;
                regWrite = 1'b0;
                ALUop = 2'b00;
            end
            // other
            default: 
            begin
                branch = 1'b0;
                MemRead = 1'b0;
                MemtoReg = 1'b0;
                MemWrite = 1'b0;
                ALUSrc = 1'b0;
                regWrite = 1'b0;
                ALUop = 2'b00;
            end
        endcase
    end

    //imm
    always @(*)
    begin
        case(opcode)
            // auipc
            7'b0010111:  
            begin
                imm = {mem_rdata_I[31:12], 12'b0};
            end
            // jal
            7'b1101111:  
            begin
                imm = {{11{mem_rdata_I[31]}}, mem_rdata_I[31], mem_rdata_I[19:12], mem_rdata_I[20], mem_rdata_I[30:21], 1'b0};
            end
            // jalr
            7'b1100111:  
            begin
                imm = {{20{mem_rdata_I[31]}}, mem_rdata_I[31:20]};
            end
            // lw
            7'b0000011:  
            begin
                imm = {{20{mem_rdata_I[31]}}, mem_rdata_I[31:20]};
            end
            // I-type (addi, slti)
            // new slli
            7'b0010011:  
            begin
                imm = {{20{mem_rdata_I[31]}}, mem_rdata_I[31:20]};
            end
            // beq, bne
            7'b1100011:  
            begin
                imm = {{19{mem_rdata_I[31]}}, mem_rdata_I[31], mem_rdata_I[7], mem_rdata_I[30:25], mem_rdata_I[11:8], 1'b0};
            end
            // sw
            7'b0100011:  
            begin
                imm = {{20{mem_rdata_I[31]}}, mem_rdata_I[31:25], mem_rdata_I[11:7]};
                // imm = {20'b0, mem_rdata_I[31:25], mem_rdata_I[11:7]};
            end
            // other
            default: 
            begin
                imm = 32'b0;
            end
        endcase
    end 

    //ALU_control
    always @(*) 
    begin
    	case(ALUop)
    	    2'b01: 
            begin
    	    	ALU_mode = 4'b0110;
    	    end

            2'b00: 
            begin
            	ALU_mode = 4'b0010;
            end

            2'b10: 
            begin
            	case(opcode)
            	    7'b0010011: //I-type
                    begin
            	    	case(funct3) 
                            3'b001: //slli
                            begin
                                ALU_mode = 4'b0001;
                            end

                            3'b000:
                            begin
                                ALU_mode = 4'b0010;
                            end

                            3'b010:
                            begin
                                ALU_mode = 4'b0111;
                            end

                            default: 
                            begin
                                ALU_mode = 4'b0000;
                            end
                        endcase
            	    end

            	    7'b0110011: 
                    begin
                        case(inst3025)
                            2'b00: 
                            begin
                                ALU_mode = 4'b0010;
                            end

                            2'b10: 
                            begin
                                ALU_mode = 4'b0110;
                            end

                            2'b01: 
                            begin
                                case(funct3)
                                    3'b000: 
                                    begin
                                        ALU_mode = 4'b1111;
                                    end

                                    3'b100: 
                                    begin
                                        ALU_mode = 4'b1110;
                                    end

                                    default: 
                                    begin
                                        ALU_mode = 4'b0000;
                                    end
                                endcase
                            end

                            default:
                            begin
                                ALU_mode = 4'b0000;
                            end
                        endcase
                    end
                    
            	    default: 
                    begin
            	    	ALU_mode = 4'b0000;
            	    end
            	endcase
            end

            default: 
            begin
            	ALU_mode = 4'b0000;
            end
    	endcase
    end

    //ALU
    always @(*) 
    begin
        if(opcode == 7'b1101111) 
        begin
            operand1 = PC;
            operand2 = 32'd4;
        end

        else if(opcode == 7'b1100111) 
        begin
            operand1 = PC;
            operand2 = 32'd4;
        end

        else 
        begin
            if(opcode == 7'b0010111) // auipc
            begin
        	    operand1 = PC;
            end

    	    else 
            begin
    	        operand1 = rs1_data;
    	    end

    	    if(!ALUSrc) 
            begin
    	        operand2 = rs2_data;
            end

            else begin
    	        operand2 = imm;
            end
        end
    end

    always@ (*) 
    begin
        for_ALUlarge = operand1 - operand2;
    end

    always @(*)
    begin
        if((for_ALUlarge) == 32'b0)
        begin
            ALUzero = 1'b1;
        end

        else
        begin
            ALUzero = 1'b0;
        end
    end

    always @(*)
    begin
        if(for_ALUlarge[31])
        begin
            ALUlarge = 1'b0;
        end

        else
        begin
            ALUlarge = 1'b1;
        end
    end

    always @(*)
    begin
        case(ALU_mode)

            4'b0001: // slli
            begin
                ALU_out = operand1 << operand2;
            end

            4'b0110:
            begin
                ALU_out = for_ALUlarge;
            end

            4'b0010:
            begin
                ALU_out = operand1 + operand2;
            end

            4'b0111:
            begin
                ALU_out = operand1 < operand2;
            end

            default:
            begin
                ALU_out = 32'b0;
            end
        endcase
    end

    // always @(posedge clk or negedge rst_n) begin
    //     if (!rst_n) begin
    always @(posedge clk) begin
        if (rst_n) begin
            PC <= 32'h800010e8; // Do not modify this value!!!
        end

        else begin
            PC <= PC_nxt;    
        end
    end
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

    // always @(posedge clk or negedge rst_n) begin
    //     if (!rst_n) begin
    always @(posedge clk) begin
        if (rst_n) begin
            mem[0] <= 0;
            for (i=1; i<word_depth; i=i+1) begin
                case(i)
                    // 32'd2: mem[i] <= 32'hbffffff0;
                    32'd2: mem[i] <= 32'h800211f0;
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

module MulDiv(clk, rst_n, valid, ready, mode, in_A, in_B, out);
    // Todo: your HW2
    // Definition of ports
    input         clk, rst_n;
    input         valid;
    input  [3:0]  mode; // mode: 0: mulu, 1: divu
    output        ready;
    input  [31:0] in_A, in_B;
    output [31:0] out;

    // Definition of states
    parameter IDLE = 2'b00;
    parameter MUL  = 2'b01;
    parameter DIV  = 2'b10;
    parameter OUT  = 2'b11;

    // Todo: Wire and reg if needed
    reg  [ 1:0] state, state_nxt;
    reg  [ 4:0] counter, counter_nxt;
    reg  [63:0] shreg, shreg_nxt;
    reg  [31:0] alu_in, alu_in_nxt;
    reg  [32:0] alu_out;

    // Todo: Instatiate any primitives if needed

    // Todo 5: Wire assignments
    assign out = shreg[31:0];
    assign ready = (state == OUT)? 1 : 0;

    // Combinational always block
    // Todo 1: Next-state logic of state machine
    always @(*) 
    begin
        case(state)
            IDLE: 
            begin
                if(!valid) 
                begin
                    state_nxt = IDLE;
                end

                else 
                begin
                    if (mode == 4'b1111) 
                    begin
                        state_nxt = MUL;
                    end
                    else  
                    begin
                        state_nxt = DIV;
                    end
                end
            end
            MUL :
            begin
                if(counter == 31) 
                begin
                    state_nxt = OUT;
                end   

                else 
                begin
                    state_nxt = MUL;
                end
            end
            DIV : 
            begin
                if(counter == 31) 
                begin
                    state_nxt = OUT;
                end  

                else 
                begin
                    state_nxt = DIV;
                end
            end
            OUT : state_nxt = IDLE;
            default : state_nxt = state;
        endcase
    end

    // Todo 2: Counter
    always @(*)
    begin
        if((state == MUL) || (state == DIV))
        begin
            counter_nxt = counter + 1;
        end

        else
        begin
            counter_nxt = 0; 
        end 
    end

    // ALU input
    always @(*) 
    begin
        case(state)
            IDLE: 
            begin
                if(valid) 
                begin
                    alu_in_nxt = in_B;
                end

                else      
                begin
                    alu_in_nxt = 0;
                end
            end
            OUT : alu_in_nxt = 0;
            default: alu_in_nxt = alu_in;
        endcase
    end

    // Todo 3: ALU output
    always @(*)
    begin
        case(state)
            MUL :
            begin
                if(shreg[0] == 0) 
                begin
                    alu_out = shreg[63:32];
                end

                else
                begin
                    alu_out = alu_in + shreg[63:32];
                end
            end
            DIV :
            begin
                alu_out = shreg[62:31] - alu_in;
            end
            default : alu_out = 0;
        endcase  
    end
    
    // Todo 4: Shift register
    always @(*)
    begin
        case(state)
            IDLE:
            begin
                if (valid) 
                begin
                    shreg_nxt = in_A;
                end

                else
                begin
                    shreg_nxt = 0;
                end
            end
            MUL:
            begin
                shreg_nxt = {alu_out, shreg[31:1]};
            end
            DIV :begin
                if (shreg[62:31] >= alu_in) 
                begin
                    shreg_nxt = ({alu_out, shreg[30:0]} << 1) + 1;
                end

                else 
                begin
                    shreg_nxt = shreg << 1;
                end
            end
            default: shreg_nxt = 0;    
        endcase
    end

    // Todo: Sequential always block
    // always @(posedge clk or negedge rst_n) 
    // begin
    //     if (!rst_n)
    always @(posedge clk) 
    begin
        if (rst_n) 
        begin
            state <= IDLE;
            counter <= 5'b0;
            shreg <= 64'b0;
            alu_in <= 32'b0;
        end

        else 
        begin
            state <= state_nxt;
            counter <= counter_nxt;
            shreg <= shreg_nxt;
            alu_in <= alu_in_nxt;
        end
    end
endmodule