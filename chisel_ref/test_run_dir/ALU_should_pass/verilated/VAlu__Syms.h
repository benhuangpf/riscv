// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VALU__SYMS_H_
#define VERILATED_VALU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VAlu.h"

// INCLUDE MODULE CLASSES
#include "VAlu___024root.h"

// SYMS CLASS (contains all model state)
class VAlu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VAlu* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VAlu___024root                 TOP;

    // CONSTRUCTORS
    VAlu__Syms(VerilatedContext* contextp, const char* namep, VAlu* modelp);
    ~VAlu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
