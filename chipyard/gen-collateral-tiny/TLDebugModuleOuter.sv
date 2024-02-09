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

module TLDebugModuleOuter(
  input         clock,
                reset,
                auto_dmi_in_a_valid,
  input  [2:0]  auto_dmi_in_a_bits_opcode,
  input  [6:0]  auto_dmi_in_a_bits_address,
  input  [31:0] auto_dmi_in_a_bits_data,
  input         auto_dmi_in_d_ready,
                io_ctrl_dmactiveAck,
                io_innerCtrl_ready,
                io_hgDebugInt_0,
  output        auto_dmi_in_a_ready,
                auto_dmi_in_d_valid,
  output [2:0]  auto_dmi_in_d_bits_opcode,
  output [31:0] auto_dmi_in_d_bits_data,
  output        auto_int_out_0,
                io_ctrl_dmactive,
                io_innerCtrl_valid,
                io_innerCtrl_bits_resumereq,
                io_innerCtrl_bits_ackhavereset,
                io_innerCtrl_bits_hrmask_0
);

  wire       out_woready_12;	// @[RegisterRouter.scala:83:24]
  wire       DMCONTROLWrData_setresethaltreq;	// @[RegisterRouter.scala:83:24]
  wire       DMCONTROLWrData_clrresethaltreq;	// @[RegisterRouter.scala:83:24]
  reg        DMCONTROLReg_haltreq;	// @[Debug.scala:374:31]
  reg        DMCONTROLReg_ndmreset;	// @[Debug.scala:374:31]
  reg        DMCONTROLReg_dmactive;	// @[Debug.scala:374:31]
  reg        hrmaskReg_0;	// @[Debug.scala:514:28]
  wire       hrmaskNxt_0 = ~(~DMCONTROLReg_dmactive | out_woready_12 & DMCONTROLWrData_clrresethaltreq) & (out_woready_12 & DMCONTROLWrData_setresethaltreq | hrmaskReg_0);	// @[Debug.scala:374:31, :393:11, :514:28, :516:15, :518:44, :519:30, :520:{39,102}, :521:30, :522:{39,102}, :523:30, RegisterRouter.scala:83:24]
  wire       out_front_bits_read = auto_dmi_in_a_bits_opcode == 3'h4;	// @[RegisterRouter.scala:72:36]
  wire       _out_out_bits_data_WIRE_1 = {auto_dmi_in_a_bits_address[4], auto_dmi_in_a_bits_address[2]} == 2'h0;	// @[RegisterRouter.scala:83:24, :98:19]
  assign DMCONTROLWrData_clrresethaltreq = auto_dmi_in_a_bits_data[2];	// @[RegisterRouter.scala:83:24]
  assign DMCONTROLWrData_setresethaltreq = auto_dmi_in_a_bits_data[3];	// @[RegisterRouter.scala:83:24]
  assign out_woready_12 = auto_dmi_in_a_valid & auto_dmi_in_d_ready & ~out_front_bits_read & ~(auto_dmi_in_a_bits_address[3]) & _out_out_bits_data_WIRE_1;	// @[RegisterRouter.scala:72:36, :83:24]
  wire [2:0] bundleIn_0_d_bits_opcode = {2'h0, out_front_bits_read};	// @[RegisterRouter.scala:72:36, :98:19]
  reg        debugIntRegs_0;	// @[Debug.scala:595:31]
  reg        innerCtrlValidReg;	// @[Debug.scala:625:36]
  reg        innerCtrlResumeReqReg;	// @[Debug.scala:626:40]
  reg        innerCtrlAckHaveResetReg;	// @[Debug.scala:627:43]
  wire       _io_innerCtrl_valid_output = out_woready_12 | innerCtrlValidReg;	// @[Debug.scala:625:36, :636:54, RegisterRouter.scala:83:24]
  wire       _io_innerCtrl_bits_resumereq_output = out_woready_12 & auto_dmi_in_a_bits_data[30] | innerCtrlResumeReqReg;	// @[Debug.scala:626:40, :638:{54,83}, RegisterRouter.scala:83:24]
  wire       _io_innerCtrl_bits_ackhavereset_output = out_woready_12 & auto_dmi_in_a_bits_data[28] | innerCtrlAckHaveResetReg;	// @[Debug.scala:627:43, :639:{57,89}, RegisterRouter.scala:83:24]
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      DMCONTROLReg_haltreq <= 1'h0;	// @[Debug.scala:374:31]
      DMCONTROLReg_ndmreset <= 1'h0;	// @[Debug.scala:374:31]
      DMCONTROLReg_dmactive <= 1'h0;	// @[Debug.scala:374:31]
      hrmaskReg_0 <= 1'h0;	// @[Debug.scala:514:28]
      debugIntRegs_0 <= 1'h0;	// @[Debug.scala:595:31]
      innerCtrlValidReg <= 1'h0;	// @[Debug.scala:625:36]
      innerCtrlResumeReqReg <= 1'h0;	// @[Debug.scala:626:40]
      innerCtrlAckHaveResetReg <= 1'h0;	// @[Debug.scala:627:43]
    end
    else begin
      DMCONTROLReg_haltreq <= DMCONTROLReg_dmactive & (out_woready_12 ? auto_dmi_in_a_bits_data[31] : DMCONTROLReg_haltreq);	// @[Debug.scala:374:31, :392:18, :393:22, :394:20, :400:{47,75}, RegisterRouter.scala:83:24]
      DMCONTROLReg_ndmreset <= DMCONTROLReg_dmactive & (out_woready_12 ? auto_dmi_in_a_bits_data[1] : DMCONTROLReg_ndmreset);	// @[Debug.scala:374:31, :392:18, :393:22, :394:20, :396:{47,75}, RegisterRouter.scala:83:24]
      if (out_woready_12)	// @[RegisterRouter.scala:83:24]
        DMCONTROLReg_dmactive <= auto_dmi_in_a_bits_data[0];	// @[Debug.scala:374:31, RegisterRouter.scala:83:24]
      hrmaskReg_0 <= hrmaskNxt_0;	// @[Debug.scala:514:28, :518:44, :519:30, :520:102, :521:30, :522:102]
      debugIntRegs_0 <= DMCONTROLReg_dmactive & (out_woready_12 ? auto_dmi_in_a_bits_data[31] : debugIntRegs_0);	// @[Debug.scala:374:31, :595:31, :597:17, :605:44, :606:32, :609:96, :610:34, RegisterRouter.scala:83:24]
      innerCtrlValidReg <= _io_innerCtrl_valid_output & ~io_innerCtrl_ready;	// @[Debug.scala:625:36, :632:{52,54}, :636:54]
      innerCtrlResumeReqReg <= _io_innerCtrl_bits_resumereq_output & ~io_innerCtrl_ready;	// @[Debug.scala:626:40, :632:54, :633:61, :638:83]
      innerCtrlAckHaveResetReg <= _io_innerCtrl_bits_ackhavereset_output & ~io_innerCtrl_ready;	// @[Debug.scala:627:43, :632:54, :634:64, :639:89]
    end
  end // always @(posedge, posedge)
  `ifndef SYNTHESIS
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM_0;
    logic [31:0] _RANDOM_1;
    logic [31:0] _RANDOM_2;
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM_0 = `RANDOM;
        _RANDOM_1 = `RANDOM;
        _RANDOM_2 = `RANDOM;
        DMCONTROLReg_haltreq = _RANDOM_0[0];	// @[Debug.scala:374:31]
        DMCONTROLReg_ndmreset = _RANDOM_0[30];	// @[Debug.scala:374:31]
        DMCONTROLReg_dmactive = _RANDOM_0[31];	// @[Debug.scala:374:31]
        hrmaskReg_0 = _RANDOM_2[0];	// @[Debug.scala:514:28]
        debugIntRegs_0 = _RANDOM_2[1];	// @[Debug.scala:514:28, :595:31]
        innerCtrlValidReg = _RANDOM_2[2];	// @[Debug.scala:514:28, :625:36]
        innerCtrlResumeReqReg = _RANDOM_2[3];	// @[Debug.scala:514:28, :626:40]
        innerCtrlAckHaveResetReg = _RANDOM_2[4];	// @[Debug.scala:514:28, :627:43]
      `endif // RANDOMIZE_REG_INIT
      `ifdef RANDOMIZE
        if (reset) begin
          DMCONTROLReg_haltreq = 1'h0;	// @[Debug.scala:374:31]
          DMCONTROLReg_ndmreset = 1'h0;	// @[Debug.scala:374:31]
          DMCONTROLReg_dmactive = 1'h0;	// @[Debug.scala:374:31]
          hrmaskReg_0 = 1'h0;	// @[Debug.scala:514:28]
          debugIntRegs_0 = 1'h0;	// @[Debug.scala:595:31]
          innerCtrlValidReg = 1'h0;	// @[Debug.scala:625:36]
          innerCtrlResumeReqReg = 1'h0;	// @[Debug.scala:626:40]
          innerCtrlAckHaveResetReg = 1'h0;	// @[Debug.scala:627:43]
        end
      `endif // RANDOMIZE
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  TLMonitor_35 monitor (	// @[Nodes.scala:24:25]
    .clock                (clock),
    .reset                (reset),
    .io_in_a_ready        (auto_dmi_in_d_ready),
    .io_in_a_valid        (auto_dmi_in_a_valid),
    .io_in_a_bits_opcode  (auto_dmi_in_a_bits_opcode),
    .io_in_a_bits_address (auto_dmi_in_a_bits_address),
    .io_in_d_ready        (auto_dmi_in_d_ready),
    .io_in_d_valid        (auto_dmi_in_a_valid),
    .io_in_d_bits_opcode  (bundleIn_0_d_bits_opcode)	// @[RegisterRouter.scala:98:19]
  );
  assign auto_dmi_in_a_ready = auto_dmi_in_d_ready;
  assign auto_dmi_in_d_valid = auto_dmi_in_a_valid;
  assign auto_dmi_in_d_bits_opcode = bundleIn_0_d_bits_opcode;	// @[RegisterRouter.scala:98:19]
  assign auto_dmi_in_d_bits_data = _out_out_bits_data_WIRE_1 ? (auto_dmi_in_a_bits_address[3] ? 32'h118380 : {DMCONTROLReg_haltreq, 29'h0, DMCONTROLReg_ndmreset, DMCONTROLReg_dmactive & io_ctrl_dmactiveAck}) : 32'h0;	// @[Cat.scala:33:92, Debug.scala:374:31, :435:47, :529:43, MuxLiteral.scala:49:{10,48}, RegisterRouter.scala:83:24]
  assign auto_int_out_0 = debugIntRegs_0 | io_hgDebugInt_0;	// @[Debug.scala:595:31, :600:60]
  assign io_ctrl_dmactive = DMCONTROLReg_dmactive;	// @[Debug.scala:374:31]
  assign io_innerCtrl_valid = _io_innerCtrl_valid_output;	// @[Debug.scala:636:54]
  assign io_innerCtrl_bits_resumereq = _io_innerCtrl_bits_resumereq_output;	// @[Debug.scala:638:83]
  assign io_innerCtrl_bits_ackhavereset = _io_innerCtrl_bits_ackhavereset_output;	// @[Debug.scala:639:89]
  assign io_innerCtrl_bits_hrmask_0 = hrmaskNxt_0;	// @[Debug.scala:518:44, :519:30, :520:102, :521:30, :522:102]
endmodule

