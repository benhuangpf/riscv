// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREGISTERS__SYMS_H_
#define VERILATED_VREGISTERS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRegisters.h"

// INCLUDE MODULE CLASSES
#include "VRegisters___024root.h"

// SYMS CLASS (contains all model state)
class VRegisters__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRegisters* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRegisters___024root           TOP;

    // CONSTRUCTORS
    VRegisters__Syms(VerilatedContext* contextp, const char* namep, VRegisters* modelp);
    ~VRegisters__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
