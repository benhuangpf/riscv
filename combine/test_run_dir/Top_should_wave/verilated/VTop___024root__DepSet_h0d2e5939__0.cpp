// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop___024root.h"

void VTop___024root___eval_act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_act\n"); );
}

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ Top__DOT__decoder__DOT___T_28;
    Top__DOT__decoder__DOT___T_28 = 0;
    CData/*3:0*/ Top__DOT__decoder__DOT___T_39;
    Top__DOT__decoder__DOT___T_39 = 0;
    CData/*3:0*/ Top__DOT__decoder__DOT___GEN_7;
    Top__DOT__decoder__DOT___GEN_7 = 0;
    CData/*0:0*/ Top__DOT__decoder__DOT___GEN_59;
    Top__DOT__decoder__DOT___GEN_59 = 0;
    CData/*3:0*/ Top__DOT__decoder__DOT___GEN_63;
    Top__DOT__decoder__DOT___GEN_63 = 0;
    CData/*0:0*/ Top__DOT__decoder__DOT____VdfgTmp_hf7478d11__0;
    Top__DOT__decoder__DOT____VdfgTmp_hf7478d11__0 = 0;
    CData/*0:0*/ Top__DOT__decoder__DOT____VdfgTmp_h06dc57fc__0;
    Top__DOT__decoder__DOT____VdfgTmp_h06dc57fc__0 = 0;
    CData/*0:0*/ Top__DOT__decoder__DOT____VdfgTmp_h3a404b42__0;
    Top__DOT__decoder__DOT____VdfgTmp_h3a404b42__0 = 0;
    IData/*31:0*/ Top__DOT__registers__DOT___GEN_13;
    Top__DOT__registers__DOT___GEN_13 = 0;
    IData/*31:0*/ Top__DOT__registers__DOT___GEN_26;
    Top__DOT__registers__DOT___GEN_26 = 0;
    IData/*31:0*/ Top__DOT__registers__DOT___GEN_45;
    Top__DOT__registers__DOT___GEN_45 = 0;
    IData/*31:0*/ Top__DOT__registers__DOT___GEN_58;
    Top__DOT__registers__DOT___GEN_58 = 0;
    QData/*32:0*/ Top__DOT__alu__DOT___resultAlu_T_14;
    Top__DOT__alu__DOT___resultAlu_T_14 = 0;
    CData/*0:0*/ Top__DOT__alu__DOT___GEN_0;
    Top__DOT__alu__DOT___GEN_0 = 0;
    QData/*62:0*/ Top__DOT__alu__DOT___GEN_27;
    Top__DOT__alu__DOT___GEN_27 = 0;
    SData/*9:0*/ __Vdlyvdim0__Top__DOT__memData__DOT__mem__v0;
    __Vdlyvdim0__Top__DOT__memData__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__memData__DOT__mem__v0;
    __Vdlyvval__Top__DOT__memData__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__memData__DOT__mem__v0;
    __Vdlyvset__Top__DOT__memData__DOT__mem__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__Top__DOT__memData__DOT__mem__v1;
    __Vdlyvdim0__Top__DOT__memData__DOT__mem__v1 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__memData__DOT__mem__v1;
    __Vdlyvval__Top__DOT__memData__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__memData__DOT__mem__v1;
    __Vdlyvset__Top__DOT__memData__DOT__mem__v1 = 0;
    // Body
    __Vdlyvset__Top__DOT__memData__DOT__mem__v0 = 0U;
    __Vdlyvset__Top__DOT__memData__DOT__mem__v1 = 0U;
    if (((IData)(vlSelf->io_bundleCtrl_ctrlStore) & (IData)(vlSelf->io_bundleCtrl_ctrlALUSrc))) {
        __Vdlyvval__Top__DOT__memData__DOT__mem__v0 
            = ((0xffff0000U & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data) 
               | (0xffffU & vlSelf->io_rs2));
        __Vdlyvset__Top__DOT__memData__DOT__mem__v0 = 1U;
        __Vdlyvdim0__Top__DOT__memData__DOT__mem__v0 
            = vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_addr;
    }
    if (((IData)(vlSelf->io_bundleCtrl_ctrlStore) & 
         (~ (IData)(vlSelf->io_bundleCtrl_ctrlALUSrc)))) {
        __Vdlyvval__Top__DOT__memData__DOT__mem__v1 
            = ((0xffffff00U & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data) 
               | (0xffU & vlSelf->io_rs2));
        __Vdlyvset__Top__DOT__memData__DOT__mem__v1 = 1U;
        __Vdlyvdim0__Top__DOT__memData__DOT__mem__v1 
            = vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_addr;
    }
    if (((IData)(vlSelf->io_bundleCtrl_ctrlRegWrite) 
         & (0U != (0x1fU & (vlSelf->io_inst >> 7U))))) {
        if (vlSelf->io_bundleCtrl_ctrlJump) {
            if ((0x1fU == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_31 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x1eU == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_30 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x1dU == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_29 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x1cU == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_28 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x1bU == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_27 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x1aU == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_26 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x19U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_25 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0xeU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_14 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0xfU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_15 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x10U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_16 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x11U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_17 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x12U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_18 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x13U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_19 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x14U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_20 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x15U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_21 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x16U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_22 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x17U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_23 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x18U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_24 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((6U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_6 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((9U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_9 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((5U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_5 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_0 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((7U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_7 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((1U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_1 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((3U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_3 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((8U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_8 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0xaU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_10 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((2U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_2 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0xbU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_11 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((4U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_4 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0xcU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_12 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0xdU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_13 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
        } else {
            if ((0x1fU == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_31 
                    = vlSelf->io_result;
            }
            if ((0x1eU == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_30 
                    = vlSelf->io_result;
            }
            if ((0x1dU == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_29 
                    = vlSelf->io_result;
            }
            if ((0x1cU == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_28 
                    = vlSelf->io_result;
            }
            if ((0x1bU == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_27 
                    = vlSelf->io_result;
            }
            if ((0x1aU == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_26 
                    = vlSelf->io_result;
            }
            if ((0x19U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_25 
                    = vlSelf->io_result;
            }
            if ((0xeU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_14 
                    = vlSelf->io_result;
            }
            if ((0xfU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_15 
                    = vlSelf->io_result;
            }
            if ((0x10U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_16 
                    = vlSelf->io_result;
            }
            if ((0x11U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_17 
                    = vlSelf->io_result;
            }
            if ((0x12U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_18 
                    = vlSelf->io_result;
            }
            if ((0x13U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_19 
                    = vlSelf->io_result;
            }
            if ((0x14U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_20 
                    = vlSelf->io_result;
            }
            if ((0x15U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_21 
                    = vlSelf->io_result;
            }
            if ((0x16U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_22 
                    = vlSelf->io_result;
            }
            if ((0x17U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_23 
                    = vlSelf->io_result;
            }
            if ((0x18U == (0x1fU & (vlSelf->io_inst 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_24 
                    = vlSelf->io_result;
            }
            if ((6U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_6 
                    = vlSelf->io_result;
            }
            if ((9U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_9 
                    = vlSelf->io_result;
            }
            if ((5U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_5 
                    = vlSelf->io_result;
            }
            if ((0U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_0 
                    = vlSelf->io_result;
            }
            if ((7U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_7 
                    = vlSelf->io_result;
            }
            if ((1U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_1 
                    = vlSelf->io_result;
            }
            if ((3U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_3 
                    = vlSelf->io_result;
            }
            if ((8U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_8 
                    = vlSelf->io_result;
            }
            if ((0xaU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_10 
                    = vlSelf->io_result;
            }
            if ((2U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_2 
                    = vlSelf->io_result;
            }
            if ((0xbU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_11 
                    = vlSelf->io_result;
            }
            if ((4U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_4 
                    = vlSelf->io_result;
            }
            if ((0xcU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_12 
                    = vlSelf->io_result;
            }
            if ((0xdU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_13 
                    = vlSelf->io_result;
            }
        }
    }
    if (__Vdlyvset__Top__DOT__memData__DOT__mem__v0) {
        vlSelf->Top__DOT__memData__DOT__mem[__Vdlyvdim0__Top__DOT__memData__DOT__mem__v0] 
            = __Vdlyvval__Top__DOT__memData__DOT__mem__v0;
    }
    if (__Vdlyvset__Top__DOT__memData__DOT__mem__v1) {
        vlSelf->Top__DOT__memData__DOT__mem[__Vdlyvdim0__Top__DOT__memData__DOT__mem__v1] 
            = __Vdlyvval__Top__DOT__memData__DOT__mem__v1;
    }
    vlSelf->Top__DOT__pcReg__DOT__regPC = ((IData)(vlSelf->reset)
                                            ? 0x84U
                                            : (((IData)(vlSelf->io_bundleCtrl_ctrlJump) 
                                                | ((IData)(vlSelf->io_bundleCtrl_ctrlBranch) 
                                                   & (IData)(vlSelf->io_resultBranch)))
                                                ? vlSelf->io_result
                                                : vlSelf->Top__DOT__pcReg__DOT___regPC_T_1));
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
    Top__DOT__decoder__DOT___GEN_59 = (IData)(((0x20U 
                                                == 
                                                (0x7cU 
                                                 & vlSelf->io_inst)) 
                                               & (0x18U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 2U)))));
    Top__DOT__registers__DOT___GEN_13 = ((0xdU == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0xfU)))
                                          ? vlSelf->Top__DOT__registers__DOT__regs_13
                                          : ((0xcU 
                                              == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 0xfU)))
                                              ? vlSelf->Top__DOT__registers__DOT__regs_12
                                              : ((0xbU 
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
                                                            : vlSelf->Top__DOT__registers__DOT__regs_0)))))))))))));
    Top__DOT__registers__DOT___GEN_45 = ((0xdU == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0x14U)))
                                          ? vlSelf->Top__DOT__registers__DOT__regs_13
                                          : ((0xcU 
                                              == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 0x14U)))
                                              ? vlSelf->Top__DOT__registers__DOT__regs_12
                                              : ((0xbU 
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
                                                            : vlSelf->Top__DOT__registers__DOT__regs_0)))))))))))));
    vlSelf->Top__DOT__decoder__DOT__imm_i = ((((vlSelf->io_inst 
                                                >> 0x1fU)
                                                ? 0xfffffU
                                                : 0U) 
                                              << 0xcU) 
                                             | (vlSelf->io_inst 
                                                >> 0x14U));
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
    Top__DOT__registers__DOT___GEN_26 = ((0x1aU == 
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
                                                            : Top__DOT__registers__DOT___GEN_13)))))))))))));
    Top__DOT__registers__DOT___GEN_58 = ((0x1aU == 
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
                                                            : Top__DOT__registers__DOT___GEN_45)))))))))))));
    Top__DOT__decoder__DOT___GEN_63 = ((0x18U == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 2U)))
                                        ? ((0U == (7U 
                                                   & (vlSelf->io_inst 
                                                      >> 0xcU)))
                                            ? 0xcU : 
                                           ((1U == 
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
                                        : ((8U == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 2U)))
                                            ? 1U : 
                                           ((0xcU == 
                                             (0x1fU 
                                              & (vlSelf->io_inst 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->io_inst 
                                                     >> 0xcU)))
                                                 ? 
                                                ((0x40000000U 
                                                  & vlSelf->io_inst)
                                                  ? 2U
                                                  : 1U)
                                                 : 
                                                ((1U 
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
                                             : 0U)));
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
    } else {
        vlSelf->io_bundleCtrl_ctrlLSType = ((0x18U 
                                             == (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 2U)))
                                             ? 2U : 
                                            ((8U == 
                                              (0x1fU 
                                               & (vlSelf->io_inst 
                                                  >> 2U)))
                                              ? ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_inst 
                                                      >> 0xcU)))
                                                  ? 1U
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_inst 
                                                       >> 0xcU)))
                                                   ? 0U
                                                   : 2U))
                                              : 2U));
        vlSelf->io_bundleCtrl_ctrlOP = Top__DOT__decoder__DOT___GEN_63;
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
                                       : Top__DOT__registers__DOT___GEN_26)))));
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
                                       : Top__DOT__registers__DOT___GEN_58)))));
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
                                                                           >> 0xcU)))))))))))));
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
                                                        ? vlSelf->Top__DOT__decoder__DOT__imm_i
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_inst 
                                                             >> 2U)))
                                                         ? vlSelf->Top__DOT__decoder__DOT__imm_i
                                                         : 
                                                        ((IData)(Top__DOT__decoder__DOT____VdfgTmp_h3a404b42__0)
                                                          ? 
                                                         (0x1fU 
                                                          & (vlSelf->io_inst 
                                                             >> 0x14U))
                                                          : vlSelf->Top__DOT__decoder__DOT__imm_i)))
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
    vlSelf->Top__DOT__alu__DOT__oprand1 = ((IData)(vlSelf->io_bundleCtrl_ctrlJAL)
                                            ? vlSelf->Top__DOT__pcReg__DOT__regPC
                                            : vlSelf->io_rs1);
    Top__DOT__alu__DOT___resultAlu_T_14 = (0x1ffffffffULL 
                                           & ((QData)((IData)(vlSelf->Top__DOT__pcReg__DOT__regPC)) 
                                              + (QData)((IData)(vlSelf->io_imm))));
    vlSelf->Top__DOT__alu__DOT__oprand2 = ((IData)(vlSelf->io_bundleCtrl_ctrlALUSrc)
                                            ? vlSelf->io_imm
                                            : vlSelf->io_rs2);
    Top__DOT__alu__DOT___GEN_0 = ((IData)(vlSelf->io_bundleCtrl_ctrlSigned)
                                   ? VL_LTS_III(32, vlSelf->Top__DOT__alu__DOT__oprand1, vlSelf->Top__DOT__alu__DOT__oprand2)
                                   : (vlSelf->Top__DOT__alu__DOT__oprand1 
                                      < vlSelf->Top__DOT__alu__DOT__oprand2));
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
                                                          (vlSelf->Top__DOT__alu__DOT__oprand1 
                                                           == vlSelf->Top__DOT__alu__DOT__oprand2)
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                            ? 
                                                           (vlSelf->Top__DOT__alu__DOT__oprand1 
                                                            != vlSelf->Top__DOT__alu__DOT__oprand2)
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
                                                                VL_GTES_III(32, vlSelf->Top__DOT__alu__DOT__oprand1, vlSelf->Top__DOT__alu__DOT__oprand2)
                                                                 : 
                                                                (vlSelf->Top__DOT__alu__DOT__oprand1 
                                                                 >= vlSelf->Top__DOT__alu__DOT__oprand2)))))))))))))));
    Top__DOT__alu__DOT___GEN_27 = (0x7fffffffffffffffULL 
                                   & ((1U == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                       ? (0x1ffffffffULL 
                                          & ((QData)((IData)(vlSelf->Top__DOT__alu__DOT__oprand1)) 
                                             + (QData)((IData)(vlSelf->Top__DOT__alu__DOT__oprand2))))
                                       : ((2U == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                           ? (0x1ffffffffULL 
                                              & ((QData)((IData)(vlSelf->Top__DOT__alu__DOT__oprand1)) 
                                                 - (QData)((IData)(vlSelf->Top__DOT__alu__DOT__oprand2))))
                                           : ((4U == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                               ? (QData)((IData)(
                                                                 (vlSelf->Top__DOT__alu__DOT__oprand1 
                                                                  & vlSelf->Top__DOT__alu__DOT__oprand2)))
                                               : ((5U 
                                                   == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                   ? (QData)((IData)(
                                                                     (vlSelf->Top__DOT__alu__DOT__oprand1 
                                                                      | vlSelf->Top__DOT__alu__DOT__oprand2)))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->Top__DOT__alu__DOT__oprand1 
                                                                       ^ vlSelf->Top__DOT__alu__DOT__oprand2)))
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->Top__DOT__alu__DOT__oprand1)) 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->Top__DOT__alu__DOT__oprand2))
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                      ? (QData)((IData)(
                                                                        (vlSelf->Top__DOT__alu__DOT__oprand1 
                                                                         >> 
                                                                         (0x1fU 
                                                                          & vlSelf->Top__DOT__alu__DOT__oprand2))))
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->io_bundleCtrl_ctrlOP))
                                                       ? (QData)((IData)(
                                                                         VL_SHIFTRS_III(32,32,5, vlSelf->Top__DOT__alu__DOT__oprand1, 
                                                                                (0x1fU 
                                                                                & vlSelf->Top__DOT__alu__DOT__oprand2))))
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
        vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_addr = 0U;
    } else {
        vlSelf->io_resultALU = (IData)(Top__DOT__alu__DOT___GEN_27);
        vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_addr 
            = (0x3ffU & (IData)((Top__DOT__alu__DOT___GEN_27 
                                 >> 2U)));
    }
    vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data 
        = vlSelf->Top__DOT__memData__DOT__mem[vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_addr];
    vlSelf->io_result = ((IData)(vlSelf->io_bundleCtrl_ctrlLoad)
                          ? ((IData)(vlSelf->io_bundleCtrl_ctrlALUSrc)
                              ? ((IData)(vlSelf->io_bundleCtrl_ctrlSigned)
                                  ? ((((0x8000U & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data)
                                        ? 0xffffU : 0U) 
                                      << 0x10U) | (0xffffU 
                                                   & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data))
                                  : (0xffffU & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data))
                              : ((IData)(vlSelf->io_bundleCtrl_ctrlSigned)
                                  ? ((((0x80U & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data)
                                        ? 0xffffffU
                                        : 0U) << 8U) 
                                     | (0xffU & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data))
                                  : (0xffU & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data)))
                          : vlSelf->io_resultALU);
}

void VTop___024root___eval_nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VTop___024root___eval_triggers__act(VTop___024root* vlSelf);

bool VTop___024root___eval_phase__act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTop___024root___eval_phase__nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Top.sv", 1020, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Top.sv", 1020, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
