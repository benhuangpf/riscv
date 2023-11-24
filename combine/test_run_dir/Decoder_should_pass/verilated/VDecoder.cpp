// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDecoder.h"
#include "VDecoder__Syms.h"

//============================================================
// Constructors

VDecoder::VDecoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VDecoder__Syms(contextp(), _vcname__, this)}
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
    , io_bundleReg_rs1{vlSymsp->TOP.io_bundleReg_rs1}
    , io_bundleReg_rs2{vlSymsp->TOP.io_bundleReg_rs2}
    , io_bundleReg_rd{vlSymsp->TOP.io_bundleReg_rd}
    , io_inst{vlSymsp->TOP.io_inst}
    , io_imm{vlSymsp->TOP.io_imm}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VDecoder::VDecoder(const char* _vcname__)
    : VDecoder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VDecoder::~VDecoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VDecoder___024root___eval_initial(VDecoder___024root* vlSelf);
void VDecoder___024root___eval_settle(VDecoder___024root* vlSelf);
void VDecoder___024root___eval(VDecoder___024root* vlSelf);
#ifdef VL_DEBUG
void VDecoder___024root___eval_debug_assertions(VDecoder___024root* vlSelf);
#endif  // VL_DEBUG
void VDecoder___024root___final(VDecoder___024root* vlSelf);

static void _eval_initial_loop(VDecoder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VDecoder___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VDecoder___024root___eval_settle(&(vlSymsp->TOP));
        VDecoder___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VDecoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDecoder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDecoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VDecoder___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VDecoder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VDecoder::final() {
    VDecoder___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VDecoder::hierName() const { return vlSymsp->name(); }
const char* VDecoder::modelName() const { return "VDecoder"; }
unsigned VDecoder::threads() const { return 1; }
