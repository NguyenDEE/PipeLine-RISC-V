// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_all.h for the primary calling header

#include "Vtb_all__pch.h"
#include "Vtb_all__Syms.h"
#include "Vtb_all___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__ico(Vtb_all___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_all___024root___eval_triggers__ico(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_all___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__act(Vtb_all___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_all___024root___eval_triggers__act(Vtb_all___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.CLOCK_50) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CLOCK_50__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT____Vcellinp__dut__i_rst__0))));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_all__DOT__dut__DOT__stall) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT__dut__DOT__stall__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__CLOCK_50__0 = vlSelfRef.CLOCK_50;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT____Vcellinp__dut__i_rst__0 
        = vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT__dut__DOT__stall__0 
        = vlSelfRef.tb_all__DOT__dut__DOT__stall;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_all___024root___dump_triggers__act(vlSelf);
    }
#endif
}
