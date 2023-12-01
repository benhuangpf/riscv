// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemData.h for the primary calling header

#include "verilated.h"

#include "VMemData___024root.h"

VL_ATTR_COLD void VMemData___024root___eval_initial(VMemData___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemData__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemData___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VMemData___024root___combo__TOP__0(VMemData___024root* vlSelf);

VL_ATTR_COLD void VMemData___024root___eval_settle(VMemData___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemData__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemData___024root___eval_settle\n"); );
    // Body
    VMemData___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VMemData___024root___final(VMemData___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemData__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemData___024root___final\n"); );
}

VL_ATTR_COLD void VMemData___024root___ctor_var_reset(VMemData___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemData__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemData___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_bundleMemDataControl_ctrlLoad = VL_RAND_RESET_I(1);
    vlSelf->io_bundleMemDataControl_ctrlStore = VL_RAND_RESET_I(1);
    vlSelf->io_bundleMemDataControl_ctrlSigned = VL_RAND_RESET_I(1);
    vlSelf->io_bundleMemDataControl_ctrlLSType = VL_RAND_RESET_I(2);
    vlSelf->io_resultALU = VL_RAND_RESET_I(32);
    vlSelf->io_dataStore = VL_RAND_RESET_I(32);
    vlSelf->io_result = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->MemData__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->MemData__DOT__mem_dataLoad_MPORT_data = VL_RAND_RESET_I(32);
}

VL_ATTR_COLD void VMemData___024root___configure_coverage(VMemData___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VMemData__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemData___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
