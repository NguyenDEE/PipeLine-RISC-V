// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexecute_cycle.h for the primary calling header

#include "Vexecute_cycle__pch.h"
#include "Vexecute_cycle__Syms.h"
#include "Vexecute_cycle___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute_cycle___024root___dump_triggers__ico(Vexecute_cycle___024root* vlSelf);
#endif  // VL_DEBUG

void Vexecute_cycle___024root___eval_triggers__ico(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vexecute_cycle___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexecute_cycle___024root___dump_triggers__act(Vexecute_cycle___024root* vlSelf);
#endif  // VL_DEBUG

void Vexecute_cycle___024root___eval_triggers__act(Vexecute_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexecute_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexecute_cycle___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.i_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.i_rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i_rst__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__i_rst__0 = vlSelfRef.i_rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vexecute_cycle___024root___dump_triggers__act(vlSelf);
    }
#endif
}
