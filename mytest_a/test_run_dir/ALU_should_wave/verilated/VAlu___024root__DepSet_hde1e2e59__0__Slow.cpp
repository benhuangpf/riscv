// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAlu.h for the primary calling header

#include "VAlu__pch.h"
#include "VAlu___024root.h"

VL_ATTR_COLD void VAlu___024root___eval_static(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_static\n"); );
}

VL_ATTR_COLD void VAlu___024root___eval_initial(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VAlu___024root___eval_final(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__stl(VAlu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VAlu___024root___eval_phase__stl(VAlu___024root* vlSelf);

VL_ATTR_COLD void VAlu___024root___eval_settle(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_settle\n"); );
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
            VAlu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Alu.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VAlu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__stl(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VAlu___024root___ico_sequent__TOP__0(VAlu___024root* vlSelf);

VL_ATTR_COLD void VAlu___024root___eval_stl(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VAlu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VAlu___024root___eval_triggers__stl(VAlu___024root* vlSelf);

VL_ATTR_COLD bool VAlu___024root___eval_phase__stl(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VAlu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VAlu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__ico(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VAlu___024root___dump_triggers__act(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__nba(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

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
    vlSelf->Alu__DOT__oprand1 = VL_RAND_RESET_I(32);
    vlSelf->Alu__DOT__oprand2 = VL_RAND_RESET_I(32);
}

VL_ATTR_COLD void VAlu___024root___configure_coverage(VAlu___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
