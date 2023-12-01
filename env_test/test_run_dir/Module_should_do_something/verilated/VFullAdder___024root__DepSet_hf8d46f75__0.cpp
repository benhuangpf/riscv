// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFullAdder.h for the primary calling header

#include "VFullAdder__pch.h"
#include "VFullAdder___024root.h"

VL_INLINE_OPT void VFullAdder___024root___ico_sequent__TOP__0(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_sum = (((IData)(vlSelf->io_a) ^ (IData)(vlSelf->io_b)) 
                      ^ (IData)(vlSelf->io_cin));
    vlSelf->io_cout = (((IData)(vlSelf->io_a) & (IData)(vlSelf->io_b)) 
                       | (((IData)(vlSelf->io_b) | (IData)(vlSelf->io_a)) 
                          & (IData)(vlSelf->io_cin)));
}

void VFullAdder___024root___eval_ico(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFullAdder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VFullAdder___024root___eval_triggers__ico(VFullAdder___024root* vlSelf);

bool VFullAdder___024root___eval_phase__ico(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VFullAdder___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VFullAdder___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VFullAdder___024root___eval_act(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval_act\n"); );
}

void VFullAdder___024root___eval_nba(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval_nba\n"); );
}

void VFullAdder___024root___eval_triggers__act(VFullAdder___024root* vlSelf);

bool VFullAdder___024root___eval_phase__act(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VFullAdder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VFullAdder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VFullAdder___024root___eval_phase__nba(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VFullAdder___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFullAdder___024root___dump_triggers__ico(VFullAdder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFullAdder___024root___dump_triggers__nba(VFullAdder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFullAdder___024root___dump_triggers__act(VFullAdder___024root* vlSelf);
#endif  // VL_DEBUG

void VFullAdder___024root___eval(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VFullAdder___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("FullAdder.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VFullAdder___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VFullAdder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("FullAdder.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VFullAdder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("FullAdder.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VFullAdder___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VFullAdder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VFullAdder___024root___eval_debug_assertions(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_bundleAluControl_ctrlALUSrc 
                     & 0xfeU))) {
        Verilated::overWidthError("io_bundleAluControl_ctrlALUSrc");}
    if (VL_UNLIKELY((vlSelf->io_bundleAluControl_ctrlJAL 
                     & 0xfeU))) {
        Verilated::overWidthError("io_bundleAluControl_ctrlJAL");}
    if (VL_UNLIKELY((vlSelf->io_bundleAluControl_ctrlOP 
                     & 0xf0U))) {
        Verilated::overWidthError("io_bundleAluControl_ctrlOP");}
    if (VL_UNLIKELY((vlSelf->io_bundleAluControl_ctrlSigned 
                     & 0xfeU))) {
        Verilated::overWidthError("io_bundleAluControl_ctrlSigned");}
    if (VL_UNLIKELY((vlSelf->io_bundleAluControl_ctrlBranch 
                     & 0xfeU))) {
        Verilated::overWidthError("io_bundleAluControl_ctrlBranch");}
    if (VL_UNLIKELY((vlSelf->io_a & 0xfeU))) {
        Verilated::overWidthError("io_a");}
    if (VL_UNLIKELY((vlSelf->io_b & 0xfeU))) {
        Verilated::overWidthError("io_b");}
    if (VL_UNLIKELY((vlSelf->io_cin & 0xfeU))) {
        Verilated::overWidthError("io_cin");}
}
#endif  // VL_DEBUG
