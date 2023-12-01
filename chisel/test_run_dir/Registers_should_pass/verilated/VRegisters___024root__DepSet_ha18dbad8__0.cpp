// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegisters.h for the primary calling header

#include "verilated.h"

#include "VRegisters___024root.h"

VL_INLINE_OPT void VRegisters___024root___sequent__TOP__0(VRegisters___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisters__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisters___024root___sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->io_ctrlRegWrite) & (0U != (IData)(vlSelf->io_bundleReg_rd)))) {
        if (vlSelf->io_ctrlJump) {
            if ((0x1fU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_31 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0x1eU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_30 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0x1dU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_29 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0x1cU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_28 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0x1bU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_27 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0x1aU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_26 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0x19U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_25 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0x16U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_22 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0x17U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_23 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0x18U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_24 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((6U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_6 = ((IData)(4U) 
                                                  + vlSelf->io_pc);
            }
            if ((9U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_9 = ((IData)(4U) 
                                                  + vlSelf->io_pc);
            }
            if ((5U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_5 = ((IData)(4U) 
                                                  + vlSelf->io_pc);
            }
            if ((0U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_0 = ((IData)(4U) 
                                                  + vlSelf->io_pc);
            }
            if ((7U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_7 = ((IData)(4U) 
                                                  + vlSelf->io_pc);
            }
            if ((1U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_1 = ((IData)(4U) 
                                                  + vlSelf->io_pc);
            }
            if ((3U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_3 = ((IData)(4U) 
                                                  + vlSelf->io_pc);
            }
            if ((8U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_8 = ((IData)(4U) 
                                                  + vlSelf->io_pc);
            }
            if ((0xaU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_10 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((2U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_2 = ((IData)(4U) 
                                                  + vlSelf->io_pc);
            }
            if ((0xbU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_11 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((4U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_4 = ((IData)(4U) 
                                                  + vlSelf->io_pc);
            }
            if ((0xcU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_12 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0xdU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_13 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0xeU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_14 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0xfU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_15 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0x10U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_16 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0x11U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_17 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0x12U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_18 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0x13U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_19 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0x14U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_20 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
            if ((0x15U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_21 = ((IData)(4U) 
                                                   + vlSelf->io_pc);
            }
        } else {
            if ((0x1fU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_31 = vlSelf->io_dataWrite;
            }
            if ((0x1eU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_30 = vlSelf->io_dataWrite;
            }
            if ((0x1dU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_29 = vlSelf->io_dataWrite;
            }
            if ((0x1cU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_28 = vlSelf->io_dataWrite;
            }
            if ((0x1bU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_27 = vlSelf->io_dataWrite;
            }
            if ((0x1aU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_26 = vlSelf->io_dataWrite;
            }
            if ((0x19U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_25 = vlSelf->io_dataWrite;
            }
            if ((0x16U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_22 = vlSelf->io_dataWrite;
            }
            if ((0x17U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_23 = vlSelf->io_dataWrite;
            }
            if ((0x18U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_24 = vlSelf->io_dataWrite;
            }
            if ((6U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_6 = vlSelf->io_dataWrite;
            }
            if ((9U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_9 = vlSelf->io_dataWrite;
            }
            if ((5U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_5 = vlSelf->io_dataWrite;
            }
            if ((0U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_0 = vlSelf->io_dataWrite;
            }
            if ((7U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_7 = vlSelf->io_dataWrite;
            }
            if ((1U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_1 = vlSelf->io_dataWrite;
            }
            if ((3U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_3 = vlSelf->io_dataWrite;
            }
            if ((8U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_8 = vlSelf->io_dataWrite;
            }
            if ((0xaU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_10 = vlSelf->io_dataWrite;
            }
            if ((2U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_2 = vlSelf->io_dataWrite;
            }
            if ((0xbU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_11 = vlSelf->io_dataWrite;
            }
            if ((4U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_4 = vlSelf->io_dataWrite;
            }
            if ((0xcU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_12 = vlSelf->io_dataWrite;
            }
            if ((0xdU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_13 = vlSelf->io_dataWrite;
            }
            if ((0xeU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_14 = vlSelf->io_dataWrite;
            }
            if ((0xfU == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_15 = vlSelf->io_dataWrite;
            }
            if ((0x10U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_16 = vlSelf->io_dataWrite;
            }
            if ((0x11U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_17 = vlSelf->io_dataWrite;
            }
            if ((0x12U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_18 = vlSelf->io_dataWrite;
            }
            if ((0x13U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_19 = vlSelf->io_dataWrite;
            }
            if ((0x14U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_20 = vlSelf->io_dataWrite;
            }
            if ((0x15U == (IData)(vlSelf->io_bundleReg_rd))) {
                vlSelf->Registers__DOT__regs_21 = vlSelf->io_dataWrite;
            }
        }
    }
}

VL_INLINE_OPT void VRegisters___024root___combo__TOP__0(VRegisters___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisters__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisters___024root___combo__TOP__0\n"); );
    // Init
    IData/*31:0*/ Registers__DOT___GEN_21;
    IData/*31:0*/ Registers__DOT___GEN_53;
    // Body
    Registers__DOT___GEN_21 = ((0x15U == (IData)(vlSelf->io_bundleReg_rs1))
                                ? vlSelf->Registers__DOT__regs_21
                                : ((0x14U == (IData)(vlSelf->io_bundleReg_rs1))
                                    ? vlSelf->Registers__DOT__regs_20
                                    : ((0x13U == (IData)(vlSelf->io_bundleReg_rs1))
                                        ? vlSelf->Registers__DOT__regs_19
                                        : ((0x12U == (IData)(vlSelf->io_bundleReg_rs1))
                                            ? vlSelf->Registers__DOT__regs_18
                                            : ((0x11U 
                                                == (IData)(vlSelf->io_bundleReg_rs1))
                                                ? vlSelf->Registers__DOT__regs_17
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->io_bundleReg_rs1))
                                                    ? vlSelf->Registers__DOT__regs_16
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->io_bundleReg_rs1))
                                                     ? vlSelf->Registers__DOT__regs_15
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->io_bundleReg_rs1))
                                                      ? vlSelf->Registers__DOT__regs_14
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->io_bundleReg_rs1))
                                                       ? vlSelf->Registers__DOT__regs_13
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->io_bundleReg_rs1))
                                                        ? vlSelf->Registers__DOT__regs_12
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->io_bundleReg_rs1))
                                                         ? vlSelf->Registers__DOT__regs_11
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlSelf->io_bundleReg_rs1))
                                                          ? vlSelf->Registers__DOT__regs_10
                                                          : 
                                                         ((9U 
                                                           == (IData)(vlSelf->io_bundleReg_rs1))
                                                           ? vlSelf->Registers__DOT__regs_9
                                                           : 
                                                          ((8U 
                                                            == (IData)(vlSelf->io_bundleReg_rs1))
                                                            ? vlSelf->Registers__DOT__regs_8
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->io_bundleReg_rs1))
                                                             ? vlSelf->Registers__DOT__regs_7
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->io_bundleReg_rs1))
                                                              ? vlSelf->Registers__DOT__regs_6
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->io_bundleReg_rs1))
                                                               ? vlSelf->Registers__DOT__regs_5
                                                               : 
                                                              ((4U 
                                                                == (IData)(vlSelf->io_bundleReg_rs1))
                                                                ? vlSelf->Registers__DOT__regs_4
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->io_bundleReg_rs1))
                                                                 ? vlSelf->Registers__DOT__regs_3
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->io_bundleReg_rs1))
                                                                  ? vlSelf->Registers__DOT__regs_2
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->io_bundleReg_rs1))
                                                                   ? vlSelf->Registers__DOT__regs_1
                                                                   : vlSelf->Registers__DOT__regs_0)))))))))))))))))))));
    Registers__DOT___GEN_53 = ((0x15U == (IData)(vlSelf->io_bundleReg_rs2))
                                ? vlSelf->Registers__DOT__regs_21
                                : ((0x14U == (IData)(vlSelf->io_bundleReg_rs2))
                                    ? vlSelf->Registers__DOT__regs_20
                                    : ((0x13U == (IData)(vlSelf->io_bundleReg_rs2))
                                        ? vlSelf->Registers__DOT__regs_19
                                        : ((0x12U == (IData)(vlSelf->io_bundleReg_rs2))
                                            ? vlSelf->Registers__DOT__regs_18
                                            : ((0x11U 
                                                == (IData)(vlSelf->io_bundleReg_rs2))
                                                ? vlSelf->Registers__DOT__regs_17
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->io_bundleReg_rs2))
                                                    ? vlSelf->Registers__DOT__regs_16
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->io_bundleReg_rs2))
                                                     ? vlSelf->Registers__DOT__regs_15
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->io_bundleReg_rs2))
                                                      ? vlSelf->Registers__DOT__regs_14
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->io_bundleReg_rs2))
                                                       ? vlSelf->Registers__DOT__regs_13
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->io_bundleReg_rs2))
                                                        ? vlSelf->Registers__DOT__regs_12
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->io_bundleReg_rs2))
                                                         ? vlSelf->Registers__DOT__regs_11
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlSelf->io_bundleReg_rs2))
                                                          ? vlSelf->Registers__DOT__regs_10
                                                          : 
                                                         ((9U 
                                                           == (IData)(vlSelf->io_bundleReg_rs2))
                                                           ? vlSelf->Registers__DOT__regs_9
                                                           : 
                                                          ((8U 
                                                            == (IData)(vlSelf->io_bundleReg_rs2))
                                                            ? vlSelf->Registers__DOT__regs_8
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->io_bundleReg_rs2))
                                                             ? vlSelf->Registers__DOT__regs_7
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->io_bundleReg_rs2))
                                                              ? vlSelf->Registers__DOT__regs_6
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->io_bundleReg_rs2))
                                                               ? vlSelf->Registers__DOT__regs_5
                                                               : 
                                                              ((4U 
                                                                == (IData)(vlSelf->io_bundleReg_rs2))
                                                                ? vlSelf->Registers__DOT__regs_4
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->io_bundleReg_rs2))
                                                                 ? vlSelf->Registers__DOT__regs_3
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->io_bundleReg_rs2))
                                                                  ? vlSelf->Registers__DOT__regs_2
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->io_bundleReg_rs2))
                                                                   ? vlSelf->Registers__DOT__regs_1
                                                                   : vlSelf->Registers__DOT__regs_0)))))))))))))))))))));
    vlSelf->io_dataRead1 = ((0x1fU == (IData)(vlSelf->io_bundleReg_rs1))
                             ? vlSelf->Registers__DOT__regs_31
                             : ((0x1eU == (IData)(vlSelf->io_bundleReg_rs1))
                                 ? vlSelf->Registers__DOT__regs_30
                                 : ((0x1dU == (IData)(vlSelf->io_bundleReg_rs1))
                                     ? vlSelf->Registers__DOT__regs_29
                                     : ((0x1cU == (IData)(vlSelf->io_bundleReg_rs1))
                                         ? vlSelf->Registers__DOT__regs_28
                                         : ((0x1bU 
                                             == (IData)(vlSelf->io_bundleReg_rs1))
                                             ? vlSelf->Registers__DOT__regs_27
                                             : ((0x1aU 
                                                 == (IData)(vlSelf->io_bundleReg_rs1))
                                                 ? vlSelf->Registers__DOT__regs_26
                                                 : 
                                                ((0x19U 
                                                  == (IData)(vlSelf->io_bundleReg_rs1))
                                                  ? vlSelf->Registers__DOT__regs_25
                                                  : 
                                                 ((0x18U 
                                                   == (IData)(vlSelf->io_bundleReg_rs1))
                                                   ? vlSelf->Registers__DOT__regs_24
                                                   : 
                                                  ((0x17U 
                                                    == (IData)(vlSelf->io_bundleReg_rs1))
                                                    ? vlSelf->Registers__DOT__regs_23
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(vlSelf->io_bundleReg_rs1))
                                                     ? vlSelf->Registers__DOT__regs_22
                                                     : Registers__DOT___GEN_21))))))))));
    vlSelf->io_dataRead2 = ((0x1fU == (IData)(vlSelf->io_bundleReg_rs2))
                             ? vlSelf->Registers__DOT__regs_31
                             : ((0x1eU == (IData)(vlSelf->io_bundleReg_rs2))
                                 ? vlSelf->Registers__DOT__regs_30
                                 : ((0x1dU == (IData)(vlSelf->io_bundleReg_rs2))
                                     ? vlSelf->Registers__DOT__regs_29
                                     : ((0x1cU == (IData)(vlSelf->io_bundleReg_rs2))
                                         ? vlSelf->Registers__DOT__regs_28
                                         : ((0x1bU 
                                             == (IData)(vlSelf->io_bundleReg_rs2))
                                             ? vlSelf->Registers__DOT__regs_27
                                             : ((0x1aU 
                                                 == (IData)(vlSelf->io_bundleReg_rs2))
                                                 ? vlSelf->Registers__DOT__regs_26
                                                 : 
                                                ((0x19U 
                                                  == (IData)(vlSelf->io_bundleReg_rs2))
                                                  ? vlSelf->Registers__DOT__regs_25
                                                  : 
                                                 ((0x18U 
                                                   == (IData)(vlSelf->io_bundleReg_rs2))
                                                   ? vlSelf->Registers__DOT__regs_24
                                                   : 
                                                  ((0x17U 
                                                    == (IData)(vlSelf->io_bundleReg_rs2))
                                                    ? vlSelf->Registers__DOT__regs_23
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(vlSelf->io_bundleReg_rs2))
                                                     ? vlSelf->Registers__DOT__regs_22
                                                     : Registers__DOT___GEN_53))))))))));
}

void VRegisters___024root___eval(VRegisters___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisters__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisters___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VRegisters___024root___sequent__TOP__0(vlSelf);
    }
    VRegisters___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VRegisters___024root___eval_debug_assertions(VRegisters___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisters__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisters___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_ctrlRegWrite & 0xfeU))) {
        Verilated::overWidthError("io_ctrlRegWrite");}
    if (VL_UNLIKELY((vlSelf->io_ctrlJump & 0xfeU))) {
        Verilated::overWidthError("io_ctrlJump");}
    if (VL_UNLIKELY((vlSelf->io_bundleReg_rs1 & 0xe0U))) {
        Verilated::overWidthError("io_bundleReg_rs1");}
    if (VL_UNLIKELY((vlSelf->io_bundleReg_rs2 & 0xe0U))) {
        Verilated::overWidthError("io_bundleReg_rs2");}
    if (VL_UNLIKELY((vlSelf->io_bundleReg_rd & 0xe0U))) {
        Verilated::overWidthError("io_bundleReg_rd");}
}
#endif  // VL_DEBUG
