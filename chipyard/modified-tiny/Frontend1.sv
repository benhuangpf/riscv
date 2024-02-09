// module Frontend1(
//   input         clock,
//                 reset,
//                 auto_icache_master_out_a_ready,
//                 auto_icache_master_out_d_valid,
//   input  [2:0]  auto_icache_master_out_d_bits_opcode,
//   input  [3:0]  auto_icache_master_out_d_bits_size,
//   input  [31:0] auto_icache_master_out_d_bits_data,
//   input         auto_icache_master_out_d_bits_corrupt,
//                 io_cpu_might_request,
//                 io_cpu_req_valid,
//   input  [31:0] io_cpu_req_bits_pc,
//   input         io_cpu_req_bits_speculative,
//                 io_cpu_sfence_valid,
//                 io_cpu_resp_ready,
//                 io_cpu_btb_update_valid,
//                 io_cpu_bht_update_valid,
//                 io_cpu_flush_icache,
//                 io_ptw_status_debug,
//                 io_ptw_pmp_0_cfg_l,
//   input  [1:0]  io_ptw_pmp_0_cfg_a,
//   input         io_ptw_pmp_0_cfg_x,
//                 io_ptw_pmp_0_cfg_w,
//                 io_ptw_pmp_0_cfg_r,
//   input  [29:0] io_ptw_pmp_0_addr,
//   input  [31:0] io_ptw_pmp_0_mask,
//   input         io_ptw_pmp_1_cfg_l,
//   input  [1:0]  io_ptw_pmp_1_cfg_a,
//   input         io_ptw_pmp_1_cfg_x,
//                 io_ptw_pmp_1_cfg_w,
//                 io_ptw_pmp_1_cfg_r,
//   input  [29:0] io_ptw_pmp_1_addr,
//   input  [31:0] io_ptw_pmp_1_mask,
//   input         io_ptw_pmp_2_cfg_l,
//   input  [1:0]  io_ptw_pmp_2_cfg_a,
//   input         io_ptw_pmp_2_cfg_x,
//                 io_ptw_pmp_2_cfg_w,
//                 io_ptw_pmp_2_cfg_r,
//   input  [29:0] io_ptw_pmp_2_addr,
//   input  [31:0] io_ptw_pmp_2_mask,
//   input         io_ptw_pmp_3_cfg_l,
//   input  [1:0]  io_ptw_pmp_3_cfg_a,
//   input         io_ptw_pmp_3_cfg_x,
//                 io_ptw_pmp_3_cfg_w,
//                 io_ptw_pmp_3_cfg_r,
//   input  [29:0] io_ptw_pmp_3_addr,
//   input  [31:0] io_ptw_pmp_3_mask,
//   input         io_ptw_pmp_4_cfg_l,
//   input  [1:0]  io_ptw_pmp_4_cfg_a,
//   input         io_ptw_pmp_4_cfg_x,
//                 io_ptw_pmp_4_cfg_w,
//                 io_ptw_pmp_4_cfg_r,
//   input  [29:0] io_ptw_pmp_4_addr,
//   input  [31:0] io_ptw_pmp_4_mask,
//   input         io_ptw_pmp_5_cfg_l,
//   input  [1:0]  io_ptw_pmp_5_cfg_a,
//   input         io_ptw_pmp_5_cfg_x,
//                 io_ptw_pmp_5_cfg_w,
//                 io_ptw_pmp_5_cfg_r,
//   input  [29:0] io_ptw_pmp_5_addr,
//   input  [31:0] io_ptw_pmp_5_mask,
//   input         io_ptw_pmp_6_cfg_l,
//   input  [1:0]  io_ptw_pmp_6_cfg_a,
//   input         io_ptw_pmp_6_cfg_x,
//                 io_ptw_pmp_6_cfg_w,
//                 io_ptw_pmp_6_cfg_r,
//   input  [29:0] io_ptw_pmp_6_addr,
//   input  [31:0] io_ptw_pmp_6_mask,
//   input         io_ptw_pmp_7_cfg_l,
//   input  [1:0]  io_ptw_pmp_7_cfg_a,
//   input         io_ptw_pmp_7_cfg_x,
//                 io_ptw_pmp_7_cfg_w,
//                 io_ptw_pmp_7_cfg_r,
//   input  [29:0] io_ptw_pmp_7_addr,
//   input  [31:0] io_ptw_pmp_7_mask,
//                 io_ptw_customCSRs_csrs_0_value,
//   output        auto_icache_master_out_a_valid,
//   output [31:0] auto_icache_master_out_a_bits_address,
//   output        io_cpu_resp_valid,
//                 io_cpu_resp_bits_btb_taken,
//                 io_cpu_resp_bits_btb_bridx,
//   output [31:0] io_cpu_resp_bits_pc,
//                 io_cpu_resp_bits_data,
//   output        io_cpu_resp_bits_xcpt_pf_inst,
//                 io_cpu_resp_bits_xcpt_gf_inst,
//                 io_cpu_resp_bits_xcpt_ae_inst,
//                 io_cpu_resp_bits_replay,
//                 io_cpu_gpa_valid
// );
// // module Frontend(clk,
// //             rst_n,
// //             // // For mem_D
// //             // mem_wen_D,
// //             // mem_addr_D,
// //             // mem_wdata_D,
// //             // mem_rdata_D,
// //             // // For mem_I
// //             // mem_addr_I,
// //             // mem_rdata_I
// //   input         io_cpu_req_valid,
// //   input  [31:0] io_cpu_req_bits_pc,
// //                 io_cpu_resp_ready,
// //   output        io_cpu_resp_valid,
// //   output [31:0] io_cpu_resp_bits_pc,
// //                 io_cpu_resp_bits_data            
// // );

