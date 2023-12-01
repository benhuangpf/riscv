// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFullAdder.h for the primary calling header

#include "VFullAdder__pch.h"
#include "VFullAdder__Syms.h"
#include "VFullAdder___024root.h"

void VFullAdder___024root___ctor_var_reset(VFullAdder___024root* vlSelf);

VFullAdder___024root::VFullAdder___024root(VFullAdder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFullAdder___024root___ctor_var_reset(this);
}

void VFullAdder___024root___configure_coverage(VFullAdder___024root* vlSelf, bool first);

void VFullAdder___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VFullAdder___024root___configure_coverage(this, first);
}

VFullAdder___024root::~VFullAdder___024root() {
}

// Coverage
void VFullAdder___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
