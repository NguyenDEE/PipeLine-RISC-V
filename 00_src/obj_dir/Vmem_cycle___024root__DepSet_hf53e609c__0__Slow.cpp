// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_cycle.h for the primary calling header

#include "Vmem_cycle__pch.h"
#include "Vmem_cycle__Syms.h"
#include "Vmem_cycle___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_cycle___024root___dump_triggers__stl(Vmem_cycle___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmem_cycle___024root___eval_triggers__stl(Vmem_cycle___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_cycle___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__0)));
    vlSelfRef.__VstlTriggered.set(2U, vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__0.neq(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1));
    vlSelfRef.__VstlTriggered.set(3U, ((IData)(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__0)));
    vlSelfRef.__VstlTriggered.set(4U, vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__0.neq(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2));
    vlSelfRef.__VstlTriggered.set(5U, vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__0.neq(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1));
    vlSelfRef.__VstlTriggered.set(6U, vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__0.neq(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2));
    vlSelfRef.__VstlTriggered.set(7U, vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__0.neq(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1));
    vlSelfRef.__VstlTriggered.set(8U, vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__0.neq(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2));
    vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__0 
        = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1;
    vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__0.assign(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1);
    vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__0 
        = vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2;
    vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__0.assign(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2);
    vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__0.assign(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1);
    vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__0.assign(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2);
    vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__0.assign(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1);
    vlSelfRef.__Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__0.assign(vlSelfRef.mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
        vlSelfRef.__VstlTriggered.set(2U, 1U);
        vlSelfRef.__VstlTriggered.set(3U, 1U);
        vlSelfRef.__VstlTriggered.set(4U, 1U);
        vlSelfRef.__VstlTriggered.set(5U, 1U);
        vlSelfRef.__VstlTriggered.set(6U, 1U);
        vlSelfRef.__VstlTriggered.set(7U, 1U);
        vlSelfRef.__VstlTriggered.set(8U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmem_cycle___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
