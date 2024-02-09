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

`define SIZE_TEXT 2048  // You can change the size
`define MEM_TEXT "./text.txt"

module Frontend(
  input         clock,
                reset,
                auto_icache_master_out_a_ready,
                auto_icache_master_out_d_valid,
  input  [2:0]  auto_icache_master_out_d_bits_opcode,
  input  [3:0]  auto_icache_master_out_d_bits_size,
  input  [31:0] auto_icache_master_out_d_bits_data,
  input         auto_icache_master_out_d_bits_corrupt,
                io_cpu_might_request,
                io_cpu_req_valid,
  input  [31:0] io_cpu_req_bits_pc,
  input         io_cpu_req_bits_speculative,
                io_cpu_sfence_valid,
                io_cpu_resp_ready,
                io_cpu_btb_update_valid,
                io_cpu_bht_update_valid,
                io_cpu_flush_icache,
                io_ptw_status_debug,
                io_ptw_pmp_0_cfg_l,
  input  [1:0]  io_ptw_pmp_0_cfg_a,
  input         io_ptw_pmp_0_cfg_x,
                io_ptw_pmp_0_cfg_w,
                io_ptw_pmp_0_cfg_r,
  input  [29:0] io_ptw_pmp_0_addr,
  input  [31:0] io_ptw_pmp_0_mask,
  input         io_ptw_pmp_1_cfg_l,
  input  [1:0]  io_ptw_pmp_1_cfg_a,
  input         io_ptw_pmp_1_cfg_x,
                io_ptw_pmp_1_cfg_w,
                io_ptw_pmp_1_cfg_r,
  input  [29:0] io_ptw_pmp_1_addr,
  input  [31:0] io_ptw_pmp_1_mask,
  input         io_ptw_pmp_2_cfg_l,
  input  [1:0]  io_ptw_pmp_2_cfg_a,
  input         io_ptw_pmp_2_cfg_x,
                io_ptw_pmp_2_cfg_w,
                io_ptw_pmp_2_cfg_r,
  input  [29:0] io_ptw_pmp_2_addr,
  input  [31:0] io_ptw_pmp_2_mask,
  input         io_ptw_pmp_3_cfg_l,
  input  [1:0]  io_ptw_pmp_3_cfg_a,
  input         io_ptw_pmp_3_cfg_x,
                io_ptw_pmp_3_cfg_w,
                io_ptw_pmp_3_cfg_r,
  input  [29:0] io_ptw_pmp_3_addr,
  input  [31:0] io_ptw_pmp_3_mask,
  input         io_ptw_pmp_4_cfg_l,
  input  [1:0]  io_ptw_pmp_4_cfg_a,
  input         io_ptw_pmp_4_cfg_x,
                io_ptw_pmp_4_cfg_w,
                io_ptw_pmp_4_cfg_r,
  input  [29:0] io_ptw_pmp_4_addr,
  input  [31:0] io_ptw_pmp_4_mask,
  input         io_ptw_pmp_5_cfg_l,
  input  [1:0]  io_ptw_pmp_5_cfg_a,
  input         io_ptw_pmp_5_cfg_x,
                io_ptw_pmp_5_cfg_w,
                io_ptw_pmp_5_cfg_r,
  input  [29:0] io_ptw_pmp_5_addr,
  input  [31:0] io_ptw_pmp_5_mask,
  input         io_ptw_pmp_6_cfg_l,
  input  [1:0]  io_ptw_pmp_6_cfg_a,
  input         io_ptw_pmp_6_cfg_x,
                io_ptw_pmp_6_cfg_w,
                io_ptw_pmp_6_cfg_r,
  input  [29:0] io_ptw_pmp_6_addr,
  input  [31:0] io_ptw_pmp_6_mask,
  input         io_ptw_pmp_7_cfg_l,
  input  [1:0]  io_ptw_pmp_7_cfg_a,
  input         io_ptw_pmp_7_cfg_x,
                io_ptw_pmp_7_cfg_w,
                io_ptw_pmp_7_cfg_r,
  input  [29:0] io_ptw_pmp_7_addr,
  input  [31:0] io_ptw_pmp_7_mask,
                io_ptw_customCSRs_csrs_0_value,
  output        auto_icache_master_out_a_valid,
  output [31:0] auto_icache_master_out_a_bits_address,
  output        io_cpu_resp_valid,
                io_cpu_resp_bits_btb_taken,
                io_cpu_resp_bits_btb_bridx,
  output [31:0] io_cpu_resp_bits_pc,
                io_cpu_resp_bits_data,
  output        io_cpu_resp_bits_xcpt_pf_inst,
                io_cpu_resp_bits_xcpt_gf_inst,
                io_cpu_resp_bits_xcpt_ae_inst,
                io_cpu_resp_bits_replay,
                io_cpu_gpa_valid
);

    integer i;
  
    // For mem_I
    wire [31:0] mem_addr_I ;
    wire  [31:0] mem_rdata_I;
    reg  [31:0] mem_text_offset;
    // reg [31:0] pc;
    wire [31:0] pc;
    reg  [31:0] pc_s1, pc_s2;
    reg resp_valid;
    reg  req_valid_s1, req_valid_s2, resp_valid_s1, resp_valid_s2;
    reg  [31:0] rdata_s1, rdata_s2;

    assign io_cpu_resp_bits_btb_taken = 1'b0;
    assign io_cpu_resp_bits_btb_bridx = 1'b0;
    assign io_cpu_resp_bits_xcpt_pf_inst = 1'b0;
    assign io_cpu_resp_bits_xcpt_gf_inst = 1'b0;
    assign io_cpu_resp_bits_xcpt_ae_inst = 1'b0;
    assign io_cpu_resp_bits_replay = 1'b0;
    assign io_cpu_gpa_valid = 1'b0;

    memory #(.word_depth(`SIZE_TEXT)) mem_text(
        .clk(clock),
        .rst_n(reset),
        .wen(1'b0),
        .a(mem_addr_I),
        .d(32'd0),
        .q(mem_rdata_I),
        .offset(mem_text_offset));

    initial begin
        mem_text_offset = 32'h80000000;   
    end

    assign mem_addr_I = pc;
    assign io_cpu_resp_bits_pc = pc_s2;
    assign io_cpu_resp_bits_data = rdata_s2;
    assign io_cpu_resp_valid = req_valid_s1? 1'b0 : resp_valid_s2;
    assign pc = (io_cpu_req_valid)? io_cpu_req_bits_pc : pc_s1 + 4;

    always @(posedge clock) begin
      if (reset) begin
        // pc <= 32'h80001048;
        pc_s1 <= 32'h80000000-32'h8;
        pc_s2 <= pc_s1;
        req_valid_s1 <= 1'b0;
        req_valid_s2 <= 1'b0;
        resp_valid = 1'b0;
        resp_valid_s1 <= 1'b0;
        resp_valid_s2 <= 1'b0;
        rdata_s1 <= 32'h0;
        rdata_s2 <= 32'h0;
      end
      else begin
        // if(io_cpu_req_valid) pc_s1 <= io_cpu_req_bits_pc;
        // else pc_s1 <= pc_s1 + 4;
        pc_s1 <= pc;
        pc_s2 <= pc_s1;
        req_valid_s1 <= io_cpu_req_valid;
        req_valid_s2 <= req_valid_s1;
        resp_valid <= 1'b1;
        resp_valid_s1 <= resp_valid;
        resp_valid_s2 <= resp_valid_s1;
        rdata_s1 <= mem_rdata_I;
        rdata_s2 <= rdata_s1;
      end
    end
endmodule



