// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbrc_tb.h for the primary calling header

#include "Vbrc_tb__pch.h"
#include "Vbrc_tb__Syms.h"
#include "Vbrc_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbrc_tb___024root___dump_triggers__stl(Vbrc_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbrc_tb___024root___eval_triggers__stl(Vbrc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbrc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbrc_tb___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbrc_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
