// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPCREG__SYMS_H_
#define VERILATED_VPCREG__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VPCReg.h"

// INCLUDE MODULE CLASSES
#include "VPCReg___024root.h"

// SYMS CLASS (contains all model state)
class VPCReg__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VPCReg* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VPCReg___024root               TOP;

    // CONSTRUCTORS
    VPCReg__Syms(VerilatedContext* contextp, const char* namep, VPCReg* modelp);
    ~VPCReg__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
