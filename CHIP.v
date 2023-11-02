// Your code
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
    reg    [4:0] rs1, rs2, rd;              //
    wire   [31:0] rs1_data    ;              //
    wire   [31:0] rs2_data    ;              //
    reg    [31:0] rd_data     ;              //
    //---------------------------------------//

    // Todo: other wire/reg    
    reg valid;
    reg [1:0]  mode;
    wire ready;
    reg [31:0] in_A, in_B;
    wire [63:0] out;
    // reg a, a_nxt;
    // reg [31:0] b, b_nxt, c, c_nxt;

    assign mem_addr_I = PC;
    // assign mem_wen_D  = a;
    // assign mem_addr_D = b;
    // assign mem_wdata_D= c;

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
    
    // Todo: any combinational/sequential circuit
    MulDiv muldiv0(.clk(clk), .rst_n(rst_n), .valid(valid), .ready(ready)
        , .mode(mode), .in_A(in_A), .in_B(in_B), .out(out));
    
    always @(mem_rdata_I) begin//ID
        case(mem_rdata_I[6:0])
            7'b0010111 : begin//AUIPC                
                regWrite=1;
                rd=mem_rdata_I[11:7];
                rd_data=PC+(mem_rdata_I[31:12]<<12);                
                PC_nxt=PC+4;
            end
            7'b1101111 : begin//jal                
                regWrite=1;
                rd=mem_rdata_I[11:7];
                rd_data=PC+4;                
                PC_nxt=PC+{{11{mem_rdata_I[31]}},mem_rdata_I[31],mem_rdata_I[19:12],mem_rdata_I[20],mem_rdata_I[30:21],1'b0};
            end
            7'b1100111 : begin//jalr                
                regWrite=1;
                rs1=mem_rdata_I[19:15];                
            end
            7'b1100011 : begin//beq                
                regWrite=0;
                rs1=mem_rdata_I[19:15];
                rs2=mem_rdata_I[24:20];                                
            end
            7'b0000011 : begin//lw
                regWrite=1;
                rs1=mem_rdata_I[19:15];                             
            end
            7'b0100011 : begin//sw
                regWrite=1;
                rs1=mem_rdata_I[19:15];
                rs2=mem_rdata_I[24:20];
                PC_nxt=PC+4;                
            end
            7'b0010011 : begin//addi slti
                regWrite=1;
                rs1=mem_rdata_I[19:15];                
            end
            7'b0110011 : begin//add sub mul
                regWrite=1;
                rs1<=mem_rdata_I[19:15];
                rs2<=mem_rdata_I[24:20];                
            end
        endcase
    end

    assign mem_wen_D=(mem_rdata_I[6:0]==7'b0100011)?1:0;
    assign mem_addr_D=(mem_rdata_I[6:0]==7'b0000011)?rs1_data+{{20{mem_rdata_I[31]}},mem_rdata_I[31:20]}:
    (mem_rdata_I[6:0]==7'b0100011)?rs1_data+{mem_rdata_I[31:25],mem_rdata_I[11:7]}:32'b0;
    assign mem_wdata_D=(mem_rdata_I[6:0]==7'b1000011)?rs2_data:32'b0;
    
    always @(rs1_data or rs2_data) begin//ME
        case(mem_rdata_I[6:0])      
            7'b0000011 : begin//lw                
                // a_nxt=0;
                // b_nxt=rs1_data+mem_rdata_I[31:20];                   
            end
            7'b0100011 : begin//sw                
                // a_nxt=1;
                // b_nxt=rs1_data+{mem_rdata_I[31:25],mem_rdata_I[11:7]};
                // c_nxt=rs2_data;
                // PC_nxt=PC+4;
            end         
        endcase
    end

    always @(mem_rdata_D) begin//WB-lw
        case(mem_rdata_I[6:0])      
            7'b0000011 : begin//lw                
                regWrite=1;
                rd=mem_rdata_I[11:7];
                rd_data=mem_rdata_D;
                PC_nxt=PC+4;             
            end       
        endcase
    end

    always @(rs1_data or ready) begin//WB
        case(mem_rdata_I[6:0])           
            7'b1100111 : begin//jalr                
                PC_nxt=rs1_data+{{20{mem_rdata_I[31]}},mem_rdata_I[31:20]};
                regWrite=1;                        
                rd=mem_rdata_I[11:7];
                rd_data=PC+4;
            end
            7'b1100011 : begin//beq                
                if(rs1_data==rs2_data)
                PC_nxt=PC+{mem_rdata_I[31],mem_rdata_I[7],
                mem_rdata_I[30:25],mem_rdata_I[11:8],mem_rdata_I[0]};
                else PC_nxt=PC+4;
            end            
            7'b0010011 : begin//addi slti                
                if(mem_rdata_I[14:12]==3'b000)begin     
                    regWrite=1;
                    rd=mem_rdata_I[11:7];
                    rd_data=rs1_data+{{20{mem_rdata_I[31]}},mem_rdata_I[31:20]};
                    PC_nxt=PC+4;
                end
                else if(mem_rdata_I[14:12]==3'b010)begin                            
                    regWrite=1;
                    rd=mem_rdata_I[11:7];
                    rd_data=rs1_data<<{{20{mem_rdata_I[31]}},mem_rdata_I[31:20]};
                    PC_nxt=PC+4;
                end
            end
            7'b0110011 : begin//add sub mul                
                if(mem_rdata_I[31:25]==7'b0000000)begin
                    regWrite=1;
                    rd=mem_rdata_I[11:7];
                    rd_data=rs1_data+rs2_data;
                    PC_nxt=PC+4;
                end
                else if(mem_rdata_I[31:25]==7'b0100000)begin                            
                    regWrite=1;
                    rd=mem_rdata_I[11:7];
                    rd_data=rs1_data-rs2_data;
                    PC_nxt=PC+4;
                end                    
                else if(mem_rdata_I[31:25]==7'b0000001)begin             
                    valid<=1;
                    in_A<=rs1_data;
                    in_B<=rs2_data;
                    mode<=2'b00;
                    PC_nxt=PC;
                    if (ready==1) begin                        
                        regWrite=1;
                        rd=mem_rdata_I[11:7];
                        rd_data=out[31:0];
                        PC_nxt=PC+4;
                    end
                end
            end
        endcase
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            PC <= 32'h00010000; // Do not modify this value!!!            
        end
        else begin
            PC <= PC_nxt; 
            // a<=a_nxt;
            // b<=b_nxt;
            // b<=c_nxt;           
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

module MulDiv(clk, rst_n, valid, ready, mode, in_A, in_B, out);
    // Todo: your HW2
    // Definition of ports
    input         clk, rst_n;
    input         valid;
    input  [1:0]  mode; // mode: 0: mulu, 1: divu, 2: and, 3: or
    output        ready;
    input  [31:0] in_A, in_B;
    output [63:0] out;

    // Definition of states
    parameter IDLE = 3'd0;
    parameter MUL  = 3'd1;
    parameter DIV  = 3'd2;
    parameter AND = 3'd3;
    parameter OR = 3'd4;
    parameter OUT  = 3'd5;

    // Todo: Wire and reg if needed
    reg  [ 2:0] state, state_nxt;
    reg  [ 4:0] counter, counter_nxt;
    reg  [63:0] shreg, shreg_nxt;
    reg  [31:0] alu_in, alu_in_nxt;
    reg  [32:0] alu_out;

    // Todo: Instatiate any primitives if needed    
    
    // Todo 5: Wire assignments
    
    // Combinational always block
    // Todo 1: Next-state logic of state machine
    always @(*) begin
        case(state)
            IDLE : begin
                if(valid)begin
                    case(mode)
                        0 : state_nxt = MUL;
                        1 : state_nxt = DIV;
                        2 : state_nxt = AND;
                        3 : state_nxt = OR;
                        default : state_nxt = IDLE;
                    endcase
                end
                else state_nxt = IDLE;
            end
            MUL : begin
                if (counter==31) state_nxt = OUT;
                else  state_nxt = MUL;
            end            
            DIV : begin
                if (counter==31) state_nxt = OUT;
                else  state_nxt = DIV;
            end            
            AND : begin 
                state_nxt = OUT;                
            end
            OR  : begin 
                state_nxt = OUT;                
            end
            OUT : begin
                state_nxt = IDLE;                
            end
            default : state_nxt = IDLE;
        endcase
    end
    assign ready = (state == OUT)? 1'b1 : 1'b0;
    assign out = (state == OUT)? shreg : 0; 

    // Todo 2: Counter
    always@(state,counter) begin
        if ((state==MUL||state==DIV)&&counter != 31)begin
            counter_nxt = counter + 1;
        end        
        else if((state==MUL||state==DIV)&&counter == 31)begin
            counter_nxt = 0;            
        end
        else counter_nxt = 0;
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
            MUL : begin
                if(shreg[0] == 1'b1)
                    alu_out = shreg[63:32] + alu_in;                    
                else
                    alu_out = shreg[63:32];
            end           
            AND : begin
                alu_out = shreg & alu_in;
            end
            OR : begin
                alu_out = shreg | alu_in;
            end
            default : alu_out = 0;
        endcase
    end    

    // Todo 4: Shift register
    always @(*) begin
        case(state) 
            MUL : begin                
                shreg_nxt = shreg >> 1;
                shreg_nxt[63:31] = alu_out;                
            end
            DIV : begin
                shreg_nxt = shreg << 1;                
                if(shreg[62:31] >= alu_in) begin
                    shreg_nxt[63:32] = shreg_nxt[63:32] - alu_in;  
                    shreg_nxt[0] = 1;
                end     
                else begin
                    shreg_nxt[0] = 0;
                end
            end   
            AND :  begin
                shreg_nxt={{32{1'b0}},alu_out[31:0]};
            end
            OR :  begin
                shreg_nxt={{32{1'b0}},alu_out[31:0]};
            end
            IDLE: begin
                if (valid) shreg_nxt = in_A;
                else       shreg_nxt = 0;
            end
            default : shreg_nxt = 0;
        endcase
    end

    // Todo: Sequential always block
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            shreg <= 0;
            counter <= 0;
            alu_in <= 0;
            // alu_out <= 0;
            // shreg_nxt <= 0;
        end
        else begin
            state <= state_nxt;
            shreg <= shreg_nxt;
            counter <= counter_nxt;
            alu_in <= alu_in_nxt;
            // alu_out <= alu_out;
            // shreg_nxt <= shreg_nxt;
        end
    end
endmodule