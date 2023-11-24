// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPCReg.h for the primary calling header

#include "verilated.h"

#include "VPCReg___024root.h"

VL_ATTR_COLD void VPCReg___024root___settle__TOP__0(VPCReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->PCReg__DOT___regPC_T_1 = ((IData)(4U) + vlSelf->PCReg__DOT__regPC);
    vlSelf->io_addrOut = vlSelf->PCReg__DOT__regPC;
}

VL_ATTR_COLD void VPCReg___024root___eval_initial(VPCReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VPCReg___024root___eval_settle(VPCReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root___eval_settle\n"); );
    // Body
    VPCReg___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VPCReg___024root___final(VPCReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root___final\n"); );
}

VL_ATTR_COLD void VPCReg___024root___ctor_var_reset(VPCReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_addrOut = VL_RAND_RESET_I(32);
    vlSelf->io_ctrlJump = VL_RAND_RESET_I(1);
    vlSelf->io_ctrlBranch = VL_RAND_RESET_I(1);
    vlSelf->io_resultBranch = VL_RAND_RESET_I(1);
    vlSelf->io_addrTarget = VL_RAND_RESET_I(32);
    vlSelf->PCReg__DOT__regPC = VL_RAND_RESET_I(32);
    vlSelf->PCReg__DOT___regPC_T_1 = VL_RAND_RESET_I(32);
}

VL_ATTR_COLD void VPCReg___024root___configure_coverage(VPCReg___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VPCReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCReg___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
