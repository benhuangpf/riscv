// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemInst.h for the primary calling header

#include "verilated.h"

#include "VMemInst__Syms.h"
#include "VMemInst___024root.h"

void VMemInst___024root___ctor_var_reset(VMemInst___024root* vlSelf);

VMemInst___024root::VMemInst___024root(VMemInst__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMemInst___024root___ctor_var_reset(this);
}

void VMemInst___024root___configure_coverage(VMemInst___024root* vlSelf, bool first);

void VMemInst___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VMemInst___024root___configure_coverage(this, first);
}

VMemInst___024root::~VMemInst___024root() {
}

// Coverage
void VMemInst___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
