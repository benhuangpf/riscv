// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAlu__Syms.h"


void VAlu___024root__trace_chg_0_sub_0(VAlu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VAlu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root__trace_chg_0\n"); );
    // Init
    VAlu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAlu___024root*>(voidSelf);
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VAlu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VAlu___024root__trace_chg_0_sub_0(VAlu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root__trace_chg_0_sub_0\n"); );
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
    bufp->chgIData(oldp+7,(vlSelf->io_dataRead1),32);
    bufp->chgIData(oldp+8,(vlSelf->io_dataRead2),32);
    bufp->chgIData(oldp+9,(vlSelf->io_imm),32);
    bufp->chgIData(oldp+10,(vlSelf->io_pc),32);
    bufp->chgBit(oldp+11,(vlSelf->io_resultBranch));
    bufp->chgIData(oldp+12,(vlSelf->io_resultAlu),32);
    bufp->chgIData(oldp+13,(vlSelf->Alu__DOT__oprand1),32);
    bufp->chgIData(oldp+14,(vlSelf->Alu__DOT__oprand2),32);
}

void VAlu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root__trace_cleanup\n"); );
    // Init
    VAlu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAlu___024root*>(voidSelf);
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
