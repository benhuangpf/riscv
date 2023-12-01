// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFullAdder.h for the primary calling header

#ifndef VERILATED_VFULLADDER___024ROOT_H_
#define VERILATED_VFULLADDER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class VFullAdder__Syms;

class alignas(VL_CACHE_LINE_BYTES) VFullAdder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_bundleAluControl_ctrlALUSrc,0,0);
    VL_IN8(io_bundleAluControl_ctrlJAL,0,0);
    VL_IN8(io_bundleAluControl_ctrlOP,3,0);
    VL_IN8(io_bundleAluControl_ctrlSigned,0,0);
    VL_IN8(io_bundleAluControl_ctrlBranch,0,0);
    VL_IN8(io_a,0,0);
    VL_IN8(io_b,0,0);
    VL_IN8(io_cin,0,0);
    VL_OUT8(io_sum,0,0);
    VL_OUT8(io_cout,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFullAdder__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFullAdder___024root(VFullAdder__Syms* symsp, const char* v__name);
    ~VFullAdder___024root();
    VL_UNCOPYABLE(VFullAdder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
