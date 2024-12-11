// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsu.h for the primary calling header

#include "Vlsu__pch.h"
#include "Vlsu__Syms.h"
#include "Vlsu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsu___024root___dump_triggers__stl(Vlsu___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlsu___024root___eval_triggers__stl(Vlsu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlsu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsu___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlsu___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
