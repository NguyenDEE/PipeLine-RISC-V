// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbrc_tb__Syms.h"


VL_ATTR_COLD void Vbrc_tb___024root__trace_init_sub__TOP__0(Vbrc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("brc_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"i_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"i_br_un",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"o_br_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"o_br_equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("brc_test", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"i_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"i_br_un",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"o_br_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"o_br_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"overFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"zeroFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"carryFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+8,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbrc_tb___024root__trace_init_top(Vbrc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbrc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbrc_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vbrc_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbrc_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbrc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbrc_tb___024root__trace_register(Vbrc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vbrc_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vbrc_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vbrc_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vbrc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbrc_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root__trace_const_0\n"); );
    // Init
    Vbrc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbrc_tb___024root*>(voidSelf);
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vbrc_tb___024root__trace_full_0_sub_0(Vbrc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbrc_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root__trace_full_0\n"); );
    // Init
    Vbrc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbrc_tb___024root*>(voidSelf);
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbrc_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbrc_tb___024root__trace_full_0_sub_0(Vbrc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.brc_tb__DOT__i_rs1_data),32);
    bufp->fullIData(oldp+2,(vlSelfRef.brc_tb__DOT__i_rs2_data),32);
    bufp->fullBit(oldp+3,(vlSelfRef.brc_tb__DOT__i_br_un));
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelfRef.brc_tb__DOT__i_br_un)
                                  ? (~ (IData)((vlSelfRef.brc_tb__DOT__brc_test__DOT__sub 
                                                >> 0x20U)))
                                  : (((vlSelfRef.brc_tb__DOT__i_rs1_data 
                                       >> 0x1fU) == 
                                      (vlSelfRef.brc_tb__DOT__i_rs2_data 
                                       >> 0x1fU)) ? 
                                     (~ (IData)((vlSelfRef.brc_tb__DOT__brc_test__DOT__sub 
                                                 >> 0x20U)))
                                      : (vlSelfRef.brc_tb__DOT__i_rs1_data 
                                         >> 0x1fU))))));
    bufp->fullBit(oldp+5,((0U == (IData)(vlSelfRef.brc_tb__DOT__brc_test__DOT__sub))));
    bufp->fullBit(oldp+6,((1U & (((vlSelfRef.brc_tb__DOT__i_rs1_data 
                                   >> 0x1fU) == (vlSelfRef.brc_tb__DOT__i_rs2_data 
                                                 >> 0x1fU))
                                  ? (~ (IData)((vlSelfRef.brc_tb__DOT__brc_test__DOT__sub 
                                                >> 0x20U)))
                                  : (vlSelfRef.brc_tb__DOT__i_rs1_data 
                                     >> 0x1fU)))));
    bufp->fullBit(oldp+7,((1U & (IData)((vlSelfRef.brc_tb__DOT__brc_test__DOT__sub 
                                         >> 0x20U)))));
    bufp->fullQData(oldp+8,(vlSelfRef.brc_tb__DOT__brc_test__DOT__sub),33);
}
