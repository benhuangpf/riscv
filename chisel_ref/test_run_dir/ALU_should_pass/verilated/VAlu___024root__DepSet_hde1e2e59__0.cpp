// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAlu.h for the primary calling header

#include "verilated.h"

#include "VAlu___024root.h"

VL_INLINE_OPT void VAlu___024root___combo__TOP__0(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___combo__TOP__0\n"); );
    // Init
    IData/*31:0*/ Alu__DOT___resultAlu_T_10;
    IData/*31:0*/ Alu__DOT___resultBranch_T_1;
    QData/*32:0*/ Alu__DOT___resultAlu_T_14;
    CData/*0:0*/ Alu__DOT___GEN_0;
    QData/*62:0*/ Alu__DOT___GEN_27;
    // Body
    Alu__DOT___resultAlu_T_14 = (0x1ffffffffULL & ((QData)((IData)(vlSelf->io_pc)) 
                                                   + (QData)((IData)(vlSelf->io_imm))));
    Alu__DOT___resultAlu_T_10 = ((IData)(vlSelf->io_bundleAluControl_ctrlJAL)
                                  ? vlSelf->io_pc : vlSelf->io_dataRead1);
    Alu__DOT___resultBranch_T_1 = ((IData)(vlSelf->io_bundleAluControl_ctrlALUSrc)
                                    ? vlSelf->io_imm
                                    : vlSelf->io_dataRead2);
    Alu__DOT___GEN_0 = ((IData)(vlSelf->io_bundleAluControl_ctrlSigned)
                         ? VL_LTS_III(32, Alu__DOT___resultAlu_T_10, Alu__DOT___resultBranch_T_1)
                         : (Alu__DOT___resultAlu_T_10 
                            < Alu__DOT___resultBranch_T_1));
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
                                                          (Alu__DOT___resultAlu_T_10 
                                                           == Alu__DOT___resultBranch_T_1)
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                            ? 
                                                           (Alu__DOT___resultAlu_T_10 
                                                            != Alu__DOT___resultBranch_T_1)
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
                                                                VL_GTES_III(32, Alu__DOT___resultAlu_T_10, Alu__DOT___resultBranch_T_1)
                                                                 : 
                                                                (Alu__DOT___resultAlu_T_10 
                                                                 >= Alu__DOT___resultBranch_T_1)))))))))))))));
    Alu__DOT___GEN_27 = (0x7fffffffffffffffULL & ((1U 
                                                   == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                   ? 
                                                  (0x1ffffffffULL 
                                                   & ((QData)((IData)(Alu__DOT___resultAlu_T_10)) 
                                                      + (QData)((IData)(Alu__DOT___resultBranch_T_1))))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                    ? 
                                                   (0x1ffffffffULL 
                                                    & ((QData)((IData)(Alu__DOT___resultAlu_T_10)) 
                                                       - (QData)((IData)(Alu__DOT___resultBranch_T_1))))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                     ? (QData)((IData)(
                                                                       (Alu__DOT___resultAlu_T_10 
                                                                        & Alu__DOT___resultBranch_T_1)))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                      ? (QData)((IData)(
                                                                        (Alu__DOT___resultAlu_T_10 
                                                                         | Alu__DOT___resultBranch_T_1)))
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                       ? (QData)((IData)(
                                                                         (Alu__DOT___resultAlu_T_10 
                                                                          ^ Alu__DOT___resultBranch_T_1)))
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                        ? 
                                                       ((QData)((IData)(Alu__DOT___resultAlu_T_10)) 
                                                        << 
                                                        (0x1fU 
                                                         & Alu__DOT___resultBranch_T_1))
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                         ? (QData)((IData)(
                                                                           (Alu__DOT___resultAlu_T_10 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & Alu__DOT___resultBranch_T_1))))
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                                          ? (QData)((IData)(
                                                                            VL_SHIFTRS_III(32,32,5, Alu__DOT___resultAlu_T_10, 
                                                                                (0x1fU 
                                                                                & Alu__DOT___resultBranch_T_1))))
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
    vlSelf->io_resultAlu = (IData)(((0U == (IData)(vlSelf->io_bundleAluControl_ctrlOP))
                                     ? 0ULL : Alu__DOT___GEN_27));
}

void VAlu___024root___eval(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval\n"); );
    // Body
    VAlu___024root___combo__TOP__0(vlSelf);
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
