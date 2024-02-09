// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_bundleCtrl_ctrlJump,0,0);
    VL_OUT8(io_bundleCtrl_ctrlBranch,0,0);
    VL_OUT8(io_bundleCtrl_ctrlRegWrite,0,0);
    VL_OUT8(io_bundleCtrl_ctrlLoad,0,0);
    VL_OUT8(io_bundleCtrl_ctrlStore,0,0);
    VL_OUT8(io_bundleCtrl_ctrlALUSrc,0,0);
    VL_OUT8(io_bundleCtrl_ctrlJAL,0,0);
    VL_OUT8(io_bundleCtrl_ctrlOP,3,0);
    VL_OUT8(io_bundleCtrl_ctrlSigned,0,0);
    VL_OUT8(io_bundleCtrl_ctrlLSType,1,0);
    VL_OUT8(io_resultBranch,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ Top__DOT__memData__DOT__mem_MPORT_addr;
    VL_OUT(io_addr,31,0);
    VL_OUT(io_inst,31,0);
    VL_OUT(io_resultALU,31,0);
    VL_OUT(io_rs1,31,0);
    VL_OUT(io_rs2,31,0);
    VL_OUT(io_imm,31,0);
    VL_OUT(io_result,31,0);
    IData/*31:0*/ Top__DOT__pcReg__DOT__regPC;
    IData/*31:0*/ Top__DOT__pcReg__DOT___regPC_T_1;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_0;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_1;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_2;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_3;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_4;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_5;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_6;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_7;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_8;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_9;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_10;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_11;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_12;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_13;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_14;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_15;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_16;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_17;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_18;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_19;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_20;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_21;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_22;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_23;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_24;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_25;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_26;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_27;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_28;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_29;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_30;
    IData/*31:0*/ Top__DOT__registers__DOT__regs_31;
    IData/*31:0*/ Top__DOT__memData__DOT__dataLoad;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> Top__DOT__memInst__DOT__mem;
    VlUnpacked<IData/*31:0*/, 1024> Top__DOT__memData__DOT__mem;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop___024root(VTop__Syms* symsp, const char* v__name);
    ~VTop___024root();
    VL_UNCOPYABLE(VTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
