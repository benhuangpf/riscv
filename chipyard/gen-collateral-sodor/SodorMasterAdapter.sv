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

module SodorMasterAdapter(
  input         clock,
                reset,
                auto_out_a_ready,
                auto_out_d_valid,
  input  [2:0]  auto_out_d_bits_opcode,
  input  [1:0]  auto_out_d_bits_param,
  input  [3:0]  auto_out_d_bits_size,
  input         auto_out_d_bits_sink,
                auto_out_d_bits_denied,
  input  [31:0] auto_out_d_bits_data,
  input         auto_out_d_bits_corrupt,
                io_dport_req_valid,
  input  [31:0] io_dport_req_bits_addr,
                io_dport_req_bits_data,
  input         io_dport_req_bits_fcn,
  input  [2:0]  io_dport_req_bits_typ,
  output        auto_out_a_valid,
  output [2:0]  auto_out_a_bits_opcode,
                auto_out_a_bits_param,
  output [3:0]  auto_out_a_bits_size,
  output        auto_out_a_bits_source,
  output [31:0] auto_out_a_bits_address,
  output [3:0]  auto_out_a_bits_mask,
  output [31:0] auto_out_a_bits_data,
  output        auto_out_a_bits_corrupt,
                auto_out_d_ready,
                io_dport_resp_valid,
  output [31:0] io_dport_resp_bits_data
);

  wire        _buffer_auto_in_a_ready;	// @[Buffer.scala:69:28]
  wire        _buffer_auto_in_d_valid;	// @[Buffer.scala:69:28]
  wire [3:0]  _buffer_auto_in_d_bits_size;	// @[Buffer.scala:69:28]
  wire        _buffer_auto_in_d_bits_denied;	// @[Buffer.scala:69:28]
  wire [31:0] _buffer_auto_in_d_bits_data;	// @[Buffer.scala:69:28]
  wire        _buffer_auto_in_d_bits_corrupt;	// @[Buffer.scala:69:28]
  reg  [1:0]  state;	// @[master_adapter.scala:50:22]
  reg  [31:0] a_address_reg;	// @[master_adapter.scala:52:26]
  reg         a_signed_reg;	// @[master_adapter.scala:53:25]
  reg  [31:0] req_address_reg;	// @[master_adapter.scala:55:28]
  reg  [1:0]  req_size_reg;	// @[master_adapter.scala:56:25]
  reg  [31:0] req_data_reg;	// @[master_adapter.scala:57:25]
  wire        tl_out_a_valid = state == 2'h1;	// @[master_adapter.scala:50:22, :64:11, :69:15]
  wire        a_mask_acc = req_size_reg[1] | req_size_reg[0] & ~(req_address_reg[1]);	// @[Misc.scala:205:21, :209:26, :210:20, :214:{29,38}, OneHot.scala:63:49, master_adapter.scala:55:28, :56:25]
  wire        a_mask_acc_1 = req_size_reg[1] | req_size_reg[0] & req_address_reg[1];	// @[Misc.scala:205:21, :209:26, :214:{29,38}, OneHot.scala:63:49, master_adapter.scala:55:28, :56:25]
  wire        a_mask_acc_6 = req_size_reg[1] | req_size_reg[0] & ~(req_address_reg[1]);	// @[Misc.scala:205:21, :209:26, :210:20, :214:{29,38}, OneHot.scala:63:49, master_adapter.scala:55:28, :56:25]
  wire        a_mask_acc_7 = req_size_reg[1] | req_size_reg[0] & req_address_reg[1];	// @[Misc.scala:205:21, :209:26, :214:{29,38}, OneHot.scala:63:49, master_adapter.scala:55:28, :56:25]
  wire [15:0] io_dport_resp_bits_data_shifted = a_address_reg[1] ? _buffer_auto_in_d_bits_data[31:16] : _buffer_auto_in_d_bits_data[15:0];	// @[AMOALU.scala:40:{24,29,37,55}, Buffer.scala:69:28, master_adapter.scala:52:26]
  wire [7:0]  io_dport_resp_bits_data_shifted_1 = a_address_reg[0] ? io_dport_resp_bits_data_shifted[15:8] : io_dport_resp_bits_data_shifted[7:0];	// @[AMOALU.scala:40:{24,29,37,55}, master_adapter.scala:52:26]
  wire [1:0]  a_size = io_dport_req_bits_typ[1:0] - 2'h1;	// @[memory.scala:61:27]
  wire        _T_1 = state == 2'h0 & io_dport_req_valid;	// @[master_adapter.scala:50:22, :63:{15,27}]
  wire        _T_8 = _buffer_auto_in_a_ready & tl_out_a_valid;	// @[Buffer.scala:69:28, Decoupled.scala:51:35, master_adapter.scala:69:15]
  always @(posedge clock) begin
    if (reset)
      state <= 2'h0;	// @[master_adapter.scala:50:22]
    else if (state == 2'h2 & _buffer_auto_in_d_valid)	// @[Buffer.scala:69:28, master_adapter.scala:50:22, :70:11, :72:{15,30}]
      state <= 2'h0;	// @[master_adapter.scala:50:22]
    else if (tl_out_a_valid & _T_8)	// @[Decoupled.scala:51:35, master_adapter.scala:69:{15,28}]
      state <= 2'h2;	// @[master_adapter.scala:50:22, :70:11]
    else if (_T_1)	// @[master_adapter.scala:63:27]
      state <= 2'h1;	// @[master_adapter.scala:50:22, :64:11]
    if (_T_8) begin	// @[Decoupled.scala:51:35]
      a_address_reg <= io_dport_req_bits_addr;	// @[master_adapter.scala:52:26]
      a_signed_reg <= a_size[0];	// @[master_adapter.scala:53:25, :83:18, memory.scala:60:{24,30}, :61:27]
    end
    if (_T_1) begin	// @[master_adapter.scala:63:27]
      req_address_reg <= io_dport_req_bits_addr;	// @[master_adapter.scala:55:28]
      req_size_reg <= a_size;	// @[master_adapter.scala:56:25, memory.scala:61:27]
      req_data_reg <= io_dport_req_bits_data;	// @[master_adapter.scala:57:25]
    end
  end // always @(posedge)
  `ifndef SYNTHESIS
    wire  [1:0]  _GEN = req_address_reg[14:13] ^ 2'h1;	// @[Parameters.scala:137:31, master_adapter.scala:55:28, :64:11]
    wire  [4:0]  _GEN_0 = {req_address_reg[31], req_address_reg[26:25] ^ 2'h1, req_address_reg[20], req_address_reg[16]};	// @[Parameters.scala:137:{31,45}, master_adapter.scala:55:28, :64:11]
    wire  [1:0]  _GEN_1 = req_address_reg[26:25] ^ 2'h2;	// @[Parameters.scala:137:{31,45}, master_adapter.scala:55:28, :70:11]
    wire  [1:0]  _GEN_2 = {req_address_reg[31], _GEN_1[1]};	// @[Parameters.scala:137:{31,45}, master_adapter.scala:55:28]
    wire  [3:0]  _GEN_3 = {~(req_address_reg[31]), req_address_reg[26:25], req_address_reg[20]};	// @[Parameters.scala:137:{31,45}, master_adapter.scala:55:28]
    always @(posedge clock) begin	// @[master_adapter.scala:101:9]
      if (~reset & ~((io_dport_req_bits_fcn ? {req_address_reg[31], req_address_reg[26:25], req_address_reg[20], req_address_reg[16], _GEN[0]} == 6'h0 | {req_address_reg[31], req_address_reg[25], req_address_reg[20], req_address_reg[16], req_address_reg[13]} == 5'h0 | {req_address_reg[31], req_address_reg[26:25], ~(req_address_reg[20]), req_address_reg[13]} == 5'h0 | _GEN_0 == 5'h0 | _GEN_2 == 2'h0 | _GEN_3 == 4'h0 : {req_address_reg[31], req_address_reg[26:25], req_address_reg[20], req_address_reg[16], _GEN} == 7'h0 | {req_address_reg[31], req_address_reg[26:25], req_address_reg[20], req_address_reg[16], req_address_reg[13]} == 6'h0 | {req_address_reg[31], req_address_reg[26:25], req_address_reg[20], ~(req_address_reg[16])} == 5'h0 | {req_address_reg[31], req_address_reg[26:25], ~(req_address_reg[20]), req_address_reg[14:13]} == 6'h0 | _GEN_0 == 5'h0 | _GEN_2 == 2'h0 | {req_address_reg[31], _GEN_1, req_address_reg[20], req_address_reg[16], req_address_reg[14:13]} == 7'h0 | _GEN_3 == 4'h0) | ~tl_out_a_valid)) begin	// @[Parameters.scala:137:{31,45,65}, :673:26, master_adapter.scala:50:22, :55:28, :69:15, :98:21, :101:{9,19,21}]
        if (`ASSERT_VERBOSE_COND_)	// @[master_adapter.scala:101:9]
          $error("Assertion failed: Illegal operation\n    at master_adapter.scala:101 assert(legal_op | !tl_out.a.valid, \"Illegal operation\")\n");	// @[master_adapter.scala:101:9]
        if (`STOP_COND_)	// @[master_adapter.scala:101:9]
          $fatal;	// @[master_adapter.scala:101:9]
      end
      if (~reset & ~(~(_buffer_auto_in_d_bits_corrupt | _buffer_auto_in_d_bits_denied) | ~_buffer_auto_in_d_valid)) begin	// @[Buffer.scala:69:28, master_adapter.scala:99:39, :102:{9,10,19,21}]
        if (`ASSERT_VERBOSE_COND_)	// @[master_adapter.scala:102:9]
          $error("Assertion failed: Responds exception\n    at master_adapter.scala:102 assert(!resp_xp | !tl_out.d.valid, \"Responds exception\")\n");	// @[master_adapter.scala:102:9]
        if (`STOP_COND_)	// @[master_adapter.scala:102:9]
          $fatal;	// @[master_adapter.scala:102:9]
      end
    end // always @(posedge)
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM_0;
    logic [31:0] _RANDOM_1;
    logic [31:0] _RANDOM_2;
    logic [31:0] _RANDOM_3;
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM_0 = `RANDOM;
        _RANDOM_1 = `RANDOM;
        _RANDOM_2 = `RANDOM;
        _RANDOM_3 = `RANDOM;
        state = _RANDOM_0[1:0];	// @[master_adapter.scala:50:22]
        a_address_reg = {_RANDOM_0[31:2], _RANDOM_1[1:0]};	// @[master_adapter.scala:50:22, :52:26]
        a_signed_reg = _RANDOM_1[2];	// @[master_adapter.scala:52:26, :53:25]
        req_address_reg = {_RANDOM_1[31:3], _RANDOM_2[2:0]};	// @[master_adapter.scala:52:26, :55:28]
        req_size_reg = _RANDOM_2[4:3];	// @[master_adapter.scala:55:28, :56:25]
        req_data_reg = {_RANDOM_2[31:5], _RANDOM_3[4:0]};	// @[master_adapter.scala:55:28, :57:25]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  TLBuffer_9 buffer (	// @[Buffer.scala:69:28]
    .clock                   (clock),
    .reset                   (reset),
    .auto_in_a_valid         (tl_out_a_valid),	// @[master_adapter.scala:69:15]
    .auto_in_a_bits_opcode   ({~io_dport_req_bits_fcn, 2'h0}),	// @[master_adapter.scala:50:22, :92:{23,46}]
    .auto_in_a_bits_size     ({2'h0, req_size_reg}),	// @[Edges.scala:457:15, master_adapter.scala:50:22, :56:25]
    .auto_in_a_bits_address  (req_address_reg),	// @[master_adapter.scala:55:28]
    .auto_in_a_bits_mask     (io_dport_req_bits_fcn ? {a_mask_acc_7 | req_address_reg[1] & req_address_reg[0], a_mask_acc_7 | req_address_reg[1] & ~(req_address_reg[0]), a_mask_acc_6 | ~(req_address_reg[1]) & req_address_reg[0], a_mask_acc_6 | ~(req_address_reg[1]) & ~(req_address_reg[0])} : {a_mask_acc_1 | req_address_reg[1] & req_address_reg[0], a_mask_acc_1 | req_address_reg[1] & ~(req_address_reg[0]), a_mask_acc | ~(req_address_reg[1]) & req_address_reg[0], a_mask_acc | ~(req_address_reg[1]) & ~(req_address_reg[0])}),	// @[Cat.scala:33:92, Misc.scala:209:26, :210:20, :213:27, :214:29, master_adapter.scala:55:28, :92:23]
    .auto_in_a_bits_data     (io_dport_req_bits_fcn ? req_data_reg : 32'h0),	// @[Bundles.scala:259:74, master_adapter.scala:57:25, :92:23]
    .auto_out_a_ready        (auto_out_a_ready),
    .auto_out_d_valid        (auto_out_d_valid),
    .auto_out_d_bits_opcode  (auto_out_d_bits_opcode),
    .auto_out_d_bits_param   (auto_out_d_bits_param),
    .auto_out_d_bits_size    (auto_out_d_bits_size),
    .auto_out_d_bits_sink    (auto_out_d_bits_sink),
    .auto_out_d_bits_denied  (auto_out_d_bits_denied),
    .auto_out_d_bits_data    (auto_out_d_bits_data),
    .auto_out_d_bits_corrupt (auto_out_d_bits_corrupt),
    .auto_in_a_ready         (_buffer_auto_in_a_ready),
    .auto_in_d_valid         (_buffer_auto_in_d_valid),
    .auto_in_d_bits_size     (_buffer_auto_in_d_bits_size),
    .auto_in_d_bits_denied   (_buffer_auto_in_d_bits_denied),
    .auto_in_d_bits_data     (_buffer_auto_in_d_bits_data),
    .auto_in_d_bits_corrupt  (_buffer_auto_in_d_bits_corrupt),
    .auto_out_a_valid        (auto_out_a_valid),
    .auto_out_a_bits_opcode  (auto_out_a_bits_opcode),
    .auto_out_a_bits_param   (auto_out_a_bits_param),
    .auto_out_a_bits_size    (auto_out_a_bits_size),
    .auto_out_a_bits_source  (auto_out_a_bits_source),
    .auto_out_a_bits_address (auto_out_a_bits_address),
    .auto_out_a_bits_mask    (auto_out_a_bits_mask),
    .auto_out_a_bits_data    (auto_out_a_bits_data),
    .auto_out_a_bits_corrupt (auto_out_a_bits_corrupt),
    .auto_out_d_ready        (auto_out_d_ready)
  );
  assign io_dport_resp_valid = _buffer_auto_in_d_valid;	// @[Buffer.scala:69:28]
  assign io_dport_resp_bits_data = {_buffer_auto_in_d_bits_size[1:0] == 2'h0 ? {24{a_signed_reg & io_dport_resp_bits_data_shifted_1[7]}} : {_buffer_auto_in_d_bits_size[1:0] == 2'h1 ? {16{a_signed_reg & io_dport_resp_bits_data_shifted[15]}} : _buffer_auto_in_d_bits_data[31:16], io_dport_resp_bits_data_shifted[15:8]}, io_dport_resp_bits_data_shifted_1};	// @[AMOALU.scala:11:17, :40:{24,37}, :43:{20,26,72,81,94}, Bitwise.scala:77:12, Buffer.scala:69:28, Cat.scala:33:92, master_adapter.scala:50:22, :53:25, :64:11]
endmodule
