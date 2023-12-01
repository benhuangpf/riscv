// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDECODER__SYMS_H_
#define VERILATED_VDECODER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VDecoder.h"

// INCLUDE MODULE CLASSES
#include "VDecoder___024root.h"

// SYMS CLASS (contains all model state)
class VDecoder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VDecoder* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VDecoder___024root             TOP;

    // CONSTRUCTORS
    VDecoder__Syms(VerilatedContext* contextp, const char* namep, VDecoder* modelp);
    ~VDecoder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
