// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFullAdder.h for the primary calling header

#include "VFullAdder__pch.h"
#include "VFullAdder__Syms.h"
#include "VFullAdder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VFullAdder___024root___dump_triggers__ico(VFullAdder___024root* vlSelf);
#endif  // VL_DEBUG

void VFullAdder___024root___eval_triggers__ico(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFullAdder___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFullAdder___024root___dump_triggers__act(VFullAdder___024root* vlSelf);
#endif  // VL_DEBUG

void VFullAdder___024root___eval_triggers__act(VFullAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFullAdder___024root___dump_triggers__act(vlSelf);
    }
#endif
}
