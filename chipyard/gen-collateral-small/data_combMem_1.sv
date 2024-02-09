// Generated by CIRCT unknown git version
// Standard header to adapt well known macros to our needs.
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_REG_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_REG_INIT
`endif // not def RANDOMIZE
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_MEM_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_MEM_INIT
`endif // not def RANDOMIZE

// RANDOM may be set to an expression that produces a 32-bit random unsigned value.
`ifndef RANDOM
  `define RANDOM $random
`endif // not def RANDOM

// Users can define 'PRINTF_COND' to add an extra gate to prints.
`ifndef PRINTF_COND_
  `ifdef PRINTF_COND
    `define PRINTF_COND_ (`PRINTF_COND)
  `else  // PRINTF_COND
    `define PRINTF_COND_ 1
  `endif // PRINTF_COND
`endif // not def PRINTF_COND_

// Users can define 'ASSERT_VERBOSE_COND' to add an extra gate to assert error printing.
`ifndef ASSERT_VERBOSE_COND_
  `ifdef ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ (`ASSERT_VERBOSE_COND)
  `else  // ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ 1
  `endif // ASSERT_VERBOSE_COND
`endif // not def ASSERT_VERBOSE_COND_

// Users can define 'STOP_COND' to add an extra gate to stop conditions.
`ifndef STOP_COND_
  `ifdef STOP_COND
    `define STOP_COND_ (`STOP_COND)
  `else  // STOP_COND
    `define STOP_COND_ 1
  `endif // STOP_COND
`endif // not def STOP_COND_

// Users can define INIT_RANDOM as general code that gets injected into the
// initializer block for modules with registers.
`ifndef INIT_RANDOM
  `define INIT_RANDOM
`endif // not def INIT_RANDOM

// If using random initialization, you can also define RANDOMIZE_DELAY to
// customize the delay used, otherwise 0.002 is used.
`ifndef RANDOMIZE_DELAY
  `define RANDOMIZE_DELAY 0.002
`endif // not def RANDOMIZE_DELAY

// Define INIT_RANDOM_PROLOG_ for use in our modules below.
`ifndef INIT_RANDOM_PROLOG_
  `ifdef RANDOMIZE
    `ifdef VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM
    `else  // VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM #`RANDOMIZE_DELAY begin end
    `endif // VERILATOR
  `else  // RANDOMIZE
    `define INIT_RANDOM_PROLOG_
  `endif // RANDOMIZE
`endif // not def INIT_RANDOM_PROLOG_

// VCS coverage exclude_file
module data_combMem_1(	// @[ListBuffer.scala:51:18]
  input  [5:0]  R0_addr,
  input         R0_en,
                R0_clk,
  input  [5:0]  W0_addr,
  input         W0_en,
                W0_clk,
  input  [41:0] W0_data,
  output [41:0] R0_data
);

  reg [41:0] Memory[0:34];	// @[ListBuffer.scala:51:18]
  always @(posedge W0_clk) begin	// @[ListBuffer.scala:51:18]
    if (W0_en)	// @[ListBuffer.scala:51:18]
      Memory[W0_addr] <= W0_data;	// @[ListBuffer.scala:51:18]
  end // always @(posedge)
  `ifndef SYNTHESIS	// @[ListBuffer.scala:51:18]
    `ifdef RANDOMIZE_MEM_INIT	// @[ListBuffer.scala:51:18]
      integer initvar;	// @[ListBuffer.scala:51:18]
      reg [63:0] _RANDOM_MEM;	// @[ListBuffer.scala:51:18]
    `endif // RANDOMIZE_MEM_INIT
    initial begin	// @[ListBuffer.scala:51:18]
      `INIT_RANDOM_PROLOG_	// @[ListBuffer.scala:51:18]
      `ifdef RANDOMIZE_MEM_INIT	// @[ListBuffer.scala:51:18]
        for (initvar = 0; initvar < 35; initvar = initvar + 1) begin
          _RANDOM_MEM = {{`RANDOM}, {`RANDOM}};
          Memory[initvar] = _RANDOM_MEM[41:0];
        end	// @[ListBuffer.scala:51:18]
      `endif // RANDOMIZE_MEM_INIT
    end // initial
  `endif // not def SYNTHESIS
  assign R0_data = R0_en ? Memory[R0_addr] : 42'bx;	// @[ListBuffer.scala:51:18]
endmodule

