// See LICENSE.SiFive for license details.
//VCS coverage exclude_file
`timescale 1 ns/10 ps
`ifndef CLOCK_PERIOD
 `define CLOCK_PERIOD 2.0
`endif
`ifndef RESET_DELAY
 `define RESET_DELAY 10
`endif
`ifndef END_CYCLE
 `define END_CYCLE 1000
`endif

`define SIZE_TEXT 1200
`define SIZE_DATA 32'h00000010
`define SIZE_STACK 32'h00000200

`define OFFSET_TEXT 32'h80000000
// `define OFFSET_DATA 32'h80001000
`define OFFSET_STACK 32'h80021000

`define MEM_TEXT "./fibo/fibo_text.txt"
`define MEM_DATA_ANS "./fibo/fibo_data_ans.txt"

`define TEST_N 5
module TestDriver;

  reg clock = 1'b0;
  reg reset = 1'b1;
  reg reset1 = 1'b1;


  // Read input arguments and initialize
  reg verbose = 1'b0;
  wire printf_cond = verbose && !reset;
  
  reg  [31:0] mem_data_ans [0:`SIZE_DATA-1];
  integer i;
  integer c=0;

  reg [31:0] ans_sodor [0:`TEST_N-1];
  reg [31:0] ans_verilog [0:`TEST_N-1];
  integer c1=0;
  integer c2=0;

  SodorInternalTile chip0(
      .clock(clock),
      .reset(reset)
      // .auto_buffer_in_a_valid(1'b0),
      // .auto_buffer_in_d_ready(1'b1),
      // .auto_buffer_out_a_ready(1'b1),
      // .auto_buffer_out_d_valid(1'b0)
  );

  //===add chip===
  RV32ICPUTile chip1(
    .clk(clock),
    .rst_n(reset1)
  );

  always #(`CLOCK_PERIOD/2.0) clock = ~clock;

  initial begin 
    $dumpfile("Final.vcd");            
    $dumpvars(0,TestDriver);

    $display("------------------------------------------------------------\n");
    $display("Simulation Start\n");
    $display("------------------------------------------------------------\n");

    #(`RESET_DELAY) reset = 0;
    // #(`CLOCK_PERIOD/2.0)
    //===add read memory===
    $readmemh (`MEM_TEXT, chip0.mem_text.mem);
    $readmemh (`MEM_TEXT, chip1.mem_text.mem);  
    for (i=0; i<`SIZE_DATA; i=i+1) begin
        mem_data_ans[i] = 0;
    end
    $readmemh (`MEM_DATA_ANS, mem_data_ans); // initialize data in mem_D
    // #(5) reset1 = 0;    
    // $readmemh (`MEM_TEXT, chip1.mem_text.mem);
  end

  initial begin
    #(`CLOCK_PERIOD*`END_CYCLE)
    
    $display("============================================================\n");
    $display("Simulation Finish\n");
    $display("============================================================\n");
    
    $finish;
  end
  
  always @(negedge reset1) begin
    $readmemh (`MEM_TEXT, chip1.mem_text.mem);
  end
  always @(negedge clock) begin
    if (chip0.core.io_imem_req_bits_addr == 32'h800010e8) reset1 = 0;

    //===add chip test===
    // if (chip0.core.io_imem_req_bits_addr == 32'h800010d0) begin
    //   if (chip0.core.d.rs2_data == mem_data_ans[c]) $display("correct!");
    //   else $display("wrong!");
    //   $display("  test: %d  Correct ans: 0x%8h  Your ans: 0x%8h", c+1, mem_data_ans[c], chip0.core.d.rs2_data);
    //   c=c+1;
    // end
    if (chip0.core.io_imem_req_bits_addr == 32'h800010d0) begin
      ans_sodor[c1] = chip0.core.d.rs2_data;
      c1=c1+1;
    end
    if (chip1.core.mem_addr_I == 32'h800010d0) begin
      ans_verilog[c2] = chip1.core.rs2_data;
      c2=c2+1;
    end
    if (chip0.core.io_imem_req_bits_addr == 32'h80001184) begin
      for (i=0; i<`TEST_N; i=i+1) begin
        $display("  test: %d   sodor: 0x%8h   verilog: 0x%8h   ans: 0x%8h", i+1, ans_sodor[i], ans_verilog[i], mem_data_ans[i]);
        if (ans_sodor[i] == mem_data_ans[i] && ans_verilog[i] == mem_data_ans[i]) $display("correct!\n");
        else $display("wrong!\n");
      end
      #(`CLOCK_PERIOD)
      $finish;
    end
  end

endmodule
