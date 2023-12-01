// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoder.h for the primary calling header

#include "verilated.h"

#include "VDecoder___024root.h"

VL_ATTR_COLD void VDecoder___024root___eval_initial(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_initial\n"); );
}

void VDecoder___024root___combo__TOP__0(VDecoder___024root* vlSelf);

VL_ATTR_COLD void VDecoder___024root___eval_settle(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_settle\n"); );
    // Body
    VDecoder___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VDecoder___024root___final(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___final\n"); );
}

VL_ATTR_COLD void VDecoder___024root___ctor_var_reset(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->io_bundleCtrl_ctrlJump = VL_RAND_RESET_I(1);
    vlSelf->io_bundleCtrl_ctrlBranch = VL_RAND_RESET_I(1);
    vlSelf->io_bundleCtrl_ctrlRegWrite = VL_RAND_RESET_I(1);
    vlSelf->io_bundleCtrl_ctrlLoad = VL_RAND_RESET_I(1);
    vlSelf->io_bundleCtrl_ctrlStore = VL_RAND_RESET_I(1);
    vlSelf->io_bundleCtrl_ctrlALUSrc = VL_RAND_RESET_I(1);
    vlSelf->io_bundleCtrl_ctrlJAL = VL_RAND_RESET_I(1);
    vlSelf->io_bundleCtrl_ctrlOP = VL_RAND_RESET_I(4);
    vlSelf->io_bundleCtrl_ctrlSigned = VL_RAND_RESET_I(1);
    vlSelf->io_bundleCtrl_ctrlLSType = VL_RAND_RESET_I(2);
    vlSelf->io_bundleReg_rs1 = VL_RAND_RESET_I(5);
    vlSelf->io_bundleReg_rs2 = VL_RAND_RESET_I(5);
    vlSelf->io_bundleReg_rd = VL_RAND_RESET_I(5);
    vlSelf->io_imm = VL_RAND_RESET_I(32);
}

VL_ATTR_COLD void VDecoder___024root___configure_coverage(VDecoder___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