//     // For mem_D
//     wire        mem_wen_D  ;
//     wire [31:0] mem_addr_D ;
//     wire [31:0] mem_wdata_D;
//     wire  [31:0] mem_rdata_D;
//     // For mem_I
//     wire [31:0] mem_addr_I ;
//     wire  [31:0] mem_rdata_I;

//     reg  [31:0] mem_data_ans [0:`SIZE_DATA-1];
//     reg  [31:0] mem_text_offset;
//     reg  [31:0] mem_data_offset;
//     reg  [31:0] mem_stack_offset;

//     integer i;
    
//     integer eof;
//     reg eof_find;

//     integer error_num;

//     reg    [31:0] PC          ; 
//     reg    [31:0] PC_nxt      ;  
//     // reg resp_valid_nxt, resp_valid;
    
//     assign io_cpu_resp_valid = 1'b1;
//     assign io_cpu_resp_bits_pc = PC;
//     assign mem_addr_I = PC;
//     assign io_cpu_resp_bits_data = mem_rdata_I;

//     memory #(.word_depth(`SIZE_TEXT)) mem_text(
//         .clk(clk),
//         .rst_n(rst_n),
//         .wen(1'b0),
//         .a(mem_addr_I),
//         .d(32'd0),
//         .q(mem_rdata_I),
//         .offset(mem_text_offset));

//     memory #(.word_depth(`SIZE_DATA)) mem_data(
//         .clk(clk),
//         .rst_n(rst_n),
//         .wen(mem_wen_D),
//         .a(mem_addr_D),
//         .d(mem_wdata_D),
//         .q(mem_rdata_D),
//         .offset(mem_data_offset));

//     memory #(.word_depth(`SIZE_STACK)) mem_stack(
//         .clk(clk),
//         .rst_n(rst_n),
//         .wen(mem_wen_D),
//         .a(mem_addr_D),
//         .d(mem_wdata_D),
//         .q(mem_rdata_D),
//         .offset(mem_stack_offset));

//     // Initialize the data memory
//     initial begin
//         mem_text_offset = 32'h00000000;
//         // mem_stack_offset = 32'h00000000;
//         mem_stack_offset = 32'hbffffff4 - `SIZE_STACK*4;
//         eof_find = 0;

//         $readmemh (`MEM_TEXT, mem_text.mem); // initialize data in mem_I

//         for (i=0; i<`SIZE_TEXT; i=i+1) begin
//             if ((mem_text.mem[i] === 32'bx) && !eof_find) begin
//                 eof = mem_text_offset + i*4;
//                 eof_find = 1;
//             end
//         end

//         mem_data_offset = 32'h00000000;
//         // mem_data_offset = eof + 8;
                
//         for (i=0; i<`SIZE_TEXT; i=i+1) begin
//             mem_text.mem[i] = 32'h00_00_00_13;
//         end
//         $readmemh (`MEM_TEXT, mem_text.mem); // initialize data in mem_I
        
//         for (i=0; i<`SIZE_DATA; i=i+1) begin
//             mem_data.mem[i] = 0;
//             mem_data_ans[i] = 0;
//         end

        
//         $readmemh (`MEM_DATA, mem_data.mem); // initialize data in mem_D
//         $readmemh (`MEM_DATA_ANS, mem_data_ans); // initialize data in mem_D
        
//     end

//     //PC_nxt
//     always @(*)
//     begin
//         // resp_valid_nxt = 1'b1;
//         if(io_cpu_req_valid)
//         begin
//             PC_nxt = io_cpu_req_bits_pc;
//             // resp_valid_nxt = 1'b0;
//         end
//         // // mul, div (finish)
//         // if(ready)
//         // begin
//         //     PC_nxt = PC + 4;    
//         // end
//         // mul, div
//         else if(opcode == 7'b0110011 && funct7 == 7'b0000001)
//         begin
//             PC_nxt = PC;
//         end
//         // jal, beq, bne
//         else if((opcode == 7'b1101111) || (branch && ALUzero && (funct3 == 3'b000)) || (branch && (!ALUzero) && (funct3 == 3'b001)))
//         begin
//             PC_nxt = PC + imm;
//         end
//         // jalr
//         else if(opcode == 'b1100111)
//         begin
//             PC_nxt = rs1_data + imm;
//         end
//         // other
//         else 
//         begin
//             PC_nxt = PC + 4;
//         end
//     end
//     always @(posedge clock or negedge reset) begin
//         if (!reset) begin
//             PC <= 32'h00000000; // Do not modify this value!!!
//         end

//         else begin
//             PC <= PC_nxt;    
//         end
//     end
// endmodule