// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdata_mem_tb__Syms.h"


VL_ATTR_COLD void Vdata_mem_tb___024root__trace_init_sub__TOP__0(Vdata_mem_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("data_mem_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"i_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"i_rden",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"i_wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"o_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"o_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"o_SRAM_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+43,0,"o_SRAM_DQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+26,0,"o_SRAM_CE_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"o_SRAM_WE_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"o_SRAM_LB_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"o_SRAM_UB_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"o_SRAM_OE_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"i_rden",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"i_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"o_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"o_ACK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"o_SRAM_ADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+43,0,"o_SRAM_DQ",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+26,0,"o_SRAM_CE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"o_SRAM_WE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"o_SRAM_LB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"o_SRAM_UB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"o_SRAM_OE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"addr_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"rd_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"wr_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"wr_mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"data_back",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cachemem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"blockbit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"tagbit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"indexbit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"offsetbit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"i_addr_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"i_data_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"o_data_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"i_rd_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"i_wr_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"i_ACK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"o_addr_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"o_rd_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"o_wr_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"i_data_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"o_data_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"o_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"hit_miss_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"hit_miss_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"mem_q_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"mem_q_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"mem_d_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"mem_d_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"addr_d_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"addr_d_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"addr_q_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"addr_q_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"addr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+7,0,"addr_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+8,0,"addr_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"nxt_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("sram_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"i_ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+15,0,"i_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"i_BMASK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"i_WREN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"i_RDEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"o_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"o_ACK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"SRAM_ADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+43,0,"SRAM_DQ",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+26,0,"SRAM_CE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"SRAM_WE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"SRAM_OE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"SRAM_LB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"SRAM_UB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"sram_state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"sram_state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"addr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+25,0,"addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+23,0,"wdata_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"wdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"rdata_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"bmask_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"bmask_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+43,0,"DIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+36,0,"DOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdata_mem_tb___024root__trace_init_top(Vdata_mem_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdata_mem_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdata_mem_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdata_mem_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdata_mem_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdata_mem_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdata_mem_tb___024root__trace_register(Vdata_mem_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdata_mem_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdata_mem_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdata_mem_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdata_mem_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdata_mem_tb___024root__trace_const_0_sub_0(Vdata_mem_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdata_mem_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root__trace_const_0\n"); );
    // Init
    Vdata_mem_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_mem_tb___024root*>(voidSelf);
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdata_mem_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdata_mem_tb___024root__trace_const_0_sub_0(Vdata_mem_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+48,(0x20U),32);
    bufp->fullIData(oldp+49,(0x17U),32);
    bufp->fullIData(oldp+50,(6U),32);
    bufp->fullIData(oldp+51,(3U),32);
    bufp->fullCData(oldp+52,(0xfU),4);
}

VL_ATTR_COLD void Vdata_mem_tb___024root__trace_full_0_sub_0(Vdata_mem_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdata_mem_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root__trace_full_0\n"); );
    // Init
    Vdata_mem_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_mem_tb___024root*>(voidSelf);
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdata_mem_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdata_mem_tb___024root__trace_full_0_sub_0(Vdata_mem_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdata_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.data_mem_tb__DOT__i_rst));
    bufp->fullIData(oldp+2,(vlSelfRef.data_mem_tb__DOT__i_addr),32);
    bufp->fullIData(oldp+3,(vlSelfRef.data_mem_tb__DOT__i_data),32);
    bufp->fullBit(oldp+4,(vlSelfRef.data_mem_tb__DOT__i_rden));
    bufp->fullBit(oldp+5,(vlSelfRef.data_mem_tb__DOT__i_wren));
    bufp->fullIData(oldp+6,((vlSelfRef.data_mem_tb__DOT__i_addr 
                             >> 9U)),23);
    bufp->fullCData(oldp+7,((0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                      >> 3U))),6);
    bufp->fullCData(oldp+8,((7U & vlSelfRef.data_mem_tb__DOT__i_addr)),3);
    bufp->fullBit(oldp+9,((1U & (~ (IData)(vlSelfRef.data_mem_tb__DOT__i_rst)))));
    bufp->fullIData(oldp+10,(vlSelfRef.data_mem_tb__DOT__o_data),32);
    bufp->fullBit(oldp+11,(vlSelfRef.data_mem_tb__DOT__o_stall));
    bufp->fullIData(oldp+12,(vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem),32);
    bufp->fullBit(oldp+13,(vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem));
    bufp->fullBit(oldp+14,(vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem));
    bufp->fullIData(oldp+15,(vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem_data),32);
    bufp->fullIData(oldp+16,(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_1),32);
    bufp->fullIData(oldp+17,(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_2),32);
    bufp->fullIData(oldp+18,(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_1),32);
    bufp->fullIData(oldp+19,(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_2),32);
    bufp->fullCData(oldp+20,(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state),4);
    bufp->fullIData(oldp+21,((0x3ffffU & vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem)),18);
    bufp->fullCData(oldp+22,(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d),3);
    bufp->fullIData(oldp+23,(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d),32);
    bufp->fullCData(oldp+24,(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_d),4);
    bufp->fullIData(oldp+25,(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q),18);
    bufp->fullBit(oldp+26,(vlSelfRef.data_mem_tb__DOT__o_SRAM_CE_N));
    bufp->fullBit(oldp+27,(vlSelfRef.data_mem_tb__DOT__o_SRAM_WE_N));
    bufp->fullBit(oldp+28,(vlSelfRef.data_mem_tb__DOT__o_SRAM_LB_N));
    bufp->fullBit(oldp+29,(vlSelfRef.data_mem_tb__DOT__o_SRAM_UB_N));
    bufp->fullBit(oldp+30,(vlSelfRef.data_mem_tb__DOT__o_SRAM_OE_N));
    bufp->fullBit(oldp+31,(vlSelfRef.data_mem_tb__DOT__dut__DOT__ACK));
    bufp->fullIData(oldp+32,(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q),32);
    bufp->fullCData(oldp+33,(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q),3);
    bufp->fullIData(oldp+34,(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_q),32);
    bufp->fullCData(oldp+35,(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q),4);
    bufp->fullSData(oldp+36,(((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out1) 
                              | (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out2))),16);
    bufp->fullIData(oldp+37,(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_1),32);
    bufp->fullIData(oldp+38,(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_2),32);
    bufp->fullIData(oldp+39,(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1),32);
    bufp->fullIData(oldp+40,(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2),32);
    bufp->fullCData(oldp+41,(vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state),4);
    bufp->fullBit(oldp+42,(vlSelfRef.data_mem_tb__DOT__i_clk));
    bufp->fullSData(oldp+43,((((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out1) 
                               | (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out2)) 
                              | ((IData)(vlSelfRef.data_mem_tb__DOT__i_rden)
                                  ? 0xffffU : 0U))),16);
    bufp->fullBit(oldp+44,((vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_1
                            [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                       >> 3U))] & (
                                                   (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                    >> 9U) 
                                                   == 
                                                   vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_1
                                                   [
                                                   (0x3fU 
                                                    & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                       >> 3U))]))));
    bufp->fullBit(oldp+45,((vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_2
                            [(0x3fU & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                       >> 3U))] & (
                                                   (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                    >> 9U) 
                                                   == 
                                                   vlSelfRef.data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_2
                                                   [
                                                   (0x3fU 
                                                    & (vlSelfRef.data_mem_tb__DOT__i_addr 
                                                       >> 3U))]))));
    bufp->fullIData(oldp+46,(((4U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                               ? ((2U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                                   ? 0U : ((1U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                                            ? (((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem) 
                                                ^ (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem))
                                                ? (0x3fffeU 
                                                   & vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem)
                                                : vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q)
                                            : vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q))
                               : ((2U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                                   ? ((1U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                                       ? (1U | vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q)
                                       : (((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem) 
                                           ^ (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem))
                                           ? (0x3fffeU 
                                              & vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem)
                                           : vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q))
                                   : ((1U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                                       ? (1U | vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q)
                                       : (((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__wr_mem) 
                                           ^ (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__rd_mem))
                                           ? (0x3fffeU 
                                              & vlSelfRef.data_mem_tb__DOT__dut__DOT__addr_mem)
                                           : vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q))))),18);
    bufp->fullIData(oldp+47,(((4U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                               ? ((2U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                                   ? 0U : ((1U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                                            ? vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q
                                            : (((((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out1) 
                                                  | (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out2)) 
                                                 | ((IData)(vlSelfRef.data_mem_tb__DOT__i_rden)
                                                     ? 0xffffU
                                                     : 0U)) 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q))))
                               : ((2U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                                   ? ((1U & (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q))
                                       ? ((0xffff0000U 
                                           & vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q) 
                                          | (((IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out1) 
                                              | (IData)(vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out2)) 
                                             | ((IData)(vlSelfRef.data_mem_tb__DOT__i_rden)
                                                 ? 0xffffU
                                                 : 0U)))
                                       : vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q)
                                   : vlSelfRef.data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q))),32);
}
