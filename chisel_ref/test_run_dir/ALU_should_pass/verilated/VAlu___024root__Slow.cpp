// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAlu.h for the primary calling header

#include "verilated.h"

#include "VAlu__Syms.h"
#include "VAlu___024root.h"

void VAlu___024root___ctor_var_reset(VAlu___024root* vlSelf);

VAlu___024root::VAlu___024root(VAlu__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VAlu___024root___ctor_var_reset(this);
}

void VAlu___024root___configure_coverage(VAlu___024root* vlSelf, bool first);

void VAlu___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VAlu___024root___configure_coverage(this, first);
}

VAlu___024root::~VAlu___024root() {
}

// Coverage
void VAlu___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
