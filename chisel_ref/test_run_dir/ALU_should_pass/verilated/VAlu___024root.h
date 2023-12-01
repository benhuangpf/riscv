// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAlu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VAlu__Syms;

class VAlu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_bundleAluControl_ctrlALUSrc,0,0);
    VL_IN8(io_bundleAluControl_ctrlJAL,0,0);
    VL_IN8(io_bundleAluControl_ctrlOP,3,0);
    VL_IN8(io_bundleAluControl_ctrlSigned,0,0);
    VL_IN8(io_bundleAluControl_ctrlBranch,0,0);
    VL_OUT8(io_resultBranch,0,0);
    VL_IN(io_dataRead1,31,0);
    VL_IN(io_dataRead2,31,0);
    VL_IN(io_imm,31,0);
    VL_IN(io_pc,31,0);
    VL_OUT(io_resultAlu,31,0);

    // INTERNAL VARIABLES
    VAlu__Syms* const vlSymsp;

    // CONSTRUCTORS
    VAlu___024root(VAlu__Syms* symsp, const char* name);
    ~VAlu___024root();
    VL_UNCOPYABLE(VAlu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
