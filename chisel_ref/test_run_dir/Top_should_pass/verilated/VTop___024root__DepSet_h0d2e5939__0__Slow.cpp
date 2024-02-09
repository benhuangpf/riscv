// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop___024root.h"

VL_ATTR_COLD void VTop___024root___eval_static(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VTop___024root___eval_final(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTop___024root___eval_phase__stl(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_settle(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_settle\n"); );
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
            VTop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Top.sv", 1020, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ Top__DOT__decoder__DOT__imm_i;
    Top__DOT__decoder__DOT__imm_i = 0;
    CData/*0:0*/ Top__DOT__decoder__DOT___T_28;
    Top__DOT__decoder__DOT___T_28 = 0;
    CData/*3:0*/ Top__DOT__decoder__DOT___T_39;
    Top__DOT__decoder__DOT___T_39 = 0;
    CData/*3:0*/ Top__DOT__decoder__DOT___GEN_7;
    Top__DOT__decoder__DOT___GEN_7 = 0;
    CData/*0:0*/ Top__DOT__decoder__DOT___GEN_59;
    Top__DOT__decoder__DOT___GEN_59 = 0;
    CData/*0:0*/ Top__DOT__decoder__DOT____VdfgTmp_h06dc57fc__0;
    Top__DOT__decoder__DOT____VdfgTmp_h06dc57fc__0 = 0;
    CData/*0:0*/ Top__DOT__decoder__DOT____VdfgTmp_hf7478d11__0;
    Top__DOT__decoder__DOT____VdfgTmp_hf7478d11__0 = 0;
    CData/*0:0*/ Top__DOT__decoder__DOT____VdfgTmp_h3a404b42__0;
    Top__DOT__decoder__DOT____VdfgTmp_h3a404b42__0 = 0;
    IData/*31:0*/ Top__DOT__alu__DOT___resultAlu_T_10;
    Top__DOT__alu__DOT___resultAlu_T_10 = 0;
    IData/*31:0*/ Top__DOT__alu__DOT___resultBranch_T_1;
    Top__DOT__alu__DOT___resultBranch_T_1 = 0;
    QData/*32:0*/ Top__DOT__alu__DOT___resultAlu_T_14;
    Top__DOT__alu__DOT___resultAlu_T_14 = 0;
    CData/*0:0*/ Top__DOT__alu__DOT___GEN_0;
    Top__DOT__alu__DOT___GEN_0 = 0;
    QData/*62:0*/ Top__DOT__alu__DOT___GEN_27;
    Top__DOT__alu__DOT___GEN_27 = 0;
    // Body
    vlSelf->io_addr = vlSelf->Top__DOT__pcReg__DOT__regPC;
    vlSelf->Top__DOT__pcReg__DOT___regPC_T_1 = ((IData)(4U) 
                                                + vlSelf->Top__DOT__pcReg__DOT__regPC);
    vlSelf->io_inst = vlSelf->Top__DOT__memInst__DOT__mem
        [(0x3ffU & (vlSelf->Top__DOT__pcReg__DOT__regPC 
                    >> 2U))];
    Top__DOT__decoder__DOT___T_39 = ((8U & (vlSelf->io_inst 
                                            >> 0x1bU)) 
                                     | (7U & (vlSelf->io_inst 
                                              >> 0xcU)));
    Top__DOT__decoder__DOT___GEN_7 = ((6U == (7U & 
                                              (vlSelf->io_inst 
                                               >> 0xcU)))
                                       ? 5U : ((7U 
                                                == 
                                                (7U 
                                                 & (vlSelf->io_inst 
                                                    >> 0xcU)))
                                                ? 4U
                                                : 0U));
    Top__DOT__decoder__DOT___GEN_59 = (IData)(((0x20U 
                                                == 
                                                (0x7cU 
                                                 & vlSelf->io_inst)) 
                                               & (0x18U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 2U)))));
    vlSelf->io_rs1 = ((0x1fU == (0x1fU & (vlSelf->io_inst 
                                          >> 0xfU)))
                       ? vlSelf->Top__DOT__registers__DOT__regs_31
                       : ((0x1eU == (0x1fU & (vlSelf->io_inst 
                                              >> 0xfU)))
                           ? vlSelf->Top__DOT__registers__DOT__regs_30
                           : ((0x1dU == (0x1fU & (vlSelf->io_inst 
                                                  >> 0xfU)))
                               ? vlSelf->Top__DOT__registers__DOT__regs_29
                               : ((0x1cU == (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 0xfU)))
                                   ? vlSelf->Top__DOT__registers__DOT__regs_28
                                   : ((0x1bU == (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 0xfU)))
                                       ? vlSelf->Top__DOT__registers__DOT__regs_27
                                       : ((0x1aU == 
                                           (0x1fU & 
                                            (vlSelf->io_inst 
                                             >> 0xfU)))
                                           ? vlSelf->Top__DOT__registers__DOT__regs_26
                                           : ((0x19U 
                                               == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0xfU)))
                                               ? vlSelf->Top__DOT__registers__DOT__regs_25
                                               : ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->Top__DOT__registers__DOT__regs_24
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->Top__DOT__registers__DOT__regs_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->Top__DOT__registers__DOT__regs_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->io_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->Top__DOT__registers__DOT__regs_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->io_inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->Top__DOT__registers__DOT__regs_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->io_inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->Top__DOT__registers__DOT__regs_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->Top__DOT__registers__DOT__regs_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->io_inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->Top__DOT__registers__DOT__regs_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->io_inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->Top__DOT__registers__DOT__regs_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->io_inst 
                                                                >> 0xfU)))
                                                            ? vlSelf->Top__DOT__registers__DOT__regs_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->io_inst 
                                                                 >> 0xfU)))
                                                             ? vlSelf->Top__DOT__registers__DOT__regs_14
                                                             : 
                                                            ((0xdU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->io_inst 
                                                                  >> 0xfU)))
                                                              ? vlSelf->Top__DOT__registers__DOT__regs_13
                                                              : 
                                                             ((0xcU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->io_inst 
                                                                   >> 0xfU)))
                                                               ? vlSelf->Top__DOT__registers__DOT__regs_12
                                                               : 
                                                              ((0xbU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->io_inst 
                                                                    >> 0xfU)))
                                                                ? vlSelf->Top__DOT__registers__DOT__regs_11
                                                                : 
                                                               ((0xaU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->io_inst 
                                                                     >> 0xfU)))
                                                                 ? vlSelf->Top__DOT__registers__DOT__regs_10
                                                                 : 
                                                                ((9U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->io_inst 
                                                                      >> 0xfU)))
                                                                  ? vlSelf->Top__DOT__registers__DOT__regs_9
                                                                  : 
                                                                 ((8U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->io_inst 
                                                                       >> 0xfU)))
                                                                   ? vlSelf->Top__DOT__registers__DOT__regs_8
                                                                   : 
                                                                  ((7U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->io_inst 
                                                                        >> 0xfU)))
                                                                    ? vlSelf->Top__DOT__registers__DOT__regs_7
                                                                    : 
                                                                   ((6U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->io_inst 
                                                                         >> 0xfU)))
                                                                     ? vlSelf->Top__DOT__registers__DOT__regs_6
                                                                     : 
                                                                    ((5U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->io_inst 
                                                                          >> 0xfU)))
                                                                      ? vlSelf->Top__DOT__registers__DOT__regs_5
                                                                      : 
                                                                     ((4U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->io_inst 
                                                                           >> 0xfU)))
                                                                       ? vlSelf->Top__DOT__registers__DOT__regs_4
                                                                       : 
                                                                      ((3U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->io_inst 
                                                                            >> 0xfU)))
                                                                        ? vlSelf->Top__DOT__registers__DOT__regs_3
                                                                        : 
                                                                       ((2U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelf->io_inst 
                                                                             >> 0xfU)))
                                                                         ? vlSelf->Top__DOT__registers__DOT__regs_2
                                                                         : 
                                                                        ((1U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->io_inst 
                                                                              >> 0xfU)))
                                                                          ? vlSelf->Top__DOT__registers__DOT__regs_1
                                                                          : vlSelf->Top__DOT__registers__DOT__regs_0)))))))))))))))))))))))))))))));
    vlSelf->io_rs2 = ((0x1fU == (0x1fU & (vlSelf->io_inst 
                                          >> 0x14U)))
                       ? vlSelf->Top__DOT__registers__DOT__regs_31
                       : ((0x1eU == (0x1fU & (vlSelf->io_inst 
                                              >> 0x14U)))
                           ? vlSelf->Top__DOT__registers__DOT__regs_30
                           : ((0x1dU == (0x1fU & (vlSelf->io_inst 
                                                  >> 0x14U)))
                               ? vlSelf->Top__DOT__registers__DOT__regs_29
                               : ((0x1cU == (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 0x14U)))
                                   ? vlSelf->Top__DOT__registers__DOT__regs_28
                                   : ((0x1bU == (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 0x14U)))
                                       ? vlSelf->Top__DOT__registers__DOT__regs_27
                                       : ((0x1aU == 
                                           (0x1fU & 
                                            (vlSelf->io_inst 
                                             >> 0x14U)))
                                           ? vlSelf->Top__DOT__registers__DOT__regs_26
                                           : ((0x19U 
                                               == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0x14U)))
                                               ? vlSelf->Top__DOT__registers__DOT__regs_25
                                               : ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->Top__DOT__registers__DOT__regs_24
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->Top__DOT__registers__DOT__regs_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->Top__DOT__registers__DOT__regs_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->io_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->Top__DOT__registers__DOT__regs_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->io_inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->Top__DOT__registers__DOT__regs_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->io_inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->Top__DOT__registers__DOT__regs_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->Top__DOT__registers__DOT__regs_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->io_inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->Top__DOT__registers__DOT__regs_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->io_inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->Top__DOT__registers__DOT__regs_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->io_inst 
                                                                >> 0x14U)))
                                                            ? vlSelf->Top__DOT__registers__DOT__regs_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->io_inst 
                                                                 >> 0x14U)))
                                                             ? vlSelf->Top__DOT__registers__DOT__regs_14
                                                             : 
                                                            ((0xdU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->io_inst 
                                                                  >> 0x14U)))
                                                              ? vlSelf->Top__DOT__registers__DOT__regs_13
                                                              : 
                                                             ((0xcU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->io_inst 
                                                                   >> 0x14U)))
                                                               ? vlSelf->Top__DOT__registers__DOT__regs_12
                                                               : 
                                                              ((0xbU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->io_inst 
                                                                    >> 0x14U)))
                                                                ? vlSelf->Top__DOT__registers__DOT__regs_11
                                                                : 
                                                               ((0xaU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->io_inst 
                                                                     >> 0x14U)))
                                                                 ? vlSelf->Top__DOT__registers__DOT__regs_10
                                                                 : 
                                                                ((9U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->io_inst 
                                                                      >> 0x14U)))
                                                                  ? vlSelf->Top__DOT__registers__DOT__regs_9
                                                                  : 
                                                                 ((8U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->io_inst 
                                                                       >> 0x14U)))
                                                                   ? vlSelf->Top__DOT__registers__DOT__regs_8
                                                                   : 
                                                                  ((7U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->io_inst 
                                                                        >> 0x14U)))
                                                                    ? vlSelf->Top__DOT__registers__DOT__regs_7
                                                                    : 
                                                                   ((6U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->io_inst 
                                                                         >> 0x14U)))
                                                                     ? vlSelf->Top__DOT__registers__DOT__regs_6
                                                                     : 
                                                                    ((5U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->io_inst 
                                                                          >> 0x14U)))
                                                                      ? vlSelf->Top__DOT__registers__DOT__regs_5
                                                                      : 
                                                                     ((4U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->io_inst 
                                                                           >> 0x14U)))
                                                                       ? vlSelf->Top__DOT__registers__DOT__regs_4
                                                                       : 
                                                                      ((3U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->io_inst 
                                                                            >> 0x14U)))
                                                                        ? vlSelf->Top__DOT__registers__DOT__regs_3
                                                                        : 
                                                                       ((2U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelf->io_inst 
                                                                             >> 0x14U)))
                                                                         ? vlSelf->Top__DOT__registers__DOT__regs_2
                                                                         : 
                                                                        ((1U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->io_inst 
                                                                              >> 0x14U)))
                                                                          ? vlSelf->Top__DOT__registers__DOT__regs_1
                                                                          : vlSelf->Top__DOT__registers__DOT__regs_0)))))))))))))))))))))))))))))));
    Top__DOT__decoder__DOT__imm_i = ((((vlSelf->io_inst 
                                        >> 0x1fU) ? 0xfffffU
                                        : 0U) << 0xcU) 
                                     | (vlSelf->io_inst 
                                        >> 0x14U));
    Top__DOT__decoder__DOT___T_28 = ((1U == (7U & (vlSelf->io_inst 
                                                   >> 0xcU))) 
                                     | (5U == (7U & 
                                               (vlSelf->io_inst 
                                                >> 0xcU))));
    Top__DOT__decoder__DOT____VdfgTmp_h06dc57fc__0 
        = ((0x19U == (0x1fU & (vlSelf->io_inst >> 2U))) 
           | ((0U == (0x1fU & (vlSelf->io_inst >> 2U))) 
              | (4U == (0x1fU & (vlSelf->io_inst >> 2U)))));
    Top__DOT__decoder__DOT____VdfgTmp_hf7478d11__0 
        = ((0xdU == (0x1fU & (vlSelf->io_inst >> 2U))) 
           | (5U == (0x1fU & (vlSelf->io_inst >> 2U))));
    Top__DOT__decoder__DOT____VdfgTmp_h3a404b42__0 
        = (IData)(((0x10U == (0x7cU & vlSelf->io_inst)) 
                   & (IData)(Top__DOT__decoder__DOT___T_28)));
    vlSelf->io_bundleCtrl_ctrlJump = ((~ (IData)(Top__DOT__decoder__DOT____VdfgTmp_hf7478d11__0)) 
                                      & ((0x1bU == 
                                          (0x1fU & 
                                           (vlSelf->io_inst 
                                            >> 2U))) 
                                         | ((IData)(Top__DOT__decoder__DOT____VdfgTmp_h06dc57fc__0) 
                                            & (0x64U 
                                               == (0x7cU 
                                                   & vlSelf->io_inst)))));
    vlSelf->io_bundleCtrl_ctrlRegWrite = ((IData)(Top__DOT__decoder__DOT____VdfgTmp_hf7478d11__0) 
                                          | ((0x1bU 
                                              == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 2U))) 
                                             | ((IData)(Top__DOT__decoder__DOT____VdfgTmp_h06dc57fc__0) 
                                                | ((0x18U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 2U))) 
                                                   & (8U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->io_inst 
                                                          >> 2U)))))));
    vlSelf->io_bundleCtrl_ctrlStore = ((~ (IData)(Top__DOT__decoder__DOT____VdfgTmp_hf7478d11__0)) 
                                       & ((0x1bU != 
                                           (0x1fU & 
                                            (vlSelf->io_inst 
                                             >> 2U))) 
                                          & ((~ (IData)(Top__DOT__decoder__DOT____VdfgTmp_h06dc57fc__0)) 
                                             & (IData)(Top__DOT__decoder__DOT___GEN_59))));
    if (Top__DOT__decoder__DOT____VdfgTmp_hf7478d11__0) {
        vlSelf->io_bundleCtrl_ctrlLSType = 2U;
        vlSelf->io_bundleCtrl_ctrlOP = 1U;
    } else if ((0x1bU == (0x1fU & (vlSelf->io_inst 
                                   >> 2U)))) {
        vlSelf->io_bundleCtrl_ctrlLSType = 2U;
        vlSelf->io_bundleCtrl_ctrlOP = 1U;
    } else if (Top__DOT__decoder__DOT____VdfgTmp_h06dc57fc__0) {
        if ((0x19U == (0x1fU & (vlSelf->io_inst >> 2U)))) {
            vlSelf->io_bundleCtrl_ctrlLSType = 2U;
            vlSelf->io_bundleCtrl_ctrlOP = 1U;
        } else if ((0U == (0x1fU & (vlSelf->io_inst 
                                    >> 2U)))) {
            vlSelf->io_bundleCtrl_ctrlLSType = ((IData)(Top__DOT__decoder__DOT___T_28)
                                                 ? 1U
                                                 : 
                                                (((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_inst 
                                                       >> 0xcU))) 
                                                  | (0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->io_inst 
                                                         >> 0xcU))))
                                                  ? 0U
                                                  : 2U));
            vlSelf->io_bundleCtrl_ctrlOP = 1U;
        } else {
            vlSelf->io_bundleCtrl_ctrlLSType = 2U;
            vlSelf->io_bundleCtrl_ctrlOP = ((IData)(Top__DOT__decoder__DOT____VdfgTmp_h3a404b42__0)
                                             ? ((1U 
                                                 == (IData)(Top__DOT__decoder__DOT___T_39))
                                                 ? 8U
                                                 : 
                                                ((5U 
                                                  == (IData)(Top__DOT__decoder__DOT___T_39))
                                                  ? 9U
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(Top__DOT__decoder__DOT___T_39))
                                                   ? 0xbU
                                                   : 0U)))
                                             : ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->io_inst 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_inst 
                                                      >> 0xcU)))
                                                  ? 0xeU
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_inst 
                                                       >> 0xcU)))
                                                   ? 0xeU
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->io_inst 
                                                        >> 0xcU)))
                                                    ? 7U
                                                    : (IData)(Top__DOT__decoder__DOT___GEN_7))))));
        }
    } else if ((0x18U == (0x1fU & (vlSelf->io_inst 
                                   >> 2U)))) {
        vlSelf->io_bundleCtrl_ctrlLSType = 2U;
        vlSelf->io_bundleCtrl_ctrlOP = ((0U == (7U 
                                                & (vlSelf->io_inst 
                                                   >> 0xcU)))
                                         ? 0xcU : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->io_inst 
                                                        >> 0xcU)))
                                                    ? 0xdU
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->io_inst 
                                                         >> 0xcU)))
                                                     ? 0xeU
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->io_inst 
                                                          >> 0xcU)))
                                                      ? 0xfU
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->io_inst 
                                                           >> 0xcU)))
                                                       ? 0xeU
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->io_inst 
                                                            >> 0xcU)))
                                                        ? 0xfU
                                                        : 0U))))));
    } else if ((8U == (0x1fU & (vlSelf->io_inst >> 2U)))) {
        vlSelf->io_bundleCtrl_ctrlLSType = ((1U == 
                                             (7U & 
                                              (vlSelf->io_inst 
                                               >> 0xcU)))
                                             ? 1U : 
                                            ((0U == 
                                              (7U & 
                                               (vlSelf->io_inst 
                                                >> 0xcU)))
                                              ? 0U : 2U));
        vlSelf->io_bundleCtrl_ctrlOP = 1U;
    } else {
        vlSelf->io_bundleCtrl_ctrlLSType = 2U;
        vlSelf->io_bundleCtrl_ctrlOP = ((0xcU == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 2U)))
                                         ? ((0U == 
                                             (7U & 
                                              (vlSelf->io_inst 
                                               >> 0xcU)))
                                             ? ((0x40000000U 
                                                 & vlSelf->io_inst)
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->io_inst 
                                                     >> 0xcU)))
                                                 ? 8U
                                                 : 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_inst 
                                                      >> 0xcU)))
                                                  ? 0xeU
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_inst 
                                                       >> 0xcU)))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->io_inst 
                                                        >> 0xcU)))
                                                    ? 7U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->io_inst 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->io_inst)
                                                      ? 0xbU
                                                      : 9U)
                                                     : (IData)(Top__DOT__decoder__DOT___GEN_7)))))))
                                         : 0U);
    }
    vlSelf->io_bundleCtrl_ctrlLoad = ((~ (IData)(Top__DOT__decoder__DOT____VdfgTmp_hf7478d11__0)) 
                                      & ((0x1bU != 
                                          (0x1fU & 
                                           (vlSelf->io_inst 
                                            >> 2U))) 
                                         & ((IData)(Top__DOT__decoder__DOT____VdfgTmp_h06dc57fc__0) 
                                            & (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7cU 
                                                         & vlSelf->io_inst)) 
                                                       & (0x19U 
                                                          != 
                                                          (0x1fU 
                                                           & (vlSelf->io_inst 
                                                              >> 2U))))))));
    vlSelf->io_bundleCtrl_ctrlBranch = ((~ (IData)(Top__DOT__decoder__DOT____VdfgTmp_hf7478d11__0)) 
                                        & ((0x1bU != 
                                            (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 2U))) 
                                           & ((~ (IData)(Top__DOT__decoder__DOT____VdfgTmp_h06dc57fc__0)) 
                                              & (0x60U 
                                                 == 
                                                 (0x7cU 
                                                  & vlSelf->io_inst)))));
    vlSelf->io_bundleCtrl_ctrlJAL = ((~ (IData)(Top__DOT__decoder__DOT____VdfgTmp_hf7478d11__0)) 
                                     & (0x6cU == (0x7cU 
                                                  & vlSelf->io_inst)));
    vlSelf->io_bundleCtrl_ctrlALUSrc = ((IData)(Top__DOT__decoder__DOT____VdfgTmp_hf7478d11__0) 
                                        | ((0x1bU == 
                                            (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 2U))) 
                                           | ((IData)(Top__DOT__decoder__DOT____VdfgTmp_h06dc57fc__0) 
                                              | (IData)(Top__DOT__decoder__DOT___GEN_59))));
    vlSelf->io_bundleCtrl_ctrlSigned = (1U & ((IData)(Top__DOT__decoder__DOT____VdfgTmp_hf7478d11__0) 
                                              | ((0x1bU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 2U))) 
                                                 | ((IData)(Top__DOT__decoder__DOT____VdfgTmp_h06dc57fc__0)
                                                     ? 
                                                    ((0x19U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->io_inst 
                                                          >> 2U))) 
                                                     | ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_inst 
                                                             >> 2U)))
                                                         ? 
                                                        (~ 
                                                         ((4U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->io_inst 
                                                               >> 0xcU))) 
                                                          | (5U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->io_inst 
                                                                 >> 0xcU)))))
                                                         : 
                                                        ((IData)(Top__DOT__decoder__DOT____VdfgTmp_h3a404b42__0) 
                                                         | ((0U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->io_inst 
                                                                 >> 0xcU))) 
                                                            | (IData)(
                                                                      ((0x3000U 
                                                                        != 
                                                                        (0x7000U 
                                                                         & vlSelf->io_inst)) 
                                                                       | (2U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelf->io_inst 
                                                                              >> 0xcU)))))))))
                                                     : 
                                                    ((0x18U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->io_inst 
                                                          >> 2U))) 
                                                     | ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->io_inst 
                                                             >> 0xcU))) 
                                                        | ((1U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->io_inst 
                                                                >> 0xcU))) 
                                                           | ((4U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->io_inst 
                                                                   >> 0xcU))) 
                                                              | ((~ 
                                                                  ((6U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->io_inst 
                                                                        >> 0xcU))) 
                                                                   | (7U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->io_inst 
                                                                          >> 0xcU))))) 
                                                                 | (5U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->io_inst 
                                                                        >> 0xcU))))))))))));
    vlSelf->io_imm = (IData)(((IData)(Top__DOT__decoder__DOT____VdfgTmp_hf7478d11__0)
                               ? (QData)((IData)((0xfffff000U 
                                                  & vlSelf->io_inst)))
                               : ((0x1bU == (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 2U)))
                                   ? (((QData)((IData)(
                                                       ((vlSelf->io_inst 
                                                         >> 0x1fU)
                                                         ? 0xfffU
                                                         : 0U))) 
                                       << 0x15U) | (QData)((IData)(
                                                                   ((0x100000U 
                                                                     & (vlSelf->io_inst 
                                                                        >> 0xbU)) 
                                                                    | ((0xff000U 
                                                                        & vlSelf->io_inst) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->io_inst 
                                                                              >> 9U)) 
                                                                          | (0x7feU 
                                                                             & (vlSelf->io_inst 
                                                                                >> 0x14U))))))))
                                   : (QData)((IData)(
                                                     ((IData)(Top__DOT__decoder__DOT____VdfgTmp_h06dc57fc__0)
                                                       ? 
                                                      ((0x19U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->io_inst 
                                                            >> 2U)))
                                                        ? Top__DOT__decoder__DOT__imm_i
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_inst 
                                                             >> 2U)))
                                                         ? Top__DOT__decoder__DOT__imm_i
                                                         : 
                                                        ((IData)(Top__DOT__decoder__DOT____VdfgTmp_h3a404b42__0)
                                                          ? 
                                                         (0x1fU 
                                                          & (vlSelf->io_inst 
                                                             >> 0x14U))
                                                          : Top__DOT__decoder__DOT__imm_i)))
                                                       : 
                                                      ((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->io_inst 
                                                            >> 2U)))
                                                        ? 
                                                       ((((vlSelf->io_inst 
                                                           >> 0x1fU)
                                                           ? 0xfffffU
                                                           : 0U) 
                                                         << 0xcU) 
                                                        | ((0x800U 
                                                            & (vlSelf->io_inst 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->io_inst 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->io_inst 
                                                                    >> 7U)))))
                                                        : 
                                                       ((8U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_inst 
                                                             >> 2U)))
                                                         ? 
                                                        ((((vlSelf->io_inst 
                                                            >> 0x1fU)
                                                            ? 0xfffffU
                                                            : 0U) 
                                                          << 0xcU) 
                                                         | ((0xfe0U 
                                                             & (vlSelf->io_inst 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->io_inst 
                                                                  >> 7U))))
                                                         : 0U))))))));
    Top__DOT__alu__DOT___resultAlu_T_10 = ((IData)(vlSelf->io_bundleCtrl_ctrlJAL)
                                            ? vlSelf->Top__DOT__pcReg__DOT__regPC
                                            : vlSelf->io_rs1);
    Top__DOT__alu__DOT___resultAlu_T_14 = (0x1ffffffffULL 
                                           & ((QData)((IData)(vlSelf->Top__DOT__pcReg__DOT__regPC)) 
                                              + (QData)((IData)(vlSelf->io_imm))));
    Top__DOT__alu__DOT___resultBranch_T_1 = ((IData)(vlSelf->io_bundleCtrl_ctrlALUSrc)
                                              ? vlSelf->io_imm
                                              : vlSelf->io_rs2);
    Top__DOT__alu__DOT___GEN_0 = ((IData)(vlSelf->io_bundleCtrl_ctrlSigned)
                                   ? VL_LTS_III(32, Top__DOT__alu__DOT___resultAlu_T_10, Top__DOT__alu__DOT___resultBranch_T_1)
                                   : (Top__DOT__alu__DOT___resultAlu_T_10 
                                      < Top__DOT__alu__DOT___resultBranch_T_1));
    vlSelf->io_resultBranch = ((0U != (IData)(vlSelf->io_bundleCtrl_ctrlOP)) 
                               & ((1U != (IData)(vlSelf->io_bundleCtrl_ctrlOP)) 
                                  & ((2U != (IData)(vlSelf->io_bundleCtrl_ctrlOP)) 
                                     & ((4U != (IData)(vlSelf->io_bundleCtrl_ctrlOP)) 
                                        & ((5U != (IData)(vlSelf->io_bundleCtrl_ctrlOP)) 
                                           & ((7U != (IData)(vlSelf->io_bundleCtrl_ctrlOP)) 
                                              & ((8U 
                                                  != (IData)(vlSelf->io_bundleCtrl_ctrlOP)) 
                                                 & ((9U 
                                                     != (IData)(vlSelf->io_bundleCtrl_ctrlOP)) 
                                                    & ((0xbU 
                                                        != (IData)(vlSelf->io_bundleCtrl_ctrlOP)) 
                                                       & ((0xcU 
                                                           == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                           ? 
                                                          (Top__DOT__alu__DOT___resultAlu_T_10 
                                                           == Top__DOT__alu__DOT___resultBranch_T_1)
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                            ? 
                                                           (Top__DOT__alu__DOT___resultAlu_T_10 
                                                            != Top__DOT__alu__DOT___resultBranch_T_1)
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                             ? 
                                                            ((IData)(vlSelf->io_bundleCtrl_ctrlBranch) 
                                                             & (IData)(Top__DOT__alu__DOT___GEN_0))
                                                             : 
                                                            ((0xfU 
                                                              == (IData)(vlSelf->io_bundleCtrl_ctrlOP)) 
                                                             & ((IData)(vlSelf->io_bundleCtrl_ctrlSigned)
                                                                 ? 
                                                                VL_GTES_III(32, Top__DOT__alu__DOT___resultAlu_T_10, Top__DOT__alu__DOT___resultBranch_T_1)
                                                                 : 
                                                                (Top__DOT__alu__DOT___resultAlu_T_10 
                                                                 >= Top__DOT__alu__DOT___resultBranch_T_1)))))))))))))));
    Top__DOT__alu__DOT___GEN_27 = (0x7fffffffffffffffULL 
                                   & ((1U == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                       ? (0x1ffffffffULL 
                                          & ((QData)((IData)(Top__DOT__alu__DOT___resultAlu_T_10)) 
                                             + (QData)((IData)(Top__DOT__alu__DOT___resultBranch_T_1))))
                                       : ((2U == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                           ? (0x1ffffffffULL 
                                              & ((QData)((IData)(Top__DOT__alu__DOT___resultAlu_T_10)) 
                                                 - (QData)((IData)(Top__DOT__alu__DOT___resultBranch_T_1))))
                                           : ((4U == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                               ? (QData)((IData)(
                                                                 (Top__DOT__alu__DOT___resultAlu_T_10 
                                                                  & Top__DOT__alu__DOT___resultBranch_T_1)))
                                               : ((5U 
                                                   == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                   ? (QData)((IData)(
                                                                     (Top__DOT__alu__DOT___resultAlu_T_10 
                                                                      | Top__DOT__alu__DOT___resultBranch_T_1)))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                    ? (QData)((IData)(
                                                                      (Top__DOT__alu__DOT___resultAlu_T_10 
                                                                       ^ Top__DOT__alu__DOT___resultBranch_T_1)))
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                     ? 
                                                    ((QData)((IData)(Top__DOT__alu__DOT___resultAlu_T_10)) 
                                                     << 
                                                     (0x1fU 
                                                      & Top__DOT__alu__DOT___resultBranch_T_1))
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                      ? (QData)((IData)(
                                                                        (Top__DOT__alu__DOT___resultAlu_T_10 
                                                                         >> 
                                                                         (0x1fU 
                                                                          & Top__DOT__alu__DOT___resultBranch_T_1))))
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                       ? (QData)((IData)(
                                                                         VL_SHIFTRS_III(32,32,5, Top__DOT__alu__DOT___resultAlu_T_10, 
                                                                                (0x1fU 
                                                                                & Top__DOT__alu__DOT___resultBranch_T_1))))
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                        ? Top__DOT__alu__DOT___resultAlu_T_14
                                                        : 
                                                       ((0xdU 
                                                         == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                         ? Top__DOT__alu__DOT___resultAlu_T_14
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                          ? 
                                                         ((IData)(vlSelf->io_bundleCtrl_ctrlBranch)
                                                           ? Top__DOT__alu__DOT___resultAlu_T_14
                                                           : (QData)((IData)(Top__DOT__alu__DOT___GEN_0)))
                                                          : 
                                                         ((0xfU 
                                                           == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                           ? Top__DOT__alu__DOT___resultAlu_T_14
                                                           : 0ULL)))))))))))));
    if ((0U == (IData)(vlSelf->io_bundleCtrl_ctrlOP))) {
        vlSelf->io_resultALU = 0U;
        vlSelf->Top__DOT__memData__DOT__mem_MPORT_addr = 0U;
    } else {
        vlSelf->io_resultALU = (IData)(Top__DOT__alu__DOT___GEN_27);
        vlSelf->Top__DOT__memData__DOT__mem_MPORT_addr 
            = (0x3ffU & (IData)((Top__DOT__alu__DOT___GEN_27 
                                 >> 2U)));
    }
    vlSelf->Top__DOT__memData__DOT__dataLoad = vlSelf->Top__DOT__memData__DOT__mem
        [vlSelf->Top__DOT__memData__DOT__mem_MPORT_addr];
    vlSelf->io_result = ((IData)(vlSelf->io_bundleCtrl_ctrlLoad)
                          ? ((IData)(vlSelf->io_bundleCtrl_ctrlALUSrc)
                              ? ((IData)(vlSelf->io_bundleCtrl_ctrlSigned)
                                  ? ((((0x8000U & vlSelf->Top__DOT__memData__DOT__dataLoad)
                                        ? 0xffffU : 0U) 
                                      << 0x10U) | (0xffffU 
                                                   & vlSelf->Top__DOT__memData__DOT__dataLoad))
                                  : (0xffffU & vlSelf->Top__DOT__memData__DOT__dataLoad))
                              : ((IData)(vlSelf->io_bundleCtrl_ctrlSigned)
                                  ? ((((0x80U & vlSelf->Top__DOT__memData__DOT__dataLoad)
                                        ? 0xffffffU
                                        : 0U) << 8U) 
                                     | (0xffU & vlSelf->Top__DOT__memData__DOT__dataLoad))
                                  : (0xffU & vlSelf->Top__DOT__memData__DOT__dataLoad)))
                          : vlSelf->io_resultALU);
}

VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VTop___024root___eval_triggers__stl(VTop___024root* vlSelf);

VL_ATTR_COLD bool VTop___024root___eval_phase__stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___ctor_var_reset(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_addr = VL_RAND_RESET_I(32);
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
    vlSelf->io_resultALU = VL_RAND_RESET_I(32);
    vlSelf->io_rs1 = VL_RAND_RESET_I(32);
    vlSelf->io_rs2 = VL_RAND_RESET_I(32);
    vlSelf->io_imm = VL_RAND_RESET_I(32);
    vlSelf->io_resultBranch = VL_RAND_RESET_I(1);
    vlSelf->io_result = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__pcReg__DOT__regPC = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__pcReg__DOT___regPC_T_1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->Top__DOT__memInst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Top__DOT__registers__DOT__regs_0 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_2 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_3 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_4 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_5 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_6 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_7 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_8 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_9 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_10 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_11 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_12 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_13 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_14 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_15 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_16 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_17 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_18 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_19 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_20 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_21 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_22 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_23 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_24 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_25 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_26 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_27 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_28 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_29 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_30 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_31 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->Top__DOT__memData__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Top__DOT__memData__DOT__mem_MPORT_addr = VL_RAND_RESET_I(10);
    vlSelf->Top__DOT__memData__DOT__dataLoad = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VTop___024root___configure_coverage(VTop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
