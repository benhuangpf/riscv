// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTop.h"
#include "VTop__Syms.h"
#include "verilated_vcd_c.h"

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
    , io_ans{vlSymsp->TOP.io_ans}
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
// Evaluation loop

void VTop___024root___eval_initial(VTop___024root* vlSelf);
void VTop___024root___eval_settle(VTop___024root* vlSelf);
void VTop___024root___eval(VTop___024root* vlSelf);
#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf);
#endif  // VL_DEBUG
void VTop___024root___final(VTop___024root* vlSelf);

static void _eval_initial_loop(VTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VTop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VTop___024root___eval_settle(&(vlSymsp->TOP));
        VTop___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VTop___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VTop::final() {
    VTop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTop::hierName() const { return vlSymsp->name(); }
const char* VTop::modelName() const { return "VTop"; }
unsigned VTop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VTop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTop___024root__trace_init_top(VTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTop___024root__trace_register(VTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
