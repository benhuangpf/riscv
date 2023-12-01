// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPCReg.h for the primary calling header

#ifndef VERILATED_VPCREG___024ROOT_H_
#define VERILATED_VPCREG___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VPCReg__Syms;

class VPCReg___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_ctrlJump,0,0);
    VL_IN8(io_ctrlBranch,0,0);
    VL_IN8(io_resultBranch,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;
    VL_OUT(io_addrOut,31,0);
    VL_IN(io_addrTarget,31,0);
    IData/*31:0*/ PCReg__DOT__regPC;
    IData/*31:0*/ PCReg__DOT___regPC_T_1;

    // INTERNAL VARIABLES
    VPCReg__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPCReg___024root(VPCReg__Syms* symsp, const char* name);
    ~VPCReg___024root();
    VL_UNCOPYABLE(VPCReg___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
