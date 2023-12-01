// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAlu.h for the primary calling header

#include "verilated.h"

#include "VAlu___024root.h"

VL_ATTR_COLD void VAlu___024root___eval_initial(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_initial\n"); );
}

void VAlu___024root___combo__TOP__0(VAlu___024root* vlSelf);

VL_ATTR_COLD void VAlu___024root___eval_settle(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_settle\n"); );
    // Body
    VAlu___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VAlu___024root___final(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___final\n"); );
}

VL_ATTR_COLD void VAlu___024root___ctor_var_reset(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_bundleAluControl_ctrlALUSrc = VL_RAND_RESET_I(1);
    vlSelf->io_bundleAluControl_ctrlJAL = VL_RAND_RESET_I(1);
    vlSelf->io_bundleAluControl_ctrlOP = VL_RAND_RESET_I(4);
    vlSelf->io_bundleAluControl_ctrlSigned = VL_RAND_RESET_I(1);
    vlSelf->io_bundleAluControl_ctrlBranch = VL_RAND_RESET_I(1);
    vlSelf->io_dataRead1 = VL_RAND_RESET_I(32);
    vlSelf->io_dataRead2 = VL_RAND_RESET_I(32);
    vlSelf->io_imm = VL_RAND_RESET_I(32);
    vlSelf->io_pc = VL_RAND_RESET_I(32);
    vlSelf->io_resultBranch = VL_RAND_RESET_I(1);
    vlSelf->io_resultAlu = VL_RAND_RESET_I(32);
}

VL_ATTR_COLD void VAlu___024root___configure_coverage(VAlu___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
