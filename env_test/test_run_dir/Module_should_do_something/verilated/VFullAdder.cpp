// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFullAdder__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFullAdder::VFullAdder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VFullAdder__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_bundleAluControl_ctrlALUSrc{vlSymsp->TOP.io_bundleAluControl_ctrlALUSrc}
    , io_bundleAluControl_ctrlJAL{vlSymsp->TOP.io_bundleAluControl_ctrlJAL}
    , io_bundleAluControl_ctrlOP{vlSymsp->TOP.io_bundleAluControl_ctrlOP}
    , io_bundleAluControl_ctrlSigned{vlSymsp->TOP.io_bundleAluControl_ctrlSigned}
    , io_bundleAluControl_ctrlBranch{vlSymsp->TOP.io_bundleAluControl_ctrlBranch}
    , io_a{vlSymsp->TOP.io_a}
    , io_b{vlSymsp->TOP.io_b}
    , io_cin{vlSymsp->TOP.io_cin}
    , io_sum{vlSymsp->TOP.io_sum}
    , io_cout{vlSymsp->TOP.io_cout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VFullAdder::VFullAdder(const char* _vcname__)
    : VFullAdder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VFullAdder::~VFullAdder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VFullAdder___024root___eval_debug_assertions(VFullAdder___024root* vlSelf);
#endif  // VL_DEBUG
void VFullAdder___024root___eval_static(VFullAdder___024root* vlSelf);
void VFullAdder___024root___eval_initial(VFullAdder___024root* vlSelf);
void VFullAdder___024root___eval_settle(VFullAdder___024root* vlSelf);
void VFullAdder___024root___eval(VFullAdder___024root* vlSelf);

void VFullAdder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFullAdder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFullAdder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VFullAdder___024root___eval_static(&(vlSymsp->TOP));
        VFullAdder___024root___eval_initial(&(vlSymsp->TOP));
        VFullAdder___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VFullAdder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VFullAdder::eventsPending() { return false; }

uint64_t VFullAdder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VFullAdder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VFullAdder___024root___eval_final(VFullAdder___024root* vlSelf);

VL_ATTR_COLD void VFullAdder::final() {
    VFullAdder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VFullAdder::hierName() const { return vlSymsp->name(); }
const char* VFullAdder::modelName() const { return "VFullAdder"; }
unsigned VFullAdder::threads() const { return 1; }
void VFullAdder::prepareClone() const { contextp()->prepareClone(); }
void VFullAdder::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VFullAdder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VFullAdder___024root__trace_init_top(VFullAdder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFullAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFullAdder___024root*>(voidSelf);
    VFullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VFullAdder___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VFullAdder___024root__trace_register(VFullAdder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFullAdder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VFullAdder::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFullAdder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
