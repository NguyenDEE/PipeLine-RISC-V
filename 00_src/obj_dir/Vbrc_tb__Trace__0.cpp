// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbrc_tb__Syms.h"


void Vbrc_tb___024root__trace_chg_0_sub_0(Vbrc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbrc_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root__trace_chg_0\n"); );
    // Init
    Vbrc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbrc_tb___024root*>(voidSelf);
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbrc_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbrc_tb___024root__trace_chg_0_sub_0(Vbrc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelfRef.brc_tb__DOT__i_rs1_data),32);
    bufp->chgIData(oldp+1,(vlSelfRef.brc_tb__DOT__i_rs2_data),32);
    bufp->chgBit(oldp+2,(vlSelfRef.brc_tb__DOT__i_br_un));
    bufp->chgBit(oldp+3,((1U & ((IData)(vlSelfRef.brc_tb__DOT__i_br_un)
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
    bufp->chgBit(oldp+4,((0U == (IData)(vlSelfRef.brc_tb__DOT__brc_test__DOT__sub))));
    bufp->chgBit(oldp+5,((1U & (((vlSelfRef.brc_tb__DOT__i_rs1_data 
                                  >> 0x1fU) == (vlSelfRef.brc_tb__DOT__i_rs2_data 
                                                >> 0x1fU))
                                 ? (~ (IData)((vlSelfRef.brc_tb__DOT__brc_test__DOT__sub 
                                               >> 0x20U)))
                                 : (vlSelfRef.brc_tb__DOT__i_rs1_data 
                                    >> 0x1fU)))));
    bufp->chgBit(oldp+6,((1U & (IData)((vlSelfRef.brc_tb__DOT__brc_test__DOT__sub 
                                        >> 0x20U)))));
    bufp->chgQData(oldp+7,(vlSelfRef.brc_tb__DOT__brc_test__DOT__sub),33);
}

void Vbrc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root__trace_cleanup\n"); );
    // Init
    Vbrc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbrc_tb___024root*>(voidSelf);
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
