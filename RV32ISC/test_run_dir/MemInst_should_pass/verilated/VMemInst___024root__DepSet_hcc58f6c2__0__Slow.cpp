// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemInst.h for the primary calling header

#include "verilated.h"

#include "VMemInst___024root.h"

VL_ATTR_COLD void VMemInst___024root___eval_initial(VMemInst___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemInst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemInst___024root___eval_initial\n"); );
}

void VMemInst___024root___combo__TOP__0(VMemInst___024root* vlSelf);

VL_ATTR_COLD void VMemInst___024root___eval_settle(VMemInst___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemInst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemInst___024root___eval_settle\n"); );
    // Body
    VMemInst___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VMemInst___024root___final(VMemInst___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemInst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemInst___024root___final\n"); );
}

VL_ATTR_COLD void VMemInst___024root___ctor_var_reset(VMemInst___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemInst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemInst___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_addr = VL_RAND_RESET_I(32);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->MemInst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
}

VL_ATTR_COLD void VMemInst___024root___configure_coverage(VMemInst___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VMemInst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemInst___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
