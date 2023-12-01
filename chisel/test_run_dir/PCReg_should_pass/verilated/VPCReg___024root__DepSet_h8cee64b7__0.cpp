// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPCReg.h for the primary calling header

#include "verilated.h"

#include "VPCReg___024root.h"

VL_INLINE_OPT void VPCReg___024root___sequent__TOP__0(VPCReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->PCReg__DOT__regPC = ((IData)(vlSelf->reset)
                                  ? 0x84U : (((IData)(vlSelf->io_ctrlJump) 
                                              | ((IData)(vlSelf->io_ctrlBranch) 
                                                 & (IData)(vlSelf->io_resultBranch)))
                                              ? vlSelf->io_addrTarget
                                              : vlSelf->PCReg__DOT___regPC_T_1));
    vlSelf->PCReg__DOT___regPC_T_1 = ((IData)(4U) + vlSelf->PCReg__DOT__regPC);
    vlSelf->io_addrOut = vlSelf->PCReg__DOT__regPC;
}

void VPCReg___024root___eval(VPCReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VPCReg___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VPCReg___024root___eval_debug_assertions(VPCReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_ctrlJump & 0xfeU))) {
        Verilated::overWidthError("io_ctrlJump");}
    if (VL_UNLIKELY((vlSelf->io_ctrlBranch & 0xfeU))) {
        Verilated::overWidthError("io_ctrlBranch");}
    if (VL_UNLIKELY((vlSelf->io_resultBranch & 0xfeU))) {
        Verilated::overWidthError("io_resultBranch");}
}
#endif  // VL_DEBUG
