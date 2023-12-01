// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegisters.h for the primary calling header

#include "verilated.h"

#include "VRegisters___024root.h"

VL_ATTR_COLD void VRegisters___024root___eval_initial(VRegisters___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisters__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisters___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VRegisters___024root___combo__TOP__0(VRegisters___024root* vlSelf);

VL_ATTR_COLD void VRegisters___024root___eval_settle(VRegisters___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisters__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisters___024root___eval_settle\n"); );
    // Body
    VRegisters___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VRegisters___024root___final(VRegisters___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisters__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisters___024root___final\n"); );
}

VL_ATTR_COLD void VRegisters___024root___ctor_var_reset(VRegisters___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisters__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisters___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_ctrlRegWrite = VL_RAND_RESET_I(1);
    vlSelf->io_ctrlJump = VL_RAND_RESET_I(1);
    vlSelf->io_pc = VL_RAND_RESET_I(32);
    vlSelf->io_dataWrite = VL_RAND_RESET_I(32);
    vlSelf->io_bundleReg_rs1 = VL_RAND_RESET_I(5);
    vlSelf->io_bundleReg_rs2 = VL_RAND_RESET_I(5);
    vlSelf->io_bundleReg_rd = VL_RAND_RESET_I(5);
    vlSelf->io_dataRead1 = VL_RAND_RESET_I(32);
    vlSelf->io_dataRead2 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_0 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_1 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_2 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_3 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_4 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_5 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_6 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_7 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_8 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_9 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_10 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_11 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_12 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_13 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_14 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_15 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_16 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_17 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_18 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_19 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_20 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_21 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_22 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_23 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_24 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_25 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_26 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_27 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_28 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_29 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_30 = VL_RAND_RESET_I(32);
    vlSelf->Registers__DOT__regs_31 = VL_RAND_RESET_I(32);
}

VL_ATTR_COLD void VRegisters___024root___configure_coverage(VRegisters___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisters__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisters___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
