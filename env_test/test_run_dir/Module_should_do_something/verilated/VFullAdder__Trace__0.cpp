// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFullAdder__Syms.h"


void VFullAdder___024root__trace_chg_0_sub_0(VFullAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VFullAdder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root__trace_chg_0\n"); );
    // Init
    VFullAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFullAdder___024root*>(voidSelf);
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VFullAdder___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VFullAdder___024root__trace_chg_0_sub_0(VFullAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clock));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgBit(oldp+2,(vlSelf->io_bundleAluControl_ctrlALUSrc));
    bufp->chgBit(oldp+3,(vlSelf->io_bundleAluControl_ctrlJAL));
    bufp->chgCData(oldp+4,(vlSelf->io_bundleAluControl_ctrlOP),4);
    bufp->chgBit(oldp+5,(vlSelf->io_bundleAluControl_ctrlSigned));
    bufp->chgBit(oldp+6,(vlSelf->io_bundleAluControl_ctrlBranch));
    bufp->chgBit(oldp+7,(vlSelf->io_a));
    bufp->chgBit(oldp+8,(vlSelf->io_b));
    bufp->chgBit(oldp+9,(vlSelf->io_cin));
    bufp->chgBit(oldp+10,(vlSelf->io_sum));
    bufp->chgBit(oldp+11,(vlSelf->io_cout));
    bufp->chgBit(oldp+12,(((IData)(vlSelf->io_a) ^ (IData)(vlSelf->io_b))));
    bufp->chgBit(oldp+13,(((IData)(vlSelf->io_a) & (IData)(vlSelf->io_b))));
    bufp->chgBit(oldp+14,(((IData)(vlSelf->io_b) & (IData)(vlSelf->io_cin))));
    bufp->chgBit(oldp+15,(((IData)(vlSelf->io_a) & (IData)(vlSelf->io_cin))));
}

void VFullAdder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullAdder___024root__trace_cleanup\n"); );
    // Init
    VFullAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFullAdder___024root*>(voidSelf);
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
