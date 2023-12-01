// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAlu.h"
#include "VAlu__Syms.h"

//============================================================
// Constructors

VAlu::VAlu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VAlu__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_bundleAluControl_ctrlALUSrc{vlSymsp->TOP.io_bundleAluControl_ctrlALUSrc}
    , io_bundleAluControl_ctrlJAL{vlSymsp->TOP.io_bundleAluControl_ctrlJAL}
    , io_bundleAluControl_ctrlOP{vlSymsp->TOP.io_bundleAluControl_ctrlOP}
    , io_bundleAluControl_ctrlSigned{vlSymsp->TOP.io_bundleAluControl_ctrlSigned}
    , io_bundleAluControl_ctrlBranch{vlSymsp->TOP.io_bundleAluControl_ctrlBranch}
    , io_resultBranch{vlSymsp->TOP.io_resultBranch}
    , io_dataRead1{vlSymsp->TOP.io_dataRead1}
    , io_dataRead2{vlSymsp->TOP.io_dataRead2}
    , io_imm{vlSymsp->TOP.io_imm}
    , io_pc{vlSymsp->TOP.io_pc}
    , io_resultAlu{vlSymsp->TOP.io_resultAlu}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VAlu::VAlu(const char* _vcname__)
    : VAlu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VAlu::~VAlu() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VAlu___024root___eval_initial(VAlu___024root* vlSelf);
void VAlu___024root___eval_settle(VAlu___024root* vlSelf);
void VAlu___024root___eval(VAlu___024root* vlSelf);
#ifdef VL_DEBUG
void VAlu___024root___eval_debug_assertions(VAlu___024root* vlSelf);
#endif  // VL_DEBUG
void VAlu___024root___final(VAlu___024root* vlSelf);

static void _eval_initial_loop(VAlu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VAlu___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VAlu___024root___eval_settle(&(vlSymsp->TOP));
        VAlu___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VAlu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAlu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAlu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VAlu___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VAlu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VAlu::final() {
    VAlu___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VAlu::hierName() const { return vlSymsp->name(); }
const char* VAlu::modelName() const { return "VAlu"; }
unsigned VAlu::threads() const { return 1; }
