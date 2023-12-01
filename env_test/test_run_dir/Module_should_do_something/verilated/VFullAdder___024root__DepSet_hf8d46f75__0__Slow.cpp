// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFullAdder.h for the primary calling header

#include "VFullAdder__pch.h"
#include "VFullAdder___024root.h"

VL_ATTR_COLD void VFullAdder___024root___eval_static(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval_static\n"); );
}

VL_ATTR_COLD void VFullAdder___024root___eval_initial(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VFullAdder___024root___eval_final(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFullAdder___024root___dump_triggers__stl(VFullAdder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VFullAdder___024root___eval_phase__stl(VFullAdder___024root* vlSelf);

VL_ATTR_COLD void VFullAdder___024root___eval_settle(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VFullAdder___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("FullAdder.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VFullAdder___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFullAdder___024root___dump_triggers__stl(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VFullAdder___024root___ico_sequent__TOP__0(VFullAdder___024root* vlSelf);

VL_ATTR_COLD void VFullAdder___024root___eval_stl(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VFullAdder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VFullAdder___024root___eval_triggers__stl(VFullAdder___024root* vlSelf);

VL_ATTR_COLD bool VFullAdder___024root___eval_phase__stl(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VFullAdder___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VFullAdder___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFullAdder___024root___dump_triggers__ico(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VFullAdder___024root___dump_triggers__act(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VFullAdder___024root___dump_triggers__nba(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFullAdder___024root___ctor_var_reset(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_bundleAluControl_ctrlALUSrc = VL_RAND_RESET_I(1);
    vlSelf->io_bundleAluControl_ctrlJAL = VL_RAND_RESET_I(1);
    vlSelf->io_bundleAluControl_ctrlOP = VL_RAND_RESET_I(4);
    vlSelf->io_bundleAluControl_ctrlSigned = VL_RAND_RESET_I(1);
    vlSelf->io_bundleAluControl_ctrlBranch = VL_RAND_RESET_I(1);
    vlSelf->io_a = VL_RAND_RESET_I(1);
    vlSelf->io_b = VL_RAND_RESET_I(1);
    vlSelf->io_cin = VL_RAND_RESET_I(1);
    vlSelf->io_sum = VL_RAND_RESET_I(1);
    vlSelf->io_cout = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VFullAdder___024root___configure_coverage(VFullAdder___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
