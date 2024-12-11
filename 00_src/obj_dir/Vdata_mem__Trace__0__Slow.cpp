// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdata_mem__Syms.h"


VL_ATTR_COLD void Vdata_mem___024root__trace_init_sub__TOP__0(Vdata_mem___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+25,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"i_rden",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"i_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"o_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"o_ACK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"o_SRAM_ADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+35,0,"o_SRAM_DQ",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+36,0,"o_SRAM_CE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"o_SRAM_WE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"o_SRAM_LB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"o_SRAM_UB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"o_SRAM_OE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+25,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"i_rden",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"i_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"o_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"o_ACK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"o_SRAM_ADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+35,0,"o_SRAM_DQ",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+36,0,"o_SRAM_CE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"o_SRAM_WE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"o_SRAM_LB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"o_SRAM_UB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"o_SRAM_OE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"addr_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"rd_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"wr_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"wr_mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"data_back",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cachemem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"blockbit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"tagbit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"indexbit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"offsetbit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"i_addr_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"i_data_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"o_data_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"i_rd_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"i_wr_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"i_ACK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"o_addr_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"o_rd_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"o_wr_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"i_data_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"o_data_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"o_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"hit_miss_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"hit_miss_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"mem_q_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"mem_q_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"mem_d_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"mem_d_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"addr_d_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"addr_d_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"addr_q_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"addr_q_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"addr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+44,0,"addr_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+45,0,"addr_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+24,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"nxt_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("sram_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"i_ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+4,0,"i_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"i_BMASK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"i_WREN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_RDEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"o_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"o_ACK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"SRAM_ADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+35,0,"SRAM_DQ",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+36,0,"SRAM_CE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"SRAM_WE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"SRAM_OE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"SRAM_LB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"SRAM_UB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"sram_state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"sram_state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+47,0,"addr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+17,0,"addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+12,0,"wdata_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"wdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"rdata_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"bmask_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"bmask_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"DIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+35,0,"DOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdata_mem___024root__trace_init_top(Vdata_mem___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdata_mem___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdata_mem___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdata_mem___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdata_mem___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdata_mem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdata_mem___024root__trace_register(Vdata_mem___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdata_mem___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdata_mem___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdata_mem___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdata_mem___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdata_mem___024root__trace_const_0_sub_0(Vdata_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdata_mem___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_const_0\n"); );
    // Init
    Vdata_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_mem___024root*>(voidSelf);
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdata_mem___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdata_mem___024root__trace_const_0_sub_0(Vdata_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+49,(0x20U),32);
    bufp->fullIData(oldp+50,(0x17U),32);
    bufp->fullIData(oldp+51,(6U),32);
    bufp->fullIData(oldp+52,(3U),32);
    bufp->fullCData(oldp+53,(0xfU),4);
}

VL_ATTR_COLD void Vdata_mem___024root__trace_full_0_sub_0(Vdata_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdata_mem___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_full_0\n"); );
    // Init
    Vdata_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_mem___024root*>(voidSelf);
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdata_mem___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdata_mem___024root__trace_full_0_sub_0(Vdata_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.data_mem__DOT__addr_mem),32);
    bufp->fullBit(oldp+2,(vlSelfRef.data_mem__DOT__rd_mem));
    bufp->fullBit(oldp+3,(vlSelfRef.data_mem__DOT__wr_mem));
    bufp->fullIData(oldp+4,(vlSelfRef.data_mem__DOT__wr_mem_data),32);
    bufp->fullIData(oldp+5,(vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_1),32);
    bufp->fullIData(oldp+6,(vlSelfRef.data_mem__DOT__cachemem__DOT__mem_d_2),32);
    bufp->fullIData(oldp+7,(vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_1),32);
    bufp->fullIData(oldp+8,(vlSelfRef.data_mem__DOT__cachemem__DOT__addr_d_2),32);
    bufp->fullCData(oldp+9,(vlSelfRef.data_mem__DOT__cachemem__DOT__nxt_state),4);
    bufp->fullIData(oldp+10,((0x3ffffU & vlSelfRef.data_mem__DOT__addr_mem)),18);
    bufp->fullCData(oldp+11,(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_d),3);
    bufp->fullIData(oldp+12,(vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_d),32);
    bufp->fullCData(oldp+13,(vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_d),4);
    bufp->fullBit(oldp+14,(vlSelfRef.data_mem__DOT__ACK));
    bufp->fullIData(oldp+15,(vlSelfRef.data_mem__DOT__sram_mem__DOT__rdata_q),32);
    bufp->fullCData(oldp+16,(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q),3);
    bufp->fullIData(oldp+17,(vlSelfRef.data_mem__DOT__sram_mem__DOT__addr_q),18);
    bufp->fullIData(oldp+18,(vlSelfRef.data_mem__DOT__sram_mem__DOT__wdata_q),32);
    bufp->fullCData(oldp+19,(vlSelfRef.data_mem__DOT__sram_mem__DOT__bmask_q),4);
    bufp->fullIData(oldp+20,(vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_1),32);
    bufp->fullIData(oldp+21,(vlSelfRef.data_mem__DOT__cachemem__DOT__mem_q_2),32);
    bufp->fullIData(oldp+22,(vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_1),32);
    bufp->fullIData(oldp+23,(vlSelfRef.data_mem__DOT__cachemem__DOT__addr_q_2),32);
    bufp->fullCData(oldp+24,(vlSelfRef.data_mem__DOT__cachemem__DOT__current_state),4);
    bufp->fullBit(oldp+25,(vlSelfRef.i_clk));
    bufp->fullBit(oldp+26,(vlSelfRef.i_rst));
    bufp->fullIData(oldp+27,(vlSelfRef.i_addr),32);
    bufp->fullIData(oldp+28,(vlSelfRef.i_data),32);
    bufp->fullBit(oldp+29,(vlSelfRef.i_rden));
    bufp->fullBit(oldp+30,(vlSelfRef.i_wren));
    bufp->fullIData(oldp+31,(vlSelfRef.o_data),32);
    bufp->fullBit(oldp+32,(vlSelfRef.o_stall));
    bufp->fullBit(oldp+33,(vlSelfRef.o_ACK));
    bufp->fullIData(oldp+34,(vlSelfRef.o_SRAM_ADDR),18);
    bufp->fullSData(oldp+35,(vlSelfRef.o_SRAM_DQ),16);
    bufp->fullBit(oldp+36,(vlSelfRef.o_SRAM_CE_N));
    bufp->fullBit(oldp+37,(vlSelfRef.o_SRAM_WE_N));
    bufp->fullBit(oldp+38,(vlSelfRef.o_SRAM_LB_N));
    bufp->fullBit(oldp+39,(vlSelfRef.o_SRAM_UB_N));
    bufp->fullBit(oldp+40,(vlSelfRef.o_SRAM_OE_N));
    bufp->fullBit(oldp+41,((vlSelfRef.data_mem__DOT__cachemem__DOT__valid_1
                            [(0x3fU & (vlSelfRef.i_addr 
                                       >> 3U))] & (
                                                   (vlSelfRef.i_addr 
                                                    >> 9U) 
                                                   == 
                                                   vlSelfRef.data_mem__DOT__cachemem__DOT__tag_1
                                                   [
                                                   (0x3fU 
                                                    & (vlSelfRef.i_addr 
                                                       >> 3U))]))));
    bufp->fullBit(oldp+42,((vlSelfRef.data_mem__DOT__cachemem__DOT__valid_2
                            [(0x3fU & (vlSelfRef.i_addr 
                                       >> 3U))] & (
                                                   (vlSelfRef.i_addr 
                                                    >> 9U) 
                                                   == 
                                                   vlSelfRef.data_mem__DOT__cachemem__DOT__tag_2
                                                   [
                                                   (0x3fU 
                                                    & (vlSelfRef.i_addr 
                                                       >> 3U))]))));
    bufp->fullIData(oldp+43,((vlSelfRef.i_addr >> 9U)),23);
    bufp->fullCData(oldp+44,((0x3fU & (vlSelfRef.i_addr 
                                       >> 3U))),6);
    bufp->fullCData(oldp+45,((7U & vlSelfRef.i_addr)),3);
    bufp->fullBit(oldp+46,((1U & (~ (IData)(vlSelfRef.i_rst)))));
    bufp->fullIData(oldp+47,(((4U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
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
    bufp->fullIData(oldp+48,(((4U & (IData)(vlSelfRef.data_mem__DOT__sram_mem__DOT__sram_state_q))
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
