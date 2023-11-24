// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAlu.h for the primary calling header

#include "VAlu__pch.h"
#include "VAlu___024root.h"

VL_INLINE_OPT void VAlu___024root___ico_sequent__TOP__0(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___ico_sequent__TOP__0\n"); );
    // Init
    QData/*32:0*/ Alu__DOT___resultAlu_T_14;
    Alu__DOT___resultAlu_T_14 = 0;
    CData/*0:0*/ Alu__DOT___GEN_0;
    Alu__DOT___GEN_0 = 0;
    QData/*62:0*/ Alu__DOT___GEN_27;
    Alu__DOT___GEN_27 = 0;
    // Body
    Alu__DOT___resultAlu_T_14 = (0x1ffffffffULL & ((QData)((IData)(vlSelf->io_pc)) 
                                                   + (QData)((IData)(vlSelf->io_imm))));
    vlSelf->Alu__DOT__oprand1 = ((IData)(vlSelf->io_bundleAluControl_ctrlJAL)
                                  ? vlSelf->io_pc : vlSelf->io_dataRead1);
    vlSelf->Alu__DOT__oprand2 = ((IData)(vlSelf->io_bundleAluControl_ctrlALUSrc)
                                  ? vlSelf->io_imm : vlSelf->io_dataRead2);
    Alu__DOT___GEN_0 = ((IData)(vlSelf->io_bundleAluControl_ctrlSigned)
                         ? VL_LTS_III(32, vlSelf->Alu__DOT__oprand1, vlSelf->Alu__DOT__oprand2)
                         : (vlSelf->Alu__DOT__oprand1 
                            < vlSelf->Alu__DOT__oprand2));
    vlSelf->io_resultBranch = ((0U != (IData)(vlSelf->io_bundleAluControl_ctrlOP)) 
                               & ((1U != (IData)(vlSelf->io_bundleAluControl_ctrlOP)) 
                                  & ((2U != (IData)(vlSelf->io_bundleAluControl_ctrlOP)) 
                                     & ((4U != (IData)(vlSelf->io_bundleAluControl_ctrlOP)) 
                                        & ((5U != (IData)(vlSelf->io_bundleAluControl_ctrlOP)) 
                                           & ((7U != (IData)(vlSelf->io_bundleAluControl_ctrlOP)) 
                                              & ((8U 
                                                  != (IData)(vlSelf->io_bundleAluControl_ctrlOP)) 
                                                 & ((9U 
                                                     != (IData)(vlSelf->io_bundleAluControl_ctrlOP)) 
                                                    & ((0xbU 
                                                        != (IData)(vlSelf->io_bundleAluControl_ctrlOP)) 
                                                       & ((0xcU 
                                                           == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                           ? 
                                                          (vlSelf->Alu__DOT__oprand1 
                                                           == vlSelf->Alu__DOT__oprand2)
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                            ? 
                                                           (vlSelf->Alu__DOT__oprand1 
                                                            != vlSelf->Alu__DOT__oprand2)
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                             ? 
                                                            ((IData)(vlSelf->io_bundleAluControl_ctrlBranch) 
                                                             & (IData)(Alu__DOT___GEN_0))
                                                             : 
                                                            ((0xfU 
                                                              == (IData)(vlSelf->io_bundleAluControl_ctrlOP)) 
                                                             & ((IData)(vlSelf->io_bundleAluControl_ctrlSigned)
                                                                 ? 
                                                                VL_GTES_III(32, vlSelf->Alu__DOT__oprand1, vlSelf->Alu__DOT__oprand2)
                                                                 : 
                                                                (vlSelf->Alu__DOT__oprand1 
                                                                 >= vlSelf->Alu__DOT__oprand2)))))))))))))));
    Alu__DOT___GEN_27 = (0x7fffffffffffffffULL & ((1U 
                                                   == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                   ? 
                                                  (0x1ffffffffULL 
                                                   & ((QData)((IData)(vlSelf->Alu__DOT__oprand1)) 
                                                      + (QData)((IData)(vlSelf->Alu__DOT__oprand2))))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                    ? 
                                                   (0x1ffffffffULL 
                                                    & ((QData)((IData)(vlSelf->Alu__DOT__oprand1)) 
                                                       - (QData)((IData)(vlSelf->Alu__DOT__oprand2))))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                     ? (QData)((IData)(
                                                                       (vlSelf->Alu__DOT__oprand1 
                                                                        & vlSelf->Alu__DOT__oprand2)))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                      ? (QData)((IData)(
                                                                        (vlSelf->Alu__DOT__oprand1 
                                                                         | vlSelf->Alu__DOT__oprand2)))
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                       ? (QData)((IData)(
                                                                         (vlSelf->Alu__DOT__oprand1 
                                                                          ^ vlSelf->Alu__DOT__oprand2)))
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                        ? 
                                                       ((QData)((IData)(vlSelf->Alu__DOT__oprand1)) 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelf->Alu__DOT__oprand2))
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                         ? (QData)((IData)(
                                                                           (vlSelf->Alu__DOT__oprand1 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & vlSelf->Alu__DOT__oprand2))))
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                          ? (QData)((IData)(
                                                                            VL_SHIFTRS_III(32,32,5, vlSelf->Alu__DOT__oprand1, 
                                                                                (0x1fU 
                                                                                & vlSelf->Alu__DOT__oprand2))))
                                                          : 
                                                         ((0xcU 
                                                           == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                           ? Alu__DOT___resultAlu_T_14
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                            ? Alu__DOT___resultAlu_T_14
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                             ? 
                                                            ((IData)(vlSelf->io_bundleAluControl_ctrlBranch)
                                                              ? Alu__DOT___resultAlu_T_14
                                                              : (QData)((IData)(Alu__DOT___GEN_0)))
                                                             : 
                                                            ((0xfU 
                                                              == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                              ? Alu__DOT___resultAlu_T_14
                                                              : 0ULL)))))))))))));
    vlSelf->io_resultAlu = ((0U == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                             ? 0U : (IData)(Alu__DOT___GEN_27));
}

void VAlu___024root___eval_ico(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VAlu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VAlu___024root___eval_triggers__ico(VAlu___024root* vlSelf);

bool VAlu___024root___eval_phase__ico(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VAlu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VAlu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VAlu___024root___eval_act(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_act\n"); );
}

void VAlu___024root___eval_nba(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_nba\n"); );
}

void VAlu___024root___eval_triggers__act(VAlu___024root* vlSelf);

bool VAlu___024root___eval_phase__act(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VAlu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VAlu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VAlu___024root___eval_phase__nba(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VAlu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__ico(VAlu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__nba(VAlu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__act(VAlu___024root* vlSelf);
#endif  // VL_DEBUG

void VAlu___024root___eval(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval\n"); );
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
            VAlu___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("Alu.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VAlu___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VAlu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Alu.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VAlu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Alu.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VAlu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VAlu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VAlu___024root___eval_debug_assertions(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_debug_assertions\n"); );
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
}
#endif  // VL_DEBUG
