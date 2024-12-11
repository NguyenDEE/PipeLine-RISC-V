// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtbalu__Syms.h"


void Vtbalu___024root__trace_chg_0_sub_0(Vtbalu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtbalu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root__trace_chg_0\n"); );
    // Init
    Vtbalu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbalu___024root*>(voidSelf);
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtbalu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtbalu___024root__trace_chg_0_sub_0(Vtbalu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tbalu__DOT__i_operand_a),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tbalu__DOT__i_operand_b),32);
        bufp->chgCData(oldp+2,(vlSelfRef.tbalu__DOT__i_alu_op),4);
        bufp->chgIData(oldp+3,(((IData)(1U) + ((~ vlSelfRef.tbalu__DOT__i_operand_b) 
                                               + vlSelfRef.tbalu__DOT__i_operand_a))),32);
        bufp->chgCData(oldp+4,((0x1fU & vlSelfRef.tbalu__DOT__i_operand_b)),5);
        bufp->chgIData(oldp+5,(VL_SHIFTL_III(32,32,32, vlSelfRef.tbalu__DOT__i_operand_a, 0x10U)),32);
        bufp->chgBit(oldp+6,((1U & (vlSelfRef.tbalu__DOT__i_operand_b 
                                    >> 4U))));
        bufp->chgBit(oldp+7,((1U & vlSelfRef.tbalu__DOT__i_operand_b)));
        bufp->chgBit(oldp+8,((1U & (vlSelfRef.tbalu__DOT__i_operand_b 
                                    >> 1U))));
        bufp->chgBit(oldp+9,((1U & (vlSelfRef.tbalu__DOT__i_operand_b 
                                    >> 2U))));
        bufp->chgBit(oldp+10,((1U & (vlSelfRef.tbalu__DOT__i_operand_b 
                                     >> 3U))));
        bufp->chgIData(oldp+11,(VL_SHIFTR_III(32,32,32, vlSelfRef.tbalu__DOT__i_operand_a, 0x10U)),32);
        bufp->chgIData(oldp+12,((((- (IData)((vlSelfRef.tbalu__DOT__i_operand_a 
                                              >> 0x1fU))) 
                                  << 0x10U) | (vlSelfRef.tbalu__DOT__i_operand_a 
                                               >> 0x10U))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgBit(oldp+13,(vlSelfRef.tbalu__DOT__dut__DOT__carryFlag));
        bufp->chgIData(oldp+14,(vlSelfRef.tbalu__DOT__dut__DOT__srl_tmp),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tbalu__DOT__dut__DOT__srr_tmp),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tbalu__DOT__dut__DOT__sra_tmp),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_1),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_2),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_3),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_4),32);
        bufp->chgIData(oldp+21,(VL_SHIFTL_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_4, 1U)),32);
        bufp->chgIData(oldp+22,(VL_SHIFTL_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_3, 2U)),32);
        bufp->chgIData(oldp+23,(VL_SHIFTL_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_2, 4U)),32);
        bufp->chgIData(oldp+24,(VL_SHIFTL_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_1, 8U)),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_1),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_2),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_3),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_4),32);
        bufp->chgIData(oldp+29,(VL_SHIFTR_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_4, 1U)),32);
        bufp->chgIData(oldp+30,(VL_SHIFTR_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_3, 2U)),32);
        bufp->chgIData(oldp+31,(VL_SHIFTR_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_2, 4U)),32);
        bufp->chgIData(oldp+32,(VL_SHIFTR_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_1, 8U)),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_1),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_2),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_3),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_4),32);
        bufp->chgIData(oldp+37,(((0x80000000U & vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_4) 
                                 | (vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_4 
                                    >> 1U))),32);
        bufp->chgIData(oldp+38,((((- (IData)((vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_3 
                                              >> 0x1fU))) 
                                  << 0x1eU) | (vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_3 
                                               >> 2U))),32);
        bufp->chgIData(oldp+39,((((- (IData)((vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_2 
                                              >> 0x1fU))) 
                                  << 0x1cU) | (vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_2 
                                               >> 4U))),32);
        bufp->chgIData(oldp+40,((((- (IData)((vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_1 
                                              >> 0x1fU))) 
                                  << 0x18U) | (vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_1 
                                               >> 8U))),32);
    }
    bufp->chgIData(oldp+41,(((8U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                              ? ((4U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                  ? 0U : ((2U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                           ? ((1U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                               ? 0U
                                               : vlSelfRef.tbalu__DOT__i_operand_b)
                                           : ((1U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                               ? vlSelfRef.tbalu__DOT__dut__DOT__sra_tmp
                                               : vlSelfRef.tbalu__DOT__dut__DOT__srr_tmp)))
                              : ((4U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                  ? ((2U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                      ? ((1U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                          ? vlSelfRef.tbalu__DOT__dut__DOT__srl_tmp
                                          : (vlSelfRef.tbalu__DOT__i_operand_a 
                                             & vlSelfRef.tbalu__DOT__i_operand_b))
                                      : ((1U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                          ? (vlSelfRef.tbalu__DOT__i_operand_a 
                                             | vlSelfRef.tbalu__DOT__i_operand_b)
                                          : (vlSelfRef.tbalu__DOT__i_operand_a 
                                             ^ vlSelfRef.tbalu__DOT__i_operand_b)))
                                  : ((2U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                      ? ((1U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                          ? (IData)(vlSelfRef.tbalu__DOT__dut__DOT__carryFlag)
                                          : (1U & (
                                                   ((vlSelfRef.tbalu__DOT__i_operand_a 
                                                     >> 0x1fU) 
                                                    == 
                                                    (vlSelfRef.tbalu__DOT__i_operand_b 
                                                     >> 0x1fU))
                                                    ? (IData)(vlSelfRef.tbalu__DOT__dut__DOT__carryFlag)
                                                    : 
                                                   (vlSelfRef.tbalu__DOT__i_operand_a 
                                                    >> 0x1fU))))
                                      : ((1U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                          ? ((IData)(1U) 
                                             + ((~ vlSelfRef.tbalu__DOT__i_operand_b) 
                                                + vlSelfRef.tbalu__DOT__i_operand_a))
                                          : (vlSelfRef.tbalu__DOT__i_operand_a 
                                             + vlSelfRef.tbalu__DOT__i_operand_b)))))),32);
    bufp->chgBit(oldp+42,((1U & (((vlSelfRef.tbalu__DOT__i_operand_a 
                                   >> 0x1fU) == (vlSelfRef.tbalu__DOT__i_operand_b 
                                                 >> 0x1fU))
                                  ? (IData)(vlSelfRef.tbalu__DOT__dut__DOT__carryFlag)
                                  : (vlSelfRef.tbalu__DOT__i_operand_a 
                                     >> 0x1fU)))));
}

void Vtbalu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root__trace_cleanup\n"); );
    // Init
    Vtbalu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbalu___024root*>(voidSelf);
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
