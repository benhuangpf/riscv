// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemInst.h for the primary calling header

#include "verilated.h"

#include "VMemInst___024root.h"

VL_INLINE_OPT void VMemInst___024root___combo__TOP__0(VMemInst___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemInst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemInst___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->io_inst = vlSelf->MemInst__DOT__mem[(0x3ffU 
                                                 & (vlSelf->io_addr 
                                                    >> 2U))];
}

void VMemInst___024root___eval(VMemInst___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemInst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemInst___024root___eval\n"); );
    // Body
    VMemInst___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VMemInst___024root___eval_debug_assertions(VMemInst___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemInst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemInst___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
