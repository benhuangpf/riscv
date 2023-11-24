// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegisters.h for the primary calling header

#ifndef VERILATED_VREGISTERS___024ROOT_H_
#define VERILATED_VREGISTERS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VRegisters__Syms;

class VRegisters___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_ctrlRegWrite,0,0);
    VL_IN8(io_ctrlJump,0,0);
    VL_IN8(io_bundleReg_rs1,4,0);
    VL_IN8(io_bundleReg_rs2,4,0);
    VL_IN8(io_bundleReg_rd,4,0);
    CData/*0:0*/ __Vclklast__TOP__clock;
    VL_IN(io_pc,31,0);
    VL_IN(io_dataWrite,31,0);
    VL_OUT(io_dataRead1,31,0);
    VL_OUT(io_dataRead2,31,0);
    IData/*31:0*/ Registers__DOT__regs_0;
    IData/*31:0*/ Registers__DOT__regs_1;
    IData/*31:0*/ Registers__DOT__regs_2;
    IData/*31:0*/ Registers__DOT__regs_3;
    IData/*31:0*/ Registers__DOT__regs_4;
    IData/*31:0*/ Registers__DOT__regs_5;
    IData/*31:0*/ Registers__DOT__regs_6;
    IData/*31:0*/ Registers__DOT__regs_7;
    IData/*31:0*/ Registers__DOT__regs_8;
    IData/*31:0*/ Registers__DOT__regs_9;
    IData/*31:0*/ Registers__DOT__regs_10;
    IData/*31:0*/ Registers__DOT__regs_11;
    IData/*31:0*/ Registers__DOT__regs_12;
    IData/*31:0*/ Registers__DOT__regs_13;
    IData/*31:0*/ Registers__DOT__regs_14;
    IData/*31:0*/ Registers__DOT__regs_15;
    IData/*31:0*/ Registers__DOT__regs_16;
    IData/*31:0*/ Registers__DOT__regs_17;
    IData/*31:0*/ Registers__DOT__regs_18;
    IData/*31:0*/ Registers__DOT__regs_19;
    IData/*31:0*/ Registers__DOT__regs_20;
    IData/*31:0*/ Registers__DOT__regs_21;
    IData/*31:0*/ Registers__DOT__regs_22;
    IData/*31:0*/ Registers__DOT__regs_23;
    IData/*31:0*/ Registers__DOT__regs_24;
    IData/*31:0*/ Registers__DOT__regs_25;
    IData/*31:0*/ Registers__DOT__regs_26;
    IData/*31:0*/ Registers__DOT__regs_27;
    IData/*31:0*/ Registers__DOT__regs_28;
    IData/*31:0*/ Registers__DOT__regs_29;
    IData/*31:0*/ Registers__DOT__regs_30;
    IData/*31:0*/ Registers__DOT__regs_31;

    // INTERNAL VARIABLES
    VRegisters__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRegisters___024root(VRegisters__Syms* symsp, const char* name);
    ~VRegisters___024root();
    VL_UNCOPYABLE(VRegisters___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
