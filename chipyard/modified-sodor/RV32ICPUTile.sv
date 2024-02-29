module RV32ICPUTile(
  input         clk,
                rst_n
);
    
    wire        mem_wen_D  ;
    wire [31:0] mem_addr_D ;
    wire [31:0] mem_wdata_D;
    wire [31:0] mem_rdata_D;
    
    wire [31:0] mem_addr_I ;
    wire [31:0] mem_rdata_I;
    
    CHIP core(
        clk,
        rst_n,
        // for mem_D
        mem_wen_D,
        mem_addr_D,
        mem_wdata_D,
        mem_rdata_D,
        // for mem_I
        mem_addr_I,
        mem_rdata_I);
    
    integer i;
    initial begin
        // mem_text_offset = 32'h80000000;
        // mem_data_offset = 32'h80001000; 
        // mem_stack_offset = 32'h80021000;  
        for (i=0; i<`SIZE_TEXT; i=i+1) begin
        mem_text.mem[i] = 0;
        end
        // for (i=0; i<`SIZE_DATA; i=i+1) begin
        // mem_data.mem[i] = 0;
        // end
        for (i=0; i<`SIZE_STACK; i=i+1) begin
        mem_stack.mem[i] = 0;
        end
    end
  
    memory #(.word_depth(`SIZE_TEXT)) mem_text(
        .clk(clk),
        .rst_n(rst_n),
        .wen(1'b0),
        .a(mem_addr_I),
        .d(32'd0),
        .q(mem_rdata_I),
        .offset(`OFFSET_TEXT));

    // memory #(.word_depth(`SIZE_DATA)) mem_data(
    //     .clk(clk),
    //     .rst_n(rst_n),
    //     .wen(mem_wen_D),
    //     .a(mem_addr_D),
    //     .d(mem_wdata_D),
    //     .q(mem_rdata_D),
    //     .offset(`OFFSET_DATA));

    memory #(.word_depth(`SIZE_STACK)) mem_stack(
        .clk(clk),
        .rst_n(rst_n),
        .wen(mem_wen_D),
        .a(mem_addr_D),
        .d(mem_wdata_D),
        .q(mem_rdata_D),
        .offset(`OFFSET_STACK));
endmodule