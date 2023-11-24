// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMemInst.h for the primary calling header

#ifndef VERILATED_VMEMINST___024ROOT_H_
#define VERILATED_VMEMINST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VMemInst__Syms;

class VMemInst___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN(io_addr,31,0);
    VL_OUT(io_inst,31,0);
    VlUnpacked<IData/*31:0*/, 1024> MemInst__DOT__mem;

    // INTERNAL VARIABLES
    VMemInst__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMemInst___024root(VMemInst__Syms* symsp, const char* name);
    ~VMemInst___024root();
    VL_UNCOPYABLE(VMemInst___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
