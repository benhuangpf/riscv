// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMemData.h for the primary calling header

#ifndef VERILATED_VMEMDATA___024ROOT_H_
#define VERILATED_VMEMDATA___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VMemData__Syms;

class VMemData___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_bundleMemDataControl_ctrlLoad,0,0);
    VL_IN8(io_bundleMemDataControl_ctrlStore,0,0);
    VL_IN8(io_bundleMemDataControl_ctrlSigned,0,0);
    VL_IN8(io_bundleMemDataControl_ctrlLSType,1,0);
    CData/*0:0*/ __Vclklast__TOP__clock;
    VL_IN(io_resultALU,31,0);
    VL_IN(io_dataStore,31,0);
    VL_OUT(io_result,31,0);
    IData/*31:0*/ MemData__DOT__mem_dataLoad_MPORT_data;
    VlUnpacked<IData/*31:0*/, 1024> MemData__DOT__mem;

    // INTERNAL VARIABLES
    VMemData__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMemData___024root(VMemData__Syms* symsp, const char* name);
    ~VMemData___024root();
    VL_UNCOPYABLE(VMemData___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
