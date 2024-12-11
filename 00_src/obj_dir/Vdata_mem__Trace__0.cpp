// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdata_mem__Syms.h"


void Vdata_mem___024root__trace_chg_0_sub_0(Vdata_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdata_mem___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_chg_0\n"); );
    // Init
    Vdata_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_mem___024root*>(voidSelf);
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdata_mem___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdata_mem___024root__trace_chg_0_sub_0(Vdata_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U]) | vlSelfRef.__Vm_traceActivity
                     [5U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.data_mem__DOT__addr_mem),32);
        bufp->chgBit(oldp+1,(vlSelfRef.data_mem__DOT__rd_mem));
        bufp->chgBit(oldp+2,(vlSelfRef.data_mem__DOT__wr_mem));
        bufp->chgIData(oldp+3,(vlSelfRef.data_mem__DOT__wr_mem_data),32);
        bufp->chgIData(oldp+4,(vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_1),32);
        bufp->chgIData(oldp+5,(vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_2),32);
        bufp->chgIData(oldp+6,(vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_1),32);
        bufp->chgIData(oldp+7,(vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_2),32);
        bufp->chgCData(oldp+8,(vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state),4);
        bufp->chgIData(oldp+9,((0x3ffffU & vlSelfRef.data_mem__DOT__addr_mem)),18);
        bufp->chgCData(oldp+10,(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d),3);
        bufp->chgIData(oldp+11,(vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d),32);
        bufp->chgCData(oldp+12,(vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_d),4);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+13,(vlSelfRef.data_mem__DOT__ACK));
        bufp->chgIData(oldp+14,(vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q),32);
        bufp->chgCData(oldp+15,(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q),3);
        bufp->chgIData(oldp+16,(vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q),18);
        bufp->chgIData(oldp+17,(vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_q),32);
        bufp->chgCData(oldp+18,(vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q),4);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+19,(vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_1),32);
        bufp->chgIData(oldp+20,(vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_2),32);
        bufp->chgIData(oldp+21,(vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1),32);
        bufp->chgIData(oldp+22,(vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2),32);
        bufp->chgCData(oldp+23,(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state),4);
    }
    bufp->chgBit(oldp+24,(vlSelfRef.i_clk));
    bufp->chgBit(oldp+25,(vlSelfRef.i_rst));
    bufp->chgIData(oldp+26,(vlSelfRef.i_addr),32);
    bufp->chgIData(oldp+27,(vlSelfRef.i_data),32);
    bufp->chgBit(oldp+28,(vlSelfRef.i_rden));
    bufp->chgBit(oldp+29,(vlSelfRef.i_wren));
    bufp->chgIData(oldp+30,(vlSelfRef.o_data),32);
    bufp->chgBit(oldp+31,(vlSelfRef.o_stall));
    bufp->chgBit(oldp+32,(vlSelfRef.o_ACK));
    bufp->chgIData(oldp+33,(vlSelfRef.o_SRAM_ADDR),18);
    bufp->chgSData(oldp+34,(vlSelfRef.o_SRAM_DQ),16);
    bufp->chgBit(oldp+35,(vlSelfRef.o_SRAM_CE_N));
    bufp->chgBit(oldp+36,(vlSelfRef.o_SRAM_WE_N));
    bufp->chgBit(oldp+37,(vlSelfRef.o_SRAM_LB_N));
    bufp->chgBit(oldp+38,(vlSelfRef.o_SRAM_UB_N));
    bufp->chgBit(oldp+39,(vlSelfRef.o_SRAM_OE_N));
    bufp->chgBit(oldp+40,((vlSelfRef.data_mem__DOT__cachemem__DOT__valid_1
                           [(0x3fU & (vlSelfRef.i_addr 
                                      >> 3U))] & ((vlSelfRef.i_addr 
                                                   >> 9U) 
                                                  == 
                                                  vlSelfRef.data_mem__DOT__cachemem__DOT__tag_1
                                                  [
                                                  (0x3fU 
                                                   & (vlSelfRef.i_addr 
                                                      >> 3U))]))));
    bufp->chgBit(oldp+41,((vlSelfRef.data_mem__DOT__cachemem__DOT__valid_2
                           [(0x3fU & (vlSelfRef.i_addr 
                                      >> 3U))] & ((vlSelfRef.i_addr 
                                                   >> 9U) 
                                                  == 
                                                  vlSelfRef.data_mem__DOT__cachemem__DOT__tag_2
                                                  [
                                                  (0x3fU 
                                                   & (vlSelfRef.i_addr 
                                                      >> 3U))]))));
    bufp->chgIData(oldp+42,((vlSelfRef.i_addr >> 9U)),23);
    bufp->chgCData(oldp+43,((0x3fU & (vlSelfRef.i_addr 
                                      >> 3U))),6);
    bufp->chgCData(oldp+44,((7U & vlSelfRef.i_addr)),3);
    bufp->chgBit(oldp+45,((1U & (~ (IData)(vlSelfRef.i_rst)))));
    bufp->chgIData(oldp+46,(((4U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                              ? ((2U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                                  ? 0U : ((1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                                           ? (((IData)(vlSelfRef.data_mem__DOT__wr_mem) 
                                               ^ (IData)(vlSelfRef.data_mem__DOT__rd_mem))
                                               ? (0x3fffeU 
                                                  & vlSelfRef.data_mem__DOT__addr_mem)
                                               : vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q)
                                           : vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q))
                              : ((2U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                                  ? ((1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                                      ? (1U | vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q)
                                      : (((IData)(vlSelfRef.data_mem__DOT__wr_mem) 
                                          ^ (IData)(vlSelfRef.data_mem__DOT__rd_mem))
                                          ? (0x3fffeU 
                                             & vlSelfRef.data_mem__DOT__addr_mem)
                                          : vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q))
                                  : ((1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                                      ? (1U | vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q)
                                      : (((IData)(vlSelfRef.data_mem__DOT__wr_mem) 
                                          ^ (IData)(vlSelfRef.data_mem__DOT__rd_mem))
                                          ? (0x3fffeU 
                                             & vlSelfRef.data_mem__DOT__addr_mem)
                                          : vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q))))),18);
    bufp->chgIData(oldp+47,(((4U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                              ? ((2U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                                  ? 0U : ((1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                                           ? vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q
                                           : (((IData)(vlSelfRef.o_SRAM_DQ) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q))))
                              : ((2U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                                  ? ((1U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
                                      ? ((0xffff0000U 
                                          & vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q) 
                                         | (IData)(vlSelfRef.o_SRAM_DQ))
                                      : vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q)
                                  : vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q))),32);
}

void Vdata_mem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_cleanup\n"); );
    // Init
    Vdata_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_mem___024root*>(voidSelf);
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
