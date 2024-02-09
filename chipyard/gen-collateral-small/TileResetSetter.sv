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

module TileResetSetter(
  input         clock,
                reset,
                auto_clock_in_member_allClocks_uncore_clock,
                auto_clock_in_member_allClocks_uncore_reset,
                auto_tl_in_a_valid,
  input  [2:0]  auto_tl_in_a_bits_opcode,
                auto_tl_in_a_bits_param,
  input  [1:0]  auto_tl_in_a_bits_size,
  input  [10:0] auto_tl_in_a_bits_source,
  input  [20:0] auto_tl_in_a_bits_address,
  input  [3:0]  auto_tl_in_a_bits_mask,
  input         auto_tl_in_a_bits_corrupt,
                auto_tl_in_d_ready,
  output        auto_clock_out_member_allClocks_uncore_clock,
                auto_clock_out_member_allClocks_uncore_reset,
                auto_tl_in_a_ready,
                auto_tl_in_d_valid,
  output [2:0]  auto_tl_in_d_bits_opcode,
  output [1:0]  auto_tl_in_d_bits_size,
  output [10:0] auto_tl_in_d_bits_source,
  output [31:0] auto_tl_in_d_bits_data
);

  wire [2:0] bundleIn_0_d_bits_opcode = {2'h0, auto_tl_in_a_bits_opcode == 3'h4};	// @[RegisterRouter.scala:72:36, :98:19]
  TLMonitor_55 monitor (	// @[Nodes.scala:24:25]
    .clock                (clock),
    .reset                (reset),
    .io_in_a_ready        (auto_tl_in_d_ready),
    .io_in_a_valid        (auto_tl_in_a_valid),
    .io_in_a_bits_opcode  (auto_tl_in_a_bits_opcode),
    .io_in_a_bits_param   (auto_tl_in_a_bits_param),
    .io_in_a_bits_size    (auto_tl_in_a_bits_size),
    .io_in_a_bits_source  (auto_tl_in_a_bits_source),
    .io_in_a_bits_address (auto_tl_in_a_bits_address),
    .io_in_a_bits_mask    (auto_tl_in_a_bits_mask),
    .io_in_a_bits_corrupt (auto_tl_in_a_bits_corrupt),
    .io_in_d_ready        (auto_tl_in_d_ready),
    .io_in_d_valid        (auto_tl_in_a_valid),
    .io_in_d_bits_opcode  (bundleIn_0_d_bits_opcode),	// @[RegisterRouter.scala:98:19]
    .io_in_d_bits_size    (auto_tl_in_a_bits_size),
    .io_in_d_bits_source  (auto_tl_in_a_bits_source)
  );
  assign auto_clock_out_member_allClocks_uncore_clock = auto_clock_in_member_allClocks_uncore_clock;
  assign auto_clock_out_member_allClocks_uncore_reset = auto_clock_in_member_allClocks_uncore_reset;
  assign auto_tl_in_a_ready = auto_tl_in_d_ready;
  assign auto_tl_in_d_valid = auto_tl_in_a_valid;
  assign auto_tl_in_d_bits_opcode = bundleIn_0_d_bits_opcode;	// @[RegisterRouter.scala:98:19]
  assign auto_tl_in_d_bits_size = auto_tl_in_a_bits_size;
  assign auto_tl_in_d_bits_source = auto_tl_in_a_bits_source;
  assign auto_tl_in_d_bits_data = 32'h0;	// @[RegisterRouter.scala:83:24]
endmodule

