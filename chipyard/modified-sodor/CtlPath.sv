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

module CtlPath(
  input         clock,
                reset,
                io_imem_resp_valid,
                io_dmem_resp_valid,
  input  [31:0] io_dat_inst,
  input         io_dat_imiss,
                io_dat_br_eq,
                io_dat_br_lt,
                io_dat_br_ltu,
                io_dat_csr_eret,
                io_dat_csr_interrupt,
                io_dat_inst_misaligned,
  input  [2:0]  io_dat_mem_address_low,
  output        io_dmem_req_valid,
                io_dmem_req_bits_fcn,
  output [2:0]  io_dmem_req_bits_typ,
  output        io_ctl_stall,
                io_ctl_dmiss,
  output [2:0]  io_ctl_pc_sel,
  output [1:0]  io_ctl_op1_sel,
                io_ctl_op2_sel,
  output [3:0]  io_ctl_alu_fun,
  output [1:0]  io_ctl_wb_sel,
  output        io_ctl_rf_wen,
  output [2:0]  io_ctl_csr_cmd,
  output        io_ctl_exception,
  output [31:0] io_ctl_exception_cause,
  output [2:0]  io_ctl_pc_sel_no_xept
);

  wire        _io_ctl_exception_output;	// @[cpath.scala:182:58]
  wire        data_misaligned;	// @[cpath.scala:177:70]
  wire [9:0]  _GEN = {io_dat_inst[14:12], io_dat_inst[6:0]};	// @[Lookup.scala:31:38]
  wire        _csignals_T_1 = _GEN == 10'h103;	// @[Lookup.scala:31:38]
  wire        _csignals_T_3 = _GEN == 10'h3;	// @[Lookup.scala:31:38]
  wire        _csignals_T_5 = _GEN == 10'h203;	// @[Lookup.scala:31:38]
  wire        _csignals_T_7 = _GEN == 10'h83;	// @[Lookup.scala:31:38]
  wire        _csignals_T_9 = _GEN == 10'h283;	// @[Lookup.scala:31:38]
  wire        _csignals_T_11 = _GEN == 10'h123;	// @[Lookup.scala:31:38]
  wire        _csignals_T_13 = _GEN == 10'h23;	// @[Lookup.scala:31:38]
  wire        _csignals_T_534 = _GEN == 10'hA3;	// @[Lookup.scala:31:38]
  wire        _csignals_T_17 = io_dat_inst[6:0] == 7'h17;	// @[Lookup.scala:31:38]
  wire        _csignals_T_19 = io_dat_inst[6:0] == 7'h37;	// @[Lookup.scala:31:38]
  wire        _csignals_T_21 = _GEN == 10'h13;	// @[Lookup.scala:31:38]
  wire        _csignals_T_23 = _GEN == 10'h393;	// @[Lookup.scala:31:38]
  wire        _csignals_T_25 = _GEN == 10'h313;	// @[Lookup.scala:31:38]
  wire        _csignals_T_27 = _GEN == 10'h213;	// @[Lookup.scala:31:38]
  wire        _csignals_T_29 = _GEN == 10'h113;	// @[Lookup.scala:31:38]
  wire        _csignals_T_31 = _GEN == 10'h193;	// @[Lookup.scala:31:38]
  wire [16:0] _GEN_0 = {io_dat_inst[31:25], io_dat_inst[14:12], io_dat_inst[6:0]};	// @[Lookup.scala:31:38]
  wire        _csignals_T_33 = _GEN_0 == 17'h93;	// @[Lookup.scala:31:38]
  wire        _csignals_T_35 = _GEN_0 == 17'h8293;	// @[Lookup.scala:31:38]
  wire        _csignals_T_37 = _GEN_0 == 17'h293;	// @[Lookup.scala:31:38]
  wire        _csignals_T_39 = _GEN_0 == 17'hB3;	// @[Lookup.scala:31:38]
  wire        _csignals_T_41 = _GEN_0 == 17'h33;	// @[Lookup.scala:31:38]
  wire        _csignals_T_43 = _GEN_0 == 17'h8033;	// @[Lookup.scala:31:38]
  wire        _csignals_T_45 = _GEN_0 == 17'h133;	// @[Lookup.scala:31:38]
  wire        _csignals_T_47 = _GEN_0 == 17'h1B3;	// @[Lookup.scala:31:38]
  wire        _csignals_T_49 = _GEN_0 == 17'h3B3;	// @[Lookup.scala:31:38]
  wire        _csignals_T_51 = _GEN_0 == 17'h333;	// @[Lookup.scala:31:38]
  wire        _csignals_T_53 = _GEN_0 == 17'h233;	// @[Lookup.scala:31:38]
  wire        _csignals_T_55 = _GEN_0 == 17'h82B3;	// @[Lookup.scala:31:38]
  wire        _csignals_T_57 = _GEN_0 == 17'h2B3;	// @[Lookup.scala:31:38]
  wire        _csignals_T_59 = io_dat_inst[6:0] == 7'h6F;	// @[Lookup.scala:31:38]
  wire        _csignals_T_61 = _GEN == 10'h67;	// @[Lookup.scala:31:38]
  wire        _csignals_T_63 = _GEN == 10'h63;	// @[Lookup.scala:31:38]
  wire        _csignals_T_65 = _GEN == 10'hE3;	// @[Lookup.scala:31:38]
  wire        _csignals_T_67 = _GEN == 10'h2E3;	// @[Lookup.scala:31:38]
  wire        _csignals_T_69 = _GEN == 10'h3E3;	// @[Lookup.scala:31:38]
  wire        _csignals_T_71 = _GEN == 10'h263;	// @[Lookup.scala:31:38]
  wire        _csignals_T_73 = _GEN == 10'h363;	// @[Lookup.scala:31:38]
  wire        _csignals_T_75 = _GEN == 10'h2F3;	// @[Lookup.scala:31:38]
  wire        _csignals_T_77 = _GEN == 10'h373;	// @[Lookup.scala:31:38]
  wire        _csignals_T_79 = _GEN == 10'h3F3;	// @[Lookup.scala:31:38]
  wire        _csignals_T_81 = _GEN == 10'hF3;	// @[Lookup.scala:31:38]
  wire        _csignals_T_83 = _GEN == 10'h173;	// @[Lookup.scala:31:38]
  wire        _csignals_T_401 = _GEN == 10'h1F3;	// @[Lookup.scala:31:38]
  wire        _csignals_T_87 = io_dat_inst == 32'h73;	// @[Lookup.scala:31:38]
  wire        _csignals_T_89 = io_dat_inst == 32'h30200073;	// @[Lookup.scala:31:38]
  wire        _csignals_T_91 = io_dat_inst == 32'h7B200073;	// @[Lookup.scala:31:38]
  wire        _csignals_T_93 = io_dat_inst == 32'h100073;	// @[Lookup.scala:31:38]
  wire        _GEN_1 = _csignals_T_11 | _csignals_T_13 | _csignals_T_534 | _csignals_T_17 | _csignals_T_19 | _csignals_T_21 | _csignals_T_23 | _csignals_T_25 | _csignals_T_27 | _csignals_T_29 | _csignals_T_31 | _csignals_T_33 | _csignals_T_35 | _csignals_T_37 | _csignals_T_39 | _csignals_T_41 | _csignals_T_43 | _csignals_T_45 | _csignals_T_47 | _csignals_T_49 | _csignals_T_51 | _csignals_T_53 | _csignals_T_55 | _csignals_T_57;	// @[Lookup.scala:31:38, :34:39]
  wire [3:0]  cs_br_type = _csignals_T_1 | _csignals_T_3 | _csignals_T_5 | _csignals_T_7 | _csignals_T_9 | _GEN_1 ? 4'h0 : _csignals_T_59 ? 4'h7 : _csignals_T_61 ? 4'h8 : _csignals_T_63 ? 4'h2 : _csignals_T_65 ? 4'h1 : _csignals_T_67 ? 4'h3 : _csignals_T_69 ? 4'h4 : _csignals_T_71 ? 4'h5 : _csignals_T_73 ? 4'h6 : 4'h0;	// @[Lookup.scala:31:38, :34:39]
  wire        _GEN_2 = _csignals_T_63 | _csignals_T_65 | _csignals_T_67 | _csignals_T_69 | _csignals_T_71 | _csignals_T_73;	// @[Lookup.scala:31:38, :34:39]
  wire        _GEN_3 = _csignals_T_59 | _csignals_T_61 | _GEN_2;	// @[Lookup.scala:31:38, :34:39]
  wire        _GEN_4 = _csignals_T_21 | _csignals_T_23 | _csignals_T_25 | _csignals_T_27 | _csignals_T_29 | _csignals_T_31 | _csignals_T_33 | _csignals_T_35 | _csignals_T_37 | _csignals_T_39 | _csignals_T_41 | _csignals_T_43 | _csignals_T_45 | _csignals_T_47 | _csignals_T_49 | _csignals_T_51 | _csignals_T_53 | _csignals_T_55 | _csignals_T_57 | _GEN_3;	// @[Lookup.scala:31:38, :34:39]
  wire        _GEN_5 = _csignals_T_11 | _csignals_T_13 | _csignals_T_534;	// @[Lookup.scala:31:38, :34:39]
  wire        _GEN_6 = _csignals_T_1 | _csignals_T_3 | _csignals_T_5 | _csignals_T_7 | _csignals_T_9;	// @[Lookup.scala:31:38, :34:39]
  wire        _GEN_7 = _csignals_T_75 | _csignals_T_77 | _csignals_T_79 | _csignals_T_81 | _csignals_T_83 | _csignals_T_401;	// @[Lookup.scala:31:38, :34:39]
  wire        _GEN_8 = _csignals_T_59 | _csignals_T_61;	// @[Lookup.scala:31:38, :34:39]
  wire        _GEN_9 = _csignals_T_11 | _csignals_T_13;	// @[Lookup.scala:31:38, :34:39]
  wire        cs0_3 = _csignals_T_1 | _csignals_T_3 | _csignals_T_5 | _csignals_T_7 | _csignals_T_9 | _GEN_9 | _csignals_T_534;	// @[Lookup.scala:31:38, :34:39]
  wire        cs0_4 = ~_GEN_6 & (_GEN_9 | _csignals_T_534);	// @[Lookup.scala:31:38, :34:39]
  wire [2:0]  cs0_5 = _csignals_T_1 ? 3'h3 : _csignals_T_3 ? 3'h1 : _csignals_T_5 ? 3'h5 : _csignals_T_7 ? 3'h2 : _csignals_T_9 ? 3'h6 : _csignals_T_11 ? 3'h3 : _csignals_T_13 ? 3'h1 : {1'h0, _csignals_T_534, 1'h0};	// @[Lookup.scala:31:38, :34:39, cpath.scala:47:6]
  wire [2:0]  cs0_6 = _csignals_T_1 | _csignals_T_3 | _csignals_T_5 | _csignals_T_7 | _csignals_T_9 | _csignals_T_11 | _csignals_T_13 | _csignals_T_534 | _csignals_T_17 | _csignals_T_19 | _GEN_4 ? 3'h0 : _csignals_T_75 ? 3'h5 : _csignals_T_77 ? 3'h6 : _csignals_T_79 ? 3'h7 : _csignals_T_81 ? 3'h5 : _csignals_T_83 ? 3'h6 : _csignals_T_401 ? 3'h7 : {_csignals_T_87 | _csignals_T_89 | _csignals_T_91 | _csignals_T_93, 2'h0};	// @[Lookup.scala:31:38, :34:39, cpath.scala:47:6]
  wire [2:0]  _ctrl_pc_sel_no_xept_T_26 = cs_br_type == 4'h0 ? 3'h0 : cs_br_type == 4'h1 ? {2'h0, ~io_dat_br_eq} : cs_br_type == 4'h2 ? {2'h0, io_dat_br_eq} : cs_br_type == 4'h3 ? {2'h0, ~io_dat_br_lt} : cs_br_type == 4'h4 ? {2'h0, ~io_dat_br_ltu} : cs_br_type == 4'h5 ? {2'h0, io_dat_br_lt} : cs_br_type == 4'h6 ? {2'h0, io_dat_br_ltu} : cs_br_type == 4'h7 ? 3'h2 : cs_br_type == 4'h8 ? 3'h3 : 3'h0;	// @[Lookup.scala:34:39, cpath.scala:47:6, :121:{34,46}, :122:{34,46,62,63}, :123:{34,46,62}, :124:{34,46,62,63}, :125:{34,46,62,63}, :126:{34,46,62}, :127:{34,46,62}, :128:{34,46}, :129:{34,46}]
  reg         reg_mem_en;	// @[cpath.scala:135:28]
  wire        mem_en = io_imem_resp_valid ? cs0_3 : reg_mem_en;	// @[Lookup.scala:34:39, cpath.scala:135:28, :141:20]
  wire        _io_ctl_dmiss_T_3 = mem_en & (io_dmem_resp_valid | data_misaligned) | ~mem_en;	// @[cpath.scala:141:20, :144:{30,53,74,77}, :177:70]
  wire        stall = io_dat_imiss | ~_io_ctl_dmiss_T_3;	// @[cpath.scala:144:{20,74}, :145:30]
  // wire        illegal = ~(_csignals_T_1 | _csignals_T_3 | _csignals_T_5 | _csignals_T_7 | _csignals_T_9 | _csignals_T_11 | _csignals_T_13 | _csignals_T_534 | _csignals_T_17 | _csignals_T_19 | _csignals_T_21 | _csignals_T_23 | _csignals_T_25 | _csignals_T_27 | _csignals_T_29 | _csignals_T_31 | _csignals_T_33 | _csignals_T_35 | _csignals_T_37 | _csignals_T_39 | _csignals_T_41 | _csignals_T_43 | _csignals_T_45 | _csignals_T_47 | _csignals_T_49 | _csignals_T_51 | _csignals_T_53 | _csignals_T_55 | _csignals_T_57 | _csignals_T_59 | _csignals_T_61 | _csignals_T_63 | _csignals_T_65 | _csignals_T_67 | _csignals_T_69 | _csignals_T_71 | _csignals_T_73 | _csignals_T_75 | _csignals_T_77 | _csignals_T_79 | _csignals_T_81 | _csignals_T_83 | _csignals_T_401 | _csignals_T_87 | _csignals_T_89 | _csignals_T_91 | _csignals_T_93 | io_dat_inst == 32'h10500073 | _GEN == 10'h8F | _GEN == 10'hF) & io_imem_resp_valid;	// @[Lookup.scala:31:38, :34:39, cpath.scala:171:{19,32}]
  wire        illegal = 1'b0;
  wire [5:0]  _misaligned_mask_T_3 = 6'h7 << cs0_5[1:0] - 2'h1;	// @[Lookup.scala:34:39, cpath.scala:176:{34,49}]
  assign data_misaligned = (|(~(_misaligned_mask_T_3[2:0]) & io_dat_mem_address_low)) & mem_en;	// @[cpath.scala:141:20, :176:{23,34}, :177:{40,66,70}]
  assign _io_ctl_exception_output = illegal | io_dat_inst_misaligned | data_misaligned;	// @[cpath.scala:171:32, :177:70, :182:58]
  always @(posedge clock) begin
    if (reset)
      reg_mem_en <= 1'h0;	// @[cpath.scala:47:6, :135:28]
    else
      reg_mem_en <= ~io_dmem_resp_valid & (io_imem_resp_valid ? cs0_3 : reg_mem_en);	// @[Lookup.scala:34:39, cpath.scala:135:28, :136:30, :137:18, :138:37, :139:18]
  end // always @(posedge)
  `ifndef SYNTHESIS
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
        reg_mem_en = _RANDOM_0[0];	// @[cpath.scala:135:28]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  assign io_dmem_req_valid = mem_en & ~_io_ctl_exception_output;	// @[cpath.scala:141:20, :165:{35,38}, :182:58]
  assign io_dmem_req_bits_fcn = cs0_4;	// @[Lookup.scala:34:39]
  assign io_dmem_req_bits_typ = cs0_5;	// @[Lookup.scala:34:39]
  assign io_ctl_stall = stall;	// @[cpath.scala:145:30]
  assign io_ctl_dmiss = ~_io_ctl_dmiss_T_3;	// @[cpath.scala:144:{20,74}]
  assign io_ctl_pc_sel = _io_ctl_exception_output | io_dat_csr_eret | io_dat_csr_interrupt ? 3'h4 : _ctrl_pc_sel_no_xept_T_26;	// @[Lookup.scala:34:39, cpath.scala:120:34, :121:34, :131:25, :182:58]
  assign io_ctl_op1_sel = _csignals_T_1 | _csignals_T_3 | _csignals_T_5 | _csignals_T_7 | _csignals_T_9 | _GEN_5 ? 2'h0 : _csignals_T_17 | _csignals_T_19 ? 2'h1 : _GEN_4 ? 2'h0 : {_csignals_T_75 | _csignals_T_77 | _csignals_T_79, 1'h0};	// @[Lookup.scala:31:38, :34:39, cpath.scala:47:6]
  assign io_ctl_op2_sel = _GEN_6 ? 2'h1 : _GEN_5 ? 2'h2 : _csignals_T_17 ? 2'h3 : _csignals_T_19 ? 2'h0 : _csignals_T_21 | _csignals_T_23 | _csignals_T_25 | _csignals_T_27 | _csignals_T_29 | _csignals_T_31 | _csignals_T_33 | _csignals_T_35 | _csignals_T_37 ? 2'h1 : _csignals_T_39 | _csignals_T_41 | _csignals_T_43 | _csignals_T_45 | _csignals_T_47 | _csignals_T_49 | _csignals_T_51 | _csignals_T_53 | _csignals_T_55 | _csignals_T_57 | _csignals_T_59 ? 2'h0 : {1'h0, _csignals_T_61};	// @[Lookup.scala:31:38, :34:39, cpath.scala:47:6]
  assign io_ctl_alu_fun = _csignals_T_1 | _csignals_T_3 | _csignals_T_5 | _csignals_T_7 | _csignals_T_9 | _csignals_T_11 | _csignals_T_13 | _csignals_T_534 | _csignals_T_17 ? 4'h1 : _csignals_T_19 ? 4'hB : _csignals_T_21 ? 4'h1 : _csignals_T_23 ? 4'h6 : _csignals_T_25 ? 4'h7 : _csignals_T_27 ? 4'h8 : _csignals_T_29 ? 4'h9 : _csignals_T_31 ? 4'hA : _csignals_T_33 ? 4'h3 : _csignals_T_35 ? 4'h5 : _csignals_T_37 ? 4'h4 : _csignals_T_39 ? 4'h3 : _csignals_T_41 ? 4'h1 : _csignals_T_43 ? 4'h2 : _csignals_T_45 ? 4'h9 : _csignals_T_47 ? 4'hA : _csignals_T_49 ? 4'h6 : _csignals_T_51 ? 4'h7 : _csignals_T_53 ? 4'h8 : _csignals_T_55 ? 4'h5 : _csignals_T_57 ? 4'h4 : _GEN_3 | ~_GEN_7 ? 4'h0 : 4'hB;	// @[Lookup.scala:31:38, :34:39]
  assign io_ctl_wb_sel = _GEN_6 ? 2'h1 : _GEN_1 ? 2'h0 : _GEN_8 ? 2'h2 : _GEN_2 ? 2'h0 : {2{_GEN_7}};	// @[Lookup.scala:34:39]
  assign io_ctl_rf_wen = ~(stall | _io_ctl_exception_output) & (_GEN_6 | ~_GEN_5 & (_csignals_T_17 | _csignals_T_19 | _csignals_T_21 | _csignals_T_23 | _csignals_T_25 | _csignals_T_27 | _csignals_T_29 | _csignals_T_31 | _csignals_T_33 | _csignals_T_35 | _csignals_T_37 | _csignals_T_39 | _csignals_T_41 | _csignals_T_43 | _csignals_T_45 | _csignals_T_47 | _csignals_T_49 | _csignals_T_51 | _csignals_T_53 | _csignals_T_55 | _csignals_T_57 | _GEN_8 | ~_GEN_2 & (_csignals_T_75 | _csignals_T_77 | _csignals_T_79 | _csignals_T_81 | _csignals_T_83 | _csignals_T_401)));	// @[Lookup.scala:31:38, :34:39, cpath.scala:145:30, :155:{26,33}, :182:58]
  assign io_ctl_csr_cmd = stall ? 3'h0 : (cs0_6 == 3'h6 | (&cs0_6)) & io_dat_inst[19:15] == 5'h0 ? 3'h2 : cs0_6;	// @[Lookup.scala:34:39, cpath.scala:47:6, :145:30, :158:30, :159:{30,40,54,65,77}, :160:21, :162:26]
  assign io_ctl_exception = _io_ctl_exception_output;	// @[cpath.scala:182:58]
  assign io_ctl_exception_cause = {29'h0, illegal ? 3'h2 : io_dat_inst_misaligned ? 3'h0 : {1'h1, cs0_4, 1'h0}};	// @[Lookup.scala:34:39, cpath.scala:47:6, :171:32, :183:{27,34}, :184:34, :185:34]
  assign io_ctl_pc_sel_no_xept = io_dat_csr_interrupt ? 3'h4 : _ctrl_pc_sel_no_xept_T_26;	// @[Lookup.scala:34:39, cpath.scala:120:34, :121:34]
endmodule
