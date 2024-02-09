// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop___024root.h"

extern const VlWide<9>/*287:0*/ VTop__ConstPool__CONST_he93f02cc_0;

VL_ATTR_COLD void VTop___024root___initial__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h3f5248c9__0;
    // Body
    vlSelf->io_ans = 0x37U;
    __Vtemp_h3f5248c9__0[0U] = 0x2e686578U;
    __Vtemp_h3f5248c9__0[1U] = 0x44617461U;
    __Vtemp_h3f5248c9__0[2U] = 0x2f4d656dU;
    __Vtemp_h3f5248c9__0[3U] = 0x64617461U;
    __Vtemp_h3f5248c9__0[4U] = 0x6f72792fU;
    __Vtemp_h3f5248c9__0[5U] = 0x6d656dU;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_h3f5248c9__0)
                 ,  &(vlSelf->Top__DOT__memData__DOT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(9, VTop__ConstPool__CONST_he93f02cc_0)
                 ,  &(vlSelf->Top__DOT__memInst__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VTop___024root___settle__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ Top__DOT__decoder__DOT___T_28;
    CData/*3:0*/ Top__DOT__decoder__DOT___T_39;
    CData/*3:0*/ Top__DOT__decoder__DOT___GEN_7;
    CData/*0:0*/ Top__DOT__decoder__DOT___GEN_59;
    CData/*3:0*/ Top__DOT__decoder__DOT___GEN_63;
    IData/*31:0*/ Top__DOT__decoder__DOT___GEN_69;
    CData/*0:0*/ Top__DOT__decoder__DOT___GEN_71;
    CData/*3:0*/ Top__DOT__decoder__DOT___GEN_78;
    IData/*31:0*/ Top__DOT__registers__DOT___GEN_13;
    IData/*31:0*/ Top__DOT__registers__DOT___GEN_26;
    IData/*31:0*/ Top__DOT__registers__DOT___GEN_45;
    IData/*31:0*/ Top__DOT__registers__DOT___GEN_58;
    QData/*32:0*/ Top__DOT__alu__DOT___resultAlu_T_14;
    CData/*0:0*/ Top__DOT__alu__DOT___GEN_0;
    QData/*62:0*/ Top__DOT__alu__DOT___GEN_27;
    // Body
    vlSelf->io_addr = vlSelf->Top__DOT__pcReg__DOT__regPC;
    vlSelf->Top__DOT__pcReg__DOT___regPC_T_1 = ((IData)(4U) 
                                                + vlSelf->Top__DOT__pcReg__DOT__regPC);
    vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
        = vlSelf->Top__DOT__memInst__DOT__mem[(0xfffU 
                                               & (vlSelf->Top__DOT__pcReg__DOT__regPC 
                                                  >> 2U))];
    vlSelf->io_inst = vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data;
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlJump 
        = ((~ ((0xdU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                  >> 2U))) | (5U == 
                                              (0x1fU 
                                               & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                  >> 2U))))) 
           & ((0x1bU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                  >> 2U))) | (IData)(
                                                     ((0x64U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data)) 
                                                      & (((0x19U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                               >> 2U))) 
                                                          | (0U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                                 >> 2U)))) 
                                                         | (4U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                                >> 2U))))))));
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlRegWrite 
        = (((0xdU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                               >> 2U))) | (5U == (0x1fU 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 2U)))) 
           | ((0x1bU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                  >> 2U))) | ((((0x19U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 2U))) 
                                                | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                       >> 2U)))) 
                                               | (4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 2U)))) 
                                              | ((0x18U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 2U))) 
                                                 & (8U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                        >> 2U)))))));
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlLoad 
        = ((~ ((0xdU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                  >> 2U))) | (5U == 
                                              (0x1fU 
                                               & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                  >> 2U))))) 
           & ((0x1bU != (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                  >> 2U))) & ((((0x19U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 2U))) 
                                                | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                       >> 2U)))) 
                                               | (4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 2U)))) 
                                              & (IData)(
                                                        ((0U 
                                                          == 
                                                          (0x7cU 
                                                           & vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data)) 
                                                         & (0x19U 
                                                            != 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                                >> 2U))))))));
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlBranch 
        = ((~ ((0xdU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                  >> 2U))) | (5U == 
                                              (0x1fU 
                                               & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                  >> 2U))))) 
           & ((0x1bU != (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                  >> 2U))) & (IData)(
                                                     ((0x60U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data)) 
                                                      & (~ 
                                                         (((0x19U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                                >> 2U))) 
                                                           | (0U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                                  >> 2U)))) 
                                                          | (4U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                                 >> 2U)))))))));
    Top__DOT__decoder__DOT___T_39 = ((8U & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                            >> 0x1bU)) 
                                     | (7U & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                              >> 0xcU)));
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlJAL 
        = (IData)(((0x6cU == (0x7cU & vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data)) 
                   & (~ ((0xdU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                            >> 2U))) 
                         | (5U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                            >> 2U)))))));
    Top__DOT__decoder__DOT___GEN_59 = (IData)(((0x20U 
                                                == 
                                                (0x7cU 
                                                 & vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data)) 
                                               & (0x18U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 2U)))));
    Top__DOT__decoder__DOT___GEN_7 = ((6U == (7U & 
                                              (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                               >> 0xcU)))
                                       ? 5U : ((7U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                    >> 0xcU)))
                                                ? 4U
                                                : 0U));
    Top__DOT__registers__DOT___GEN_13 = ((0xdU == (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                          ? vlSelf->Top__DOT__registers__DOT__regs_13
                                          : ((0xcU 
                                              == (0x1fU 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 0xfU)))
                                              ? vlSelf->Top__DOT__registers__DOT__regs_12
                                              : ((0xbU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                                  ? vlSelf->Top__DOT__registers__DOT__regs_11
                                                  : 
                                                 ((0xaU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                       >> 0xfU)))
                                                   ? vlSelf->Top__DOT__registers__DOT__regs_10
                                                   : 
                                                  ((9U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->Top__DOT__registers__DOT__regs_9
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlSelf->Top__DOT__registers__DOT__regs_8
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlSelf->Top__DOT__registers__DOT__regs_7
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlSelf->Top__DOT__registers__DOT__regs_6
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlSelf->Top__DOT__registers__DOT__regs_5
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlSelf->Top__DOT__registers__DOT__regs_4
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlSelf->Top__DOT__registers__DOT__regs_3
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlSelf->Top__DOT__registers__DOT__regs_2
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlSelf->Top__DOT__registers__DOT__regs_1
                                                            : vlSelf->Top__DOT__registers__DOT__regs_0)))))))))))));
    Top__DOT__registers__DOT___GEN_45 = ((0xdU == (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                          ? vlSelf->Top__DOT__registers__DOT__regs_13
                                          : ((0xcU 
                                              == (0x1fU 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                              ? vlSelf->Top__DOT__registers__DOT__regs_12
                                              : ((0xbU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlSelf->Top__DOT__registers__DOT__regs_11
                                                  : 
                                                 ((0xaU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlSelf->Top__DOT__registers__DOT__regs_10
                                                   : 
                                                  ((9U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlSelf->Top__DOT__registers__DOT__regs_9
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlSelf->Top__DOT__registers__DOT__regs_8
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlSelf->Top__DOT__registers__DOT__regs_7
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                           >> 0x14U)))
                                                       ? vlSelf->Top__DOT__registers__DOT__regs_6
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                            >> 0x14U)))
                                                        ? vlSelf->Top__DOT__registers__DOT__regs_5
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                             >> 0x14U)))
                                                         ? vlSelf->Top__DOT__registers__DOT__regs_4
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                              >> 0x14U)))
                                                          ? vlSelf->Top__DOT__registers__DOT__regs_3
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                               >> 0x14U)))
                                                           ? vlSelf->Top__DOT__registers__DOT__regs_2
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                                >> 0x14U)))
                                                            ? vlSelf->Top__DOT__registers__DOT__regs_1
                                                            : vlSelf->Top__DOT__registers__DOT__regs_0)))))))))))));
    vlSelf->Top__DOT__decoder__DOT__imm_i = ((((vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                >> 0x1fU)
                                                ? 0xfffffU
                                                : 0U) 
                                              << 0xcU) 
                                             | (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                >> 0x14U));
    Top__DOT__decoder__DOT___T_28 = ((1U == (7U & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                   >> 0xcU))) 
                                     | (5U == (7U & 
                                               (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                >> 0xcU))));
    if ((((0x19U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                              >> 2U))) | (0U == (0x1fU 
                                                 & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                    >> 2U)))) 
         | (4U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                            >> 2U))))) {
        if ((0x19U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                >> 2U)))) {
            vlSelf->Top__DOT__decoder__DOT___GEN_72 = 2U;
            Top__DOT__decoder__DOT___GEN_69 = vlSelf->Top__DOT__decoder__DOT__imm_i;
        } else if ((0U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 2U)))) {
            vlSelf->Top__DOT__decoder__DOT___GEN_72 
                = (((1U == (7U & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                  >> 0xcU))) | (5U 
                                                == 
                                                (7U 
                                                 & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                    >> 0xcU))))
                    ? 1U : (((4U == (7U & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                           >> 0xcU))) 
                             | (0U == (7U & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                             >> 0xcU))))
                             ? 0U : 2U));
            Top__DOT__decoder__DOT___GEN_69 = vlSelf->Top__DOT__decoder__DOT__imm_i;
        } else {
            vlSelf->Top__DOT__decoder__DOT___GEN_72 = 2U;
            Top__DOT__decoder__DOT___GEN_69 = ((IData)(
                                                       ((0x10U 
                                                         == 
                                                         (0x7cU 
                                                          & vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data)) 
                                                        & (IData)(Top__DOT__decoder__DOT___T_28)))
                                                ? (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 0x14U))
                                                : vlSelf->Top__DOT__decoder__DOT__imm_i);
        }
        Top__DOT__decoder__DOT___GEN_71 = (1U & ((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 2U))) 
                                                 | ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                         >> 2U)))
                                                     ? 
                                                    (~ 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                           >> 0xcU))) 
                                                      | (5U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                             >> 0xcU)))))
                                                     : 
                                                    ((IData)(
                                                             ((0x10U 
                                                               == 
                                                               (0x7cU 
                                                                & vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data)) 
                                                              & (IData)(Top__DOT__decoder__DOT___T_28))) 
                                                     | ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                             >> 0xcU))) 
                                                        | (IData)(
                                                                  ((0x3000U 
                                                                    != 
                                                                    (0x7000U 
                                                                     & vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data)) 
                                                                   | (2U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                                          >> 0xcU))))))))));
    } else {
        if ((0x18U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                >> 2U)))) {
            vlSelf->Top__DOT__decoder__DOT___GEN_72 = 2U;
            Top__DOT__decoder__DOT___GEN_69 = ((((vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                  >> 0x1fU)
                                                  ? 0xfffffU
                                                  : 0U) 
                                                << 0xcU) 
                                               | ((0x800U 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                           >> 7U)))));
        } else if ((8U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 2U)))) {
            vlSelf->Top__DOT__decoder__DOT___GEN_72 
                = ((1U == (7U & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 0xcU))) ? 1U : 
                   ((0U == (7U & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                  >> 0xcU))) ? 0U : 2U));
            Top__DOT__decoder__DOT___GEN_69 = ((((vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                  >> 0x1fU)
                                                  ? 0xfffffU
                                                  : 0U) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                        >> 7U))));
        } else {
            vlSelf->Top__DOT__decoder__DOT___GEN_72 = 2U;
            Top__DOT__decoder__DOT___GEN_69 = 0U;
        }
        Top__DOT__decoder__DOT___GEN_71 = (1U & ((0x18U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 2U))) 
                                                 | ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                         >> 0xcU))) 
                                                    | ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                            >> 0xcU))) 
                                                       | ((4U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                               >> 0xcU))) 
                                                          | ((5U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                                  >> 0xcU))) 
                                                             | ((6U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                                     >> 0xcU))) 
                                                                & (7U 
                                                                   != 
                                                                   (7U 
                                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                                       >> 0xcU))))))))));
    }
    vlSelf->io_bundleCtrl_ctrlJump = vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlJump;
    vlSelf->io_bundleCtrl_ctrlRegWrite = vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlRegWrite;
    vlSelf->io_bundleCtrl_ctrlLoad = vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlLoad;
    vlSelf->io_bundleCtrl_ctrlBranch = vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlBranch;
    vlSelf->io_bundleCtrl_ctrlJAL = vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlJAL;
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlStore 
        = ((~ ((0xdU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                  >> 2U))) | (5U == 
                                              (0x1fU 
                                               & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                  >> 2U))))) 
           & ((0x1bU != (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                  >> 2U))) & ((~ ((
                                                   (0x19U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                        >> 2U))) 
                                                   | (0U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                          >> 2U)))) 
                                                  | (4U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                         >> 2U))))) 
                                              & (IData)(Top__DOT__decoder__DOT___GEN_59))));
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlALUSrc 
        = (((0xdU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                               >> 2U))) | (5U == (0x1fU 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 2U)))) 
           | ((0x1bU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                  >> 2U))) | ((((0x19U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 2U))) 
                                                | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                       >> 2U)))) 
                                               | (4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 2U)))) 
                                              | (IData)(Top__DOT__decoder__DOT___GEN_59))));
    Top__DOT__decoder__DOT___GEN_63 = ((0x18U == (0x1fU 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 2U)))
                                        ? ((0U == (7U 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 0xcU)))
                                            ? 0xcU : 
                                           ((1U == 
                                             (7U & 
                                              (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                               >> 0xcU)))
                                             ? 0xdU
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 0xcU)))
                                                 ? 0xeU
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 0xcU)))
                                                  ? 0xfU
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                       >> 0xcU)))
                                                   ? 0xeU
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                        >> 0xcU)))
                                                    ? 0xfU
                                                    : 0U))))))
                                        : ((8U == (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 2U)))
                                            ? 1U : 
                                           ((0xcU == 
                                             (0x1fU 
                                              & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 0xcU)))
                                                 ? 
                                                ((0x40000000U 
                                                  & vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data)
                                                  ? 2U
                                                  : 1U)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 0xcU)))
                                                  ? 8U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                       >> 0xcU)))
                                                   ? 0xeU
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                        >> 0xcU)))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                         >> 0xcU)))
                                                     ? 7U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                          >> 0xcU)))
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data)
                                                       ? 0xbU
                                                       : 9U)
                                                      : (IData)(Top__DOT__decoder__DOT___GEN_7)))))))
                                             : 0U)));
    Top__DOT__registers__DOT___GEN_26 = ((0x1aU == 
                                          (0x1fU & 
                                           (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                            >> 0xfU)))
                                          ? vlSelf->Top__DOT__registers__DOT__regs_26
                                          : ((0x19U 
                                              == (0x1fU 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 0xfU)))
                                              ? vlSelf->Top__DOT__registers__DOT__regs_25
                                              : ((0x18U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                                  ? vlSelf->Top__DOT__registers__DOT__regs_24
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                       >> 0xfU)))
                                                   ? vlSelf->Top__DOT__registers__DOT__regs_23
                                                   : 
                                                  ((0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->Top__DOT__registers__DOT__regs_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlSelf->Top__DOT__registers__DOT__regs_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlSelf->Top__DOT__registers__DOT__regs_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlSelf->Top__DOT__registers__DOT__regs_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlSelf->Top__DOT__registers__DOT__regs_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlSelf->Top__DOT__registers__DOT__regs_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlSelf->Top__DOT__registers__DOT__regs_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlSelf->Top__DOT__registers__DOT__regs_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlSelf->Top__DOT__registers__DOT__regs_14
                                                            : Top__DOT__registers__DOT___GEN_13)))))))))))));
    Top__DOT__registers__DOT___GEN_58 = ((0x1aU == 
                                          (0x1fU & 
                                           (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                            >> 0x14U)))
                                          ? vlSelf->Top__DOT__registers__DOT__regs_26
                                          : ((0x19U 
                                              == (0x1fU 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                              ? vlSelf->Top__DOT__registers__DOT__regs_25
                                              : ((0x18U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlSelf->Top__DOT__registers__DOT__regs_24
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlSelf->Top__DOT__registers__DOT__regs_23
                                                   : 
                                                  ((0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlSelf->Top__DOT__registers__DOT__regs_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlSelf->Top__DOT__registers__DOT__regs_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlSelf->Top__DOT__registers__DOT__regs_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                           >> 0x14U)))
                                                       ? vlSelf->Top__DOT__registers__DOT__regs_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                            >> 0x14U)))
                                                        ? vlSelf->Top__DOT__registers__DOT__regs_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                             >> 0x14U)))
                                                         ? vlSelf->Top__DOT__registers__DOT__regs_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                              >> 0x14U)))
                                                          ? vlSelf->Top__DOT__registers__DOT__regs_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                               >> 0x14U)))
                                                           ? vlSelf->Top__DOT__registers__DOT__regs_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                                >> 0x14U)))
                                                            ? vlSelf->Top__DOT__registers__DOT__regs_14
                                                            : Top__DOT__registers__DOT___GEN_45)))))))))))));
    vlSelf->io_bundleCtrl_ctrlStore = vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlStore;
    vlSelf->io_bundleCtrl_ctrlALUSrc = vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlALUSrc;
    Top__DOT__decoder__DOT___GEN_78 = ((0x1bU == (0x1fU 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 2U)))
                                        ? 1U : ((((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                       >> 2U))) 
                                                  | (0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                         >> 2U)))) 
                                                 | (4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                        >> 2U))))
                                                 ? 
                                                ((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 2U)))
                                                  ? 1U
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                       >> 2U)))
                                                   ? 1U
                                                   : 
                                                  ((IData)(
                                                           ((0x10U 
                                                             == 
                                                             (0x7cU 
                                                              & vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data)) 
                                                            & (IData)(Top__DOT__decoder__DOT___T_28)))
                                                    ? 
                                                   ((1U 
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
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                         >> 0xcU)))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                          >> 0xcU)))
                                                      ? 0xeU
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                           >> 0xcU)))
                                                       ? 0xeU
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                            >> 0xcU)))
                                                        ? 7U
                                                        : (IData)(Top__DOT__decoder__DOT___GEN_7))))))))
                                                 : (IData)(Top__DOT__decoder__DOT___GEN_63)));
    if (((0xdU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                            >> 2U))) | (5U == (0x1fU 
                                               & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                  >> 2U))))) {
        vlSelf->io_bundleCtrl_ctrlLSType = 2U;
        vlSelf->Top__DOT__decoder__DOT___GEN_89 = (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data)));
        vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP = 1U;
    } else {
        if ((0x1bU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                >> 2U)))) {
            vlSelf->io_bundleCtrl_ctrlLSType = 2U;
            vlSelf->Top__DOT__decoder__DOT___GEN_89 
                = ((QData)((IData)(((((vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                       >> 0x1fU) ? 0xfffU
                                       : 0U) << 0x14U) 
                                    | ((0x80000U & 
                                        (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                         >> 0xcU)) 
                                       | ((0x7f800U 
                                           & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                              >> 1U)) 
                                          | ((0x400U 
                                              & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                 >> 0xaU)) 
                                             | (0x3ffU 
                                                & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                   >> 0x15U)))))))) 
                   << 1U);
        } else {
            vlSelf->io_bundleCtrl_ctrlLSType = vlSelf->Top__DOT__decoder__DOT___GEN_72;
            vlSelf->Top__DOT__decoder__DOT___GEN_89 
                = (QData)((IData)(Top__DOT__decoder__DOT___GEN_69));
        }
        vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP 
            = Top__DOT__decoder__DOT___GEN_78;
    }
    vlSelf->Top__DOT__registers_io_dataRead1 = ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 0xfU)))
                                                 ? vlSelf->Top__DOT__registers__DOT__regs_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                                  ? vlSelf->Top__DOT__registers__DOT__regs_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                       >> 0xfU)))
                                                   ? vlSelf->Top__DOT__registers__DOT__regs_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->Top__DOT__registers__DOT__regs_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlSelf->Top__DOT__registers__DOT__regs_27
                                                     : Top__DOT__registers__DOT___GEN_26)))));
    vlSelf->Top__DOT__registers_io_dataRead2 = ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                                 ? vlSelf->Top__DOT__registers__DOT__regs_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlSelf->Top__DOT__registers__DOT__regs_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlSelf->Top__DOT__registers__DOT__regs_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlSelf->Top__DOT__registers__DOT__regs_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlSelf->Top__DOT__registers__DOT__regs_27
                                                     : Top__DOT__registers__DOT___GEN_58)))));
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlSigned 
        = (((0xdU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                               >> 2U))) | (5U == (0x1fU 
                                                  & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                                     >> 2U)))) 
           | ((0x1bU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                  >> 2U))) | (IData)(Top__DOT__decoder__DOT___GEN_71)));
    vlSelf->io_rs1 = vlSelf->Top__DOT__registers_io_dataRead1;
    vlSelf->Top__DOT__alu__DOT__oprand1 = ((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlJAL)
                                            ? vlSelf->Top__DOT__pcReg__DOT__regPC
                                            : vlSelf->Top__DOT__registers_io_dataRead1);
    vlSelf->io_rs2 = vlSelf->Top__DOT__registers_io_dataRead2;
    vlSelf->io_bundleCtrl_ctrlSigned = vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlSigned;
    vlSelf->io_imm = (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_89);
    Top__DOT__alu__DOT___resultAlu_T_14 = (0x1ffffffffULL 
                                           & ((QData)((IData)(vlSelf->Top__DOT__pcReg__DOT__regPC)) 
                                              + (QData)((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_89))));
    vlSelf->Top__DOT__alu__DOT__oprand2 = ((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlALUSrc)
                                            ? (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_89)
                                            : vlSelf->Top__DOT__registers_io_dataRead2);
    vlSelf->io_bundleCtrl_ctrlOP = vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP;
    Top__DOT__alu__DOT___GEN_0 = ((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlSigned)
                                   ? VL_LTS_III(32, vlSelf->Top__DOT__alu__DOT__oprand1, vlSelf->Top__DOT__alu__DOT__oprand2)
                                   : (vlSelf->Top__DOT__alu__DOT__oprand1 
                                      < vlSelf->Top__DOT__alu__DOT__oprand2));
    vlSelf->Top__DOT__alu_io_resultBranch = ((0U != (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP)) 
                                             & ((1U 
                                                 != (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP)) 
                                                & ((2U 
                                                    != (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP)) 
                                                   & ((4U 
                                                       != (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP)) 
                                                      & ((5U 
                                                          != (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP)) 
                                                         & ((7U 
                                                             != (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP)) 
                                                            & ((8U 
                                                                != (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP)) 
                                                               & ((9U 
                                                                   != (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP)) 
                                                                  & ((0xbU 
                                                                      != (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP)) 
                                                                     & ((0xcU 
                                                                         == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                                                         ? 
                                                                        (vlSelf->Top__DOT__alu__DOT__oprand1 
                                                                         == vlSelf->Top__DOT__alu__DOT__oprand2)
                                                                         : 
                                                                        ((0xdU 
                                                                          == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                                                          ? 
                                                                         (vlSelf->Top__DOT__alu__DOT__oprand1 
                                                                          != vlSelf->Top__DOT__alu__DOT__oprand2)
                                                                          : 
                                                                         ((0xeU 
                                                                           == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                                                           ? 
                                                                          ((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlBranch) 
                                                                           & (IData)(Top__DOT__alu__DOT___GEN_0))
                                                                           : 
                                                                          ((0xfU 
                                                                            == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP)) 
                                                                           & ((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlSigned)
                                                                               ? 
                                                                              VL_GTES_III(32, vlSelf->Top__DOT__alu__DOT__oprand1, vlSelf->Top__DOT__alu__DOT__oprand2)
                                                                               : 
                                                                              (vlSelf->Top__DOT__alu__DOT__oprand1 
                                                                               >= vlSelf->Top__DOT__alu__DOT__oprand2)))))))))))))));
    Top__DOT__alu__DOT___GEN_27 = (0x7fffffffffffffffULL 
                                   & ((1U == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                       ? (0x1ffffffffULL 
                                          & ((QData)((IData)(vlSelf->Top__DOT__alu__DOT__oprand1)) 
                                             + (QData)((IData)(vlSelf->Top__DOT__alu__DOT__oprand2))))
                                       : ((2U == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                           ? (0x1ffffffffULL 
                                              & ((QData)((IData)(vlSelf->Top__DOT__alu__DOT__oprand1)) 
                                                 - (QData)((IData)(vlSelf->Top__DOT__alu__DOT__oprand2))))
                                           : ((4U == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                               ? (QData)((IData)(
                                                                 (vlSelf->Top__DOT__alu__DOT__oprand1 
                                                                  & vlSelf->Top__DOT__alu__DOT__oprand2)))
                                               : ((5U 
                                                   == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                                   ? (QData)((IData)(
                                                                     (vlSelf->Top__DOT__alu__DOT__oprand1 
                                                                      | vlSelf->Top__DOT__alu__DOT__oprand2)))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->Top__DOT__alu__DOT__oprand1 
                                                                       ^ vlSelf->Top__DOT__alu__DOT__oprand2)))
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->Top__DOT__alu__DOT__oprand1)) 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->Top__DOT__alu__DOT__oprand2))
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                                      ? (QData)((IData)(
                                                                        (vlSelf->Top__DOT__alu__DOT__oprand1 
                                                                         >> 
                                                                         (0x1fU 
                                                                          & vlSelf->Top__DOT__alu__DOT__oprand2))))
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                                       ? (QData)((IData)(
                                                                         VL_SHIFTRS_III(32,32,5, vlSelf->Top__DOT__alu__DOT__oprand1, 
                                                                                (0x1fU 
                                                                                & vlSelf->Top__DOT__alu__DOT__oprand2))))
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                                        ? Top__DOT__alu__DOT___resultAlu_T_14
                                                        : 
                                                       ((0xdU 
                                                         == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                                         ? Top__DOT__alu__DOT___resultAlu_T_14
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                                          ? 
                                                         ((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlBranch)
                                                           ? Top__DOT__alu__DOT___resultAlu_T_14
                                                           : (QData)((IData)(Top__DOT__alu__DOT___GEN_0)))
                                                          : 
                                                         ((0xfU 
                                                           == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                                           ? Top__DOT__alu__DOT___resultAlu_T_14
                                                           : 0ULL)))))))))))));
    vlSelf->io_resultBranch = vlSelf->Top__DOT__alu_io_resultBranch;
    vlSelf->Top__DOT__alu__DOT___GEN_29 = ((0U == (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP))
                                            ? 0ULL : Top__DOT__alu__DOT___GEN_27);
    vlSelf->io_resultALU = (IData)(vlSelf->Top__DOT__alu__DOT___GEN_29);
    vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data 
        = vlSelf->Top__DOT__memData__DOT__mem[(0x3ffU 
                                               & (IData)(
                                                         (vlSelf->Top__DOT__alu__DOT___GEN_29 
                                                          >> 2U)))];
    vlSelf->Top__DOT__memData_io_result = ((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlLoad)
                                            ? ((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlALUSrc)
                                                ? ((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlSigned)
                                                    ? 
                                                   ((((0x8000U 
                                                       & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data)
                                                       ? 0xffffU
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data))
                                                : ((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlSigned)
                                                    ? 
                                                   ((((0x80U 
                                                       & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data))
                                                    : 
                                                   (0xffU 
                                                    & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data)))
                                            : (IData)(vlSelf->Top__DOT__alu__DOT___GEN_29));
    vlSelf->io_result = vlSelf->Top__DOT__memData_io_result;
}

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    // Body
    VTop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VTop___024root___eval_settle(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_settle\n"); );
    // Body
    VTop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VTop___024root___final(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___final\n"); );
}

VL_ATTR_COLD void VTop___024root___ctor_var_reset(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_ans = VL_RAND_RESET_I(32);
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
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlJump = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlBranch = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlRegWrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlLoad = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlStore = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlALUSrc = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlJAL = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlOP = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlSigned = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__registers_io_dataRead1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers_io_dataRead2 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu_io_resultBranch = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__memData_io_result = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__pcReg__DOT__regPC = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__pcReg__DOT___regPC_T_1 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->Top__DOT__memInst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__memInst__DOT__initvar = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__decoder__DOT__imm_i = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__decoder__DOT___GEN_72 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__decoder__DOT___GEN_89 = VL_RAND_RESET_Q(33);
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
    vlSelf->Top__DOT__alu__DOT__oprand1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT__oprand2 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___GEN_29 = VL_RAND_RESET_Q(63);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->Top__DOT__memData__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__memData__DOT__initvar = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

VL_ATTR_COLD void VTop___024root___configure_coverage(VTop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
