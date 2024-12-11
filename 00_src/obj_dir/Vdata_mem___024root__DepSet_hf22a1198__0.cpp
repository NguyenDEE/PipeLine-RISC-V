// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_mem.h for the primary calling header

#include "Vdata_mem__pch.h"
#include "Vdata_mem__Syms.h"
#include "Vdata_mem___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__ico(Vdata_mem___024root* vlSelf);
#endif  // VL_DEBUG

void Vdata_mem___024root___eval_triggers__ico(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
    vlSelfRef.__VicoTriggered.set(1U, ((IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__hit_miss_1) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__hit_miss_1__1)));
    vlSelfRef.__VicoTriggered.set(2U, vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__cache_mem_1__1.neq(vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_1));
    vlSelfRef.__VicoTriggered.set(3U, ((IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__hit_miss_2) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__hit_miss_2__1)));
    vlSelfRef.__VicoTriggered.set(4U, vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__cache_mem_2__1.neq(vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_2));
    vlSelfRef.__VicoTriggered.set(5U, vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__valid_1__1.neq(vlSelfRef.data_mem__DOT__cachemem__DOT__valid_1));
    vlSelfRef.__VicoTriggered.set(6U, vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__valid_2__1.neq(vlSelfRef.data_mem__DOT__cachemem__DOT__valid_2));
    vlSelfRef.__VicoTriggered.set(7U, vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__tag_1__1.neq(vlSelfRef.data_mem__DOT__cachemem__DOT__tag_1));
    vlSelfRef.__VicoTriggered.set(8U, vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__tag_2__1.neq(vlSelfRef.data_mem__DOT__cachemem__DOT__tag_2));
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__hit_miss_1__1 
        = vlSelfRef.data_mem__DOT__cachemem__DOT__hit_miss_1;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__cache_mem_1__1.assign(vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_1);
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__hit_miss_2__1 
        = vlSelfRef.data_mem__DOT__cachemem__DOT__hit_miss_2;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__cache_mem_2__1.assign(vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_2);
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__valid_1__1.assign(vlSelfRef.data_mem__DOT__cachemem__DOT__valid_1);
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__valid_2__1.assign(vlSelfRef.data_mem__DOT__cachemem__DOT__valid_2);
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__tag_1__1.assign(vlSelfRef.data_mem__DOT__cachemem__DOT__tag_1);
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__tag_2__1.assign(vlSelfRef.data_mem__DOT__cachemem__DOT__tag_2);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VicoDidInit))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered.set(1U, 1U);
        vlSelfRef.__VicoTriggered.set(2U, 1U);
        vlSelfRef.__VicoTriggered.set(3U, 1U);
        vlSelfRef.__VicoTriggered.set(4U, 1U);
        vlSelfRef.__VicoTriggered.set(5U, 1U);
        vlSelfRef.__VicoTriggered.set(6U, 1U);
        vlSelfRef.__VicoTriggered.set(7U, 1U);
        vlSelfRef.__VicoTriggered.set(8U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdata_mem___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__act(Vdata_mem___024root* vlSelf);
#endif  // VL_DEBUG

void Vdata_mem___024root___eval_triggers__act(Vdata_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__hit_miss_1) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__hit_miss_1__2)));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__cache_mem_1__2.neq(vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_1));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.data_mem__DOT__cachemem__DOT__hit_miss_2) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__hit_miss_2__2)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__cache_mem_2__2.neq(vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_2));
    vlSelfRef.__VactTriggered.set(4U, vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__valid_1__2.neq(vlSelfRef.data_mem__DOT__cachemem__DOT__valid_1));
    vlSelfRef.__VactTriggered.set(5U, vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__valid_2__2.neq(vlSelfRef.data_mem__DOT__cachemem__DOT__valid_2));
    vlSelfRef.__VactTriggered.set(6U, vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__tag_1__2.neq(vlSelfRef.data_mem__DOT__cachemem__DOT__tag_1));
    vlSelfRef.__VactTriggered.set(7U, vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__tag_2__2.neq(vlSelfRef.data_mem__DOT__cachemem__DOT__tag_2));
    vlSelfRef.__VactTriggered.set(8U, ((IData)(vlSelfRef.i_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0))));
    vlSelfRef.__VactTriggered.set(9U, ((IData)(vlSelfRef.i_rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i_rst__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__hit_miss_1__2 
        = vlSelfRef.data_mem__DOT__cachemem__DOT__hit_miss_1;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__cache_mem_1__2.assign(vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_1);
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__hit_miss_2__2 
        = vlSelfRef.data_mem__DOT__cachemem__DOT__hit_miss_2;
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__cache_mem_2__2.assign(vlSelfRef.data_mem__DOT__cachemem__DOT__cache_mem_2);
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__valid_1__2.assign(vlSelfRef.data_mem__DOT__cachemem__DOT__valid_1);
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__valid_2__2.assign(vlSelfRef.data_mem__DOT__cachemem__DOT__valid_2);
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__tag_1__2.assign(vlSelfRef.data_mem__DOT__cachemem__DOT__tag_1);
    vlSelfRef.__Vtrigprevexpr___TOP__data_mem__DOT__cachemem__DOT__tag_2__2.assign(vlSelfRef.data_mem__DOT__cachemem__DOT__tag_2);
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__i_rst__0 = vlSelfRef.i_rst;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
        vlSelfRef.__VactTriggered.set(6U, 1U);
        vlSelfRef.__VactTriggered.set(7U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdata_mem___024root___dump_triggers__act(vlSelf);
    }
#endif
}
