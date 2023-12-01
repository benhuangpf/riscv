// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMemInst.h"
#include "VMemInst__Syms.h"

//============================================================
// Constructors

VMemInst::VMemInst(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMemInst__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_addr{vlSymsp->TOP.io_addr}
    , io_inst{vlSymsp->TOP.io_inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMemInst::VMemInst(const char* _vcname__)
    : VMemInst(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMemInst::~VMemInst() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMemInst___024root___eval_initial(VMemInst___024root* vlSelf);
void VMemInst___024root___eval_settle(VMemInst___024root* vlSelf);
void VMemInst___024root___eval(VMemInst___024root* vlSelf);
#ifdef VL_DEBUG
void VMemInst___024root___eval_debug_assertions(VMemInst___024root* vlSelf);
#endif  // VL_DEBUG
void VMemInst___024root___final(VMemInst___024root* vlSelf);

static void _eval_initial_loop(VMemInst__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMemInst___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMemInst___024root___eval_settle(&(vlSymsp->TOP));
        VMemInst___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMemInst::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMemInst::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMemInst___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMemInst___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VMemInst::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMemInst::final() {
    VMemInst___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMemInst::hierName() const { return vlSymsp->name(); }
const char* VMemInst::modelName() const { return "VMemInst"; }
unsigned VMemInst::threads() const { return 1; }
