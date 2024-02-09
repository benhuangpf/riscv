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

module TLXbar_5(
  input         clock,
                reset,
                auto_in_a_valid,
  input  [2:0]  auto_in_a_bits_opcode,
                auto_in_a_bits_param,
  input  [3:0]  auto_in_a_bits_size,
  input  [5:0]  auto_in_a_bits_source,
  input  [31:0] auto_in_a_bits_address,
  input  [3:0]  auto_in_a_bits_mask,
  input  [31:0] auto_in_a_bits_data,
  input         auto_in_a_bits_corrupt,
                auto_in_d_ready,
                auto_out_7_a_ready,
                auto_out_7_d_valid,
  input  [2:0]  auto_out_7_d_bits_opcode,
  input  [1:0]  auto_out_7_d_bits_param,
  input  [2:0]  auto_out_7_d_bits_size,
  input  [5:0]  auto_out_7_d_bits_source,
  input         auto_out_7_d_bits_sink,
                auto_out_7_d_bits_denied,
  input  [31:0] auto_out_7_d_bits_data,
  input         auto_out_7_d_bits_corrupt,
                auto_out_6_a_ready,
                auto_out_6_d_valid,
  input  [2:0]  auto_out_6_d_bits_size,
  input  [5:0]  auto_out_6_d_bits_source,
  input  [31:0] auto_out_6_d_bits_data,
  input         auto_out_5_a_ready,
                auto_out_5_d_valid,
  input  [2:0]  auto_out_5_d_bits_opcode,
                auto_out_5_d_bits_size,
  input  [5:0]  auto_out_5_d_bits_source,
  input  [31:0] auto_out_5_d_bits_data,
  input         auto_out_4_a_ready,
                auto_out_4_d_valid,
  input  [2:0]  auto_out_4_d_bits_opcode,
  input  [1:0]  auto_out_4_d_bits_param,
  input  [2:0]  auto_out_4_d_bits_size,
  input  [5:0]  auto_out_4_d_bits_source,
  input         auto_out_4_d_bits_sink,
                auto_out_4_d_bits_denied,
  input  [31:0] auto_out_4_d_bits_data,
  input         auto_out_4_d_bits_corrupt,
                auto_out_3_a_ready,
                auto_out_3_d_valid,
  input  [2:0]  auto_out_3_d_bits_opcode,
                auto_out_3_d_bits_size,
  input  [5:0]  auto_out_3_d_bits_source,
  input  [31:0] auto_out_3_d_bits_data,
  input         auto_out_2_a_ready,
                auto_out_2_d_valid,
  input  [2:0]  auto_out_2_d_bits_opcode,
                auto_out_2_d_bits_size,
  input  [5:0]  auto_out_2_d_bits_source,
  input  [31:0] auto_out_2_d_bits_data,
  input         auto_out_1_a_ready,
                auto_out_1_d_valid,
  input  [2:0]  auto_out_1_d_bits_opcode,
  input  [1:0]  auto_out_1_d_bits_param,
  input  [2:0]  auto_out_1_d_bits_size,
  input  [5:0]  auto_out_1_d_bits_source,
  input         auto_out_1_d_bits_sink,
                auto_out_1_d_bits_denied,
  input  [31:0] auto_out_1_d_bits_data,
  input         auto_out_1_d_bits_corrupt,
                auto_out_0_a_ready,
                auto_out_0_d_valid,
  input  [2:0]  auto_out_0_d_bits_opcode,
  input  [1:0]  auto_out_0_d_bits_param,
  input  [3:0]  auto_out_0_d_bits_size,
  input  [5:0]  auto_out_0_d_bits_source,
  input         auto_out_0_d_bits_sink,
                auto_out_0_d_bits_denied,
  input  [31:0] auto_out_0_d_bits_data,
  input         auto_out_0_d_bits_corrupt,
  output        auto_in_a_ready,
                auto_in_d_valid,
  output [2:0]  auto_in_d_bits_opcode,
  output [1:0]  auto_in_d_bits_param,
  output [3:0]  auto_in_d_bits_size,
  output [5:0]  auto_in_d_bits_source,
  output        auto_in_d_bits_sink,
                auto_in_d_bits_denied,
  output [31:0] auto_in_d_bits_data,
  output        auto_in_d_bits_corrupt,
                auto_out_7_a_valid,
  output [2:0]  auto_out_7_a_bits_opcode,
                auto_out_7_a_bits_param,
                auto_out_7_a_bits_size,
  output [5:0]  auto_out_7_a_bits_source,
  output [20:0] auto_out_7_a_bits_address,
  output [3:0]  auto_out_7_a_bits_mask,
  output [31:0] auto_out_7_a_bits_data,
  output        auto_out_7_a_bits_corrupt,
                auto_out_7_d_ready,
                auto_out_6_a_valid,
  output [2:0]  auto_out_6_a_bits_opcode,
                auto_out_6_a_bits_param,
                auto_out_6_a_bits_size,
  output [5:0]  auto_out_6_a_bits_source,
  output [16:0] auto_out_6_a_bits_address,
  output [3:0]  auto_out_6_a_bits_mask,
  output        auto_out_6_a_bits_corrupt,
                auto_out_6_d_ready,
                auto_out_5_a_valid,
  output [2:0]  auto_out_5_a_bits_opcode,
                auto_out_5_a_bits_param,
                auto_out_5_a_bits_size,
  output [5:0]  auto_out_5_a_bits_source,
  output [11:0] auto_out_5_a_bits_address,
  output [3:0]  auto_out_5_a_bits_mask,
  output [31:0] auto_out_5_a_bits_data,
  output        auto_out_5_a_bits_corrupt,
                auto_out_5_d_ready,
                auto_out_4_a_valid,
  output [2:0]  auto_out_4_a_bits_opcode,
                auto_out_4_a_bits_param,
                auto_out_4_a_bits_size,
  output [5:0]  auto_out_4_a_bits_source,
  output [31:0] auto_out_4_a_bits_address,
  output [3:0]  auto_out_4_a_bits_mask,
  output [31:0] auto_out_4_a_bits_data,
  output        auto_out_4_a_bits_corrupt,
                auto_out_4_d_ready,
                auto_out_3_a_valid,
  output [2:0]  auto_out_3_a_bits_opcode,
                auto_out_3_a_bits_param,
                auto_out_3_a_bits_size,
  output [5:0]  auto_out_3_a_bits_source,
  output [25:0] auto_out_3_a_bits_address,
  output [3:0]  auto_out_3_a_bits_mask,
  output [31:0] auto_out_3_a_bits_data,
  output        auto_out_3_a_bits_corrupt,
                auto_out_3_d_ready,
                auto_out_2_a_valid,
  output [2:0]  auto_out_2_a_bits_opcode,
                auto_out_2_a_bits_param,
                auto_out_2_a_bits_size,
  output [5:0]  auto_out_2_a_bits_source,
  output [27:0] auto_out_2_a_bits_address,
  output [3:0]  auto_out_2_a_bits_mask,
  output [31:0] auto_out_2_a_bits_data,
  output        auto_out_2_a_bits_corrupt,
                auto_out_2_d_ready,
                auto_out_1_a_valid,
  output [2:0]  auto_out_1_a_bits_opcode,
                auto_out_1_a_bits_param,
                auto_out_1_a_bits_size,
  output [5:0]  auto_out_1_a_bits_source,
  output [30:0] auto_out_1_a_bits_address,
  output [3:0]  auto_out_1_a_bits_mask,
  output [31:0] auto_out_1_a_bits_data,
  output        auto_out_1_a_bits_corrupt,
                auto_out_1_d_ready,
                auto_out_0_a_valid,
  output [2:0]  auto_out_0_a_bits_opcode,
                auto_out_0_a_bits_param,
  output [3:0]  auto_out_0_a_bits_size,
  output [5:0]  auto_out_0_a_bits_source,
  output [13:0] auto_out_0_a_bits_address,
  output [3:0]  auto_out_0_a_bits_mask,
  output [31:0] auto_out_0_a_bits_data,
  output        auto_out_0_a_bits_corrupt,
                auto_out_0_d_ready
);

  wire        requestAIO_0_0 = {auto_in_a_bits_address[31:30], auto_in_a_bits_address[26:25], auto_in_a_bits_address[20], auto_in_a_bits_address[16], auto_in_a_bits_address[14:13] ^ 2'h1} == 8'h0;	// @[Arbiter.scala:26:66, Parameters.scala:137:{31,45,65}]
  wire [6:0]  _GEN = auto_in_a_bits_address[31:25] ^ 7'h22;	// @[Parameters.scala:137:31]
  wire        requestAIO_0_1 = {auto_in_a_bits_address[31:30], auto_in_a_bits_address[26:25], auto_in_a_bits_address[20], auto_in_a_bits_address[16], auto_in_a_bits_address[14:13] ^ 2'h2} == 8'h0 | {_GEN[6:5], _GEN[1:0], auto_in_a_bits_address[20], auto_in_a_bits_address[16], auto_in_a_bits_address[14:13]} == 8'h0;	// @[Arbiter.scala:26:66, Parameters.scala:137:{31,45,65}, Xbar.scala:366:92]
  wire        requestAIO_0_2 = {auto_in_a_bits_address[31:30], ~(auto_in_a_bits_address[26])} == 3'h0;	// @[Bundles.scala:259:74, Parameters.scala:137:{31,45,65}]
  wire        requestAIO_0_3 = {auto_in_a_bits_address[31:30], auto_in_a_bits_address[26:25] ^ 2'h1, auto_in_a_bits_address[20], auto_in_a_bits_address[16]} == 6'h0;	// @[Bundles.scala:259:74, Parameters.scala:137:{31,45,65}]
  wire        requestAIO_0_4 = {auto_in_a_bits_address[31:30] ^ 2'h2, auto_in_a_bits_address[26:25], auto_in_a_bits_address[20]} == 5'h0;	// @[Parameters.scala:137:{31,45,65}]
  wire        requestAIO_0_5 = {auto_in_a_bits_address[31:30], auto_in_a_bits_address[26:25], auto_in_a_bits_address[20], auto_in_a_bits_address[16], auto_in_a_bits_address[14:13]} == 8'h0;	// @[Arbiter.scala:26:66, Parameters.scala:137:{45,65}]
  wire        requestAIO_0_6 = {auto_in_a_bits_address[31:30], auto_in_a_bits_address[26:25], auto_in_a_bits_address[20], ~(auto_in_a_bits_address[16])} == 6'h0;	// @[Bundles.scala:259:74, Parameters.scala:137:{31,45,65}]
  wire        requestAIO_0_7 = {auto_in_a_bits_address[31:30], auto_in_a_bits_address[26:25], ~(auto_in_a_bits_address[20]), auto_in_a_bits_address[14:13]} == 7'h0;	// @[Parameters.scala:137:{31,45,65}]
  wire        _portsAOI_in_0_a_ready_WIRE = requestAIO_0_0 & auto_out_0_a_ready | requestAIO_0_1 & auto_out_1_a_ready | requestAIO_0_2 & auto_out_2_a_ready | requestAIO_0_3 & auto_out_3_a_ready | requestAIO_0_4 & auto_out_4_a_ready | requestAIO_0_5 & auto_out_5_a_ready | requestAIO_0_6 & auto_out_6_a_ready | requestAIO_0_7 & auto_out_7_a_ready;	// @[Mux.scala:27:73, Parameters.scala:137:65, Xbar.scala:366:92]
  reg  [9:0]  beatsLeft;	// @[Arbiter.scala:88:30]
  wire        idle = beatsLeft == 10'h0;	// @[Arbiter.scala:88:30, :89:28, Edges.scala:221:14]
  wire [7:0]  readys_valid = {auto_out_7_d_valid, auto_out_6_d_valid, auto_out_5_d_valid, auto_out_4_d_valid, auto_out_3_d_valid, auto_out_2_d_valid, auto_out_1_d_valid, auto_out_0_d_valid};	// @[Cat.scala:33:92]
  reg  [7:0]  readys_mask;	// @[Arbiter.scala:24:23]
  wire [7:0]  _readys_filter_T_1 = readys_valid & ~readys_mask;	// @[Arbiter.scala:24:23, :25:{28,30}, Cat.scala:33:92]
  wire [6:0]  _GEN_0 = _readys_filter_T_1[6:0] | _readys_filter_T_1[7:1];	// @[Arbiter.scala:25:28, package.scala:254:43]
  wire        _GEN_1 = auto_out_7_d_valid | _readys_filter_T_1[0];	// @[Arbiter.scala:25:28, package.scala:254:43]
  wire        _GEN_2 = auto_out_6_d_valid | auto_out_7_d_valid;	// @[package.scala:254:43]
  wire        _GEN_3 = auto_out_5_d_valid | auto_out_6_d_valid;	// @[package.scala:254:43]
  wire        _GEN_4 = auto_out_4_d_valid | auto_out_5_d_valid;	// @[package.scala:254:43]
  wire        _GEN_5 = auto_out_3_d_valid | auto_out_4_d_valid;	// @[package.scala:254:43]
  wire        _GEN_6 = _GEN_0[5] | _readys_filter_T_1[7];	// @[Arbiter.scala:25:28, package.scala:254:43]
  wire [4:0]  _GEN_7 = _GEN_0[4:0] | _GEN_0[6:2];	// @[package.scala:254:43]
  wire        _GEN_8 = _GEN_1 | _GEN_0[1];	// @[package.scala:254:43]
  wire        _GEN_9 = _GEN_2 | _GEN_0[0];	// @[package.scala:254:43]
  wire        _GEN_10 = _GEN_3 | _GEN_1;	// @[package.scala:254:43]
  wire [7:0]  readys_readys = ~({readys_mask[7], _readys_filter_T_1[7] | readys_mask[6], _GEN_0[6] | readys_mask[5], _GEN_6 | readys_mask[4], _GEN_7[4] | readys_mask[3], _GEN_7[3] | _readys_filter_T_1[7] | readys_mask[2], _GEN_7[2] | _GEN_0[6] | readys_mask[1], _GEN_7[1] | _GEN_6 | readys_mask[0]} & {_GEN_7[0] | _GEN_7[4], _GEN_8 | _GEN_7[3], _GEN_9 | _GEN_7[2], _GEN_10 | _GEN_7[1], _GEN_4 | _GEN_2 | _GEN_7[0], _GEN_5 | _GEN_3 | _GEN_8, auto_out_2_d_valid | auto_out_3_d_valid | _GEN_4 | _GEN_9, auto_out_1_d_valid | auto_out_2_d_valid | _GEN_5 | _GEN_10});	// @[Arbiter.scala:24:23, :25:28, :26:58, :27:{18,29,39,48}, package.scala:254:43]
  wire        earlyWinner_0 = readys_readys[0] & auto_out_0_d_valid;	// @[Arbiter.scala:27:18, :96:86, :98:79]
  wire        earlyWinner_1 = readys_readys[1] & auto_out_1_d_valid;	// @[Arbiter.scala:27:18, :96:86, :98:79]
  wire        earlyWinner_2 = readys_readys[2] & auto_out_2_d_valid;	// @[Arbiter.scala:27:18, :96:86, :98:79]
  wire        earlyWinner_3 = readys_readys[3] & auto_out_3_d_valid;	// @[Arbiter.scala:27:18, :96:86, :98:79]
  wire        earlyWinner_4 = readys_readys[4] & auto_out_4_d_valid;	// @[Arbiter.scala:27:18, :96:86, :98:79]
  wire        earlyWinner_5 = readys_readys[5] & auto_out_5_d_valid;	// @[Arbiter.scala:27:18, :96:86, :98:79]
  wire        earlyWinner_6 = readys_readys[6] & auto_out_6_d_valid;	// @[Arbiter.scala:27:18, :96:86, :98:79]
  wire        earlyWinner_7 = readys_readys[7] & auto_out_7_d_valid;	// @[Arbiter.scala:27:18, :96:86, :98:79]
  wire        _sink_ACancel_earlyValid_T = auto_out_0_d_valid | auto_out_1_d_valid;	// @[Arbiter.scala:108:36]
  reg         state_0;	// @[Arbiter.scala:117:26]
  reg         state_1;	// @[Arbiter.scala:117:26]
  reg         state_2;	// @[Arbiter.scala:117:26]
  reg         state_3;	// @[Arbiter.scala:117:26]
  reg         state_4;	// @[Arbiter.scala:117:26]
  reg         state_5;	// @[Arbiter.scala:117:26]
  reg         state_6;	// @[Arbiter.scala:117:26]
  reg         state_7;	// @[Arbiter.scala:117:26]
  wire        muxStateEarly_0 = idle ? earlyWinner_0 : state_0;	// @[Arbiter.scala:89:28, :98:79, :117:26, :118:30]
  wire        muxStateEarly_1 = idle ? earlyWinner_1 : state_1;	// @[Arbiter.scala:89:28, :98:79, :117:26, :118:30]
  wire        muxStateEarly_2 = idle ? earlyWinner_2 : state_2;	// @[Arbiter.scala:89:28, :98:79, :117:26, :118:30]
  wire        muxStateEarly_3 = idle ? earlyWinner_3 : state_3;	// @[Arbiter.scala:89:28, :98:79, :117:26, :118:30]
  wire        muxStateEarly_4 = idle ? earlyWinner_4 : state_4;	// @[Arbiter.scala:89:28, :98:79, :117:26, :118:30]
  wire        muxStateEarly_5 = idle ? earlyWinner_5 : state_5;	// @[Arbiter.scala:89:28, :98:79, :117:26, :118:30]
  wire        muxStateEarly_6 = idle ? earlyWinner_6 : state_6;	// @[Arbiter.scala:89:28, :98:79, :117:26, :118:30]
  wire        muxStateEarly_7 = idle ? earlyWinner_7 : state_7;	// @[Arbiter.scala:89:28, :98:79, :117:26, :118:30]
  wire        out_27_valid = idle ? _sink_ACancel_earlyValid_T | auto_out_2_d_valid | auto_out_3_d_valid | auto_out_4_d_valid | auto_out_5_d_valid | auto_out_6_d_valid | auto_out_7_d_valid : state_0 & auto_out_0_d_valid | state_1 & auto_out_1_d_valid | state_2 & auto_out_2_d_valid | state_3 & auto_out_3_d_valid | state_4 & auto_out_4_d_valid | state_5 & auto_out_5_d_valid | state_6 & auto_out_6_d_valid | state_7 & auto_out_7_d_valid;	// @[Arbiter.scala:89:28, :108:36, :117:26, :126:{29,56}, Mux.scala:27:73]
  wire        out_27_bits_corrupt = muxStateEarly_0 & auto_out_0_d_bits_corrupt | muxStateEarly_1 & auto_out_1_d_bits_corrupt | muxStateEarly_4 & auto_out_4_d_bits_corrupt | muxStateEarly_7 & auto_out_7_d_bits_corrupt;	// @[Arbiter.scala:118:30, Mux.scala:27:73]
  wire        out_27_bits_denied = muxStateEarly_0 & auto_out_0_d_bits_denied | muxStateEarly_1 & auto_out_1_d_bits_denied | muxStateEarly_4 & auto_out_4_d_bits_denied | muxStateEarly_7 & auto_out_7_d_bits_denied;	// @[Arbiter.scala:118:30, Mux.scala:27:73]
  wire        out_27_bits_sink = muxStateEarly_0 & auto_out_0_d_bits_sink | muxStateEarly_1 & auto_out_1_d_bits_sink | muxStateEarly_4 & auto_out_4_d_bits_sink | muxStateEarly_7 & auto_out_7_d_bits_sink;	// @[Arbiter.scala:118:30, Mux.scala:27:73]
  wire [5:0]  out_27_bits_source = (muxStateEarly_0 ? auto_out_0_d_bits_source : 6'h0) | (muxStateEarly_1 ? auto_out_1_d_bits_source : 6'h0) | (muxStateEarly_2 ? auto_out_2_d_bits_source : 6'h0) | (muxStateEarly_3 ? auto_out_3_d_bits_source : 6'h0) | (muxStateEarly_4 ? auto_out_4_d_bits_source : 6'h0) | (muxStateEarly_5 ? auto_out_5_d_bits_source : 6'h0) | (muxStateEarly_6 ? auto_out_6_d_bits_source : 6'h0) | (muxStateEarly_7 ? auto_out_7_d_bits_source : 6'h0);	// @[Arbiter.scala:118:30, Bundles.scala:259:74, Mux.scala:27:73]
  wire [3:0]  out_27_bits_size = (muxStateEarly_0 ? auto_out_0_d_bits_size : 4'h0) | (muxStateEarly_1 ? {1'h0, auto_out_1_d_bits_size} : 4'h0) | (muxStateEarly_2 ? {1'h0, auto_out_2_d_bits_size} : 4'h0) | (muxStateEarly_3 ? {1'h0, auto_out_3_d_bits_size} : 4'h0) | (muxStateEarly_4 ? {1'h0, auto_out_4_d_bits_size} : 4'h0) | (muxStateEarly_5 ? {1'h0, auto_out_5_d_bits_size} : 4'h0) | (muxStateEarly_6 ? {1'h0, auto_out_6_d_bits_size} : 4'h0) | (muxStateEarly_7 ? {1'h0, auto_out_7_d_bits_size} : 4'h0);	// @[Arbiter.scala:118:30, BundleMap.scala:247:19, Bundles.scala:259:74, Mux.scala:27:73]
  wire [1:0]  out_27_bits_param = (muxStateEarly_0 ? auto_out_0_d_bits_param : 2'h0) | (muxStateEarly_1 ? auto_out_1_d_bits_param : 2'h0) | (muxStateEarly_4 ? auto_out_4_d_bits_param : 2'h0) | (muxStateEarly_7 ? auto_out_7_d_bits_param : 2'h0);	// @[Arbiter.scala:118:30, Mux.scala:27:73]
  wire [2:0]  out_27_bits_opcode = (muxStateEarly_0 ? auto_out_0_d_bits_opcode : 3'h0) | (muxStateEarly_1 ? auto_out_1_d_bits_opcode : 3'h0) | (muxStateEarly_2 ? auto_out_2_d_bits_opcode : 3'h0) | (muxStateEarly_3 ? auto_out_3_d_bits_opcode : 3'h0) | (muxStateEarly_4 ? auto_out_4_d_bits_opcode : 3'h0) | (muxStateEarly_5 ? auto_out_5_d_bits_opcode : 3'h0) | {2'h0, muxStateEarly_6} | (muxStateEarly_7 ? auto_out_7_d_bits_opcode : 3'h0);	// @[Arbiter.scala:118:30, Bundles.scala:259:74, Mux.scala:27:73]
  wire [20:0] _beatsDO_decode_T_29 = 21'h3F << auto_out_7_d_bits_size;	// @[package.scala:235:71]
  wire [20:0] _beatsDO_decode_T_25 = 21'h3F << auto_out_6_d_bits_size;	// @[package.scala:235:71]
  wire [20:0] _beatsDO_decode_T_21 = 21'h3F << auto_out_5_d_bits_size;	// @[package.scala:235:71]
  wire [20:0] _beatsDO_decode_T_17 = 21'h3F << auto_out_4_d_bits_size;	// @[package.scala:235:71]
  wire [20:0] _beatsDO_decode_T_13 = 21'h3F << auto_out_3_d_bits_size;	// @[package.scala:235:71]
  wire [20:0] _beatsDO_decode_T_9 = 21'h3F << auto_out_2_d_bits_size;	// @[package.scala:235:71]
  wire [20:0] _beatsDO_decode_T_5 = 21'h3F << auto_out_1_d_bits_size;	// @[package.scala:235:71]
  wire [26:0] _beatsDO_decode_T_1 = 27'hFFF << auto_out_0_d_bits_size;	// @[package.scala:235:71]
  wire [7:0]  _readys_mask_T = readys_readys & readys_valid;	// @[Arbiter.scala:27:18, :29:29, Cat.scala:33:92]
  wire [7:0]  _readys_mask_T_3 = _readys_mask_T | {_readys_mask_T[6:0], 1'h0};	// @[Arbiter.scala:29:29, package.scala:245:{43,53}]
  wire [7:0]  _readys_mask_T_6 = _readys_mask_T_3 | {_readys_mask_T_3[5:0], 2'h0};	// @[package.scala:245:{43,53}]
  wire        latch = idle & auto_in_d_ready;	// @[Arbiter.scala:89:28, :90:24]
  wire        winnerQual_0 = readys_readys[0] & auto_out_0_d_valid;	// @[Arbiter.scala:27:18, :96:86, :99:79]
  wire        winnerQual_1 = readys_readys[1] & auto_out_1_d_valid;	// @[Arbiter.scala:27:18, :96:86, :99:79]
  wire        winnerQual_2 = readys_readys[2] & auto_out_2_d_valid;	// @[Arbiter.scala:27:18, :96:86, :99:79]
  wire        winnerQual_3 = readys_readys[3] & auto_out_3_d_valid;	// @[Arbiter.scala:27:18, :96:86, :99:79]
  wire        winnerQual_4 = readys_readys[4] & auto_out_4_d_valid;	// @[Arbiter.scala:27:18, :96:86, :99:79]
  wire        winnerQual_5 = readys_readys[5] & auto_out_5_d_valid;	// @[Arbiter.scala:27:18, :96:86, :99:79]
  wire        winnerQual_6 = readys_readys[6] & auto_out_6_d_valid;	// @[Arbiter.scala:27:18, :96:86, :99:79]
  wire        winnerQual_7 = readys_readys[7] & auto_out_7_d_valid;	// @[Arbiter.scala:27:18, :96:86, :99:79]
  always @(posedge clock) begin
    if (reset) begin
      beatsLeft <= 10'h0;	// @[Arbiter.scala:88:30, Edges.scala:221:14]
      readys_mask <= 8'hFF;	// @[Arbiter.scala:24:23]
      state_0 <= 1'h0;	// @[Arbiter.scala:117:26]
      state_1 <= 1'h0;	// @[Arbiter.scala:117:26]
      state_2 <= 1'h0;	// @[Arbiter.scala:117:26]
      state_3 <= 1'h0;	// @[Arbiter.scala:117:26]
      state_4 <= 1'h0;	// @[Arbiter.scala:117:26]
      state_5 <= 1'h0;	// @[Arbiter.scala:117:26]
      state_6 <= 1'h0;	// @[Arbiter.scala:117:26]
      state_7 <= 1'h0;	// @[Arbiter.scala:117:26]
    end
    else begin
      if (latch)	// @[Arbiter.scala:90:24]
        beatsLeft <= (winnerQual_0 & auto_out_0_d_bits_opcode[0] ? ~(_beatsDO_decode_T_1[11:2]) : 10'h0) | {6'h0, (winnerQual_1 & auto_out_1_d_bits_opcode[0] ? ~(_beatsDO_decode_T_5[5:2]) : 4'h0) | (winnerQual_2 & auto_out_2_d_bits_opcode[0] ? ~(_beatsDO_decode_T_9[5:2]) : 4'h0) | (winnerQual_3 & auto_out_3_d_bits_opcode[0] ? ~(_beatsDO_decode_T_13[5:2]) : 4'h0) | (winnerQual_4 & auto_out_4_d_bits_opcode[0] ? ~(_beatsDO_decode_T_17[5:2]) : 4'h0) | (winnerQual_5 & auto_out_5_d_bits_opcode[0] ? ~(_beatsDO_decode_T_21[5:2]) : 4'h0) | (winnerQual_6 ? ~(_beatsDO_decode_T_25[5:2]) : 4'h0) | (winnerQual_7 & auto_out_7_d_bits_opcode[0] ? ~(_beatsDO_decode_T_29[5:2]) : 4'h0)};	// @[Arbiter.scala:88:30, :99:79, :112:73, :113:44, Bundles.scala:259:74, Edges.scala:106:36, :221:14, package.scala:235:{46,71,76}]
      else	// @[Arbiter.scala:90:24]
        beatsLeft <= beatsLeft - {9'h0, auto_in_d_ready & out_27_valid};	// @[Arbiter.scala:88:30, :114:52, :126:29, ReadyValidCancel.scala:49:33]
      if (latch & (|readys_valid))	// @[Arbiter.scala:28:{18,27}, :90:24, Cat.scala:33:92]
        readys_mask <= _readys_mask_T_6 | {_readys_mask_T_6[3:0], 4'h0};	// @[Arbiter.scala:24:23, Bundles.scala:259:74, package.scala:245:{43,53}]
      if (idle) begin	// @[Arbiter.scala:89:28]
        state_0 <= winnerQual_0;	// @[Arbiter.scala:99:79, :117:26]
        state_1 <= winnerQual_1;	// @[Arbiter.scala:99:79, :117:26]
        state_2 <= winnerQual_2;	// @[Arbiter.scala:99:79, :117:26]
        state_3 <= winnerQual_3;	// @[Arbiter.scala:99:79, :117:26]
        state_4 <= winnerQual_4;	// @[Arbiter.scala:99:79, :117:26]
        state_5 <= winnerQual_5;	// @[Arbiter.scala:99:79, :117:26]
        state_6 <= winnerQual_6;	// @[Arbiter.scala:99:79, :117:26]
        state_7 <= winnerQual_7;	// @[Arbiter.scala:99:79, :117:26]
      end
    end
  end // always @(posedge)
  `ifndef SYNTHESIS
    wire         prefixOR_2 = earlyWinner_0 | earlyWinner_1;	// @[Arbiter.scala:98:79, :105:53]
    wire         prefixOR_3 = prefixOR_2 | earlyWinner_2;	// @[Arbiter.scala:98:79, :105:53]
    wire         prefixOR_4 = prefixOR_3 | earlyWinner_3;	// @[Arbiter.scala:98:79, :105:53]
    wire         prefixOR_5 = prefixOR_4 | earlyWinner_4;	// @[Arbiter.scala:98:79, :105:53]
    wire         prefixOR_6 = prefixOR_5 | earlyWinner_5;	// @[Arbiter.scala:98:79, :105:53]
    wire         _T_61 = auto_out_0_d_valid | auto_out_1_d_valid;	// @[Arbiter.scala:109:36]
    always @(posedge clock) begin	// @[Arbiter.scala:106:13]
      if (~reset & ~((~earlyWinner_0 | ~earlyWinner_1) & (~prefixOR_2 | ~earlyWinner_2) & (~prefixOR_3 | ~earlyWinner_3) & (~prefixOR_4 | ~earlyWinner_4) & (~prefixOR_5 | ~earlyWinner_5) & (~prefixOR_6 | ~earlyWinner_6) & (~(prefixOR_6 | earlyWinner_6) | ~earlyWinner_7))) begin	// @[Arbiter.scala:98:79, :105:53, :106:{13,61,64,67,82}]
        if (`ASSERT_VERBOSE_COND_)	// @[Arbiter.scala:106:13]
          $error("Assertion failed\n    at Arbiter.scala:106 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");	// @[Arbiter.scala:106:13]
        if (`STOP_COND_)	// @[Arbiter.scala:106:13]
          $fatal;	// @[Arbiter.scala:106:13]
      end
      if (~reset & ~(~(_sink_ACancel_earlyValid_T | auto_out_2_d_valid | auto_out_3_d_valid | auto_out_4_d_valid | auto_out_5_d_valid | auto_out_6_d_valid | auto_out_7_d_valid) | earlyWinner_0 | earlyWinner_1 | earlyWinner_2 | earlyWinner_3 | earlyWinner_4 | earlyWinner_5 | earlyWinner_6 | earlyWinner_7)) begin	// @[Arbiter.scala:98:79, :108:{14,15,36,41}]
        if (`ASSERT_VERBOSE_COND_)	// @[Arbiter.scala:108:14]
          $error("Assertion failed\n    at Arbiter.scala:108 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");	// @[Arbiter.scala:108:14]
        if (`STOP_COND_)	// @[Arbiter.scala:108:14]
          $fatal;	// @[Arbiter.scala:108:14]
      end
      if (~reset & ~(~(_T_61 | auto_out_2_d_valid | auto_out_3_d_valid | auto_out_4_d_valid | auto_out_5_d_valid | auto_out_6_d_valid | auto_out_7_d_valid) | _T_61 | auto_out_2_d_valid | auto_out_3_d_valid | auto_out_4_d_valid | auto_out_5_d_valid | auto_out_6_d_valid | auto_out_7_d_valid)) begin	// @[Arbiter.scala:109:{14,15,36,41}]
        if (`ASSERT_VERBOSE_COND_)	// @[Arbiter.scala:109:14]
          $error("Assertion failed\n    at Arbiter.scala:109 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");	// @[Arbiter.scala:109:14]
        if (`STOP_COND_)	// @[Arbiter.scala:109:14]
          $fatal;	// @[Arbiter.scala:109:14]
      end
    end // always @(posedge)
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM_0;
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM_0 = `RANDOM;
        beatsLeft = _RANDOM_0[9:0];	// @[Arbiter.scala:88:30]
        readys_mask = _RANDOM_0[17:10];	// @[Arbiter.scala:24:23, :88:30]
        state_0 = _RANDOM_0[18];	// @[Arbiter.scala:88:30, :117:26]
        state_1 = _RANDOM_0[19];	// @[Arbiter.scala:88:30, :117:26]
        state_2 = _RANDOM_0[20];	// @[Arbiter.scala:88:30, :117:26]
        state_3 = _RANDOM_0[21];	// @[Arbiter.scala:88:30, :117:26]
        state_4 = _RANDOM_0[22];	// @[Arbiter.scala:88:30, :117:26]
        state_5 = _RANDOM_0[23];	// @[Arbiter.scala:88:30, :117:26]
        state_6 = _RANDOM_0[24];	// @[Arbiter.scala:88:30, :117:26]
        state_7 = _RANDOM_0[25];	// @[Arbiter.scala:88:30, :117:26]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  TLMonitor_17 monitor (	// @[Nodes.scala:24:25]
    .clock                (clock),
    .reset                (reset),
    .io_in_a_ready        (_portsAOI_in_0_a_ready_WIRE),	// @[Mux.scala:27:73]
    .io_in_a_valid        (auto_in_a_valid),
    .io_in_a_bits_opcode  (auto_in_a_bits_opcode),
    .io_in_a_bits_param   (auto_in_a_bits_param),
    .io_in_a_bits_size    (auto_in_a_bits_size),
    .io_in_a_bits_source  (auto_in_a_bits_source),
    .io_in_a_bits_address (auto_in_a_bits_address),
    .io_in_a_bits_mask    (auto_in_a_bits_mask),
    .io_in_a_bits_corrupt (auto_in_a_bits_corrupt),
    .io_in_d_ready        (auto_in_d_ready),
    .io_in_d_valid        (out_27_valid),	// @[Arbiter.scala:126:29]
    .io_in_d_bits_opcode  (out_27_bits_opcode),	// @[Mux.scala:27:73]
    .io_in_d_bits_param   (out_27_bits_param),	// @[Mux.scala:27:73]
    .io_in_d_bits_size    (out_27_bits_size),	// @[Mux.scala:27:73]
    .io_in_d_bits_source  (out_27_bits_source),	// @[Mux.scala:27:73]
    .io_in_d_bits_sink    (out_27_bits_sink),	// @[Mux.scala:27:73]
    .io_in_d_bits_denied  (out_27_bits_denied),	// @[Mux.scala:27:73]
    .io_in_d_bits_corrupt (out_27_bits_corrupt)	// @[Mux.scala:27:73]
  );
  assign auto_in_a_ready = _portsAOI_in_0_a_ready_WIRE;	// @[Mux.scala:27:73]
  assign auto_in_d_valid = out_27_valid;	// @[Arbiter.scala:126:29]
  assign auto_in_d_bits_opcode = out_27_bits_opcode;	// @[Mux.scala:27:73]
  assign auto_in_d_bits_param = out_27_bits_param;	// @[Mux.scala:27:73]
  assign auto_in_d_bits_size = out_27_bits_size;	// @[Mux.scala:27:73]
  assign auto_in_d_bits_source = out_27_bits_source;	// @[Mux.scala:27:73]
  assign auto_in_d_bits_sink = out_27_bits_sink;	// @[Mux.scala:27:73]
  assign auto_in_d_bits_denied = out_27_bits_denied;	// @[Mux.scala:27:73]
  assign auto_in_d_bits_data = (muxStateEarly_0 ? auto_out_0_d_bits_data : 32'h0) | (muxStateEarly_1 ? auto_out_1_d_bits_data : 32'h0) | (muxStateEarly_2 ? auto_out_2_d_bits_data : 32'h0) | (muxStateEarly_3 ? auto_out_3_d_bits_data : 32'h0) | (muxStateEarly_4 ? auto_out_4_d_bits_data : 32'h0) | (muxStateEarly_5 ? auto_out_5_d_bits_data : 32'h0) | (muxStateEarly_6 ? auto_out_6_d_bits_data : 32'h0) | (muxStateEarly_7 ? auto_out_7_d_bits_data : 32'h0);	// @[Arbiter.scala:118:30, Bundles.scala:259:74, Mux.scala:27:73]
  assign auto_in_d_bits_corrupt = out_27_bits_corrupt;	// @[Mux.scala:27:73]
  assign auto_out_7_a_valid = auto_in_a_valid & requestAIO_0_7;	// @[Parameters.scala:137:65, Xbar.scala:431:50]
  assign auto_out_7_a_bits_opcode = auto_in_a_bits_opcode;
  assign auto_out_7_a_bits_param = auto_in_a_bits_param;
  assign auto_out_7_a_bits_size = auto_in_a_bits_size[2:0];	// @[BundleMap.scala:247:19]
  assign auto_out_7_a_bits_source = auto_in_a_bits_source;
  assign auto_out_7_a_bits_address = auto_in_a_bits_address[20:0];	// @[BundleMap.scala:247:19]
  assign auto_out_7_a_bits_mask = auto_in_a_bits_mask;
  assign auto_out_7_a_bits_data = auto_in_a_bits_data;
  assign auto_out_7_a_bits_corrupt = auto_in_a_bits_corrupt;
  assign auto_out_7_d_ready = auto_in_d_ready & (idle ? readys_readys[7] : state_7);	// @[Arbiter.scala:27:18, :89:28, :96:86, :117:26, :122:24, :124:31]
  assign auto_out_6_a_valid = auto_in_a_valid & requestAIO_0_6;	// @[Parameters.scala:137:65, Xbar.scala:431:50]
  assign auto_out_6_a_bits_opcode = auto_in_a_bits_opcode;
  assign auto_out_6_a_bits_param = auto_in_a_bits_param;
  assign auto_out_6_a_bits_size = auto_in_a_bits_size[2:0];	// @[BundleMap.scala:247:19]
  assign auto_out_6_a_bits_source = auto_in_a_bits_source;
  assign auto_out_6_a_bits_address = auto_in_a_bits_address[16:0];	// @[BundleMap.scala:247:19]
  assign auto_out_6_a_bits_mask = auto_in_a_bits_mask;
  assign auto_out_6_a_bits_corrupt = auto_in_a_bits_corrupt;
  assign auto_out_6_d_ready = auto_in_d_ready & (idle ? readys_readys[6] : state_6);	// @[Arbiter.scala:27:18, :89:28, :96:86, :117:26, :122:24, :124:31]
  assign auto_out_5_a_valid = auto_in_a_valid & requestAIO_0_5;	// @[Parameters.scala:137:65, Xbar.scala:431:50]
  assign auto_out_5_a_bits_opcode = auto_in_a_bits_opcode;
  assign auto_out_5_a_bits_param = auto_in_a_bits_param;
  assign auto_out_5_a_bits_size = auto_in_a_bits_size[2:0];	// @[BundleMap.scala:247:19]
  assign auto_out_5_a_bits_source = auto_in_a_bits_source;
  assign auto_out_5_a_bits_address = auto_in_a_bits_address[11:0];	// @[BundleMap.scala:247:19]
  assign auto_out_5_a_bits_mask = auto_in_a_bits_mask;
  assign auto_out_5_a_bits_data = auto_in_a_bits_data;
  assign auto_out_5_a_bits_corrupt = auto_in_a_bits_corrupt;
  assign auto_out_5_d_ready = auto_in_d_ready & (idle ? readys_readys[5] : state_5);	// @[Arbiter.scala:27:18, :89:28, :96:86, :117:26, :122:24, :124:31]
  assign auto_out_4_a_valid = auto_in_a_valid & requestAIO_0_4;	// @[Parameters.scala:137:65, Xbar.scala:431:50]
  assign auto_out_4_a_bits_opcode = auto_in_a_bits_opcode;
  assign auto_out_4_a_bits_param = auto_in_a_bits_param;
  assign auto_out_4_a_bits_size = auto_in_a_bits_size[2:0];	// @[BundleMap.scala:247:19]
  assign auto_out_4_a_bits_source = auto_in_a_bits_source;
  assign auto_out_4_a_bits_address = auto_in_a_bits_address;
  assign auto_out_4_a_bits_mask = auto_in_a_bits_mask;
  assign auto_out_4_a_bits_data = auto_in_a_bits_data;
  assign auto_out_4_a_bits_corrupt = auto_in_a_bits_corrupt;
  assign auto_out_4_d_ready = auto_in_d_ready & (idle ? readys_readys[4] : state_4);	// @[Arbiter.scala:27:18, :89:28, :96:86, :117:26, :122:24, :124:31]
  assign auto_out_3_a_valid = auto_in_a_valid & requestAIO_0_3;	// @[Parameters.scala:137:65, Xbar.scala:431:50]
  assign auto_out_3_a_bits_opcode = auto_in_a_bits_opcode;
  assign auto_out_3_a_bits_param = auto_in_a_bits_param;
  assign auto_out_3_a_bits_size = auto_in_a_bits_size[2:0];	// @[BundleMap.scala:247:19]
  assign auto_out_3_a_bits_source = auto_in_a_bits_source;
  assign auto_out_3_a_bits_address = auto_in_a_bits_address[25:0];	// @[BundleMap.scala:247:19]
  assign auto_out_3_a_bits_mask = auto_in_a_bits_mask;
  assign auto_out_3_a_bits_data = auto_in_a_bits_data;
  assign auto_out_3_a_bits_corrupt = auto_in_a_bits_corrupt;
  assign auto_out_3_d_ready = auto_in_d_ready & (idle ? readys_readys[3] : state_3);	// @[Arbiter.scala:27:18, :89:28, :96:86, :117:26, :122:24, :124:31]
  assign auto_out_2_a_valid = auto_in_a_valid & requestAIO_0_2;	// @[Parameters.scala:137:65, Xbar.scala:431:50]
  assign auto_out_2_a_bits_opcode = auto_in_a_bits_opcode;
  assign auto_out_2_a_bits_param = auto_in_a_bits_param;
  assign auto_out_2_a_bits_size = auto_in_a_bits_size[2:0];	// @[BundleMap.scala:247:19]
  assign auto_out_2_a_bits_source = auto_in_a_bits_source;
  assign auto_out_2_a_bits_address = auto_in_a_bits_address[27:0];	// @[BundleMap.scala:247:19]
  assign auto_out_2_a_bits_mask = auto_in_a_bits_mask;
  assign auto_out_2_a_bits_data = auto_in_a_bits_data;
  assign auto_out_2_a_bits_corrupt = auto_in_a_bits_corrupt;
  assign auto_out_2_d_ready = auto_in_d_ready & (idle ? readys_readys[2] : state_2);	// @[Arbiter.scala:27:18, :89:28, :96:86, :117:26, :122:24, :124:31]
  assign auto_out_1_a_valid = auto_in_a_valid & requestAIO_0_1;	// @[Xbar.scala:366:92, :431:50]
  assign auto_out_1_a_bits_opcode = auto_in_a_bits_opcode;
  assign auto_out_1_a_bits_param = auto_in_a_bits_param;
  assign auto_out_1_a_bits_size = auto_in_a_bits_size[2:0];	// @[BundleMap.scala:247:19]
  assign auto_out_1_a_bits_source = auto_in_a_bits_source;
  assign auto_out_1_a_bits_address = auto_in_a_bits_address[30:0];	// @[BundleMap.scala:247:19]
  assign auto_out_1_a_bits_mask = auto_in_a_bits_mask;
  assign auto_out_1_a_bits_data = auto_in_a_bits_data;
  assign auto_out_1_a_bits_corrupt = auto_in_a_bits_corrupt;
  assign auto_out_1_d_ready = auto_in_d_ready & (idle ? readys_readys[1] : state_1);	// @[Arbiter.scala:27:18, :89:28, :96:86, :117:26, :122:24, :124:31]
  assign auto_out_0_a_valid = auto_in_a_valid & requestAIO_0_0;	// @[Parameters.scala:137:65, Xbar.scala:431:50]
  assign auto_out_0_a_bits_opcode = auto_in_a_bits_opcode;
  assign auto_out_0_a_bits_param = auto_in_a_bits_param;
  assign auto_out_0_a_bits_size = auto_in_a_bits_size;
  assign auto_out_0_a_bits_source = auto_in_a_bits_source;
  assign auto_out_0_a_bits_address = auto_in_a_bits_address[13:0];	// @[BundleMap.scala:247:19]
  assign auto_out_0_a_bits_mask = auto_in_a_bits_mask;
  assign auto_out_0_a_bits_data = auto_in_a_bits_data;
  assign auto_out_0_a_bits_corrupt = auto_in_a_bits_corrupt;
  assign auto_out_0_d_ready = auto_in_d_ready & (idle ? readys_readys[0] : state_0);	// @[Arbiter.scala:27:18, :89:28, :96:86, :117:26, :122:24, :124:31]
endmodule

