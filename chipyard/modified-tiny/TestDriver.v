// See LICENSE.SiFive for license details.
//VCS coverage exclude_file
`timescale 1 ns/10 ps
`ifndef CLOCK_PERIOD
 `define CLOCK_PERIOD 2.0
`endif
`ifndef RESET_DELAY
 `define RESET_DELAY 777.7
`endif
`ifndef END_CYCLE
 `define END_CYCLE 300
`endif

`define MEM_TEXT "./text.txt"

module TestDriver;

  reg clock = 1'b0;
  reg reset = 1'b1;


  // Read input arguments and initialize
  reg verbose = 1'b0;
  wire printf_cond = verbose && !reset;
  
  RocketTile chip0(
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
    #(`CLOCK_PERIOD/2.0)
    $readmemh (`MEM_TEXT, chip0.frontend.mem_text.mem);      
  end

  initial begin
    #(`CLOCK_PERIOD*`END_CYCLE)
    
    $display("============================================================\n");
    $display("Simulation Finish\n");
    $display("============================================================\n");
    
    $finish;
  end

endmodule
