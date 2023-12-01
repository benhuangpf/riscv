// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMemData.h"
#include "VMemData__Syms.h"

//============================================================
// Constructors

VMemData::VMemData(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMemData__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_bundleMemDataControl_ctrlLoad{vlSymsp->TOP.io_bundleMemDataControl_ctrlLoad}
    , io_bundleMemDataControl_ctrlStore{vlSymsp->TOP.io_bundleMemDataControl_ctrlStore}
    , io_bundleMemDataControl_ctrlSigned{vlSymsp->TOP.io_bundleMemDataControl_ctrlSigned}
    , io_bundleMemDataControl_ctrlLSType{vlSymsp->TOP.io_bundleMemDataControl_ctrlLSType}
    , io_resultALU{vlSymsp->TOP.io_resultALU}
    , io_dataStore{vlSymsp->TOP.io_dataStore}
    , io_result{vlSymsp->TOP.io_result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMemData::VMemData(const char* _vcname__)
    : VMemData(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMemData::~VMemData() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMemData___024root___eval_initial(VMemData___024root* vlSelf);
void VMemData___024root___eval_settle(VMemData___024root* vlSelf);
void VMemData___024root___eval(VMemData___024root* vlSelf);
#ifdef VL_DEBUG
void VMemData___024root___eval_debug_assertions(VMemData___024root* vlSelf);
#endif  // VL_DEBUG
void VMemData___024root___final(VMemData___024root* vlSelf);

static void _eval_initial_loop(VMemData__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMemData___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMemData___024root___eval_settle(&(vlSymsp->TOP));
        VMemData___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMemData::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMemData::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMemData___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMemData___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VMemData::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMemData::final() {
    VMemData___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMemData::hierName() const { return vlSymsp->name(); }
const char* VMemData::modelName() const { return "VMemData"; }
unsigned VMemData::threads() const { return 1; }
