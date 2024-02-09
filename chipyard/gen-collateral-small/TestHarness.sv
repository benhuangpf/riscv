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

module TestHarness(
  input  clock,
         reset,
  output io_success
);

  wire        _source_1_clk;	// @[HarnessClocks.scala:71:26]
  wire        _source_clk;	// @[HarnessClocks.scala:71:26]
  wire        _harnessBinderReset_catcher_io_sync_reset;	// @[ResetCatchAndSync.scala:39:28]
  wire        _uart_sim_0_uartno0_io_uart_rxd;	// @[UARTAdapter.scala:76:28]
  wire        _simdram_axi_aw_ready;	// @[HarnessBinders.scala:186:23]
  wire        _simdram_axi_w_ready;	// @[HarnessBinders.scala:186:23]
  wire        _simdram_axi_b_valid;	// @[HarnessBinders.scala:186:23]
  wire [3:0]  _simdram_axi_b_bits_id;	// @[HarnessBinders.scala:186:23]
  wire [1:0]  _simdram_axi_b_bits_resp;	// @[HarnessBinders.scala:186:23]
  wire        _simdram_axi_ar_ready;	// @[HarnessBinders.scala:186:23]
  wire        _simdram_axi_r_valid;	// @[HarnessBinders.scala:186:23]
  wire [3:0]  _simdram_axi_r_bits_id;	// @[HarnessBinders.scala:186:23]
  wire [31:0] _simdram_axi_r_bits_data;	// @[HarnessBinders.scala:186:23]
  wire [1:0]  _simdram_axi_r_bits_resp;	// @[HarnessBinders.scala:186:23]
  wire        _simdram_axi_r_bits_last;	// @[HarnessBinders.scala:186:23]
  wire        _plusarg_reader_1_out;	// @[PlusArg.scala:80:11]
  wire        _success_exit_sim_tsi_in_valid;	// @[SimTSI.scala:11:23]
  wire [31:0] _success_exit_sim_tsi_in_bits;	// @[SimTSI.scala:11:23]
  wire        _success_exit_sim_tsi_out_ready;	// @[SimTSI.scala:11:23]
  wire [31:0] _success_exit_sim_exit;	// @[SimTSI.scala:11:23]
  wire        _ram_io_ser_in_valid;	// @[TSIHarness.scala:24:24]
  wire [31:0] _ram_io_ser_in_bits;	// @[TSIHarness.scala:24:24]
  wire        _ram_io_ser_out_ready;	// @[TSIHarness.scala:24:24]
  wire        _ram_io_tsi_in_ready;	// @[TSIHarness.scala:24:24]
  wire        _ram_io_tsi_out_valid;	// @[TSIHarness.scala:24:24]
  wire [31:0] _ram_io_tsi_out_bits;	// @[TSIHarness.scala:24:24]
  wire [31:0] _plusarg_reader_out;	// @[PlusArg.scala:80:11]
  wire        _jtag_jtag_TRSTn;	// @[HarnessBinders.scala:261:26]
  wire        _jtag_jtag_TCK;	// @[HarnessBinders.scala:261:26]
  wire        _jtag_jtag_TMS;	// @[HarnessBinders.scala:261:26]
  wire        _jtag_jtag_TDI;	// @[HarnessBinders.scala:261:26]
  wire [31:0] _jtag_exit;	// @[HarnessBinders.scala:261:26]
  wire        _chiptop0_serial_tl_bits_in_ready;	// @[HasHarnessInstantiators.scala:82:40]
  wire        _chiptop0_serial_tl_bits_out_valid;	// @[HasHarnessInstantiators.scala:82:40]
  wire [31:0] _chiptop0_serial_tl_bits_out_bits;	// @[HasHarnessInstantiators.scala:82:40]
  wire        _chiptop0_axi4_mem_0_clock;	// @[HasHarnessInstantiators.scala:82:40]
  wire        _chiptop0_axi4_mem_0_reset;	// @[HasHarnessInstantiators.scala:82:40]
  wire        _chiptop0_axi4_mem_0_bits_aw_valid;	// @[HasHarnessInstantiators.scala:82:40]
  wire [3:0]  _chiptop0_axi4_mem_0_bits_aw_bits_id;	// @[HasHarnessInstantiators.scala:82:40]
  wire [31:0] _chiptop0_axi4_mem_0_bits_aw_bits_addr;	// @[HasHarnessInstantiators.scala:82:40]
  wire [7:0]  _chiptop0_axi4_mem_0_bits_aw_bits_len;	// @[HasHarnessInstantiators.scala:82:40]
  wire [2:0]  _chiptop0_axi4_mem_0_bits_aw_bits_size;	// @[HasHarnessInstantiators.scala:82:40]
  wire [1:0]  _chiptop0_axi4_mem_0_bits_aw_bits_burst;	// @[HasHarnessInstantiators.scala:82:40]
  wire        _chiptop0_axi4_mem_0_bits_aw_bits_lock;	// @[HasHarnessInstantiators.scala:82:40]
  wire [3:0]  _chiptop0_axi4_mem_0_bits_aw_bits_cache;	// @[HasHarnessInstantiators.scala:82:40]
  wire [2:0]  _chiptop0_axi4_mem_0_bits_aw_bits_prot;	// @[HasHarnessInstantiators.scala:82:40]
  wire [3:0]  _chiptop0_axi4_mem_0_bits_aw_bits_qos;	// @[HasHarnessInstantiators.scala:82:40]
  wire        _chiptop0_axi4_mem_0_bits_w_valid;	// @[HasHarnessInstantiators.scala:82:40]
  wire [31:0] _chiptop0_axi4_mem_0_bits_w_bits_data;	// @[HasHarnessInstantiators.scala:82:40]
  wire [3:0]  _chiptop0_axi4_mem_0_bits_w_bits_strb;	// @[HasHarnessInstantiators.scala:82:40]
  wire        _chiptop0_axi4_mem_0_bits_w_bits_last;	// @[HasHarnessInstantiators.scala:82:40]
  wire        _chiptop0_axi4_mem_0_bits_b_ready;	// @[HasHarnessInstantiators.scala:82:40]
  wire        _chiptop0_axi4_mem_0_bits_ar_valid;	// @[HasHarnessInstantiators.scala:82:40]
  wire [3:0]  _chiptop0_axi4_mem_0_bits_ar_bits_id;	// @[HasHarnessInstantiators.scala:82:40]
  wire [31:0] _chiptop0_axi4_mem_0_bits_ar_bits_addr;	// @[HasHarnessInstantiators.scala:82:40]
  wire [7:0]  _chiptop0_axi4_mem_0_bits_ar_bits_len;	// @[HasHarnessInstantiators.scala:82:40]
  wire [2:0]  _chiptop0_axi4_mem_0_bits_ar_bits_size;	// @[HasHarnessInstantiators.scala:82:40]
  wire [1:0]  _chiptop0_axi4_mem_0_bits_ar_bits_burst;	// @[HasHarnessInstantiators.scala:82:40]
  wire        _chiptop0_axi4_mem_0_bits_ar_bits_lock;	// @[HasHarnessInstantiators.scala:82:40]
  wire [3:0]  _chiptop0_axi4_mem_0_bits_ar_bits_cache;	// @[HasHarnessInstantiators.scala:82:40]
  wire [2:0]  _chiptop0_axi4_mem_0_bits_ar_bits_prot;	// @[HasHarnessInstantiators.scala:82:40]
  wire [3:0]  _chiptop0_axi4_mem_0_bits_ar_bits_qos;	// @[HasHarnessInstantiators.scala:82:40]
  wire        _chiptop0_axi4_mem_0_bits_r_ready;	// @[HasHarnessInstantiators.scala:82:40]
  wire        _chiptop0_jtag_TDO;	// @[HasHarnessInstantiators.scala:82:40]
  wire        _chiptop0_uart_0_txd;	// @[HasHarnessInstantiators.scala:82:40]
  `ifndef SYNTHESIS	// @[Periphery.scala:233:11]
    always @(posedge _source_1_clk) begin	// @[HarnessClocks.scala:71:26, Periphery.scala:233:11]
      if (~_harnessBinderReset_catcher_io_sync_reset & (|(_jtag_exit[31:1]))) begin	// @[HarnessBinders.scala:254:41, :261:26, Periphery.scala:233:{11,20,72}, ResetCatchAndSync.scala:39:28]
        if (`ASSERT_VERBOSE_COND_)	// @[Periphery.scala:233:11]
          $error("Assertion failed: *** FAILED *** (exit code = %d)\n\n    at Periphery.scala:233 assert(io.exit < 2.U, \"*** FAILED *** (exit code = %%%%d)\\n\", io.exit >> 1.U)\n", {1'h0, _jtag_exit[31:1]});	// @[HarnessBinders.scala:254:41, :261:26, Periphery.scala:233:{11,72}, TestHarness.scala:24:25]
        if (`STOP_COND_)	// @[Periphery.scala:233:11]
          $fatal;	// @[Periphery.scala:233:11]
      end
      if (~_harnessBinderReset_catcher_io_sync_reset & (|(_success_exit_sim_exit[31:1]))) begin	// @[ResetCatchAndSync.scala:39:28, SimTSI.scala:11:23, :19:22, :20:11]
        if (`ASSERT_VERBOSE_COND_)	// @[SimTSI.scala:20:11]
          $error("Assertion failed: *** FAILED *** (exit code = %d)\n\n    at SimTSI.scala:20 assert(!error, \"*** FAILED *** (exit code = %%%%d)\\n\", exit >> 1.U)\n", {1'h0, _success_exit_sim_exit[31:1]});	// @[HarnessBinders.scala:254:41, SimTSI.scala:11:23, :19:22, :20:{11,62}, TestHarness.scala:24:25]
        if (`STOP_COND_)	// @[SimTSI.scala:20:11]
          $fatal;	// @[SimTSI.scala:20:11]
      end
    end // always @(posedge)
  `endif // not def SYNTHESIS
  ChipTop chiptop0 (	// @[HasHarnessInstantiators.scala:82:40]
    .serial_tl_clock               (_source_1_clk),	// @[HarnessClocks.scala:71:26]
    .serial_tl_bits_in_valid       (_ram_io_ser_in_valid),	// @[TSIHarness.scala:24:24]
    .serial_tl_bits_in_bits        (_ram_io_ser_in_bits),	// @[TSIHarness.scala:24:24]
    .serial_tl_bits_out_ready      (_ram_io_ser_out_ready),	// @[TSIHarness.scala:24:24]
    .custom_boot                   (_plusarg_reader_1_out),	// @[PlusArg.scala:80:11]
    .reset_io                      (_harnessBinderReset_catcher_io_sync_reset),	// @[ResetCatchAndSync.scala:39:28]
    .clock_uncore_clock            (_source_clk),	// @[HarnessClocks.scala:71:26]
    .axi4_mem_0_bits_aw_ready      (_simdram_axi_aw_ready),	// @[HarnessBinders.scala:186:23]
    .axi4_mem_0_bits_w_ready       (_simdram_axi_w_ready),	// @[HarnessBinders.scala:186:23]
    .axi4_mem_0_bits_b_valid       (_simdram_axi_b_valid),	// @[HarnessBinders.scala:186:23]
    .axi4_mem_0_bits_b_bits_id     (_simdram_axi_b_bits_id),	// @[HarnessBinders.scala:186:23]
    .axi4_mem_0_bits_b_bits_resp   (_simdram_axi_b_bits_resp),	// @[HarnessBinders.scala:186:23]
    .axi4_mem_0_bits_ar_ready      (_simdram_axi_ar_ready),	// @[HarnessBinders.scala:186:23]
    .axi4_mem_0_bits_r_valid       (_simdram_axi_r_valid),	// @[HarnessBinders.scala:186:23]
    .axi4_mem_0_bits_r_bits_id     (_simdram_axi_r_bits_id),	// @[HarnessBinders.scala:186:23]
    .axi4_mem_0_bits_r_bits_data   (_simdram_axi_r_bits_data),	// @[HarnessBinders.scala:186:23]
    .axi4_mem_0_bits_r_bits_resp   (_simdram_axi_r_bits_resp),	// @[HarnessBinders.scala:186:23]
    .axi4_mem_0_bits_r_bits_last   (_simdram_axi_r_bits_last),	// @[HarnessBinders.scala:186:23]
    .jtag_TCK                      (_jtag_jtag_TCK),	// @[HarnessBinders.scala:261:26]
    .jtag_TMS                      (_jtag_jtag_TMS),	// @[HarnessBinders.scala:261:26]
    .jtag_TDI                      (_jtag_jtag_TDI),	// @[HarnessBinders.scala:261:26]
    .uart_0_rxd                    (_uart_sim_0_uartno0_io_uart_rxd),	// @[UARTAdapter.scala:76:28]
    .serial_tl_bits_in_ready       (_chiptop0_serial_tl_bits_in_ready),
    .serial_tl_bits_out_valid      (_chiptop0_serial_tl_bits_out_valid),
    .serial_tl_bits_out_bits       (_chiptop0_serial_tl_bits_out_bits),
    .axi4_mem_0_clock              (_chiptop0_axi4_mem_0_clock),
    .axi4_mem_0_reset              (_chiptop0_axi4_mem_0_reset),
    .axi4_mem_0_bits_aw_valid      (_chiptop0_axi4_mem_0_bits_aw_valid),
    .axi4_mem_0_bits_aw_bits_id    (_chiptop0_axi4_mem_0_bits_aw_bits_id),
    .axi4_mem_0_bits_aw_bits_addr  (_chiptop0_axi4_mem_0_bits_aw_bits_addr),
    .axi4_mem_0_bits_aw_bits_len   (_chiptop0_axi4_mem_0_bits_aw_bits_len),
    .axi4_mem_0_bits_aw_bits_size  (_chiptop0_axi4_mem_0_bits_aw_bits_size),
    .axi4_mem_0_bits_aw_bits_burst (_chiptop0_axi4_mem_0_bits_aw_bits_burst),
    .axi4_mem_0_bits_aw_bits_lock  (_chiptop0_axi4_mem_0_bits_aw_bits_lock),
    .axi4_mem_0_bits_aw_bits_cache (_chiptop0_axi4_mem_0_bits_aw_bits_cache),
    .axi4_mem_0_bits_aw_bits_prot  (_chiptop0_axi4_mem_0_bits_aw_bits_prot),
    .axi4_mem_0_bits_aw_bits_qos   (_chiptop0_axi4_mem_0_bits_aw_bits_qos),
    .axi4_mem_0_bits_w_valid       (_chiptop0_axi4_mem_0_bits_w_valid),
    .axi4_mem_0_bits_w_bits_data   (_chiptop0_axi4_mem_0_bits_w_bits_data),
    .axi4_mem_0_bits_w_bits_strb   (_chiptop0_axi4_mem_0_bits_w_bits_strb),
    .axi4_mem_0_bits_w_bits_last   (_chiptop0_axi4_mem_0_bits_w_bits_last),
    .axi4_mem_0_bits_b_ready       (_chiptop0_axi4_mem_0_bits_b_ready),
    .axi4_mem_0_bits_ar_valid      (_chiptop0_axi4_mem_0_bits_ar_valid),
    .axi4_mem_0_bits_ar_bits_id    (_chiptop0_axi4_mem_0_bits_ar_bits_id),
    .axi4_mem_0_bits_ar_bits_addr  (_chiptop0_axi4_mem_0_bits_ar_bits_addr),
    .axi4_mem_0_bits_ar_bits_len   (_chiptop0_axi4_mem_0_bits_ar_bits_len),
    .axi4_mem_0_bits_ar_bits_size  (_chiptop0_axi4_mem_0_bits_ar_bits_size),
    .axi4_mem_0_bits_ar_bits_burst (_chiptop0_axi4_mem_0_bits_ar_bits_burst),
    .axi4_mem_0_bits_ar_bits_lock  (_chiptop0_axi4_mem_0_bits_ar_bits_lock),
    .axi4_mem_0_bits_ar_bits_cache (_chiptop0_axi4_mem_0_bits_ar_bits_cache),
    .axi4_mem_0_bits_ar_bits_prot  (_chiptop0_axi4_mem_0_bits_ar_bits_prot),
    .axi4_mem_0_bits_ar_bits_qos   (_chiptop0_axi4_mem_0_bits_ar_bits_qos),
    .axi4_mem_0_bits_r_ready       (_chiptop0_axi4_mem_0_bits_r_ready),
    .jtag_TDO                      (_chiptop0_jtag_TDO),
    .uart_0_txd                    (_chiptop0_uart_0_txd)
  );
  SimJTAG #(
    .TICK_DELAY(3)
  ) jtag (	// @[HarnessBinders.scala:261:26]
    .clock           (_source_1_clk),	// @[HarnessClocks.scala:71:26]
    .reset           (_harnessBinderReset_catcher_io_sync_reset),	// @[ResetCatchAndSync.scala:39:28]
    .jtag_TDO_data   (_chiptop0_jtag_TDO),	// @[HasHarnessInstantiators.scala:82:40]
    .jtag_TDO_driven (1'h1),	// @[HarnessBinders.scala:254:41]
    .enable          (_plusarg_reader_out[0]),	// @[Periphery.scala:227:18, PlusArg.scala:80:11]
    .init_done       (~_harnessBinderReset_catcher_io_sync_reset),	// @[HarnessBinders.scala:262:86, ResetCatchAndSync.scala:39:28]
    .jtag_TRSTn      (_jtag_jtag_TRSTn),
    .jtag_TCK        (_jtag_jtag_TCK),
    .jtag_TMS        (_jtag_jtag_TMS),
    .jtag_TDI        (_jtag_jtag_TDI),
    .exit            (_jtag_exit)
  );
  plusarg_reader_TestHarness_UNIQUIFIED #(
    .FORMAT("jtag_rbb_enable=%d"),
    .DEFAULT(0),
    .WIDTH(32)
  ) plusarg_reader_TestHarness_UNIQUIFIED (	// @[PlusArg.scala:80:11]
    .out (_plusarg_reader_out)
  );
  SerialRAM ram (	// @[TSIHarness.scala:24:24]
    .clock            (_source_1_clk),	// @[HarnessClocks.scala:71:26]
    .reset            (_harnessBinderReset_catcher_io_sync_reset),	// @[ResetCatchAndSync.scala:39:28]
    .io_ser_in_ready  (_chiptop0_serial_tl_bits_in_ready),	// @[HasHarnessInstantiators.scala:82:40]
    .io_ser_out_valid (_chiptop0_serial_tl_bits_out_valid),	// @[HasHarnessInstantiators.scala:82:40]
    .io_ser_out_bits  (_chiptop0_serial_tl_bits_out_bits),	// @[HasHarnessInstantiators.scala:82:40]
    .io_tsi_in_valid  (_success_exit_sim_tsi_in_valid),	// @[SimTSI.scala:11:23]
    .io_tsi_in_bits   (_success_exit_sim_tsi_in_bits),	// @[SimTSI.scala:11:23]
    .io_tsi_out_ready (_success_exit_sim_tsi_out_ready),	// @[SimTSI.scala:11:23]
    .io_ser_in_valid  (_ram_io_ser_in_valid),
    .io_ser_in_bits   (_ram_io_ser_in_bits),
    .io_ser_out_ready (_ram_io_ser_out_ready),
    .io_tsi_in_ready  (_ram_io_tsi_in_ready),
    .io_tsi_out_valid (_ram_io_tsi_out_valid),
    .io_tsi_out_bits  (_ram_io_tsi_out_bits)
  );
  SimTSI success_exit_sim (	// @[SimTSI.scala:11:23]
    .clock         (_source_1_clk),	// @[HarnessClocks.scala:71:26]
    .reset         (_harnessBinderReset_catcher_io_sync_reset),	// @[ResetCatchAndSync.scala:39:28]
    .tsi_in_ready  (_ram_io_tsi_in_ready),	// @[TSIHarness.scala:24:24]
    .tsi_out_valid (_ram_io_tsi_out_valid),	// @[TSIHarness.scala:24:24]
    .tsi_out_bits  (_ram_io_tsi_out_bits),	// @[TSIHarness.scala:24:24]
    .tsi_in_valid  (_success_exit_sim_tsi_in_valid),
    .tsi_in_bits   (_success_exit_sim_tsi_in_bits),
    .tsi_out_ready (_success_exit_sim_tsi_out_ready),
    .exit          (_success_exit_sim_exit)
  );
  plusarg_reader_TestHarness_UNIQUIFIED #(
    .FORMAT("custom_boot_pin=%d"),
    .DEFAULT(0),
    .WIDTH(1)
  ) plusarg_reader_1 (	// @[PlusArg.scala:80:11]
    .out (_plusarg_reader_1_out)
  );
  SimDRAM #(
    .MEM_BASE(40'd2147483648),
    .LINE_SIZE(64),
    .CLOCK_HZ(500000000),
    .ID_BITS(4),
    .ADDR_BITS(32),
    .MEM_SIZE(268435456),
    .DATA_BITS(32)
  ) simdram (	// @[HarnessBinders.scala:186:23]
    .clock             (_chiptop0_axi4_mem_0_clock),	// @[HasHarnessInstantiators.scala:82:40]
    .reset             (_chiptop0_axi4_mem_0_reset),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_aw_valid      (_chiptop0_axi4_mem_0_bits_aw_valid),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_aw_bits_id    (_chiptop0_axi4_mem_0_bits_aw_bits_id),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_aw_bits_addr  (_chiptop0_axi4_mem_0_bits_aw_bits_addr),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_aw_bits_len   (_chiptop0_axi4_mem_0_bits_aw_bits_len),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_aw_bits_size  (_chiptop0_axi4_mem_0_bits_aw_bits_size),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_aw_bits_burst (_chiptop0_axi4_mem_0_bits_aw_bits_burst),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_aw_bits_lock  (_chiptop0_axi4_mem_0_bits_aw_bits_lock),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_aw_bits_cache (_chiptop0_axi4_mem_0_bits_aw_bits_cache),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_aw_bits_prot  (_chiptop0_axi4_mem_0_bits_aw_bits_prot),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_aw_bits_qos   (_chiptop0_axi4_mem_0_bits_aw_bits_qos),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_w_valid       (_chiptop0_axi4_mem_0_bits_w_valid),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_w_bits_data   (_chiptop0_axi4_mem_0_bits_w_bits_data),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_w_bits_strb   (_chiptop0_axi4_mem_0_bits_w_bits_strb),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_w_bits_last   (_chiptop0_axi4_mem_0_bits_w_bits_last),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_b_ready       (_chiptop0_axi4_mem_0_bits_b_ready),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_ar_valid      (_chiptop0_axi4_mem_0_bits_ar_valid),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_ar_bits_id    (_chiptop0_axi4_mem_0_bits_ar_bits_id),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_ar_bits_addr  (_chiptop0_axi4_mem_0_bits_ar_bits_addr),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_ar_bits_len   (_chiptop0_axi4_mem_0_bits_ar_bits_len),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_ar_bits_size  (_chiptop0_axi4_mem_0_bits_ar_bits_size),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_ar_bits_burst (_chiptop0_axi4_mem_0_bits_ar_bits_burst),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_ar_bits_lock  (_chiptop0_axi4_mem_0_bits_ar_bits_lock),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_ar_bits_cache (_chiptop0_axi4_mem_0_bits_ar_bits_cache),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_ar_bits_prot  (_chiptop0_axi4_mem_0_bits_ar_bits_prot),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_ar_bits_qos   (_chiptop0_axi4_mem_0_bits_ar_bits_qos),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_r_ready       (_chiptop0_axi4_mem_0_bits_r_ready),	// @[HasHarnessInstantiators.scala:82:40]
    .axi_aw_ready      (_simdram_axi_aw_ready),
    .axi_w_ready       (_simdram_axi_w_ready),
    .axi_b_valid       (_simdram_axi_b_valid),
    .axi_b_bits_id     (_simdram_axi_b_bits_id),
    .axi_b_bits_resp   (_simdram_axi_b_bits_resp),
    .axi_ar_ready      (_simdram_axi_ar_ready),
    .axi_r_valid       (_simdram_axi_r_valid),
    .axi_r_bits_id     (_simdram_axi_r_bits_id),
    .axi_r_bits_data   (_simdram_axi_r_bits_data),
    .axi_r_bits_resp   (_simdram_axi_r_bits_resp),
    .axi_r_bits_last   (_simdram_axi_r_bits_last)
  );
  UARTAdapter uart_sim_0_uartno0 (	// @[UARTAdapter.scala:76:28]
    .clock       (_source_1_clk),	// @[HarnessClocks.scala:71:26]
    .reset       (_harnessBinderReset_catcher_io_sync_reset),	// @[ResetCatchAndSync.scala:39:28]
    .io_uart_txd (_chiptop0_uart_0_txd),	// @[HasHarnessInstantiators.scala:82:40]
    .io_uart_rxd (_uart_sim_0_uartno0_io_uart_rxd)
  );
  ResetCatchAndSync_d3_TestHarness_UNIQUIFIED harnessBinderReset_catcher (	// @[ResetCatchAndSync.scala:39:28]
    .clock         (_source_1_clk),	// @[HarnessClocks.scala:71:26]
    .reset         (reset),
    .io_sync_reset (_harnessBinderReset_catcher_io_sync_reset)
  );
  ClockSourceAtFreqMHz #(
    .PERIOD(2.000000e+00)
  ) source (	// @[HarnessClocks.scala:71:26]
    .power (1'h1),	// @[HarnessBinders.scala:254:41]
    .gate  (1'h0),	// @[TestHarness.scala:24:25]
    .clk   (_source_clk)
  );
  ClockSourceAtFreqMHz #(
    .PERIOD(1.000000e+01)
  ) source_1 (	// @[HarnessClocks.scala:71:26]
    .power (1'h1),	// @[HarnessBinders.scala:254:41]
    .gate  (1'h0),	// @[TestHarness.scala:24:25]
    .clk   (_source_1_clk)
  );
  assign io_success = _success_exit_sim_exit == 32'h1 | _jtag_exit == 32'h1;	// @[HarnessBinders.scala:254:28, :261:26, :315:{22,35}, Periphery.scala:232:26, SimTSI.scala:11:23, :18:24]
endmodule

