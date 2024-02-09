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

module TLPLIC(
  input         clock,
                reset,
                auto_int_in_0,
                auto_in_a_valid,
  input  [2:0]  auto_in_a_bits_opcode,
                auto_in_a_bits_param,
  input  [1:0]  auto_in_a_bits_size,
  input  [10:0] auto_in_a_bits_source,
  input  [27:0] auto_in_a_bits_address,
  input  [3:0]  auto_in_a_bits_mask,
  input  [31:0] auto_in_a_bits_data,
  input         auto_in_a_bits_corrupt,
                auto_in_d_ready,
  output        auto_int_out_0,
                auto_in_a_ready,
                auto_in_d_valid,
  output [2:0]  auto_in_d_bits_opcode,
  output [1:0]  auto_in_d_bits_size,
  output [10:0] auto_in_d_bits_source,
  output [31:0] auto_in_d_bits_data
);

  wire             _out_wofireMux_T_2;	// @[RegisterRouter.scala:83:24]
  wire             _out_wofireMux_T;	// @[RegisterRouter.scala:83:24]
  wire             out_backSel_5;	// @[RegisterRouter.scala:83:24]
  wire             completer_0;	// @[Plic.scala:295:35]
  wire             completerDev;	// @[package.scala:155:13]
  wire             _out_back_io_enq_ready;	// @[Decoupled.scala:375:21]
  wire             _out_back_io_deq_valid;	// @[Decoupled.scala:375:21]
  wire             _out_back_io_deq_bits_read;	// @[Decoupled.scala:375:21]
  wire [23:0]      _out_back_io_deq_bits_index;	// @[Decoupled.scala:375:21]
  wire [31:0]      _out_back_io_deq_bits_data;	// @[Decoupled.scala:375:21]
  wire [3:0]       _out_back_io_deq_bits_mask;	// @[Decoupled.scala:375:21]
  wire [10:0]      _out_back_io_deq_bits_extra_tlrr_extra_source;	// @[Decoupled.scala:375:21]
  wire [1:0]       _out_back_io_deq_bits_extra_tlrr_extra_size;	// @[Decoupled.scala:375:21]
  wire             _fanin_io_dev;	// @[Plic.scala:184:25]
  wire             _fanin_io_max;	// @[Plic.scala:184:25]
  wire             _gateways_gateway_io_plic_valid;	// @[Plic.scala:156:27]
  reg              priority_0;	// @[Plic.scala:163:31]
  reg              threshold_0;	// @[Plic.scala:166:31]
  reg              pending_0;	// @[Plic.scala:168:26]
  reg              enables_0_0;	// @[Plic.scala:174:26]
  reg              maxDevs_0;	// @[Plic.scala:181:22]
  reg              x1_0_REG;	// @[Plic.scala:188:45]
  wire [20:0]      _GEN = {_out_back_io_deq_bits_index[23:20], _out_back_io_deq_bits_index[18:12], _out_back_io_deq_bits_index[10:1]};	// @[Decoupled.scala:375:21, RegisterRouter.scala:83:24]
  wire             _out_out_bits_data_WIRE_5 = _GEN == 21'h0;	// @[RegisterRouter.scala:83:24]
  wire [31:0]      out_backMask = {{8{_out_back_io_deq_bits_mask[3]}}, {8{_out_back_io_deq_bits_mask[2]}}, {8{_out_back_io_deq_bits_mask[1]}}, {8{_out_back_io_deq_bits_mask[0]}}};	// @[Bitwise.scala:28:17, :77:12, Cat.scala:33:92, Decoupled.scala:375:21]
  wire             claimer_0 = _out_wofireMux_T & _out_back_io_deq_bits_read & out_backSel_5 & _out_out_bits_data_WIRE_5 & (|out_backMask);	// @[Cat.scala:33:92, Decoupled.scala:375:21, RegisterRouter.scala:83:24]
  assign completerDev = _out_back_io_deq_bits_data[0];	// @[Decoupled.scala:375:21, package.scala:155:13]
  wire [1:0]       _out_completer_0_T = {enables_0_0, 1'h0} >> completerDev;	// @[Cat.scala:33:92, Plic.scala:163:31, :174:26, :295:51, package.scala:155:13]
  assign completer_0 = _out_wofireMux_T_2 & out_backSel_5 & _out_out_bits_data_WIRE_5 & (&out_backMask) & _out_completer_0_T[0];	// @[Cat.scala:33:92, Plic.scala:295:{35,51}, RegisterRouter.scala:83:24]
  wire [2:0]       out_oindex = {_out_back_io_deq_bits_index[19], _out_back_io_deq_bits_index[11], _out_back_io_deq_bits_index[0]};	// @[Cat.scala:33:92, Decoupled.scala:375:21, RegisterRouter.scala:83:24]
  wire [2:0]       _GEN_0 = {_out_back_io_deq_bits_index[19], _out_back_io_deq_bits_index[11], _out_back_io_deq_bits_index[0]};	// @[Decoupled.scala:375:21, OneHot.scala:57:35, RegisterRouter.scala:83:24]
  assign out_backSel_5 = _GEN_0 == 3'h5;	// @[OneHot.scala:57:35, RegisterRouter.scala:83:24]
  assign _out_wofireMux_T = _out_back_io_deq_valid & auto_in_d_ready;	// @[Decoupled.scala:375:21, RegisterRouter.scala:83:24]
  assign _out_wofireMux_T_2 = _out_wofireMux_T & ~_out_back_io_deq_bits_read;	// @[Decoupled.scala:375:21, RegisterRouter.scala:83:24]
  wire [7:0]       _GEN_1 = {{1'h1}, {1'h1}, {_out_out_bits_data_WIRE_5}, {_out_out_bits_data_WIRE_5}, {1'h1}, {_out_out_bits_data_WIRE_5}, {_out_out_bits_data_WIRE_5}, {_GEN == 21'h200}};	// @[MuxLiteral.scala:49:10, Plic.scala:245:46, RegisterRouter.scala:83:24]
  wire [7:0][31:0] _GEN_2 = {{32'h0}, {32'h0}, {{31'h0, maxDevs_0}}, {{31'h0, threshold_0}}, {32'h0}, {{30'h0, enables_0_0, 1'h0}}, {{31'h0, priority_0}}, {{30'h0, pending_0, 1'h0}}};	// @[MuxLiteral.scala:49:{10,48}, Plic.scala:163:31, :166:31, :168:26, :174:26, :181:22, RegisterRouter.scala:83:24]
  wire [2:0]       bundleIn_0_d_bits_opcode = {2'h0, _out_back_io_deq_bits_read};	// @[Decoupled.scala:375:21, RegisterRouter.scala:83:24, :98:19]
  wire             claimedDevs_1 = claimer_0 & maxDevs_0;	// @[Plic.scala:181:22, :246:49, RegisterRouter.scala:83:24]
  always @(posedge clock) begin
    if (_out_wofireMux_T_2 & _GEN_0 == 3'h1 & _out_out_bits_data_WIRE_5 & _out_back_io_deq_bits_mask[0])	// @[Bitwise.scala:28:17, Decoupled.scala:375:21, OneHot.scala:57:35, RegisterRouter.scala:83:24]
      priority_0 <= _out_back_io_deq_bits_data[0];	// @[Decoupled.scala:375:21, Plic.scala:163:31, RegisterRouter.scala:83:24]
    if (_out_wofireMux_T_2 & _GEN_0 == 3'h4 & _out_out_bits_data_WIRE_5 & _out_back_io_deq_bits_mask[0])	// @[Bitwise.scala:28:17, Decoupled.scala:375:21, OneHot.scala:57:35, RegisterRouter.scala:72:36, :83:24]
      threshold_0 <= _out_back_io_deq_bits_data[0];	// @[Decoupled.scala:375:21, Plic.scala:166:31, RegisterRouter.scala:83:24]
    if (_out_wofireMux_T_2 & _GEN_0 == 3'h2 & _out_out_bits_data_WIRE_5 & _out_back_io_deq_bits_mask[0])	// @[Bitwise.scala:28:17, Decoupled.scala:375:21, OneHot.scala:57:35, RegisterRouter.scala:83:24]
      enables_0_0 <= _out_back_io_deq_bits_data[1];	// @[Decoupled.scala:375:21, Plic.scala:174:26, RegisterRouter.scala:83:24]
    maxDevs_0 <= _fanin_io_dev;	// @[Plic.scala:181:22, :184:25]
    x1_0_REG <= _fanin_io_max;	// @[Plic.scala:184:25, :188:45]
    if (reset)
      pending_0 <= 1'h0;	// @[Plic.scala:163:31, :168:26]
    else if (claimedDevs_1 | _gateways_gateway_io_plic_valid)	// @[Plic.scala:156:27, :246:49, :251:15]
      pending_0 <= ~claimedDevs_1;	// @[Plic.scala:168:26, :246:49, :251:34]
  end // always @(posedge)
  `ifndef SYNTHESIS
    always @(posedge clock) begin	// @[Plic.scala:245:11]
      if (~reset & claimer_0 & claimer_0 - 1'h1) begin	// @[Plic.scala:245:{11,46}, RegisterRouter.scala:83:24]
        if (`ASSERT_VERBOSE_COND_)	// @[Plic.scala:245:11]
          $error("Assertion failed\n    at Plic.scala:245 assert((claimer.asUInt & (claimer.asUInt - 1.U)) === 0.U) // One-Hot\n");	// @[Plic.scala:245:11]
        if (`STOP_COND_)	// @[Plic.scala:245:11]
          $fatal;	// @[Plic.scala:245:11]
      end
      if (~reset & completer_0 & completer_0 - 1'h1) begin	// @[Plic.scala:262:{11,50}, :295:35]
        if (`ASSERT_VERBOSE_COND_)	// @[Plic.scala:262:11]
          $error("Assertion failed\n    at Plic.scala:262 assert((completer.asUInt & (completer.asUInt - 1.U)) === 0.U) // One-Hot\n");	// @[Plic.scala:262:11]
        if (`STOP_COND_)	// @[Plic.scala:262:11]
          $fatal;	// @[Plic.scala:262:11]
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
        priority_0 = _RANDOM_0[0];	// @[Plic.scala:163:31]
        threshold_0 = _RANDOM_0[1];	// @[Plic.scala:163:31, :166:31]
        pending_0 = _RANDOM_0[2];	// @[Plic.scala:163:31, :168:26]
        enables_0_0 = _RANDOM_0[3];	// @[Plic.scala:163:31, :174:26]
        maxDevs_0 = _RANDOM_0[4];	// @[Plic.scala:163:31, :181:22]
        x1_0_REG = _RANDOM_0[5];	// @[Plic.scala:163:31, :188:45]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  TLMonitor_32 monitor (	// @[Nodes.scala:24:25]
    .clock                (clock),
    .reset                (reset),
    .io_in_a_ready        (_out_back_io_enq_ready),	// @[Decoupled.scala:375:21]
    .io_in_a_valid        (auto_in_a_valid),
    .io_in_a_bits_opcode  (auto_in_a_bits_opcode),
    .io_in_a_bits_param   (auto_in_a_bits_param),
    .io_in_a_bits_size    (auto_in_a_bits_size),
    .io_in_a_bits_source  (auto_in_a_bits_source),
    .io_in_a_bits_address (auto_in_a_bits_address),
    .io_in_a_bits_mask    (auto_in_a_bits_mask),
    .io_in_a_bits_corrupt (auto_in_a_bits_corrupt),
    .io_in_d_ready        (auto_in_d_ready),
    .io_in_d_valid        (_out_back_io_deq_valid),	// @[Decoupled.scala:375:21]
    .io_in_d_bits_opcode  (bundleIn_0_d_bits_opcode),	// @[RegisterRouter.scala:98:19]
    .io_in_d_bits_size    (_out_back_io_deq_bits_extra_tlrr_extra_size),	// @[Decoupled.scala:375:21]
    .io_in_d_bits_source  (_out_back_io_deq_bits_extra_tlrr_extra_source)	// @[Decoupled.scala:375:21]
  );
  LevelGateway gateways_gateway (	// @[Plic.scala:156:27]
    .clock            (clock),
    .reset            (reset),
    .io_interrupt     (auto_int_in_0),
    .io_plic_ready    (~pending_0),	// @[Plic.scala:168:26, :250:18]
    .io_plic_complete (completer_0 & completerDev),	// @[Plic.scala:264:28, :295:35, package.scala:155:13]
    .io_plic_valid    (_gateways_gateway_io_plic_valid)
  );
  PLICFanIn fanin (	// @[Plic.scala:184:25]
    .io_prio_0 (priority_0),	// @[Plic.scala:163:31]
    .io_ip     (enables_0_0 & pending_0),	// @[Plic.scala:168:26, :174:26, :186:40]
    .io_dev    (_fanin_io_dev),
    .io_max    (_fanin_io_max)
  );
  Queue_19 out_back (	// @[Decoupled.scala:375:21]
    .clock                               (clock),
    .reset                               (reset),
    .io_enq_valid                        (auto_in_a_valid),
    .io_enq_bits_read                    (auto_in_a_bits_opcode == 3'h4),	// @[RegisterRouter.scala:72:36]
    .io_enq_bits_index                   (auto_in_a_bits_address[25:2]),	// @[Edges.scala:192:34, RegisterRouter.scala:73:19]
    .io_enq_bits_data                    (auto_in_a_bits_data),
    .io_enq_bits_mask                    (auto_in_a_bits_mask),
    .io_enq_bits_extra_tlrr_extra_source (auto_in_a_bits_source),
    .io_enq_bits_extra_tlrr_extra_size   (auto_in_a_bits_size),
    .io_deq_ready                        (auto_in_d_ready),
    .io_enq_ready                        (_out_back_io_enq_ready),
    .io_deq_valid                        (_out_back_io_deq_valid),
    .io_deq_bits_read                    (_out_back_io_deq_bits_read),
    .io_deq_bits_index                   (_out_back_io_deq_bits_index),
    .io_deq_bits_data                    (_out_back_io_deq_bits_data),
    .io_deq_bits_mask                    (_out_back_io_deq_bits_mask),
    .io_deq_bits_extra_tlrr_extra_source (_out_back_io_deq_bits_extra_tlrr_extra_source),
    .io_deq_bits_extra_tlrr_extra_size   (_out_back_io_deq_bits_extra_tlrr_extra_size)
  );
  assign auto_int_out_0 = x1_0_REG > threshold_0;	// @[Plic.scala:166:31, :188:{45,60}]
  assign auto_in_a_ready = _out_back_io_enq_ready;	// @[Decoupled.scala:375:21]
  assign auto_in_d_valid = _out_back_io_deq_valid;	// @[Decoupled.scala:375:21]
  assign auto_in_d_bits_opcode = bundleIn_0_d_bits_opcode;	// @[RegisterRouter.scala:98:19]
  assign auto_in_d_bits_size = _out_back_io_deq_bits_extra_tlrr_extra_size;	// @[Decoupled.scala:375:21]
  assign auto_in_d_bits_source = _out_back_io_deq_bits_extra_tlrr_extra_source;	// @[Decoupled.scala:375:21]
  assign auto_in_d_bits_data = _GEN_1[out_oindex] ? _GEN_2[out_oindex] : 32'h0;	// @[Cat.scala:33:92, MuxLiteral.scala:49:10, RegisterRouter.scala:83:24]
endmodule
