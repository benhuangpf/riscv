// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoder.h for the primary calling header

#include "verilated.h"

#include "VDecoder___024root.h"

VL_INLINE_OPT void VDecoder___024root___combo__TOP__0(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___combo__TOP__0\n"); );
    // Init
    IData/*31:0*/ Decoder__DOT__imm_i;
    CData/*0:0*/ Decoder__DOT___T_28;
    CData/*3:0*/ Decoder__DOT___T_39;
    CData/*3:0*/ Decoder__DOT___GEN_7;
    CData/*0:0*/ Decoder__DOT___GEN_59;
    CData/*3:0*/ Decoder__DOT___GEN_63;
    IData/*31:0*/ Decoder__DOT___GEN_69;
    CData/*0:0*/ Decoder__DOT___GEN_71;
    CData/*1:0*/ Decoder__DOT___GEN_72;
    CData/*3:0*/ Decoder__DOT___GEN_78;
    // Body
    vlSelf->io_bundleCtrl_ctrlJump = ((~ ((0xdU == 
                                           (0x1fU & 
                                            (vlSelf->io_inst 
                                             >> 2U))) 
                                          | (5U == 
                                             (0x1fU 
                                              & (vlSelf->io_inst 
                                                 >> 2U))))) 
                                      & ((0x1bU == 
                                          (0x1fU & 
                                           (vlSelf->io_inst 
                                            >> 2U))) 
                                         | (IData)(
                                                   ((0x64U 
                                                     == 
                                                     (0x7cU 
                                                      & vlSelf->io_inst)) 
                                                    & (((0x19U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_inst 
                                                             >> 2U))) 
                                                        | (0U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->io_inst 
                                                               >> 2U)))) 
                                                       | (4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->io_inst 
                                                              >> 2U))))))));
    vlSelf->io_bundleCtrl_ctrlBranch = ((~ ((0xdU == 
                                             (0x1fU 
                                              & (vlSelf->io_inst 
                                                 >> 2U))) 
                                            | (5U == 
                                               (0x1fU 
                                                & (vlSelf->io_inst 
                                                   >> 2U))))) 
                                        & ((0x1bU != 
                                            (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 2U))) 
                                           & (IData)(
                                                     ((0x60U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->io_inst)) 
                                                      & (~ 
                                                         (((0x19U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->io_inst 
                                                                >> 2U))) 
                                                           | (0U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->io_inst 
                                                                  >> 2U)))) 
                                                          | (4U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->io_inst 
                                                                 >> 2U)))))))));
    vlSelf->io_bundleCtrl_ctrlRegWrite = (((0xdU == 
                                            (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 2U))) 
                                           | (5U == 
                                              (0x1fU 
                                               & (vlSelf->io_inst 
                                                  >> 2U)))) 
                                          | ((0x1bU 
                                              == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 2U))) 
                                             | ((((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 2U))) 
                                                  | (0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_inst 
                                                         >> 2U)))) 
                                                 | (4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 2U)))) 
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
    vlSelf->io_bundleCtrl_ctrlLoad = ((~ ((0xdU == 
                                           (0x1fU & 
                                            (vlSelf->io_inst 
                                             >> 2U))) 
                                          | (5U == 
                                             (0x1fU 
                                              & (vlSelf->io_inst 
                                                 >> 2U))))) 
                                      & ((0x1bU != 
                                          (0x1fU & 
                                           (vlSelf->io_inst 
                                            >> 2U))) 
                                         & ((((0x19U 
                                               == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 2U))) 
                                              | (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 2U)))) 
                                             | (4U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 2U)))) 
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
    vlSelf->io_bundleCtrl_ctrlJAL = (IData)(((0x6cU 
                                              == (0x7cU 
                                                  & vlSelf->io_inst)) 
                                             & (~ (
                                                   (0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 2U))) 
                                                   | (5U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->io_inst 
                                                          >> 2U)))))));
    vlSelf->io_bundleReg_rs1 = (0x1fU & (vlSelf->io_inst 
                                         >> 0xfU));
    vlSelf->io_bundleReg_rs2 = (0x1fU & (vlSelf->io_inst 
                                         >> 0x14U));
    vlSelf->io_bundleReg_rd = (0x1fU & (vlSelf->io_inst 
                                        >> 7U));
    Decoder__DOT___GEN_59 = (IData)(((0x20U == (0x7cU 
                                                & vlSelf->io_inst)) 
                                     & (0x18U != (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 2U)))));
    Decoder__DOT__imm_i = ((((vlSelf->io_inst >> 0x1fU)
                              ? 0xfffffU : 0U) << 0xcU) 
                           | (vlSelf->io_inst >> 0x14U));
    Decoder__DOT___T_39 = ((8U & (vlSelf->io_inst >> 0x1bU)) 
                           | (7U & (vlSelf->io_inst 
                                    >> 0xcU)));
    Decoder__DOT___T_28 = ((1U == (7U & (vlSelf->io_inst 
                                         >> 0xcU))) 
                           | (5U == (7U & (vlSelf->io_inst 
                                           >> 0xcU))));
    if ((((0x19U == (0x1fU & (vlSelf->io_inst >> 2U))) 
          | (0U == (0x1fU & (vlSelf->io_inst >> 2U)))) 
         | (4U == (0x1fU & (vlSelf->io_inst >> 2U))))) {
        if ((0x19U == (0x1fU & (vlSelf->io_inst >> 2U)))) {
            Decoder__DOT___GEN_72 = 2U;
            Decoder__DOT___GEN_69 = Decoder__DOT__imm_i;
        } else if ((0U == (0x1fU & (vlSelf->io_inst 
                                    >> 2U)))) {
            Decoder__DOT___GEN_72 = (((1U == (7U & 
                                              (vlSelf->io_inst 
                                               >> 0xcU))) 
                                      | (5U == (7U 
                                                & (vlSelf->io_inst 
                                                   >> 0xcU))))
                                      ? 1U : (((4U 
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
            Decoder__DOT___GEN_69 = Decoder__DOT__imm_i;
        } else {
            Decoder__DOT___GEN_72 = 2U;
            Decoder__DOT___GEN_69 = ((IData)(((0x10U 
                                               == (0x7cU 
                                                   & vlSelf->io_inst)) 
                                              & (IData)(Decoder__DOT___T_28)))
                                      ? (0x1fU & (vlSelf->io_inst 
                                                  >> 0x14U))
                                      : Decoder__DOT__imm_i);
        }
        Decoder__DOT___GEN_71 = (1U & ((0x19U == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 2U))) 
                                       | ((0U == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 2U)))
                                           ? (~ ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_inst 
                                                      >> 0xcU))) 
                                                 | (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->io_inst 
                                                        >> 0xcU)))))
                                           : ((IData)(
                                                      ((0x10U 
                                                        == 
                                                        (0x7cU 
                                                         & vlSelf->io_inst)) 
                                                       & (IData)(Decoder__DOT___T_28))) 
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
                                                                   >> 0xcU))))))))));
    } else {
        if ((0x18U == (0x1fU & (vlSelf->io_inst >> 2U)))) {
            Decoder__DOT___GEN_72 = 2U;
            Decoder__DOT___GEN_69 = ((((vlSelf->io_inst 
                                        >> 0x1fU) ? 0xfffffU
                                        : 0U) << 0xcU) 
                                     | ((0x800U & (vlSelf->io_inst 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->io_inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->io_inst 
                                                 >> 7U)))));
        } else if ((8U == (0x1fU & (vlSelf->io_inst 
                                    >> 2U)))) {
            Decoder__DOT___GEN_72 = ((1U == (7U & (vlSelf->io_inst 
                                                   >> 0xcU)))
                                      ? 1U : ((0U == 
                                               (7U 
                                                & (vlSelf->io_inst 
                                                   >> 0xcU)))
                                               ? 0U
                                               : 2U));
            Decoder__DOT___GEN_69 = ((((vlSelf->io_inst 
                                        >> 0x1fU) ? 0xfffffU
                                        : 0U) << 0xcU) 
                                     | ((0xfe0U & (vlSelf->io_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->io_inst 
                                            >> 7U))));
        } else {
            Decoder__DOT___GEN_72 = 2U;
            Decoder__DOT___GEN_69 = 0U;
        }
        Decoder__DOT___GEN_71 = (1U & ((0x18U != (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 2U))) 
                                       | ((0U == (7U 
                                                  & (vlSelf->io_inst 
                                                     >> 0xcU))) 
                                          | ((1U == 
                                              (7U & 
                                               (vlSelf->io_inst 
                                                >> 0xcU))) 
                                             | ((4U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->io_inst 
                                                     >> 0xcU))) 
                                                | ((5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->io_inst 
                                                        >> 0xcU))) 
                                                   | ((6U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->io_inst 
                                                           >> 0xcU))) 
                                                      & (7U 
                                                         != 
                                                         (7U 
                                                          & (vlSelf->io_inst 
                                                             >> 0xcU))))))))));
    }
    Decoder__DOT___GEN_7 = ((6U == (7U & (vlSelf->io_inst 
                                          >> 0xcU)))
                             ? 5U : ((7U == (7U & (vlSelf->io_inst 
                                                   >> 0xcU)))
                                      ? 4U : 0U));
    vlSelf->io_bundleCtrl_ctrlStore = ((~ ((0xdU == 
                                            (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 2U))) 
                                           | (5U == 
                                              (0x1fU 
                                               & (vlSelf->io_inst 
                                                  >> 2U))))) 
                                       & ((0x1bU != 
                                           (0x1fU & 
                                            (vlSelf->io_inst 
                                             >> 2U))) 
                                          & ((~ (((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 2U))) 
                                                  | (0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_inst 
                                                         >> 2U)))) 
                                                 | (4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 2U))))) 
                                             & (IData)(Decoder__DOT___GEN_59))));
    vlSelf->io_bundleCtrl_ctrlALUSrc = (((0xdU == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 2U))) 
                                         | (5U == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 2U)))) 
                                        | ((0x1bU == 
                                            (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 2U))) 
                                           | ((((0x19U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 2U))) 
                                                | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 2U)))) 
                                               | (4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 2U)))) 
                                              | (IData)(Decoder__DOT___GEN_59))));
    Decoder__DOT___GEN_63 = ((0x18U == (0x1fU & (vlSelf->io_inst 
                                                 >> 2U)))
                              ? ((0U == (7U & (vlSelf->io_inst 
                                               >> 0xcU)))
                                  ? 0xcU : ((1U == 
                                             (7U & 
                                              (vlSelf->io_inst 
                                               >> 0xcU)))
                                             ? 0xdU
                                             : ((4U 
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
                                                    : 0U))))))
                              : ((8U == (0x1fU & (vlSelf->io_inst 
                                                  >> 2U)))
                                  ? 1U : ((0xcU == 
                                           (0x1fU & 
                                            (vlSelf->io_inst 
                                             >> 2U)))
                                           ? ((0U == 
                                               (7U 
                                                & (vlSelf->io_inst 
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
                                                       : (IData)(Decoder__DOT___GEN_7)))))))
                                           : 0U)));
    vlSelf->io_bundleCtrl_ctrlSigned = (((0xdU == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 2U))) 
                                         | (5U == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 2U)))) 
                                        | ((0x1bU == 
                                            (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 2U))) 
                                           | (IData)(Decoder__DOT___GEN_71)));
    vlSelf->io_imm = (IData)((((0xdU == (0x1fU & (vlSelf->io_inst 
                                                  >> 2U))) 
                               | (5U == (0x1fU & (vlSelf->io_inst 
                                                  >> 2U))))
                               ? (QData)((IData)((0xfffff000U 
                                                  & vlSelf->io_inst)))
                               : ((0x1bU == (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 2U)))
                                   ? ((QData)((IData)(
                                                      ((((vlSelf->io_inst 
                                                          >> 0x1fU)
                                                          ? 0xfffU
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((0x80000U 
                                                           & (vlSelf->io_inst 
                                                              >> 0xcU)) 
                                                          | ((0x7f800U 
                                                              & (vlSelf->io_inst 
                                                                 >> 1U)) 
                                                             | ((0x400U 
                                                                 & (vlSelf->io_inst 
                                                                    >> 0xaU)) 
                                                                | (0x3ffU 
                                                                   & (vlSelf->io_inst 
                                                                      >> 0x15U)))))))) 
                                      << 1U) : (QData)((IData)(Decoder__DOT___GEN_69)))));
    Decoder__DOT___GEN_78 = ((0x1bU == (0x1fU & (vlSelf->io_inst 
                                                 >> 2U)))
                              ? 1U : ((((0x19U == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 2U))) 
                                        | (0U == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 2U)))) 
                                       | (4U == (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 2U))))
                                       ? ((0x19U == 
                                           (0x1fU & 
                                            (vlSelf->io_inst 
                                             >> 2U)))
                                           ? 1U : (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 
                                                   ((IData)(
                                                            ((0x10U 
                                                              == 
                                                              (0x7cU 
                                                               & vlSelf->io_inst)) 
                                                             & (IData)(Decoder__DOT___T_28)))
                                                     ? 
                                                    ((1U 
                                                      == (IData)(Decoder__DOT___T_39))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(Decoder__DOT___T_39))
                                                       ? 9U
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(Decoder__DOT___T_39))
                                                        ? 0xbU
                                                        : 0U)))
                                                     : 
                                                    ((0U 
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
                                                         : (IData)(Decoder__DOT___GEN_7))))))))
                                       : (IData)(Decoder__DOT___GEN_63)));
    if (((0xdU == (0x1fU & (vlSelf->io_inst >> 2U))) 
         | (5U == (0x1fU & (vlSelf->io_inst >> 2U))))) {
        vlSelf->io_bundleCtrl_ctrlLSType = 2U;
        vlSelf->io_bundleCtrl_ctrlOP = 1U;
    } else {
        vlSelf->io_bundleCtrl_ctrlLSType = ((0x1bU 
                                             == (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 2U)))
                                             ? 2U : (IData)(Decoder__DOT___GEN_72));
        vlSelf->io_bundleCtrl_ctrlOP = Decoder__DOT___GEN_78;
    }
}

void VDecoder___024root___eval(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval\n"); );
    // Body
    VDecoder___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VDecoder___024root___eval_debug_assertions(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
