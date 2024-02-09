// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTop__pch.h"

//============================================================
// Constructors

VTop::VTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_bundleCtrl_ctrlJump{vlSymsp->TOP.io_bundleCtrl_ctrlJump}
    , io_bundleCtrl_ctrlBranch{vlSymsp->TOP.io_bundleCtrl_ctrlBranch}
    , io_bundleCtrl_ctrlRegWrite{vlSymsp->TOP.io_bundleCtrl_ctrlRegWrite}
    , io_bundleCtrl_ctrlLoad{vlSymsp->TOP.io_bundleCtrl_ctrlLoad}
    , io_bundleCtrl_ctrlStore{vlSymsp->TOP.io_bundleCtrl_ctrlStore}
    , io_bundleCtrl_ctrlALUSrc{vlSymsp->TOP.io_bundleCtrl_ctrlALUSrc}
    , io_bundleCtrl_ctrlJAL{vlSymsp->TOP.io_bundleCtrl_ctrlJAL}
    , io_bundleCtrl_ctrlOP{vlSymsp->TOP.io_bundleCtrl_ctrlOP}
    , io_bundleCtrl_ctrlSigned{vlSymsp->TOP.io_bundleCtrl_ctrlSigned}
    , io_bundleCtrl_ctrlLSType{vlSymsp->TOP.io_bundleCtrl_ctrlLSType}
    , io_resultBranch{vlSymsp->TOP.io_resultBranch}
    , io_addr{vlSymsp->TOP.io_addr}
    , io_inst{vlSymsp->TOP.io_inst}
    , io_resultALU{vlSymsp->TOP.io_resultALU}
    , io_rs1{vlSymsp->TOP.io_rs1}
    , io_rs2{vlSymsp->TOP.io_rs2}
    , io_imm{vlSymsp->TOP.io_imm}
    , io_result{vlSymsp->TOP.io_result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTop::VTop(const char* _vcname__)
    : VTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTop::~VTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf);
#endif  // VL_DEBUG
void VTop___024root___eval_static(VTop___024root* vlSelf);
void VTop___024root___eval_initial(VTop___024root* vlSelf);
void VTop___024root___eval_settle(VTop___024root* vlSelf);
void VTop___024root___eval(VTop___024root* vlSelf);

void VTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTop___024root___eval_static(&(vlSymsp->TOP));
        VTop___024root___eval_initial(&(vlSymsp->TOP));
        VTop___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTop::eventsPending() { return false; }

uint64_t VTop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTop___024root___eval_final(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop::final() {
    VTop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTop::hierName() const { return vlSymsp->name(); }
const char* VTop::modelName() const { return "VTop"; }
unsigned VTop::threads() const { return 1; }
void VTop::prepareClone() const { contextp()->prepareClone(); }
void VTop::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VTop::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VTop::trace()' called on model that was Verilated without --trace option");
}
