// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPCReg.h"
#include "VPCReg__Syms.h"

//============================================================
// Constructors

VPCReg::VPCReg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPCReg__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_ctrlJump{vlSymsp->TOP.io_ctrlJump}
    , io_ctrlBranch{vlSymsp->TOP.io_ctrlBranch}
    , io_resultBranch{vlSymsp->TOP.io_resultBranch}
    , io_addrOut{vlSymsp->TOP.io_addrOut}
    , io_addrTarget{vlSymsp->TOP.io_addrTarget}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VPCReg::VPCReg(const char* _vcname__)
    : VPCReg(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPCReg::~VPCReg() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPCReg___024root___eval_initial(VPCReg___024root* vlSelf);
void VPCReg___024root___eval_settle(VPCReg___024root* vlSelf);
void VPCReg___024root___eval(VPCReg___024root* vlSelf);
#ifdef VL_DEBUG
void VPCReg___024root___eval_debug_assertions(VPCReg___024root* vlSelf);
#endif  // VL_DEBUG
void VPCReg___024root___final(VPCReg___024root* vlSelf);

static void _eval_initial_loop(VPCReg__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPCReg___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPCReg___024root___eval_settle(&(vlSymsp->TOP));
        VPCReg___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VPCReg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPCReg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPCReg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPCReg___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VPCReg::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VPCReg::final() {
    VPCReg___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPCReg::hierName() const { return vlSymsp->name(); }
const char* VPCReg::modelName() const { return "VPCReg"; }
unsigned VPCReg::threads() const { return 1; }
