// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


VL_ATTR_COLD void VTop___024root__trace_init_sub__TOP__0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+71,"clock", false,-1);
    tracep->declBit(c+72,"reset", false,-1);
    tracep->declBus(c+73,"io_ans", false,-1, 31,0);
    tracep->declBus(c+74,"io_addr", false,-1, 31,0);
    tracep->declBus(c+75,"io_inst", false,-1, 31,0);
    tracep->declBit(c+76,"io_bundleCtrl_ctrlJump", false,-1);
    tracep->declBit(c+77,"io_bundleCtrl_ctrlBranch", false,-1);
    tracep->declBit(c+78,"io_bundleCtrl_ctrlRegWrite", false,-1);
    tracep->declBit(c+79,"io_bundleCtrl_ctrlLoad", false,-1);
    tracep->declBit(c+80,"io_bundleCtrl_ctrlStore", false,-1);
    tracep->declBit(c+81,"io_bundleCtrl_ctrlALUSrc", false,-1);
    tracep->declBit(c+82,"io_bundleCtrl_ctrlJAL", false,-1);
    tracep->declBus(c+83,"io_bundleCtrl_ctrlOP", false,-1, 3,0);
    tracep->declBit(c+84,"io_bundleCtrl_ctrlSigned", false,-1);
    tracep->declBus(c+85,"io_bundleCtrl_ctrlLSType", false,-1, 1,0);
    tracep->declBus(c+86,"io_resultALU", false,-1, 31,0);
    tracep->declBus(c+87,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+88,"io_rs2", false,-1, 31,0);
    tracep->declBus(c+89,"io_imm", false,-1, 31,0);
    tracep->declBit(c+90,"io_resultBranch", false,-1);
    tracep->declBus(c+91,"io_result", false,-1, 31,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+71,"clock", false,-1);
    tracep->declBit(c+72,"reset", false,-1);
    tracep->declBus(c+73,"io_ans", false,-1, 31,0);
    tracep->declBus(c+74,"io_addr", false,-1, 31,0);
    tracep->declBus(c+75,"io_inst", false,-1, 31,0);
    tracep->declBit(c+76,"io_bundleCtrl_ctrlJump", false,-1);
    tracep->declBit(c+77,"io_bundleCtrl_ctrlBranch", false,-1);
    tracep->declBit(c+78,"io_bundleCtrl_ctrlRegWrite", false,-1);
    tracep->declBit(c+79,"io_bundleCtrl_ctrlLoad", false,-1);
    tracep->declBit(c+80,"io_bundleCtrl_ctrlStore", false,-1);
    tracep->declBit(c+81,"io_bundleCtrl_ctrlALUSrc", false,-1);
    tracep->declBit(c+82,"io_bundleCtrl_ctrlJAL", false,-1);
    tracep->declBus(c+83,"io_bundleCtrl_ctrlOP", false,-1, 3,0);
    tracep->declBit(c+84,"io_bundleCtrl_ctrlSigned", false,-1);
    tracep->declBus(c+85,"io_bundleCtrl_ctrlLSType", false,-1, 1,0);
    tracep->declBus(c+86,"io_resultALU", false,-1, 31,0);
    tracep->declBus(c+87,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+88,"io_rs2", false,-1, 31,0);
    tracep->declBus(c+89,"io_imm", false,-1, 31,0);
    tracep->declBit(c+90,"io_resultBranch", false,-1);
    tracep->declBus(c+91,"io_result", false,-1, 31,0);
    tracep->declBit(c+71,"pcReg_clock", false,-1);
    tracep->declBit(c+72,"pcReg_reset", false,-1);
    tracep->declBus(c+1,"pcReg_io_addrOut", false,-1, 31,0);
    tracep->declBit(c+2,"pcReg_io_ctrlJump", false,-1);
    tracep->declBit(c+3,"pcReg_io_ctrlBranch", false,-1);
    tracep->declBit(c+4,"pcReg_io_resultBranch", false,-1);
    tracep->declBus(c+5,"pcReg_io_addrTarget", false,-1, 31,0);
    tracep->declBit(c+71,"memInst_clock", false,-1);
    tracep->declBus(c+1,"memInst_io_addr", false,-1, 31,0);
    tracep->declBus(c+6,"memInst_io_inst", false,-1, 31,0);
    tracep->declBus(c+6,"decoder_io_inst", false,-1, 31,0);
    tracep->declBit(c+2,"decoder_io_bundleCtrl_ctrlJump", false,-1);
    tracep->declBit(c+3,"decoder_io_bundleCtrl_ctrlBranch", false,-1);
    tracep->declBit(c+7,"decoder_io_bundleCtrl_ctrlRegWrite", false,-1);
    tracep->declBit(c+8,"decoder_io_bundleCtrl_ctrlLoad", false,-1);
    tracep->declBit(c+9,"decoder_io_bundleCtrl_ctrlStore", false,-1);
    tracep->declBit(c+10,"decoder_io_bundleCtrl_ctrlALUSrc", false,-1);
    tracep->declBit(c+11,"decoder_io_bundleCtrl_ctrlJAL", false,-1);
    tracep->declBus(c+12,"decoder_io_bundleCtrl_ctrlOP", false,-1, 3,0);
    tracep->declBit(c+13,"decoder_io_bundleCtrl_ctrlSigned", false,-1);
    tracep->declBus(c+14,"decoder_io_bundleCtrl_ctrlLSType", false,-1, 1,0);
    tracep->declBus(c+15,"decoder_io_bundleReg_rs1", false,-1, 4,0);
    tracep->declBus(c+16,"decoder_io_bundleReg_rs2", false,-1, 4,0);
    tracep->declBus(c+17,"decoder_io_bundleReg_rd", false,-1, 4,0);
    tracep->declBus(c+18,"decoder_io_imm", false,-1, 31,0);
    tracep->declBit(c+71,"registers_clock", false,-1);
    tracep->declBit(c+7,"registers_io_ctrlRegWrite", false,-1);
    tracep->declBit(c+2,"registers_io_ctrlJump", false,-1);
    tracep->declBus(c+1,"registers_io_pc", false,-1, 31,0);
    tracep->declBus(c+5,"registers_io_dataWrite", false,-1, 31,0);
    tracep->declBus(c+15,"registers_io_bundleReg_rs1", false,-1, 4,0);
    tracep->declBus(c+16,"registers_io_bundleReg_rs2", false,-1, 4,0);
    tracep->declBus(c+17,"registers_io_bundleReg_rd", false,-1, 4,0);
    tracep->declBus(c+19,"registers_io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+20,"registers_io_dataRead2", false,-1, 31,0);
    tracep->declBit(c+10,"alu_io_bundleAluControl_ctrlALUSrc", false,-1);
    tracep->declBit(c+11,"alu_io_bundleAluControl_ctrlJAL", false,-1);
    tracep->declBus(c+12,"alu_io_bundleAluControl_ctrlOP", false,-1, 3,0);
    tracep->declBit(c+13,"alu_io_bundleAluControl_ctrlSigned", false,-1);
    tracep->declBit(c+3,"alu_io_bundleAluControl_ctrlBranch", false,-1);
    tracep->declBus(c+19,"alu_io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+20,"alu_io_dataRead2", false,-1, 31,0);
    tracep->declBus(c+18,"alu_io_imm", false,-1, 31,0);
    tracep->declBus(c+1,"alu_io_pc", false,-1, 31,0);
    tracep->declBit(c+4,"alu_io_resultBranch", false,-1);
    tracep->declBus(c+21,"alu_io_resultAlu", false,-1, 31,0);
    tracep->declBit(c+71,"memData_clock", false,-1);
    tracep->declBit(c+8,"memData_io_bundleMemDataControl_ctrlLoad", false,-1);
    tracep->declBit(c+9,"memData_io_bundleMemDataControl_ctrlStore", false,-1);
    tracep->declBit(c+13,"memData_io_bundleMemDataControl_ctrlSigned", false,-1);
    tracep->declBus(c+22,"memData_io_bundleMemDataControl_ctrlLSType", false,-1, 1,0);
    tracep->declBus(c+21,"memData_io_resultALU", false,-1, 31,0);
    tracep->declBus(c+20,"memData_io_dataStore", false,-1, 31,0);
    tracep->declBus(c+5,"memData_io_result", false,-1, 31,0);
    tracep->declBit(c+2,"controller_io_bundleControlIn_ctrlJump", false,-1);
    tracep->declBit(c+3,"controller_io_bundleControlIn_ctrlBranch", false,-1);
    tracep->declBit(c+7,"controller_io_bundleControlIn_ctrlRegWrite", false,-1);
    tracep->declBit(c+8,"controller_io_bundleControlIn_ctrlLoad", false,-1);
    tracep->declBit(c+9,"controller_io_bundleControlIn_ctrlStore", false,-1);
    tracep->declBit(c+10,"controller_io_bundleControlIn_ctrlALUSrc", false,-1);
    tracep->declBit(c+11,"controller_io_bundleControlIn_ctrlJAL", false,-1);
    tracep->declBus(c+12,"controller_io_bundleControlIn_ctrlOP", false,-1, 3,0);
    tracep->declBit(c+13,"controller_io_bundleControlIn_ctrlSigned", false,-1);
    tracep->declBit(c+10,"controller_io_bundleAluControl_ctrlALUSrc", false,-1);
    tracep->declBit(c+11,"controller_io_bundleAluControl_ctrlJAL", false,-1);
    tracep->declBus(c+12,"controller_io_bundleAluControl_ctrlOP", false,-1, 3,0);
    tracep->declBit(c+13,"controller_io_bundleAluControl_ctrlSigned", false,-1);
    tracep->declBit(c+3,"controller_io_bundleAluControl_ctrlBranch", false,-1);
    tracep->declBit(c+8,"controller_io_bundleMemDataControl_ctrlLoad", false,-1);
    tracep->declBit(c+9,"controller_io_bundleMemDataControl_ctrlStore", false,-1);
    tracep->declBit(c+13,"controller_io_bundleMemDataControl_ctrlSigned", false,-1);
    tracep->declBus(c+22,"controller_io_bundleMemDataControl_ctrlLSType", false,-1, 1,0);
    tracep->declBit(c+2,"controller_io_bundleControlOut_ctrlJump", false,-1);
    tracep->declBit(c+3,"controller_io_bundleControlOut_ctrlBranch", false,-1);
    tracep->declBit(c+7,"controller_io_bundleControlOut_ctrlRegWrite", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+10,"io_bundleAluControl_ctrlALUSrc", false,-1);
    tracep->declBit(c+11,"io_bundleAluControl_ctrlJAL", false,-1);
    tracep->declBus(c+12,"io_bundleAluControl_ctrlOP", false,-1, 3,0);
    tracep->declBit(c+13,"io_bundleAluControl_ctrlSigned", false,-1);
    tracep->declBit(c+3,"io_bundleAluControl_ctrlBranch", false,-1);
    tracep->declBus(c+19,"io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+20,"io_dataRead2", false,-1, 31,0);
    tracep->declBus(c+18,"io_imm", false,-1, 31,0);
    tracep->declBus(c+1,"io_pc", false,-1, 31,0);
    tracep->declBit(c+4,"io_resultBranch", false,-1);
    tracep->declBus(c+21,"io_resultAlu", false,-1, 31,0);
    tracep->declBus(c+23,"oprand1", false,-1, 31,0);
    tracep->declBus(c+24,"oprand2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("controller ");
    tracep->declBit(c+2,"io_bundleControlIn_ctrlJump", false,-1);
    tracep->declBit(c+3,"io_bundleControlIn_ctrlBranch", false,-1);
    tracep->declBit(c+7,"io_bundleControlIn_ctrlRegWrite", false,-1);
    tracep->declBit(c+8,"io_bundleControlIn_ctrlLoad", false,-1);
    tracep->declBit(c+9,"io_bundleControlIn_ctrlStore", false,-1);
    tracep->declBit(c+10,"io_bundleControlIn_ctrlALUSrc", false,-1);
    tracep->declBit(c+11,"io_bundleControlIn_ctrlJAL", false,-1);
    tracep->declBus(c+12,"io_bundleControlIn_ctrlOP", false,-1, 3,0);
    tracep->declBit(c+13,"io_bundleControlIn_ctrlSigned", false,-1);
    tracep->declBit(c+10,"io_bundleAluControl_ctrlALUSrc", false,-1);
    tracep->declBit(c+11,"io_bundleAluControl_ctrlJAL", false,-1);
    tracep->declBus(c+12,"io_bundleAluControl_ctrlOP", false,-1, 3,0);
    tracep->declBit(c+13,"io_bundleAluControl_ctrlSigned", false,-1);
    tracep->declBit(c+3,"io_bundleAluControl_ctrlBranch", false,-1);
    tracep->declBit(c+8,"io_bundleMemDataControl_ctrlLoad", false,-1);
    tracep->declBit(c+9,"io_bundleMemDataControl_ctrlStore", false,-1);
    tracep->declBit(c+13,"io_bundleMemDataControl_ctrlSigned", false,-1);
    tracep->declBus(c+22,"io_bundleMemDataControl_ctrlLSType", false,-1, 1,0);
    tracep->declBit(c+2,"io_bundleControlOut_ctrlJump", false,-1);
    tracep->declBit(c+3,"io_bundleControlOut_ctrlBranch", false,-1);
    tracep->declBit(c+7,"io_bundleControlOut_ctrlRegWrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder ");
    tracep->declBus(c+6,"io_inst", false,-1, 31,0);
    tracep->declBit(c+2,"io_bundleCtrl_ctrlJump", false,-1);
    tracep->declBit(c+3,"io_bundleCtrl_ctrlBranch", false,-1);
    tracep->declBit(c+7,"io_bundleCtrl_ctrlRegWrite", false,-1);
    tracep->declBit(c+8,"io_bundleCtrl_ctrlLoad", false,-1);
    tracep->declBit(c+9,"io_bundleCtrl_ctrlStore", false,-1);
    tracep->declBit(c+10,"io_bundleCtrl_ctrlALUSrc", false,-1);
    tracep->declBit(c+11,"io_bundleCtrl_ctrlJAL", false,-1);
    tracep->declBus(c+12,"io_bundleCtrl_ctrlOP", false,-1, 3,0);
    tracep->declBit(c+13,"io_bundleCtrl_ctrlSigned", false,-1);
    tracep->declBus(c+14,"io_bundleCtrl_ctrlLSType", false,-1, 1,0);
    tracep->declBus(c+15,"io_bundleReg_rs1", false,-1, 4,0);
    tracep->declBus(c+16,"io_bundleReg_rs2", false,-1, 4,0);
    tracep->declBus(c+17,"io_bundleReg_rd", false,-1, 4,0);
    tracep->declBus(c+18,"io_imm", false,-1, 31,0);
    tracep->declBus(c+25,"imm_i", false,-1, 31,0);
    tracep->declBus(c+26,"imm_s", false,-1, 31,0);
    tracep->declBus(c+27,"imm_b", false,-1, 31,0);
    tracep->declBus(c+28,"imm_u", false,-1, 31,0);
    tracep->declQuad(c+29,"imm_j", false,-1, 32,0);
    tracep->declBus(c+31,"imm_shamt", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memData ");
    tracep->declBit(c+71,"clock", false,-1);
    tracep->declBit(c+8,"io_bundleMemDataControl_ctrlLoad", false,-1);
    tracep->declBit(c+9,"io_bundleMemDataControl_ctrlStore", false,-1);
    tracep->declBit(c+13,"io_bundleMemDataControl_ctrlSigned", false,-1);
    tracep->declBus(c+22,"io_bundleMemDataControl_ctrlLSType", false,-1, 1,0);
    tracep->declBus(c+21,"io_resultALU", false,-1, 31,0);
    tracep->declBus(c+20,"io_dataStore", false,-1, 31,0);
    tracep->declBus(c+5,"io_result", false,-1, 31,0);
    tracep->declBit(c+92,"mem_dataLoad_MPORT_en", false,-1);
    tracep->declBus(c+32,"mem_dataLoad_MPORT_addr", false,-1, 9,0);
    tracep->declBus(c+33,"mem_dataLoad_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+20,"mem_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+32,"mem_MPORT_addr", false,-1, 9,0);
    tracep->declBit(c+92,"mem_MPORT_mask", false,-1);
    tracep->declBit(c+93,"mem_MPORT_en", false,-1);
    tracep->declBus(c+34,"mem_MPORT_1_data", false,-1, 31,0);
    tracep->declBus(c+32,"mem_MPORT_1_addr", false,-1, 9,0);
    tracep->declBit(c+92,"mem_MPORT_1_mask", false,-1);
    tracep->declBit(c+35,"mem_MPORT_1_en", false,-1);
    tracep->declBus(c+36,"mem_MPORT_2_data", false,-1, 31,0);
    tracep->declBus(c+32,"mem_MPORT_2_addr", false,-1, 9,0);
    tracep->declBit(c+92,"mem_MPORT_2_mask", false,-1);
    tracep->declBit(c+37,"mem_MPORT_2_en", false,-1);
    tracep->declBus(c+33,"dataLoad", false,-1, 31,0);
    tracep->declBus(c+94,"initvar", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memInst ");
    tracep->declBit(c+71,"clock", false,-1);
    tracep->declBus(c+1,"io_addr", false,-1, 31,0);
    tracep->declBus(c+6,"io_inst", false,-1, 31,0);
    tracep->declBit(c+92,"mem_io_inst_MPORT_en", false,-1);
    tracep->declBus(c+38,"mem_io_inst_MPORT_addr", false,-1, 11,0);
    tracep->declBus(c+6,"mem_io_inst_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+95,"initvar", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcReg ");
    tracep->declBit(c+71,"clock", false,-1);
    tracep->declBit(c+72,"reset", false,-1);
    tracep->declBus(c+1,"io_addrOut", false,-1, 31,0);
    tracep->declBit(c+2,"io_ctrlJump", false,-1);
    tracep->declBit(c+3,"io_ctrlBranch", false,-1);
    tracep->declBit(c+4,"io_resultBranch", false,-1);
    tracep->declBus(c+5,"io_addrTarget", false,-1, 31,0);
    tracep->declBus(c+1,"regPC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("registers ");
    tracep->declBit(c+71,"clock", false,-1);
    tracep->declBit(c+7,"io_ctrlRegWrite", false,-1);
    tracep->declBit(c+2,"io_ctrlJump", false,-1);
    tracep->declBus(c+1,"io_pc", false,-1, 31,0);
    tracep->declBus(c+5,"io_dataWrite", false,-1, 31,0);
    tracep->declBus(c+15,"io_bundleReg_rs1", false,-1, 4,0);
    tracep->declBus(c+16,"io_bundleReg_rs2", false,-1, 4,0);
    tracep->declBus(c+17,"io_bundleReg_rd", false,-1, 4,0);
    tracep->declBus(c+19,"io_dataRead1", false,-1, 31,0);
    tracep->declBus(c+20,"io_dataRead2", false,-1, 31,0);
    tracep->declBus(c+39,"regs_0", false,-1, 31,0);
    tracep->declBus(c+40,"regs_1", false,-1, 31,0);
    tracep->declBus(c+41,"regs_2", false,-1, 31,0);
    tracep->declBus(c+42,"regs_3", false,-1, 31,0);
    tracep->declBus(c+43,"regs_4", false,-1, 31,0);
    tracep->declBus(c+44,"regs_5", false,-1, 31,0);
    tracep->declBus(c+45,"regs_6", false,-1, 31,0);
    tracep->declBus(c+46,"regs_7", false,-1, 31,0);
    tracep->declBus(c+47,"regs_8", false,-1, 31,0);
    tracep->declBus(c+48,"regs_9", false,-1, 31,0);
    tracep->declBus(c+49,"regs_10", false,-1, 31,0);
    tracep->declBus(c+50,"regs_11", false,-1, 31,0);
    tracep->declBus(c+51,"regs_12", false,-1, 31,0);
    tracep->declBus(c+52,"regs_13", false,-1, 31,0);
    tracep->declBus(c+53,"regs_14", false,-1, 31,0);
    tracep->declBus(c+54,"regs_15", false,-1, 31,0);
    tracep->declBus(c+55,"regs_16", false,-1, 31,0);
    tracep->declBus(c+56,"regs_17", false,-1, 31,0);
    tracep->declBus(c+57,"regs_18", false,-1, 31,0);
    tracep->declBus(c+58,"regs_19", false,-1, 31,0);
    tracep->declBus(c+59,"regs_20", false,-1, 31,0);
    tracep->declBus(c+60,"regs_21", false,-1, 31,0);
    tracep->declBus(c+61,"regs_22", false,-1, 31,0);
    tracep->declBus(c+62,"regs_23", false,-1, 31,0);
    tracep->declBus(c+63,"regs_24", false,-1, 31,0);
    tracep->declBus(c+64,"regs_25", false,-1, 31,0);
    tracep->declBus(c+65,"regs_26", false,-1, 31,0);
    tracep->declBus(c+66,"regs_27", false,-1, 31,0);
    tracep->declBus(c+67,"regs_28", false,-1, 31,0);
    tracep->declBus(c+68,"regs_29", false,-1, 31,0);
    tracep->declBus(c+69,"regs_30", false,-1, 31,0);
    tracep->declBus(c+70,"regs_31", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VTop___024root__trace_init_top(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_top\n"); );
    // Body
    VTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTop___024root__trace_register(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_top_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Top__DOT__pcReg__DOT__regPC),32);
    bufp->fullBit(oldp+2,(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlJump));
    bufp->fullBit(oldp+3,(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlBranch));
    bufp->fullBit(oldp+4,(vlSelf->Top__DOT__alu_io_resultBranch));
    bufp->fullIData(oldp+5,(vlSelf->Top__DOT__memData_io_result),32);
    bufp->fullIData(oldp+6,(vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data),32);
    bufp->fullBit(oldp+7,(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlRegWrite));
    bufp->fullBit(oldp+8,(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlLoad));
    bufp->fullBit(oldp+9,(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlStore));
    bufp->fullBit(oldp+10,(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlALUSrc));
    bufp->fullBit(oldp+11,(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlJAL));
    bufp->fullCData(oldp+12,(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP),4);
    bufp->fullBit(oldp+13,(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlSigned));
    bufp->fullCData(oldp+14,((((0xdU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                  >> 2U))) 
                               | (5U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                  >> 2U))))
                               ? 2U : ((0x1bU == (0x1fU 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 2U)))
                                        ? 2U : (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_72)))),2);
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+17,((0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                       >> 7U))),5);
    bufp->fullIData(oldp+18,((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_89)),32);
    bufp->fullIData(oldp+19,(vlSelf->Top__DOT__registers_io_dataRead1),32);
    bufp->fullIData(oldp+20,(vlSelf->Top__DOT__registers_io_dataRead2),32);
    bufp->fullIData(oldp+21,((IData)(vlSelf->Top__DOT__alu__DOT___GEN_29)),32);
    bufp->fullCData(oldp+22,(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlALUSrc),2);
    bufp->fullIData(oldp+23,(vlSelf->Top__DOT__alu__DOT__oprand1),32);
    bufp->fullIData(oldp+24,(vlSelf->Top__DOT__alu__DOT__oprand2),32);
    bufp->fullIData(oldp+25,(vlSelf->Top__DOT__decoder__DOT__imm_i),32);
    bufp->fullIData(oldp+26,(((((vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 0x1fU) ? 0xfffffU
                                 : 0U) << 0xcU) | (
                                                   (0xfe0U 
                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                         >> 7U))))),32);
    bufp->fullIData(oldp+27,(((((vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 0x1fU) ? 0xfffffU
                                 : 0U) << 0xcU) | (
                                                   (0x800U 
                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                            >> 7U)))))),32);
    bufp->fullIData(oldp+28,((0xfffff000U & vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data)),32);
    bufp->fullQData(oldp+29,(((QData)((IData)(((((vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                  >> 0x1fU)
                                                  ? 0xfffU
                                                  : 0U) 
                                                << 0x14U) 
                                               | ((0x80000U 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 0xcU)) 
                                                  | ((0x7f800U 
                                                      & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                         >> 1U)) 
                                                     | ((0x400U 
                                                         & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                            >> 0xaU)) 
                                                        | (0x3ffU 
                                                           & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                              >> 0x15U)))))))) 
                              << 1U)),33);
    bufp->fullIData(oldp+31,((0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                       >> 0x14U))),32);
    bufp->fullSData(oldp+32,((0x3ffU & (IData)((vlSelf->Top__DOT__alu__DOT___GEN_29 
                                                >> 2U)))),10);
    bufp->fullIData(oldp+33,(vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data),32);
    bufp->fullIData(oldp+34,(((0xffff0000U & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data) 
                              | (0xffffU & vlSelf->Top__DOT__registers_io_dataRead2))),32);
    bufp->fullBit(oldp+35,(((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlStore) 
                            & (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlALUSrc))));
    bufp->fullIData(oldp+36,(((0xffffff00U & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data) 
                              | (0xffU & vlSelf->Top__DOT__registers_io_dataRead2))),32);
    bufp->fullBit(oldp+37,(((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlStore) 
                            & (~ (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlALUSrc)))));
    bufp->fullSData(oldp+38,((0xfffU & (vlSelf->Top__DOT__pcReg__DOT__regPC 
                                        >> 2U))),12);
    bufp->fullIData(oldp+39,(vlSelf->Top__DOT__registers__DOT__regs_0),32);
    bufp->fullIData(oldp+40,(vlSelf->Top__DOT__registers__DOT__regs_1),32);
    bufp->fullIData(oldp+41,(vlSelf->Top__DOT__registers__DOT__regs_2),32);
    bufp->fullIData(oldp+42,(vlSelf->Top__DOT__registers__DOT__regs_3),32);
    bufp->fullIData(oldp+43,(vlSelf->Top__DOT__registers__DOT__regs_4),32);
    bufp->fullIData(oldp+44,(vlSelf->Top__DOT__registers__DOT__regs_5),32);
    bufp->fullIData(oldp+45,(vlSelf->Top__DOT__registers__DOT__regs_6),32);
    bufp->fullIData(oldp+46,(vlSelf->Top__DOT__registers__DOT__regs_7),32);
    bufp->fullIData(oldp+47,(vlSelf->Top__DOT__registers__DOT__regs_8),32);
    bufp->fullIData(oldp+48,(vlSelf->Top__DOT__registers__DOT__regs_9),32);
    bufp->fullIData(oldp+49,(vlSelf->Top__DOT__registers__DOT__regs_10),32);
    bufp->fullIData(oldp+50,(vlSelf->Top__DOT__registers__DOT__regs_11),32);
    bufp->fullIData(oldp+51,(vlSelf->Top__DOT__registers__DOT__regs_12),32);
    bufp->fullIData(oldp+52,(vlSelf->Top__DOT__registers__DOT__regs_13),32);
    bufp->fullIData(oldp+53,(vlSelf->Top__DOT__registers__DOT__regs_14),32);
    bufp->fullIData(oldp+54,(vlSelf->Top__DOT__registers__DOT__regs_15),32);
    bufp->fullIData(oldp+55,(vlSelf->Top__DOT__registers__DOT__regs_16),32);
    bufp->fullIData(oldp+56,(vlSelf->Top__DOT__registers__DOT__regs_17),32);
    bufp->fullIData(oldp+57,(vlSelf->Top__DOT__registers__DOT__regs_18),32);
    bufp->fullIData(oldp+58,(vlSelf->Top__DOT__registers__DOT__regs_19),32);
    bufp->fullIData(oldp+59,(vlSelf->Top__DOT__registers__DOT__regs_20),32);
    bufp->fullIData(oldp+60,(vlSelf->Top__DOT__registers__DOT__regs_21),32);
    bufp->fullIData(oldp+61,(vlSelf->Top__DOT__registers__DOT__regs_22),32);
    bufp->fullIData(oldp+62,(vlSelf->Top__DOT__registers__DOT__regs_23),32);
    bufp->fullIData(oldp+63,(vlSelf->Top__DOT__registers__DOT__regs_24),32);
    bufp->fullIData(oldp+64,(vlSelf->Top__DOT__registers__DOT__regs_25),32);
    bufp->fullIData(oldp+65,(vlSelf->Top__DOT__registers__DOT__regs_26),32);
    bufp->fullIData(oldp+66,(vlSelf->Top__DOT__registers__DOT__regs_27),32);
    bufp->fullIData(oldp+67,(vlSelf->Top__DOT__registers__DOT__regs_28),32);
    bufp->fullIData(oldp+68,(vlSelf->Top__DOT__registers__DOT__regs_29),32);
    bufp->fullIData(oldp+69,(vlSelf->Top__DOT__registers__DOT__regs_30),32);
    bufp->fullIData(oldp+70,(vlSelf->Top__DOT__registers__DOT__regs_31),32);
    bufp->fullBit(oldp+71,(vlSelf->clock));
    bufp->fullBit(oldp+72,(vlSelf->reset));
    bufp->fullIData(oldp+73,(vlSelf->io_ans),32);
    bufp->fullIData(oldp+74,(vlSelf->io_addr),32);
    bufp->fullIData(oldp+75,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+76,(vlSelf->io_bundleCtrl_ctrlJump));
    bufp->fullBit(oldp+77,(vlSelf->io_bundleCtrl_ctrlBranch));
    bufp->fullBit(oldp+78,(vlSelf->io_bundleCtrl_ctrlRegWrite));
    bufp->fullBit(oldp+79,(vlSelf->io_bundleCtrl_ctrlLoad));
    bufp->fullBit(oldp+80,(vlSelf->io_bundleCtrl_ctrlStore));
    bufp->fullBit(oldp+81,(vlSelf->io_bundleCtrl_ctrlALUSrc));
    bufp->fullBit(oldp+82,(vlSelf->io_bundleCtrl_ctrlJAL));
    bufp->fullCData(oldp+83,(vlSelf->io_bundleCtrl_ctrlOP),4);
    bufp->fullBit(oldp+84,(vlSelf->io_bundleCtrl_ctrlSigned));
    bufp->fullCData(oldp+85,(vlSelf->io_bundleCtrl_ctrlLSType),2);
    bufp->fullIData(oldp+86,(vlSelf->io_resultALU),32);
    bufp->fullIData(oldp+87,(vlSelf->io_rs1),32);
    bufp->fullIData(oldp+88,(vlSelf->io_rs2),32);
    bufp->fullIData(oldp+89,(vlSelf->io_imm),32);
    bufp->fullBit(oldp+90,(vlSelf->io_resultBranch));
    bufp->fullIData(oldp+91,(vlSelf->io_result),32);
    bufp->fullBit(oldp+92,(1U));
    bufp->fullBit(oldp+93,(0U));
    bufp->fullIData(oldp+94,(vlSelf->Top__DOT__memData__DOT__initvar),32);
    bufp->fullIData(oldp+95,(vlSelf->Top__DOT__memInst__DOT__initvar),32);
}
