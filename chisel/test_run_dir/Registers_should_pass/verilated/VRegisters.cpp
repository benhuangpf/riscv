// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegisters.h"
#include "VRegisters__Syms.h"

//============================================================
// Constructors

VRegisters::VRegisters(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRegisters__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_ctrlRegWrite{vlSymsp->TOP.io_ctrlRegWrite}
    , io_ctrlJump{vlSymsp->TOP.io_ctrlJump}
    , io_bundleReg_rs1{vlSymsp->TOP.io_bundleReg_rs1}
    , io_bundleReg_rs2{vlSymsp->TOP.io_bundleReg_rs2}
    , io_bundleReg_rd{vlSymsp->TOP.io_bundleReg_rd}
    , io_pc{vlSymsp->TOP.io_pc}
    , io_dataWrite{vlSymsp->TOP.io_dataWrite}
    , io_dataRead1{vlSymsp->TOP.io_dataRead1}
    , io_dataRead2{vlSymsp->TOP.io_dataRead2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRegisters::VRegisters(const char* _vcname__)
    : VRegisters(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRegisters::~VRegisters() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRegisters___024root___eval_initial(VRegisters___024root* vlSelf);
void VRegisters___024root___eval_settle(VRegisters___024root* vlSelf);
void VRegisters___024root___eval(VRegisters___024root* vlSelf);
#ifdef VL_DEBUG
void VRegisters___024root___eval_debug_assertions(VRegisters___024root* vlSelf);
#endif  // VL_DEBUG
void VRegisters___024root___final(VRegisters___024root* vlSelf);

static void _eval_initial_loop(VRegisters__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRegisters___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRegisters___024root___eval_settle(&(vlSymsp->TOP));
        VRegisters___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRegisters::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegisters::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegisters___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRegisters___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VRegisters::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRegisters::final() {
    VRegisters___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRegisters::hierName() const { return vlSymsp->name(); }
const char* VRegisters::modelName() const { return "VRegisters"; }
unsigned VRegisters::threads() const { return 1; }
