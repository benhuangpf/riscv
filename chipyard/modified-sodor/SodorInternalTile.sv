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

`define SIZE_TEXT 2048
`define SIZE_DATA 1024
`define SIZE_STACK 1024

module SodorInternalTile(
  input         clock,
                reset,
                io_debug_port_req_valid,
  input  [31:0] io_debug_port_req_bits_addr,
                io_debug_port_req_bits_data,
  input         io_debug_port_req_bits_fcn,
  input  [2:0]  io_debug_port_req_bits_typ,
  input         io_master_port_0_resp_valid,
  input  [31:0] io_master_port_0_resp_bits_data,
  input         io_master_port_1_resp_valid,
  input  [31:0] io_master_port_1_resp_bits_data,
  input         io_interrupt_debug,
                io_interrupt_mtip,
                io_interrupt_msip,
                io_interrupt_meip,
                io_hartid,
  output        io_debug_port_resp_valid,
  output [31:0] io_debug_port_resp_bits_data,
  output        io_master_port_0_req_valid,
  output [31:0] io_master_port_0_req_bits_addr,
                io_master_port_0_req_bits_data,
  output        io_master_port_0_req_bits_fcn,
  output [2:0]  io_master_port_0_req_bits_typ,
  output        io_master_port_1_req_valid,
  output [31:0] io_master_port_1_req_bits_addr,
                io_master_port_1_req_bits_data,
  output        io_master_port_1_req_bits_fcn,
  output [2:0]  io_master_port_1_req_bits_typ
);

  wire        _router_1_io_scratchPort_req_valid;	// @[sodor_internal_tile.scala:126:24]
  wire [31:0] _router_1_io_scratchPort_req_bits_addr;	// @[sodor_internal_tile.scala:126:24]
  wire [31:0] _router_1_io_scratchPort_req_bits_data;	// @[sodor_internal_tile.scala:126:24]
  wire        _router_1_io_scratchPort_req_bits_fcn;	// @[sodor_internal_tile.scala:126:24]
  wire [2:0]  _router_1_io_scratchPort_req_bits_typ;	// @[sodor_internal_tile.scala:126:24]
  wire        _router_1_io_corePort_resp_valid;	// @[sodor_internal_tile.scala:126:24]
  wire [31:0] _router_1_io_corePort_resp_bits_data;	// @[sodor_internal_tile.scala:126:24]
  wire        _router_io_scratchPort_req_valid;	// @[sodor_internal_tile.scala:126:24]
  wire [31:0] _router_io_scratchPort_req_bits_addr;	// @[sodor_internal_tile.scala:126:24]
  wire [31:0] _router_io_scratchPort_req_bits_data;	// @[sodor_internal_tile.scala:126:24]
  wire        _router_io_scratchPort_req_bits_fcn;	// @[sodor_internal_tile.scala:126:24]
  wire [2:0]  _router_io_scratchPort_req_bits_typ;	// @[sodor_internal_tile.scala:126:24]
  wire        _router_io_corePort_resp_valid;	// @[sodor_internal_tile.scala:126:24]
  wire [31:0] _router_io_corePort_resp_bits_data;	// @[sodor_internal_tile.scala:126:24]
  wire        _memory_io_core_ports_0_resp_valid;	// @[sodor_internal_tile.scala:122:22]
  wire [31:0] _memory_io_core_ports_0_resp_bits_data;	// @[sodor_internal_tile.scala:122:22]
  wire        _memory_io_core_ports_1_resp_valid;	// @[sodor_internal_tile.scala:122:22]
  wire [31:0] _memory_io_core_ports_1_resp_bits_data;	// @[sodor_internal_tile.scala:122:22]
  wire        _core_io_imem_req_valid;	// @[sodor_internal_tile.scala:120:22]
  wire [31:0] _core_io_imem_req_bits_addr;	// @[sodor_internal_tile.scala:120:22]
  wire        _core_io_dmem_req_valid;	// @[sodor_internal_tile.scala:120:22]
  wire [31:0] _core_io_dmem_req_bits_addr;	// @[sodor_internal_tile.scala:120:22]
  wire [31:0] _core_io_dmem_req_bits_data;	// @[sodor_internal_tile.scala:120:22]
  wire        _core_io_dmem_req_bits_fcn;	// @[sodor_internal_tile.scala:120:22]
  wire [2:0]  _core_io_dmem_req_bits_typ;	// @[sodor_internal_tile.scala:120:22]
  Core core (	// @[sodor_internal_tile.scala:120:22]
    .clock                  (clock),
    .reset                  (reset),
    // .io_imem_resp_valid     (_router_1_io_corePort_resp_valid),	// @[sodor_internal_tile.scala:126:24]
    // .io_imem_resp_bits_data (_router_1_io_corePort_resp_bits_data),	// @[sodor_internal_tile.scala:126:24]
    .io_imem_resp_valid     (_core_io_imem_req_valid),	// @[sodor_internal_tile.scala:126:24]
    .io_imem_resp_bits_data (mem_rdata_I),	// @[sodor_internal_tile.scala:126:24]
    // .io_dmem_resp_valid     (_router_io_corePort_resp_valid),	// @[sodor_internal_tile.scala:126:24]
    // .io_dmem_resp_bits_data (_router_io_corePort_resp_bits_data),	// @[sodor_internal_tile.scala:126:24]
    .io_dmem_resp_valid     (_core_io_dmem_req_valid),	// @[sodor_internal_tile.scala:126:24]
    .io_dmem_resp_bits_data (mem_rdata_D),	// @[sodor_internal_tile.scala:126:24]
    // .io_interrupt_debug     (io_interrupt_debug),
    // .io_interrupt_mtip      (io_interrupt_mtip),
    // .io_interrupt_msip      (io_interrupt_msip),
    // .io_interrupt_meip      (io_interrupt_meip),
    // .io_hartid              (io_hartid),
    .io_interrupt_debug     (1'b0),
    .io_interrupt_mtip      (1'b0),
    .io_interrupt_msip      (1'b0),
    .io_interrupt_meip      (1'b0),
    .io_hartid              (1'b0),
    .io_imem_req_valid      (_core_io_imem_req_valid),
    .io_imem_req_bits_addr  (_core_io_imem_req_bits_addr),
    .io_dmem_req_valid      (_core_io_dmem_req_valid),
    .io_dmem_req_bits_addr  (_core_io_dmem_req_bits_addr),
    .io_dmem_req_bits_data  (_core_io_dmem_req_bits_data),
    .io_dmem_req_bits_fcn   (_core_io_dmem_req_bits_fcn),
    .io_dmem_req_bits_typ   (_core_io_dmem_req_bits_typ)
  );

  wire [31:0] mem_rdata_I, mem_rdata_D;
  reg [31:0] mem_text_offset, mem_data_offset, mem_stack_offset;
  integer i;
  initial begin
    mem_text_offset = 32'h80000000;
    mem_data_offset = 32'h80000000; 
    mem_stack_offset = 32'h80021000;  
    for (i=0; i<`SIZE_TEXT; i=i+1) begin
      mem_text.mem[i] = 0;
    end
    for (i=0; i<`SIZE_DATA; i=i+1) begin
      mem_data.mem[i] = 0;
    end
    for (i=0; i<`SIZE_STACK; i=i+1) begin
      mem_stack.mem[i] = 0;
    end
  end
  memory #(.word_depth(`SIZE_TEXT)) mem_text(
    .clk(clock),
    .rst_n(reset),
    .wen(1'b0),
    .a(_core_io_imem_req_bits_addr),
    .d(32'd0),
    .q(mem_rdata_I),
    .offset(mem_text_offset));
  memory #(.word_depth(`SIZE_DATA)) mem_data(
    .clk(clock),
    .rst_n(reset),
    .wen(_core_io_dmem_req_bits_fcn),
    .a(_core_io_dmem_req_bits_addr),
    .d(_core_io_dmem_req_bits_data),
    .q(mem_rdata_D),
    .offset(mem_data_offset));
  memory #(.word_depth(`SIZE_STACK)) mem_stack(
    .clk(clock),
    .rst_n(reset),
    .wen(_core_io_dmem_req_bits_fcn),
    .a(_core_io_dmem_req_bits_addr),
    .d(_core_io_dmem_req_bits_data),
    .q(mem_rdata_D),
    .offset(mem_stack_offset));

  // AsyncScratchPadMemory memory (	// @[sodor_internal_tile.scala:122:22]
  //   .clock                          (clock),
  //   .io_core_ports_0_req_valid      (_router_io_scratchPort_req_valid),	// @[sodor_internal_tile.scala:126:24]
  //   .io_core_ports_0_req_bits_addr  (_router_io_scratchPort_req_bits_addr),	// @[sodor_internal_tile.scala:126:24]
  //   .io_core_ports_0_req_bits_data  (_router_io_scratchPort_req_bits_data),	// @[sodor_internal_tile.scala:126:24]
  //   .io_core_ports_0_req_bits_fcn   (_router_io_scratchPort_req_bits_fcn),	// @[sodor_internal_tile.scala:126:24]
  //   .io_core_ports_0_req_bits_typ   (_router_io_scratchPort_req_bits_typ),	// @[sodor_internal_tile.scala:126:24]
  //   .io_core_ports_1_req_valid      (_router_1_io_scratchPort_req_valid),	// @[sodor_internal_tile.scala:126:24]
  //   .io_core_ports_1_req_bits_addr  (_router_1_io_scratchPort_req_bits_addr),	// @[sodor_internal_tile.scala:126:24]
  //   .io_core_ports_1_req_bits_typ   (_router_1_io_scratchPort_req_bits_typ),	// @[sodor_internal_tile.scala:126:24]
  //   // .io_debug_port_req_valid        (io_debug_port_req_valid),
  //   .io_debug_port_req_valid        (1'b0),
  //   .io_debug_port_req_bits_addr    (io_debug_port_req_bits_addr),
  //   .io_debug_port_req_bits_data    (io_debug_port_req_bits_data),
  //   .io_debug_port_req_bits_fcn     (io_debug_port_req_bits_fcn),
  //   .io_debug_port_req_bits_typ     (io_debug_port_req_bits_typ),
  //   .io_core_ports_0_resp_valid     (_memory_io_core_ports_0_resp_valid),
  //   .io_core_ports_0_resp_bits_data (_memory_io_core_ports_0_resp_bits_data),
  //   .io_core_ports_1_resp_valid     (_memory_io_core_ports_1_resp_valid),
  //   .io_core_ports_1_resp_bits_data (_memory_io_core_ports_1_resp_bits_data),
  //   .io_debug_port_resp_valid       (io_debug_port_resp_valid),
  //   .io_debug_port_resp_bits_data   (io_debug_port_resp_bits_data)
  // );
  // SodorRequestRouter router (	// @[sodor_internal_tile.scala:126:24]
  //   // .io_masterPort_resp_valid      (io_master_port_0_resp_valid),
  //   .io_masterPort_resp_valid      (1'b0),
  //   .io_masterPort_resp_bits_data  (io_master_port_0_resp_bits_data),
  //   .io_scratchPort_resp_valid     (_memory_io_core_ports_0_resp_valid),	// @[sodor_internal_tile.scala:122:22]
  //   .io_scratchPort_resp_bits_data (_memory_io_core_ports_0_resp_bits_data),	// @[sodor_internal_tile.scala:122:22]
  //   .io_corePort_req_valid         (_core_io_dmem_req_valid),	// @[sodor_internal_tile.scala:120:22]
  //   .io_corePort_req_bits_addr     (_core_io_dmem_req_bits_addr),	// @[sodor_internal_tile.scala:120:22]
  //   .io_corePort_req_bits_data     (_core_io_dmem_req_bits_data),	// @[sodor_internal_tile.scala:120:22]
  //   .io_corePort_req_bits_fcn      (_core_io_dmem_req_bits_fcn),	// @[sodor_internal_tile.scala:120:22]
  //   .io_corePort_req_bits_typ      (_core_io_dmem_req_bits_typ),	// @[sodor_internal_tile.scala:120:22]
  //   .io_respAddress                (_core_io_dmem_req_bits_addr),	// @[sodor_internal_tile.scala:120:22]
  //   .io_masterPort_req_valid       (io_master_port_0_req_valid),
  //   .io_masterPort_req_bits_addr   (io_master_port_0_req_bits_addr),
  //   .io_masterPort_req_bits_data   (io_master_port_0_req_bits_data),
  //   .io_masterPort_req_bits_fcn    (io_master_port_0_req_bits_fcn),
  //   .io_masterPort_req_bits_typ    (io_master_port_0_req_bits_typ),
  //   .io_scratchPort_req_valid      (_router_io_scratchPort_req_valid),
  //   .io_scratchPort_req_bits_addr  (_router_io_scratchPort_req_bits_addr),
  //   .io_scratchPort_req_bits_data  (_router_io_scratchPort_req_bits_data),
  //   .io_scratchPort_req_bits_fcn   (_router_io_scratchPort_req_bits_fcn),
  //   .io_scratchPort_req_bits_typ   (_router_io_scratchPort_req_bits_typ),
  //   .io_corePort_resp_valid        (_router_io_corePort_resp_valid),
  //   .io_corePort_resp_bits_data    (_router_io_corePort_resp_bits_data)
  // );
  // SodorRequestRouter router_1 (	// @[sodor_internal_tile.scala:126:24]
  //   // .io_masterPort_resp_valid      (io_master_port_1_resp_valid),
  //   .io_masterPort_resp_valid      (1'b0),
  //   .io_masterPort_resp_bits_data  (io_master_port_1_resp_bits_data),
  //   .io_scratchPort_resp_valid     (_memory_io_core_ports_1_resp_valid),	// @[sodor_internal_tile.scala:122:22]
  //   .io_scratchPort_resp_bits_data (_memory_io_core_ports_1_resp_bits_data),	// @[sodor_internal_tile.scala:122:22]
  //   .io_corePort_req_valid         (_core_io_imem_req_valid),	// @[sodor_internal_tile.scala:120:22]
  //   .io_corePort_req_bits_addr     (_core_io_imem_req_bits_addr),	// @[sodor_internal_tile.scala:120:22]
  //   .io_corePort_req_bits_data     (32'h0),	// @[sodor_internal_tile.scala:126:24]
  //   .io_corePort_req_bits_fcn      (1'h0),	// @[sodor_internal_tile.scala:126:24]
  //   .io_corePort_req_bits_typ      (3'h7),	// @[sodor_internal_tile.scala:126:24]
  //   .io_respAddress                (_core_io_imem_req_bits_addr),	// @[sodor_internal_tile.scala:120:22]
  //   .io_masterPort_req_valid       (io_master_port_1_req_valid),
  //   .io_masterPort_req_bits_addr   (io_master_port_1_req_bits_addr),
  //   .io_masterPort_req_bits_data   (io_master_port_1_req_bits_data),
  //   .io_masterPort_req_bits_fcn    (io_master_port_1_req_bits_fcn),
  //   .io_masterPort_req_bits_typ    (io_master_port_1_req_bits_typ),
  //   .io_scratchPort_req_valid      (_router_1_io_scratchPort_req_valid),
  //   .io_scratchPort_req_bits_addr  (_router_1_io_scratchPort_req_bits_addr),
  //   .io_scratchPort_req_bits_data  (_router_1_io_scratchPort_req_bits_data),
  //   .io_scratchPort_req_bits_fcn   (_router_1_io_scratchPort_req_bits_fcn),
  //   .io_scratchPort_req_bits_typ   (_router_1_io_scratchPort_req_bits_typ),
  //   .io_corePort_resp_valid        (_router_1_io_corePort_resp_valid),
  //   .io_corePort_resp_bits_data    (_router_1_io_corePort_resp_bits_data)
  // );
endmodule

