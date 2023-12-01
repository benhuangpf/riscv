// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__trace_chg_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTop___024root__trace_chg_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->Top__DOT__alu__DOT__oprand1),32);
        bufp->chgIData(oldp+1,(vlSelf->Top__DOT__alu__DOT__oprand2),32);
        bufp->chgIData(oldp+2,(vlSelf->Top__DOT__decoder__DOT__imm_i),32);
        bufp->chgSData(oldp+3,(vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_addr),10);
        bufp->chgIData(oldp+4,(vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data),32);
        bufp->chgSData(oldp+5,((0x3ffU & (vlSelf->Top__DOT__pcReg__DOT__regPC 
                                          >> 2U))),10);
        bufp->chgIData(oldp+6,(vlSelf->Top__DOT__pcReg__DOT__regPC),32);
        bufp->chgIData(oldp+7,(vlSelf->Top__DOT__registers__DOT__regs_0),32);
        bufp->chgIData(oldp+8,(vlSelf->Top__DOT__registers__DOT__regs_1),32);
        bufp->chgIData(oldp+9,(vlSelf->Top__DOT__registers__DOT__regs_2),32);
        bufp->chgIData(oldp+10,(vlSelf->Top__DOT__registers__DOT__regs_3),32);
        bufp->chgIData(oldp+11,(vlSelf->Top__DOT__registers__DOT__regs_4),32);
        bufp->chgIData(oldp+12,(vlSelf->Top__DOT__registers__DOT__regs_5),32);
        bufp->chgIData(oldp+13,(vlSelf->Top__DOT__registers__DOT__regs_6),32);
        bufp->chgIData(oldp+14,(vlSelf->Top__DOT__registers__DOT__regs_7),32);
        bufp->chgIData(oldp+15,(vlSelf->Top__DOT__registers__DOT__regs_8),32);
        bufp->chgIData(oldp+16,(vlSelf->Top__DOT__registers__DOT__regs_9),32);
        bufp->chgIData(oldp+17,(vlSelf->Top__DOT__registers__DOT__regs_10),32);
        bufp->chgIData(oldp+18,(vlSelf->Top__DOT__registers__DOT__regs_11),32);
        bufp->chgIData(oldp+19,(vlSelf->Top__DOT__registers__DOT__regs_12),32);
        bufp->chgIData(oldp+20,(vlSelf->Top__DOT__registers__DOT__regs_13),32);
        bufp->chgIData(oldp+21,(vlSelf->Top__DOT__registers__DOT__regs_14),32);
        bufp->chgIData(oldp+22,(vlSelf->Top__DOT__registers__DOT__regs_15),32);
        bufp->chgIData(oldp+23,(vlSelf->Top__DOT__registers__DOT__regs_16),32);
        bufp->chgIData(oldp+24,(vlSelf->Top__DOT__registers__DOT__regs_17),32);
        bufp->chgIData(oldp+25,(vlSelf->Top__DOT__registers__DOT__regs_18),32);
        bufp->chgIData(oldp+26,(vlSelf->Top__DOT__registers__DOT__regs_19),32);
        bufp->chgIData(oldp+27,(vlSelf->Top__DOT__registers__DOT__regs_20),32);
        bufp->chgIData(oldp+28,(vlSelf->Top__DOT__registers__DOT__regs_21),32);
        bufp->chgIData(oldp+29,(vlSelf->Top__DOT__registers__DOT__regs_22),32);
        bufp->chgIData(oldp+30,(vlSelf->Top__DOT__registers__DOT__regs_23),32);
        bufp->chgIData(oldp+31,(vlSelf->Top__DOT__registers__DOT__regs_24),32);
        bufp->chgIData(oldp+32,(vlSelf->Top__DOT__registers__DOT__regs_25),32);
        bufp->chgIData(oldp+33,(vlSelf->Top__DOT__registers__DOT__regs_26),32);
        bufp->chgIData(oldp+34,(vlSelf->Top__DOT__registers__DOT__regs_27),32);
        bufp->chgIData(oldp+35,(vlSelf->Top__DOT__registers__DOT__regs_28),32);
        bufp->chgIData(oldp+36,(vlSelf->Top__DOT__registers__DOT__regs_29),32);
        bufp->chgIData(oldp+37,(vlSelf->Top__DOT__registers__DOT__regs_30),32);
        bufp->chgIData(oldp+38,(vlSelf->Top__DOT__registers__DOT__regs_31),32);
    }
    bufp->chgBit(oldp+39,(vlSelf->clock));
    bufp->chgBit(oldp+40,(vlSelf->reset));
    bufp->chgIData(oldp+41,(vlSelf->io_addr),32);
    bufp->chgIData(oldp+42,(vlSelf->io_inst),32);
    bufp->chgBit(oldp+43,(vlSelf->io_bundleCtrl_ctrlJump));
    bufp->chgBit(oldp+44,(vlSelf->io_bundleCtrl_ctrlBranch));
    bufp->chgBit(oldp+45,(vlSelf->io_bundleCtrl_ctrlRegWrite));
    bufp->chgBit(oldp+46,(vlSelf->io_bundleCtrl_ctrlLoad));
    bufp->chgBit(oldp+47,(vlSelf->io_bundleCtrl_ctrlStore));
    bufp->chgBit(oldp+48,(vlSelf->io_bundleCtrl_ctrlALUSrc));
    bufp->chgBit(oldp+49,(vlSelf->io_bundleCtrl_ctrlJAL));
    bufp->chgCData(oldp+50,(vlSelf->io_bundleCtrl_ctrlOP),4);
    bufp->chgBit(oldp+51,(vlSelf->io_bundleCtrl_ctrlSigned));
    bufp->chgCData(oldp+52,(vlSelf->io_bundleCtrl_ctrlLSType),2);
    bufp->chgIData(oldp+53,(vlSelf->io_resultALU),32);
    bufp->chgIData(oldp+54,(vlSelf->io_rs1),32);
    bufp->chgIData(oldp+55,(vlSelf->io_rs2),32);
    bufp->chgIData(oldp+56,(vlSelf->io_imm),32);
    bufp->chgBit(oldp+57,(vlSelf->io_resultBranch));
    bufp->chgIData(oldp+58,(vlSelf->io_result),32);
    bufp->chgCData(oldp+59,((0x1fU & (vlSelf->io_inst 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+60,((0x1fU & (vlSelf->io_inst 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+61,((0x1fU & (vlSelf->io_inst 
                                      >> 7U))),5);
    bufp->chgCData(oldp+62,(vlSelf->io_bundleCtrl_ctrlALUSrc),2);
    bufp->chgIData(oldp+63,(((((vlSelf->io_inst >> 0x1fU)
                                ? 0xfffffU : 0U) << 0xcU) 
                             | ((0xfe0U & (vlSelf->io_inst 
                                           >> 0x14U)) 
                                | (0x1fU & (vlSelf->io_inst 
                                            >> 7U))))),32);
    bufp->chgIData(oldp+64,(((((vlSelf->io_inst >> 0x1fU)
                                ? 0xfffffU : 0U) << 0xcU) 
                             | ((0x800U & (vlSelf->io_inst 
                                           << 4U)) 
                                | ((0x7e0U & (vlSelf->io_inst 
                                              >> 0x14U)) 
                                   | (0x1eU & (vlSelf->io_inst 
                                               >> 7U)))))),32);
    bufp->chgIData(oldp+65,((0xfffff000U & vlSelf->io_inst)),32);
    bufp->chgQData(oldp+66,((((QData)((IData)(((vlSelf->io_inst 
                                                >> 0x1fU)
                                                ? 0xfffU
                                                : 0U))) 
                              << 0x15U) | (QData)((IData)(
                                                          ((0x100000U 
                                                            & (vlSelf->io_inst 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSelf->io_inst) 
                                                              | ((0x800U 
                                                                  & (vlSelf->io_inst 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSelf->io_inst 
                                                                       >> 0x14U))))))))),33);
    bufp->chgIData(oldp+68,((0x1fU & (vlSelf->io_inst 
                                      >> 0x14U))),32);
    bufp->chgIData(oldp+69,(((0xffff0000U & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data) 
                             | (0xffffU & vlSelf->io_rs2))),32);
    bufp->chgBit(oldp+70,(((IData)(vlSelf->io_bundleCtrl_ctrlStore) 
                           & (IData)(vlSelf->io_bundleCtrl_ctrlALUSrc))));
    bufp->chgIData(oldp+71,(((0xffffff00U & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data) 
                             | (0xffU & vlSelf->io_rs2))),32);
    bufp->chgBit(oldp+72,(((IData)(vlSelf->io_bundleCtrl_ctrlStore) 
                           & (~ (IData)(vlSelf->io_bundleCtrl_ctrlALUSrc)))));
}

void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_cleanup\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
