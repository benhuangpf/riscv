// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMEMINST__SYMS_H_
#define VERILATED_VMEMINST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMemInst.h"

// INCLUDE MODULE CLASSES
#include "VMemInst___024root.h"

// SYMS CLASS (contains all model state)
class VMemInst__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMemInst* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMemInst___024root             TOP;

    // CONSTRUCTORS
    VMemInst__Syms(VerilatedContext* contextp, const char* namep, VMemInst* modelp);
    ~VMemInst__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
