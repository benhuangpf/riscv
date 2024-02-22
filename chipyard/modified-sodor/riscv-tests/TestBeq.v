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
 `define END_CYCLE 600
`endif

`define SIZE_TEXT 600
`define SIZE_DATA 32'h00000300
`define SIZE_STACK 32'h00000200

`define OFFSET_TEXT 32'h80000000
`define OFFSET_DATA 32'h80001000
`define OFFSET_STACK 32'h80021000

`define MEM_TEXT "./riscv-tests/rv32ui-p-beq.txt"

module TestBeq;

  reg clock = 1'b0;
  reg reset = 1'b1;


  // Read input arguments and initialize
  reg verbose = 1'b0;
  wire printf_cond = verbose && !reset;
  
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
    #(`RESET_DELAY) reset = 0;
    $readmemh (`MEM_TEXT, chip0.mem_text.mem);   
  end

  initial begin
    #(`CLOCK_PERIOD*`END_CYCLE)    
    $finish;
  end

  always @(negedge clock) begin
    if (chip0.core.io_imem_req_bits_addr == 32'h80000450)      $display("beq pass\n");
    else if (chip0.core.io_imem_req_bits_addr == 32'h80000434) $display("beq fail\n");
  end

endmodule
