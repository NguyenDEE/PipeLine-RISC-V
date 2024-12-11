// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbalu.h for the primary calling header

#include "Vtbalu__pch.h"
#include "Vtbalu__Syms.h"
#include "Vtbalu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbalu___024root___dump_triggers__act(Vtbalu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtbalu___024root___eval_triggers__act(Vtbalu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtbalu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
