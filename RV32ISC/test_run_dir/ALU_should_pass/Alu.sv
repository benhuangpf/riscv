module Alu(
  input         clock,
  input         reset,
  input         io_bundleAluControl_ctrlALUSrc,
  input         io_bundleAluControl_ctrlJAL,
  input  [3:0]  io_bundleAluControl_ctrlOP,
  input         io_bundleAluControl_ctrlSigned,
  input         io_bundleAluControl_ctrlBranch,
  input  [31:0] io_dataRead1,
  input  [31:0] io_dataRead2,
  input  [31:0] io_imm,
  input  [31:0] io_pc,
  output        io_resultBranch,
  output [31:0] io_resultAlu
);
  wire [31:0] oprand1 = io_bundleAluControl_ctrlJAL ? io_pc : io_dataRead1; // @[Alu.scala 31:19]
  wire [31:0] oprand2 = io_bundleAluControl_ctrlALUSrc ? io_imm : io_dataRead2; // @[Alu.scala 32:19]
  wire [32:0] _resultAlu_T = oprand1 + oprand2; // @[Alu.scala 41:34]
  wire [32:0] _resultAlu_T_1 = oprand1 - oprand2; // @[Alu.scala 44:34]
  wire [31:0] _resultAlu_T_3 = oprand1 & oprand2; // @[Alu.scala 47:34]
  wire [31:0] _resultAlu_T_4 = oprand1 | oprand2; // @[Alu.scala 50:34]
  wire [31:0] _resultAlu_T_5 = oprand1 ^ oprand2; // @[Alu.scala 53:34]
  wire [62:0] _GEN_1 = {{31'd0}, oprand1}; // @[Alu.scala 56:34]
  wire [62:0] _resultAlu_T_7 = _GEN_1 << oprand2[4:0]; // @[Alu.scala 56:34]
  wire [31:0] _resultAlu_T_9 = oprand1 >> oprand2[4:0]; // @[Alu.scala 59:34]
  wire [31:0] _resultAlu_T_10 = io_bundleAluControl_ctrlJAL ? io_pc : io_dataRead1; // @[Alu.scala 62:35]
  wire [31:0] _resultAlu_T_13 = $signed(_resultAlu_T_10) >>> oprand2[4:0]; // @[Alu.scala 62:60]
  wire [31:0] _resultBranch_T_1 = io_bundleAluControl_ctrlALUSrc ? io_imm : io_dataRead2; // @[Alu.scala 65:56]
  wire [32:0] _resultAlu_T_14 = io_pc + io_imm; // @[Alu.scala 66:32]
  wire  _GEN_0 = io_bundleAluControl_ctrlSigned ? $signed(_resultAlu_T_10) < $signed(_resultBranch_T_1) : oprand1 <
    oprand2; // @[Alu.scala 74:54 75:34 77:34]
  wire  _GEN_2 = io_bundleAluControl_ctrlBranch & _GEN_0; // @[Alu.scala 73:50]
  wire [32:0] _GEN_3 = io_bundleAluControl_ctrlBranch ? _resultAlu_T_14 : {{32'd0}, _GEN_0}; // @[Alu.scala 73:50 79:27]
  wire  _GEN_4 = io_bundleAluControl_ctrlSigned ? $signed(_resultAlu_T_10) >= $signed(_resultBranch_T_1) : oprand1 >=
    oprand2; // @[Alu.scala 89:50 90:30 92:30]
  wire [32:0] _GEN_6 = 4'hf == io_bundleAluControl_ctrlOP ? _resultAlu_T_14 : 33'h0; // @[Alu.scala 35:40 94:23]
  wire  _GEN_7 = 4'he == io_bundleAluControl_ctrlOP ? _GEN_2 : 4'hf == io_bundleAluControl_ctrlOP & _GEN_4; // @[Alu.scala 35:40]
  wire [32:0] _GEN_8 = 4'he == io_bundleAluControl_ctrlOP ? _GEN_3 : _GEN_6; // @[Alu.scala 35:40]
  wire  _GEN_9 = 4'hd == io_bundleAluControl_ctrlOP ? $signed(_resultAlu_T_10) != $signed(_resultBranch_T_1) : _GEN_7; // @[Alu.scala 35:40 69:26]
  wire [32:0] _GEN_10 = 4'hd == io_bundleAluControl_ctrlOP ? _resultAlu_T_14 : _GEN_8; // @[Alu.scala 35:40 70:23]
  wire  _GEN_11 = 4'hc == io_bundleAluControl_ctrlOP ? $signed(_resultAlu_T_10) == $signed(_resultBranch_T_1) : _GEN_9; // @[Alu.scala 35:40 65:26]
  wire [32:0] _GEN_12 = 4'hc == io_bundleAluControl_ctrlOP ? _resultAlu_T_14 : _GEN_10; // @[Alu.scala 35:40 66:23]
  wire [32:0] _GEN_13 = 4'hb == io_bundleAluControl_ctrlOP ? {{1'd0}, _resultAlu_T_13} : _GEN_12; // @[Alu.scala 35:40 62:23]
  wire  _GEN_14 = 4'hb == io_bundleAluControl_ctrlOP ? 1'h0 : _GEN_11; // @[Alu.scala 35:40]
  wire [32:0] _GEN_15 = 4'h9 == io_bundleAluControl_ctrlOP ? {{1'd0}, _resultAlu_T_9} : _GEN_13; // @[Alu.scala 35:40 59:23]
  wire  _GEN_16 = 4'h9 == io_bundleAluControl_ctrlOP ? 1'h0 : _GEN_14; // @[Alu.scala 35:40]
  wire [62:0] _GEN_17 = 4'h8 == io_bundleAluControl_ctrlOP ? _resultAlu_T_7 : {{30'd0}, _GEN_15}; // @[Alu.scala 35:40 56:23]
  wire  _GEN_18 = 4'h8 == io_bundleAluControl_ctrlOP ? 1'h0 : _GEN_16; // @[Alu.scala 35:40]
  wire [62:0] _GEN_19 = 4'h7 == io_bundleAluControl_ctrlOP ? {{31'd0}, _resultAlu_T_5} : _GEN_17; // @[Alu.scala 35:40 53:23]
  wire  _GEN_20 = 4'h7 == io_bundleAluControl_ctrlOP ? 1'h0 : _GEN_18; // @[Alu.scala 35:40]
  wire [62:0] _GEN_21 = 4'h5 == io_bundleAluControl_ctrlOP ? {{31'd0}, _resultAlu_T_4} : _GEN_19; // @[Alu.scala 35:40 50:23]
  wire  _GEN_22 = 4'h5 == io_bundleAluControl_ctrlOP ? 1'h0 : _GEN_20; // @[Alu.scala 35:40]
  wire [62:0] _GEN_23 = 4'h4 == io_bundleAluControl_ctrlOP ? {{31'd0}, _resultAlu_T_3} : _GEN_21; // @[Alu.scala 35:40 47:23]
  wire  _GEN_24 = 4'h4 == io_bundleAluControl_ctrlOP ? 1'h0 : _GEN_22; // @[Alu.scala 35:40]
  wire [62:0] _GEN_25 = 4'h2 == io_bundleAluControl_ctrlOP ? {{30'd0}, _resultAlu_T_1} : _GEN_23; // @[Alu.scala 35:40 44:23]
  wire  _GEN_26 = 4'h2 == io_bundleAluControl_ctrlOP ? 1'h0 : _GEN_24; // @[Alu.scala 35:40]
  wire [62:0] _GEN_27 = 4'h1 == io_bundleAluControl_ctrlOP ? {{30'd0}, _resultAlu_T} : _GEN_25; // @[Alu.scala 35:40 41:23]
  wire  _GEN_28 = 4'h1 == io_bundleAluControl_ctrlOP ? 1'h0 : _GEN_26; // @[Alu.scala 35:40]
  wire [62:0] _GEN_29 = 4'h0 == io_bundleAluControl_ctrlOP ? 63'h0 : _GEN_27; // @[Alu.scala 35:40 37:23]
  assign io_resultBranch = 4'h0 == io_bundleAluControl_ctrlOP ? 1'h0 : _GEN_28; // @[Alu.scala 35:40 38:26]
  assign io_resultAlu = _GEN_29[31:0]; // @[Alu.scala 98:18]
endmodule
