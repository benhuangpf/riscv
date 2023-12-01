// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop___024root.h"

VL_INLINE_OPT void VTop___024root___sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___sequent__TOP__0\n"); );
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
    SData/*9:0*/ __Vdlyvdim0__Top__DOT__memData__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__memData__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__memData__DOT__mem__v0;
    SData/*9:0*/ __Vdlyvdim0__Top__DOT__memData__DOT__mem__v1;
    IData/*31:0*/ __Vdlyvval__Top__DOT__memData__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__Top__DOT__memData__DOT__mem__v1;
    // Body
    __Vdlyvset__Top__DOT__memData__DOT__mem__v0 = 0U;
    __Vdlyvset__Top__DOT__memData__DOT__mem__v1 = 0U;
    if (((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlStore) 
         & (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlALUSrc))) {
        __Vdlyvval__Top__DOT__memData__DOT__mem__v0 
            = ((0xffff0000U & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data) 
               | (0xffffU & vlSelf->Top__DOT__registers_io_dataRead2));
        __Vdlyvset__Top__DOT__memData__DOT__mem__v0 = 1U;
        __Vdlyvdim0__Top__DOT__memData__DOT__mem__v0 
            = (0x3ffU & (IData)((vlSelf->Top__DOT__alu__DOT___GEN_29 
                                 >> 2U)));
    }
    if (((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlStore) 
         & (~ (IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlALUSrc)))) {
        __Vdlyvval__Top__DOT__memData__DOT__mem__v1 
            = ((0xffffff00U & vlSelf->Top__DOT__memData__DOT__mem_dataLoad_MPORT_data) 
               | (0xffU & vlSelf->Top__DOT__registers_io_dataRead2));
        __Vdlyvset__Top__DOT__memData__DOT__mem__v1 = 1U;
        __Vdlyvdim0__Top__DOT__memData__DOT__mem__v1 
            = (0x3ffU & (IData)((vlSelf->Top__DOT__alu__DOT___GEN_29 
                                 >> 2U)));
    }
    if (((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlRegWrite) 
         & (0U != (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                            >> 7U))))) {
        if (vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlJump) {
            if ((0x1fU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_31 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x1eU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_30 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x1dU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_29 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x1cU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_28 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x1bU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_27 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x1aU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_26 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x19U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_25 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0xeU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_14 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0xfU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_15 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x10U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_16 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x11U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_17 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x12U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_18 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x13U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_19 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x14U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_20 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x15U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_21 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x16U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_22 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x17U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_23 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0x18U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_24 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((6U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_6 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((9U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_9 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((5U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_5 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_0 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((7U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_7 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((1U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_1 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((3U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_3 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((8U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_8 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0xaU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_10 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((2U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_2 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0xbU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_11 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((4U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_4 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0xcU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_12 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
            if ((0xdU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_13 
                    = ((IData)(4U) + vlSelf->Top__DOT__pcReg__DOT__regPC);
            }
        } else {
            if ((0x1fU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_31 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0x1eU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_30 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0x1dU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_29 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0x1cU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_28 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0x1bU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_27 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0x1aU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_26 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0x19U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_25 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0xeU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_14 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0xfU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_15 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0x10U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_16 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0x11U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_17 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0x12U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_18 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0x13U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_19 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0x14U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_20 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0x15U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_21 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0x16U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_22 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0x17U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_23 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0x18U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                    >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_24 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((6U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_6 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((9U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_9 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((5U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_5 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_0 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((7U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_7 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((1U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_1 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((3U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_3 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((8U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_8 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0xaU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_10 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((2U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_2 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0xbU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_11 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((4U == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                 >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_4 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0xcU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_12 
                    = vlSelf->Top__DOT__memData_io_result;
            }
            if ((0xdU == (0x1fU & (vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
                                   >> 7U)))) {
                vlSelf->Top__DOT__registers__DOT__regs_13 
                    = vlSelf->Top__DOT__memData_io_result;
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
                                            : (((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlJump) 
                                                | ((IData)(vlSelf->Top__DOT__decoder_io_bundleCtrl_ctrlBranch) 
                                                   & (IData)(vlSelf->Top__DOT__alu_io_resultBranch)))
                                                ? vlSelf->Top__DOT__memData_io_result
                                                : vlSelf->Top__DOT__pcReg__DOT___regPC_T_1));
    vlSelf->io_addr = vlSelf->Top__DOT__pcReg__DOT__regPC;
    vlSelf->Top__DOT__pcReg__DOT___regPC_T_1 = ((IData)(4U) 
                                                + vlSelf->Top__DOT__pcReg__DOT__regPC);
    vlSelf->Top__DOT__memInst__DOT__mem_io_inst_MPORT_data 
        = vlSelf->Top__DOT__memInst__DOT__mem[(0x3ffU 
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

void VTop___024root___eval(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VTop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
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
