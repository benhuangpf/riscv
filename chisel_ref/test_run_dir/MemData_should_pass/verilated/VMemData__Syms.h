// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMEMDATA__SYMS_H_
#define VERILATED_VMEMDATA__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMemData.h"

// INCLUDE MODULE CLASSES
#include "VMemData___024root.h"

// SYMS CLASS (contains all model state)
class VMemData__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMemData* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMemData___024root             TOP;

    // CONSTRUCTORS
    VMemData__Syms(VerilatedContext* contextp, const char* namep, VMemData* modelp);
    ~VMemData__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
