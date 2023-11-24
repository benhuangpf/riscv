// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAlu__pch.h"
#include "verilated_vcd_c.h"

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
// Evaluation function

#ifdef VL_DEBUG
void VAlu___024root___eval_debug_assertions(VAlu___024root* vlSelf);
#endif  // VL_DEBUG
void VAlu___024root___eval_static(VAlu___024root* vlSelf);
void VAlu___024root___eval_initial(VAlu___024root* vlSelf);
void VAlu___024root___eval_settle(VAlu___024root* vlSelf);
void VAlu___024root___eval(VAlu___024root* vlSelf);

void VAlu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAlu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAlu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VAlu___024root___eval_static(&(vlSymsp->TOP));
        VAlu___024root___eval_initial(&(vlSymsp->TOP));
        VAlu___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VAlu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VAlu::eventsPending() { return false; }

uint64_t VAlu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VAlu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VAlu___024root___eval_final(VAlu___024root* vlSelf);

VL_ATTR_COLD void VAlu::final() {
    VAlu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VAlu::hierName() const { return vlSymsp->name(); }
const char* VAlu::modelName() const { return "VAlu"; }
unsigned VAlu::threads() const { return 1; }
void VAlu::prepareClone() const { contextp()->prepareClone(); }
void VAlu::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VAlu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VAlu___024root__trace_init_top(VAlu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAlu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAlu___024root*>(voidSelf);
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VAlu___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VAlu___024root__trace_register(VAlu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAlu::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VAlu::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAlu___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
