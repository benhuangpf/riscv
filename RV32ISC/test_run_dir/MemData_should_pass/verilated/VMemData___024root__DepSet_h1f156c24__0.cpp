// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemData.h for the primary calling header

#include "verilated.h"

#include "VMemData___024root.h"

VL_INLINE_OPT void VMemData___024root___sequent__TOP__0(VMemData___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemData__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemData___024root___sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MemData__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__MemData__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MemData__DOT__mem__v0;
    SData/*9:0*/ __Vdlyvdim0__MemData__DOT__mem__v1;
    IData/*31:0*/ __Vdlyvval__MemData__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__MemData__DOT__mem__v1;
    SData/*9:0*/ __Vdlyvdim0__MemData__DOT__mem__v2;
    IData/*31:0*/ __Vdlyvval__MemData__DOT__mem__v2;
    CData/*0:0*/ __Vdlyvset__MemData__DOT__mem__v2;
    // Body
    __Vdlyvset__MemData__DOT__mem__v0 = 0U;
    __Vdlyvset__MemData__DOT__mem__v1 = 0U;
    __Vdlyvset__MemData__DOT__mem__v2 = 0U;
    if (((IData)(vlSelf->io_bundleMemDataControl_ctrlStore) 
         & (2U == (IData)(vlSelf->io_bundleMemDataControl_ctrlLSType)))) {
        __Vdlyvval__MemData__DOT__mem__v0 = vlSelf->io_dataStore;
        __Vdlyvset__MemData__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MemData__DOT__mem__v0 = (0x3ffU 
                                              & (vlSelf->io_resultALU 
                                                 >> 2U));
    }
    if (((IData)(vlSelf->io_bundleMemDataControl_ctrlStore) 
         & ((2U != (IData)(vlSelf->io_bundleMemDataControl_ctrlLSType)) 
            & (1U == (IData)(vlSelf->io_bundleMemDataControl_ctrlLSType))))) {
        __Vdlyvval__MemData__DOT__mem__v1 = ((0xffff0000U 
                                              & vlSelf->MemData__DOT__mem_dataLoad_MPORT_data) 
                                             | (0xffffU 
                                                & vlSelf->io_dataStore));
        __Vdlyvset__MemData__DOT__mem__v1 = 1U;
        __Vdlyvdim0__MemData__DOT__mem__v1 = (0x3ffU 
                                              & (vlSelf->io_resultALU 
                                                 >> 2U));
    }
    if (((IData)(vlSelf->io_bundleMemDataControl_ctrlStore) 
         & ((2U != (IData)(vlSelf->io_bundleMemDataControl_ctrlLSType)) 
            & (1U != (IData)(vlSelf->io_bundleMemDataControl_ctrlLSType))))) {
        __Vdlyvval__MemData__DOT__mem__v2 = ((0xffffff00U 
                                              & vlSelf->MemData__DOT__mem_dataLoad_MPORT_data) 
                                             | (0xffU 
                                                & vlSelf->io_dataStore));
        __Vdlyvset__MemData__DOT__mem__v2 = 1U;
        __Vdlyvdim0__MemData__DOT__mem__v2 = (0x3ffU 
                                              & (vlSelf->io_resultALU 
                                                 >> 2U));
    }
    if (__Vdlyvset__MemData__DOT__mem__v0) {
        vlSelf->MemData__DOT__mem[__Vdlyvdim0__MemData__DOT__mem__v0] 
            = __Vdlyvval__MemData__DOT__mem__v0;
    }
    if (__Vdlyvset__MemData__DOT__mem__v1) {
        vlSelf->MemData__DOT__mem[__Vdlyvdim0__MemData__DOT__mem__v1] 
            = __Vdlyvval__MemData__DOT__mem__v1;
    }
    if (__Vdlyvset__MemData__DOT__mem__v2) {
        vlSelf->MemData__DOT__mem[__Vdlyvdim0__MemData__DOT__mem__v2] 
            = __Vdlyvval__MemData__DOT__mem__v2;
    }
}

VL_INLINE_OPT void VMemData___024root___combo__TOP__0(VMemData___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemData__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemData___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->MemData__DOT__mem_dataLoad_MPORT_data = 
        vlSelf->MemData__DOT__mem[(0x3ffU & (vlSelf->io_resultALU 
                                             >> 2U))];
    vlSelf->io_result = ((IData)(vlSelf->io_bundleMemDataControl_ctrlLoad)
                          ? ((2U == (IData)(vlSelf->io_bundleMemDataControl_ctrlLSType))
                              ? vlSelf->MemData__DOT__mem_dataLoad_MPORT_data
                              : ((1U == (IData)(vlSelf->io_bundleMemDataControl_ctrlLSType))
                                  ? ((IData)(vlSelf->io_bundleMemDataControl_ctrlSigned)
                                      ? ((((0x8000U 
                                            & vlSelf->MemData__DOT__mem_dataLoad_MPORT_data)
                                            ? 0xffffU
                                            : 0U) << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->MemData__DOT__mem_dataLoad_MPORT_data))
                                      : (0xffffU & vlSelf->MemData__DOT__mem_dataLoad_MPORT_data))
                                  : ((IData)(vlSelf->io_bundleMemDataControl_ctrlSigned)
                                      ? ((((0x80U & vlSelf->MemData__DOT__mem_dataLoad_MPORT_data)
                                            ? 0xffffffU
                                            : 0U) << 8U) 
                                         | (0xffU & vlSelf->MemData__DOT__mem_dataLoad_MPORT_data))
                                      : (0xffU & vlSelf->MemData__DOT__mem_dataLoad_MPORT_data))))
                          : vlSelf->io_resultALU);
}

void VMemData___024root___eval(VMemData___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemData__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemData___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VMemData___024root___sequent__TOP__0(vlSelf);
    }
    VMemData___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VMemData___024root___eval_debug_assertions(VMemData___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemData__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemData___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_bundleMemDataControl_ctrlLoad 
                     & 0xfeU))) {
        Verilated::overWidthError("io_bundleMemDataControl_ctrlLoad");}
    if (VL_UNLIKELY((vlSelf->io_bundleMemDataControl_ctrlStore 
                     & 0xfeU))) {
        Verilated::overWidthError("io_bundleMemDataControl_ctrlStore");}
    if (VL_UNLIKELY((vlSelf->io_bundleMemDataControl_ctrlSigned 
                     & 0xfeU))) {
        Verilated::overWidthError("io_bundleMemDataControl_ctrlSigned");}
    if (VL_UNLIKELY((vlSelf->io_bundleMemDataControl_ctrlLSType 
                     & 0xfcU))) {
        Verilated::overWidthError("io_bundleMemDataControl_ctrlLSType");}
}
#endif  // VL_DEBUG
