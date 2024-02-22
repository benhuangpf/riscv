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
`define SIZE_DATA 32'h00000300
`define SIZE_STACK 32'h00000200

`define OFFSET_TEXT 32'h80000000
`define OFFSET_DATA 32'h80001000
`define OFFSET_STACK 32'h80021000

`define MEM_TEXT "./fibo/fibo_text.txt"
`define MEM_DATA_ANS "./fibo/fibo_data_ans.txt"

module TestDriver;

  reg clock = 1'b0;
  reg reset = 1'b1;


  // Read input arguments and initialize
  reg verbose = 1'b0;
  wire printf_cond = verbose && !reset;
  
  reg  [31:0] mem_data_ans [0:`SIZE_DATA-1];
  integer i;
  integer c=0;

  SodorInternalTile chip0(
      .clock(clock),
      .reset(reset)
      // .auto_buffer_in_a_valid(1'b0),
      // .auto_buffer_in_d_ready(1'b1),
      // .auto_buffer_out_a_ready(1'b1),
      // .auto_buffer_out_d_valid(1'b0)
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
    $readmemh (`MEM_TEXT, chip0.mem_text.mem);  
    for (i=0; i<`SIZE_DATA; i=i+1) begin
        mem_data_ans[i] = 0;
    end
    $readmemh (`MEM_DATA_ANS, mem_data_ans); // initialize data in mem_D    
  end

  initial begin
    #(`CLOCK_PERIOD*`END_CYCLE)
    
    $display("============================================================\n");
    $display("Simulation Finish\n");
    $display("============================================================\n");
    
    $finish;
  end
  always @(negedge clock) begin
    if (chip0.core.io_imem_req_bits_addr == 32'h800010d0) begin
      if (chip0.core.d.rs2_data == mem_data_ans[c]) $display("correct!");
      else $display("wrong!");
      $display("  test: %d  Correct ans: 0x%8h  Your ans: 0x%8h", c+1, mem_data_ans[c], chip0.core.d.rs2_data);
      c=c+1;
    end
  end

endmodule
