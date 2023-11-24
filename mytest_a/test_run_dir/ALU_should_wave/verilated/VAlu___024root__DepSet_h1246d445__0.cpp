// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAlu.h for the primary calling header

#include "VAlu__pch.h"
#include "VAlu__Syms.h"
#include "VAlu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__ico(VAlu___024root* vlSelf);
#endif  // VL_DEBUG

void VAlu___024root___eval_triggers__ico(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VAlu___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__act(VAlu___024root* vlSelf);
#endif  // VL_DEBUG

void VAlu___024root___eval_triggers__act(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VAlu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
