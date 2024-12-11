// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_sim__Syms.h"


VL_ATTR_COLD void Vtb_sim___024root__trace_init_sub__TOP__0(Vtb_sim___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_sim", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"i_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"i_io_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"i_io_btn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+102,0,"o_ins_n_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"o_io_lcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"o_io_ledg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"o_io_ledr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"o_io_hex0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+107,0,"o_io_hex1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+108,0,"o_io_hex2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+109,0,"o_io_hex3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+110,0,"o_io_hex4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+111,0,"o_io_hex5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+112,0,"o_io_hex6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+113,0,"o_io_hex7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+37,0,"pc_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"o_SRAM_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+39,0,"o_SRAM_DQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+40,0,"o_SRAM_CE_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"o_SRAM_WE_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"o_SRAM_LB_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"o_SRAM_UB_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"o_SRAM_OE_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"i_io_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"i_io_btn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"o_SRAM_ADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+39,0,"o_SRAM_DQ",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+40,0,"o_SRAM_CE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"o_SRAM_WE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"o_SRAM_LB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"o_SRAM_UB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"o_SRAM_OE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"o_io_ledr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"o_io_ledg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"o_io_hex0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+107,0,"o_io_hex1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+108,0,"o_io_hex2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+109,0,"o_io_hex3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+110,0,"o_io_hex4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+111,0,"o_io_hex5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+112,0,"o_io_hex6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+113,0,"o_io_hex7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+103,0,"o_io_lcd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"o_ins_n_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"o_pc_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"enb_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"enb_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"enb_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"br_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"rst_br_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"enb_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"rst_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"rst_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"rst_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"enb_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"enb_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"enb_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"rst_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"pc_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"alu_data_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"instr_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"pc_4_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"pc_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"result_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"ld_data_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"ins_n_vld_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"slt_sl_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+135,0,"rd_wren_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"op_a_sel_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"op_b_sel_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"alu_op_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+136,0,"mem_wren_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"wb_sel_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"imm_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"rs1_addr_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"rs2_addr_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+138,0,"rd_addr_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+139,0,"rd_addr_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+116,0,"rd_addr_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"rs1_data_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"rs2_data_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"pc_4_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+141,0,"ins_n_vld_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"pc_4_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"alu_data_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"slt_sl_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+144,0,"rd_wren_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"stall_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"mem_wren_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"wb_sel_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"rs2_data_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+270,0,"o_ins_n_vld_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"pc_4_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"alu_data_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+119,0,"rd_wren_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"wb_sel_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+187,0,"forwardA_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+188,0,"forwardB_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"pattern_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+62,0,"pattern_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+271,0,"rst_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("decode_pipeline", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"i_enb_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"i_rst_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"i_pc_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"i_pc_4_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"i_instr_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"i_result_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"i_rd_addr_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+186,0,"i_alu_data_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"i_pattern_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+119,0,"i_rd_wren_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"o_ins_n_vld_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"o_slt_sl_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+135,0,"o_rd_wren_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"o_op_a_sel_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"o_op_b_sel_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"o_alu_op_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+136,0,"o_mem_wren_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"o_wb_sel_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"o_imm_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"o_taken_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"o_enb_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"o_enb_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"o_rs1_addr_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"o_rs2_addr_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+138,0,"o_rd_addr_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"o_rs1_data_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"o_rs2_data_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"o_pc_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"o_pc_4_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"o_pattern_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+232,0,"rs1_data_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"rs2_data_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"imm_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"immsel_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+149,0,"br_un_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"br_less_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"br_euqal_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"ins_n_vld_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"slt_sl_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+152,0,"rd_wren_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"op_a_sel_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"op_b_sel_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"alu_op_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+156,0,"mem_wren_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"wb_sel_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+158,0,"rs1_addr_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+159,0,"rs2_addr_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+160,0,"rd_addr_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+240,0,"taken_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"enb_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"enb_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"reg_ins_n_vld_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"reg_slt_sl_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+135,0,"reg_rd_wren_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"reg_op_a_sel_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"reg_op_b_sel_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"reg_alu_op_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+136,0,"reg_mem_wren_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"reg_wb_sel_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+55,0,"reg_rs1_addr_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"reg_rs2_addr_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+138,0,"reg_rd_addr_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"reg_pc_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"reg_pc_4_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"reg_rs1_data_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"reg_rs2_data_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"reg_imm_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"reg_taken_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"reg_enb_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"reg_enb_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"reg_pattern_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+163,0,"sel_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"sel_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"data_br_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"data_br_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("brc_decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+241,0,"i_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"i_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"i_br_un",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"o_br_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"o_br_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"overFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"zeroFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"carryFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+245,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("ctrl_decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+132,0,"i_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"i_br_less",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"i_br_equal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"o_insn_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"o_slt_sl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+240,0,"o_pc_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"o_br_unsigned",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"o_rd_wren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"o_op_a_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"o_op_b_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"o_alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+156,0,"o_mem_wren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"o_wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+148,0,"o_imm_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+161,0,"o_enb_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"o_enb_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("forward_decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+138,0,"i_rd_addr_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+158,0,"i_rs1_addr_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+159,0,"i_rs2_addr_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+135,0,"i_rd_wren_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"o_sel_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"o_sel_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("imm_decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+132,0,"i_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"i_immsel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+147,0,"o_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+186,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+164,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+242,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_br_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+186,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+163,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"i_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+158,0,"i_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+159,0,"i_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+116,0,"i_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+114,0,"i_rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+119,0,"i_rd_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+232,0,"o_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"o_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+69+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("detect_pipline", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"i_all_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"i_slt_sl_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+139,0,"i_rd_addr_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+55,0,"i_rs1_addr_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"i_rs2_addr_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+33,0,"i_rst_br_F",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"i_stall_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"o_rst_F",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"o_rst_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"o_rst_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"o_rst_M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"o_enb_F",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"o_enb_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"o_enb_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"o_enb_M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"o_enb_W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("execute_pipeline", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"i_rst_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"i_enb_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"i_ins_n_vld_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"i_slt_sl_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+135,0,"i_rd_wren_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"i_op_a_sel_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"i_op_b_sel_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"i_alu_op_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+136,0,"i_mem_wren_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"i_wb_sel_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,0,"i_pc_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"i_pc_4_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"i_imm_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"i_rs1_data_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"i_rs2_data_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"i_forwardA_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+188,0,"i_forwardB_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"i_alu_data_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"i_rs_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"i_rd_addr_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+141,0,"o_ins_n_vld_M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"o_pc_4_M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"o_alu_data_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"o_alu_data_M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"o_slt_sl_M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+144,0,"o_rd_wren_M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"o_mem_wren_M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"o_wb_sel_M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"o_rs2_data_M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"o_rd_addr_M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+256,0,"operand_a_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"operand_b_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"operand_a_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"operand_b_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"alu_data_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+141,0,"reg_ins_n_vld_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"reg_slt_sl_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+144,0,"reg_rd_wren_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"reg_mem_wren_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"reg_wb_sel_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"reg_rs2_data_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"reg_pc_4_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"reg_alu_data_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"reg_rd_addr_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("block_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"i_operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"i_operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"i_alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+186,0,"o_alu_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"A_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+273,0,"A_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+274,0,"A_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+275,0,"A_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+276,0,"A_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+277,0,"A_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+278,0,"A_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+279,0,"A_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+280,0,"A_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+281,0,"A_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+282,0,"A_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+192,0,"carryFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"overFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+194,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+196,0,"srl_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"srr_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"sra_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("shiftl_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"i_rs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"i_amount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+196,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"b_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"b_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"b_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"b_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("shift_16bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+204,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+205,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+200,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_1bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+206,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_2bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+208,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_4bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+210,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_8bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+212,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+213,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("shiftr_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"i_rs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"i_amount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+197,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"b_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"b_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"b_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"b_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("shift_16bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+218,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+205,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_1bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+219,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_2bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+220,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_4bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+221,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_8bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+222,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+213,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("shiftra_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"i_rs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"i_amount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+198,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"b_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"b_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"b_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"b_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("shift_16bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+227,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+205,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_1bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+228,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_2bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_4bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+230,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_8bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+231,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+213,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux_FWA_E", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+57,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"data_2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+256,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_FWB_E", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+58,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"data_2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+189,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_a", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+54,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fetch_pipeline", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"i_rst_F",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"i_en_F",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"i_branche_en_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"i_jump_enb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"i_taken_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"i_pc_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"i_alu_data_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"i_pattern_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+132,0,"o_instr_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"o_pc_4_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"o_pc_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"o_rst_br_F",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"o_pattern_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+257,0,"pc_target_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"pc_four_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"pc_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"pc_Q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"pc_Q2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"pc_rp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+234,0,"pc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"instr_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"pc_rp_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+263,0,"pattern_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+132,0,"reg_instr_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"reg_pc_4_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"reg_pc_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"reg_pattern_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("block_mux_pc_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+257,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+234,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("block_mux_pc_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gshare_fetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+283,0,"GBIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+247,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"i_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"i_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"i_pc_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"i_alu_data_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"i_branche_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"i_jump_enb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"i_pattern_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+234,0,"o_pc_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"o_pc_target_F",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"o_pc_rp_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"o_pc_rp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"o_rst_br_F",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+263,0,"o_pattern_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+263,0,"Pattern",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+235,0,"predict_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+237,0,"addr_pht",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+36,0,"Pattern_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+264,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("inst_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+262,0,"o_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+255,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pc_fetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"i_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"i_next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"o_pc_current",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_plus_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"pc_current_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+255,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"pc_plus4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("forward_pipeline", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"i_rs1_addr_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"i_rs2_addr_E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+139,0,"i_rd_addr_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+116,0,"i_rd_addr_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+144,0,"i_rd_wren_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"i_rd_wren_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"o_forwardA_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+188,0,"o_forwardB_E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_pipeline", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"i_rst_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"i_enb_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"i_ins_n_vld_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"i_pc_4_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"i_alu_data_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"i_slt_sl_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+144,0,"i_rd_wren_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_mem_wren_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"i_wb_sel_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"i_rs2_data_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"i_rd_addr_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+249,0,"i_io_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"i_io_btn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+13,0,"o_stall_M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"o_SRAM_ADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+39,0,"o_SRAM_DQ",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+40,0,"o_SRAM_CE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"o_SRAM_WE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"o_SRAM_LB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"o_SRAM_UB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"o_SRAM_OE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"o_ld_data_W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"o_io_ledr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"o_io_ledg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"o_io_hex0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+107,0,"o_io_hex1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+108,0,"o_io_hex2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+109,0,"o_io_hex3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+110,0,"o_io_hex4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+111,0,"o_io_hex5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+112,0,"o_io_hex6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+113,0,"o_io_hex7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+103,0,"o_io_lcd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"o_ins_n_vld_W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"o_pc_4_W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"o_alu_data_W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+119,0,"o_rd_wren_W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"o_wb_sel_W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+116,0,"o_rd_addr_W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+266,0,"ld_data_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"stall_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+284,0,"SRAM_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+285,0,"SRAM_DQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+286,0,"SRAM_CE_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"SRAM_WE_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"SRAM_LB_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"SRAM_UB_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"io_ledr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"io_ledg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"io_hex0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+4,0,"io_hex1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+5,0,"io_hex2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+6,0,"io_hex3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+7,0,"io_hex4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+8,0,"io_hex5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+9,0,"io_hex6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+10,0,"io_hex7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+11,0,"io_lcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"reg_ld_data_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"reg_SRAM_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+122,0,"reg_SRAM_DQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+123,0,"reg_SRAM_CE_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"reg_SRAM_WE_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"reg_SRAM_LB_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"reg_SRAM_UB_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"reg_ins_n_vld_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"reg_pc_4_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"reg_alu_data_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+119,0,"reg_rd_wren_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"reg_wb_sel_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+105,0,"reg_io_ledr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"reg_io_ledg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"reg_io_hex0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+107,0,"reg_io_hex1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+108,0,"reg_io_hex2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+109,0,"reg_io_hex3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+110,0,"reg_io_hex4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+111,0,"reg_io_hex5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+112,0,"reg_io_hex6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+113,0,"reg_io_hex7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+103,0,"reg_io_lcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"reg_rd_addr_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("lsu_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"i_st_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"i_lsu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"i_lsu_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"i_io_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"i_io_btn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+59,0,"slt_sl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+13,0,"o_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"o_SRAM_ADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+39,0,"o_SRAM_DQ",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+40,0,"o_SRAM_CE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"o_SRAM_WE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"o_SRAM_LB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"o_SRAM_UB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"o_SRAM_OE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"o_ld_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"o_io_ledr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"o_io_ledg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"o_io_hex0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+4,0,"o_io_hex1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+5,0,"o_io_hex2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+6,0,"o_io_hex3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+7,0,"o_io_hex4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+8,0,"o_io_hex5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+9,0,"o_io_hex6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+10,0,"o_io_hex7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+11,0,"o_io_lcd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"en_datamem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"en_op_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"data_out_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"data_out_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"io_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"INPUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"read_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"write_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("demux_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+171,0,"i_lsu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+165,0,"en_datamem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"en_op_buf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+290,0,"start_datamem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+291,0,"end_datamem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+292,0,"start_op_bf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+293,0,"end_op_bf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"i_rden",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"i_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"o_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"o_ACK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"o_SRAM_ADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+39,0,"o_SRAM_DQ",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+40,0,"o_SRAM_CE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"o_SRAM_WE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"o_SRAM_LB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"o_SRAM_UB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"o_SRAM_OE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"addr_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"rd_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"wr_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"wr_mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"data_back",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cachemem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+294,0,"blockbit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"tagbit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"indexbit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"offsetbit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+247,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"i_addr_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"i_data_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"o_data_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"i_rd_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"i_wr_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"i_ACK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"o_addr_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"o_rd_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"o_wr_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"i_data_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"o_data_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"o_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"hit_miss_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"hit_miss_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"mem_q_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"mem_q_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"mem_d_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"mem_d_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"addr_d_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"addr_d_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"addr_q_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"addr_q_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"addr_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+173,0,"addr_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+174,0,"addr_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+131,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"nxt_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("sram_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"i_ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+18,0,"i_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"i_BMASK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,0,"i_WREN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"i_RDEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"o_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,0,"o_ACK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"SRAM_ADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+39,0,"SRAM_DQ",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+40,0,"SRAM_CE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"SRAM_WE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"SRAM_OE_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"SRAM_LB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"SRAM_UB_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"sram_state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+65,0,"sram_state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+269,0,"addr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+38,0,"addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+26,0,"wdata_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"wdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"rdata_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"bmask_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+68,0,"bmask_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+39,0,"DIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"DOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"in_data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"in_data_2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"in_data_3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"i_lsu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+266,0,"o_ld_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"addr_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("outputperiph", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+59,0,"slt_sl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+60,0,"st_data_2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"addr_2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+166,0,"en_bf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"st_en_2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"data_out_2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"io_lcd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"io_ledg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"io_ledr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"io_hex0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+4,0,"io_hex1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+5,0,"io_hex2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+6,0,"io_hex3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+7,0,"io_hex4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+8,0,"io_hex5_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+9,0,"io_hex6_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+10,0,"io_hex7_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+176,0,"data_bs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"data_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("MEMBF", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+178+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("trsf_st", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+59,0,"slt_sl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+183,0,"addr_sp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+145,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"data_bf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"data_bs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"data_af",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+300,0,"SB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+301,0,"SH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+302,0,"LW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+303,0,"LB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+304,0,"LH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+305,0,"LBU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+306,0,"LHU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+184,0,"memb_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"memh_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wb_pipeline", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+115,0,"i_ld_data_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"i_pc_4_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"i_alu_data_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"i_wb_sel_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+114,0,"o_result_W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("block_mux_wb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+118,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"data_2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+114,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_sim___024root__trace_init_top(Vtb_sim___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sim___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_sim___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_sim___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_sim___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_sim___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_sim___024root__trace_register(Vtb_sim___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_sim___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_sim___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_sim___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_sim___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_sim___024root__trace_const_0_sub_0(Vtb_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_sim___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root__trace_const_0\n"); );
    // Init
    Vtb_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sim___024root*>(voidSelf);
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_sim___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_sim___024root__trace_const_0_sub_0(Vtb_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+270,(vlSelfRef.tb_sim__DOT__dut__DOT__o_ins_n_vld_W));
    bufp->fullBit(oldp+271,(vlSelfRef.tb_sim__DOT__dut__DOT__rst_lw));
    bufp->fullCData(oldp+272,(0U),4);
    bufp->fullCData(oldp+273,(1U),4);
    bufp->fullCData(oldp+274,(2U),4);
    bufp->fullCData(oldp+275,(3U),4);
    bufp->fullCData(oldp+276,(4U),4);
    bufp->fullCData(oldp+277,(5U),4);
    bufp->fullCData(oldp+278,(6U),4);
    bufp->fullCData(oldp+279,(7U),4);
    bufp->fullCData(oldp+280,(8U),4);
    bufp->fullCData(oldp+281,(9U),4);
    bufp->fullCData(oldp+282,(0xaU),4);
    bufp->fullIData(oldp+283,(0xaU),32);
    bufp->fullIData(oldp+284,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_ADDR),18);
    bufp->fullSData(oldp+285,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_DQ),16);
    bufp->fullBit(oldp+286,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_CE_N));
    bufp->fullBit(oldp+287,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_WE_N));
    bufp->fullBit(oldp+288,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_LB_N));
    bufp->fullBit(oldp+289,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__SRAM_UB_N));
    bufp->fullSData(oldp+290,(0x2000U),16);
    bufp->fullSData(oldp+291,(0x4000U),16);
    bufp->fullSData(oldp+292,(0x7000U),16);
    bufp->fullSData(oldp+293,(0x7040U),16);
    bufp->fullIData(oldp+294,(0x20U),32);
    bufp->fullIData(oldp+295,(0x17U),32);
    bufp->fullIData(oldp+296,(6U),32);
    bufp->fullIData(oldp+297,(3U),32);
    bufp->fullCData(oldp+298,(0xfU),4);
    bufp->fullCData(oldp+299,(2U),3);
    bufp->fullCData(oldp+300,(0U),3);
    bufp->fullCData(oldp+301,(1U),3);
    bufp->fullCData(oldp+302,(5U),3);
    bufp->fullCData(oldp+303,(3U),3);
    bufp->fullCData(oldp+304,(4U),3);
    bufp->fullCData(oldp+305,(6U),3);
    bufp->fullCData(oldp+306,(7U),3);
}

VL_ATTR_COLD void Vtb_sim___024root__trace_full_0_sub_0(Vtb_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_sim___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root__trace_full_0\n"); );
    // Init
    Vtb_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sim___024root*>(voidSelf);
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_sim___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_sim___024root__trace_full_0_sub_0(Vtb_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sim___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                              ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                             [0U] : 0U)),32);
    bufp->fullIData(oldp+2,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                              ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                             [1U] : 0U)),32);
    bufp->fullCData(oldp+3,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                              ? (0x7fU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                 [2U]) : 0U)),7);
    bufp->fullCData(oldp+4,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                              ? (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                          [2U] >> 8U))
                              : 0U)),7);
    bufp->fullCData(oldp+5,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                              ? (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                          [2U] >> 0x10U))
                              : 0U)),7);
    bufp->fullCData(oldp+6,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                              ? (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                          [2U] >> 0x18U))
                              : 0U)),7);
    bufp->fullCData(oldp+7,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                              ? (0x7fU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                 [3U]) : 0U)),7);
    bufp->fullCData(oldp+8,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                              ? (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                          [3U] >> 8U))
                              : 0U)),7);
    bufp->fullCData(oldp+9,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                              ? (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                          [3U] >> 0x10U))
                              : 0U)),7);
    bufp->fullCData(oldp+10,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                               ? (0x7fU & (vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                                           [3U] >> 0x18U))
                               : 0U)),7);
    bufp->fullIData(oldp+11,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                               ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF
                              [4U] : 0U)),32);
    bufp->fullIData(oldp+12,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                               ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__INPUT
                               : 0U)),32);
    bufp->fullBit(oldp+13,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__stall_M));
    bufp->fullIData(oldp+14,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem),32);
    bufp->fullBit(oldp+16,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem));
    bufp->fullBit(oldp+17,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem));
    bufp->fullIData(oldp+18,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_1),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_d_2),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_1),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_d_2),32);
    bufp->fullCData(oldp+23,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state),4);
    bufp->fullIData(oldp+24,((0x3ffffU & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem)),18);
    bufp->fullCData(oldp+25,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d),3);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d),32);
    bufp->fullCData(oldp+27,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d),4);
    bufp->fullBit(oldp+28,(vlSelfRef.tb_sim__DOT__dut__DOT__enb_F));
    bufp->fullBit(oldp+29,(vlSelfRef.tb_sim__DOT__dut__DOT__enb_D));
    bufp->fullBit(oldp+30,(vlSelfRef.tb_sim__DOT__dut__DOT__enb_E));
    bufp->fullBit(oldp+31,(vlSelfRef.tb_sim__DOT__dut__DOT__enb_M));
    bufp->fullBit(oldp+32,(vlSelfRef.tb_sim__DOT__dut__DOT__enb_W));
    bufp->fullBit(oldp+33,(vlSelfRef.tb_sim__DOT__dut__DOT__rst_br_F));
    bufp->fullIData(oldp+34,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp),32);
    bufp->fullBit(oldp+35,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_rp_sel));
    bufp->fullSData(oldp+36,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern_buffer),10);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_sim__DOT__pc_debug),32);
    bufp->fullIData(oldp+38,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q),18);
    bufp->fullSData(oldp+39,(((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1) 
                              | (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2))),16);
    bufp->fullBit(oldp+40,(vlSelfRef.tb_sim__DOT__o_SRAM_CE_N));
    bufp->fullBit(oldp+41,(vlSelfRef.tb_sim__DOT__o_SRAM_WE_N));
    bufp->fullBit(oldp+42,(vlSelfRef.tb_sim__DOT__o_SRAM_LB_N));
    bufp->fullBit(oldp+43,(vlSelfRef.tb_sim__DOT__o_SRAM_UB_N));
    bufp->fullBit(oldp+44,(vlSelfRef.tb_sim__DOT__o_SRAM_OE_N));
    bufp->fullBit(oldp+45,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_enb_branch));
    bufp->fullBit(oldp+46,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_enb_jump));
    bufp->fullBit(oldp+47,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_taken_D));
    bufp->fullIData(oldp+48,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_D),32);
    bufp->fullIData(oldp+49,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pc_F),32);
    bufp->fullCData(oldp+50,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_slt_sl_D),3);
    bufp->fullBit(oldp+51,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_a_sel_D));
    bufp->fullBit(oldp+52,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_op_b_sel_D));
    bufp->fullCData(oldp+53,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_alu_op_D),4);
    bufp->fullIData(oldp+54,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_imm_D),32);
    bufp->fullCData(oldp+55,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_addr_D),5);
    bufp->fullCData(oldp+56,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_addr_D),5);
    bufp->fullIData(oldp+57,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_data_D),32);
    bufp->fullIData(oldp+58,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs2_data_D),32);
    bufp->fullCData(oldp+59,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_slt_sl_E),3);
    bufp->fullIData(oldp+60,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rs2_data_E),32);
    bufp->fullSData(oldp+61,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pattern_D),10);
    bufp->fullSData(oldp+62,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pattern_F),10);
    bufp->fullBit(oldp+63,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK));
    bufp->fullIData(oldp+64,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q),32);
    bufp->fullCData(oldp+65,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q),3);
    bufp->fullIData(oldp+66,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q),32);
    bufp->fullIData(oldp+67,(((4U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                               ? ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                   ? 0U : ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                            ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q
                                            : ((((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1) 
                                                 | (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2)) 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q))))
                               : ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                   ? ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                       ? ((0xffff0000U 
                                           & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q) 
                                          | ((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1) 
                                             | (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2)))
                                       : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q)
                                   : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q))),32);
    bufp->fullCData(oldp+68,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q),4);
    bufp->fullIData(oldp+69,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[0]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[1]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[2]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[3]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[4]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[5]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[6]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[7]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[8]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[9]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[10]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[11]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[12]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[13]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[14]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[15]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[16]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[17]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[18]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[19]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[20]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[21]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[22]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[23]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[24]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[25]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[26]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[27]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[28]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[29]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[30]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__Reg[31]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_decode__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+102,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_ins_n_vld_M));
    bufp->fullIData(oldp+103,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_lcd),32);
    bufp->fullIData(oldp+104,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_ledg),32);
    bufp->fullIData(oldp+105,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_ledr),32);
    bufp->fullCData(oldp+106,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex0),7);
    bufp->fullCData(oldp+107,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex1),7);
    bufp->fullCData(oldp+108,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex2),7);
    bufp->fullCData(oldp+109,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex3),7);
    bufp->fullCData(oldp+110,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex4),7);
    bufp->fullCData(oldp+111,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex5),7);
    bufp->fullCData(oldp+112,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex6),7);
    bufp->fullCData(oldp+113,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_io_hex7),7);
    bufp->fullIData(oldp+114,(vlSelfRef.tb_sim__DOT__dut__DOT__result_W),32);
    bufp->fullIData(oldp+115,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_ld_data_M),32);
    bufp->fullCData(oldp+116,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_addr_M),5);
    bufp->fullIData(oldp+117,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_pc_4_M),32);
    bufp->fullIData(oldp+118,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_alu_data_M),32);
    bufp->fullBit(oldp+119,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_rd_wren_M));
    bufp->fullCData(oldp+120,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_wb_sel_M),2);
    bufp->fullIData(oldp+121,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_ADDR),18);
    bufp->fullSData(oldp+122,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_DQ),16);
    bufp->fullBit(oldp+123,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_CE_N));
    bufp->fullBit(oldp+124,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_WE_N));
    bufp->fullBit(oldp+125,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_LB_N));
    bufp->fullBit(oldp+126,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__reg_SRAM_UB_N));
    bufp->fullIData(oldp+127,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1),32);
    bufp->fullIData(oldp+128,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2),32);
    bufp->fullIData(oldp+129,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1),32);
    bufp->fullIData(oldp+130,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2),32);
    bufp->fullCData(oldp+131,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state),4);
    bufp->fullIData(oldp+132,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F),32);
    bufp->fullIData(oldp+133,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_pc_4_F),32);
    bufp->fullBit(oldp+134,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_ins_n_vld_D));
    bufp->fullBit(oldp+135,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_wren_D));
    bufp->fullBit(oldp+136,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_mem_wren_D));
    bufp->fullCData(oldp+137,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_wb_sel_D),2);
    bufp->fullCData(oldp+138,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rd_addr_D),5);
    bufp->fullCData(oldp+139,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_addr_E),5);
    bufp->fullIData(oldp+140,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_pc_4_D),32);
    bufp->fullBit(oldp+141,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_ins_n_vld_E));
    bufp->fullIData(oldp+142,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_pc_4_E),32);
    bufp->fullIData(oldp+143,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E),32);
    bufp->fullBit(oldp+144,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_rd_wren_E));
    bufp->fullBit(oldp+145,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_mem_wren_E));
    bufp->fullCData(oldp+146,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_wb_sel_E),2);
    bufp->fullIData(oldp+147,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__imm_D),32);
    bufp->fullCData(oldp+148,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__immsel_D),3);
    bufp->fullBit(oldp+149,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_un_D));
    bufp->fullBit(oldp+150,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__ins_n_vld_D));
    bufp->fullCData(oldp+151,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__slt_sl_D),3);
    bufp->fullBit(oldp+152,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rd_wren_D));
    bufp->fullBit(oldp+153,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_a_sel_D));
    bufp->fullBit(oldp+154,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__op_b_sel_D));
    bufp->fullCData(oldp+155,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__alu_op_D),4);
    bufp->fullBit(oldp+156,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__mem_wren_D));
    bufp->fullCData(oldp+157,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__wb_sel_D),2);
    bufp->fullCData(oldp+158,((0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+159,((0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+160,((0x1fU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__reg_instr_F 
                                        >> 7U))),5);
    bufp->fullBit(oldp+161,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__enb_branch));
    bufp->fullBit(oldp+162,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__enb_jump));
    bufp->fullBit(oldp+163,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__sel_1));
    bufp->fullBit(oldp+164,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__sel_2));
    bufp->fullBit(oldp+165,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_datamem));
    bufp->fullBit(oldp+166,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf));
    bufp->fullIData(oldp+167,((((~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_mem_wren_E)) 
                                & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf))
                                ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp
                                : 0U)),32);
    bufp->fullIData(oldp+168,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__INPUT),32);
    bufp->fullBit(oldp+169,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__read_signal));
    bufp->fullBit(oldp+170,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__write_signal));
    bufp->fullSData(oldp+171,((0xffffU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)),16);
    bufp->fullIData(oldp+172,((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                               >> 9U)),23);
    bufp->fullCData(oldp+173,((0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                        >> 3U))),6);
    bufp->fullCData(oldp+174,((7U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)),3);
    bufp->fullCData(oldp+175,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel),2);
    bufp->fullIData(oldp+176,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_bs),32);
    bufp->fullIData(oldp+177,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp),32);
    bufp->fullIData(oldp+178,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[0]),32);
    bufp->fullIData(oldp+179,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[1]),32);
    bufp->fullIData(oldp+180,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[2]),32);
    bufp->fullIData(oldp+181,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[3]),32);
    bufp->fullIData(oldp+182,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF[4]),32);
    bufp->fullCData(oldp+183,((3U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E)),2);
    bufp->fullIData(oldp+184,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp),32);
    bufp->fullIData(oldp+185,(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp),32);
    bufp->fullIData(oldp+186,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__alu_data_E),32);
    bufp->fullCData(oldp+187,(vlSelfRef.tb_sim__DOT__dut__DOT__forwardA_E),2);
    bufp->fullCData(oldp+188,(vlSelfRef.tb_sim__DOT__dut__DOT__forwardB_E),2);
    bufp->fullIData(oldp+189,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_1),32);
    bufp->fullIData(oldp+190,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2),32);
    bufp->fullIData(oldp+191,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2),32);
    bufp->fullBit(oldp+192,((1U & (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sub 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+193,((1U & (((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                                     >> 0x1fU) == (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 
                                                   >> 0x1fU))
                                    ? (~ (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sub 
                                                  >> 0x20U)))
                                    : (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                                       >> 0x1fU)))));
    bufp->fullQData(oldp+194,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sub),33);
    bufp->fullIData(oldp+196,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__srl_tmp),32);
    bufp->fullIData(oldp+197,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__srr_tmp),32);
    bufp->fullIData(oldp+198,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__sra_tmp),32);
    bufp->fullCData(oldp+199,((0x1fU & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)),5);
    bufp->fullIData(oldp+200,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_1),32);
    bufp->fullIData(oldp+201,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_2),32);
    bufp->fullIData(oldp+202,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_3),32);
    bufp->fullIData(oldp+203,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_4),32);
    bufp->fullIData(oldp+204,(VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2, 0x10U)),32);
    bufp->fullBit(oldp+205,((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 
                                   >> 4U))));
    bufp->fullIData(oldp+206,(VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_4, 1U)),32);
    bufp->fullBit(oldp+207,((1U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2)));
    bufp->fullIData(oldp+208,(VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_3, 2U)),32);
    bufp->fullBit(oldp+209,((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 
                                   >> 1U))));
    bufp->fullIData(oldp+210,(VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_2, 4U)),32);
    bufp->fullBit(oldp+211,((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 
                                   >> 2U))));
    bufp->fullIData(oldp+212,(VL_SHIFTL_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftl_1__DOT__b_1, 8U)),32);
    bufp->fullBit(oldp+213,((1U & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_b_2 
                                   >> 3U))));
    bufp->fullIData(oldp+214,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_1),32);
    bufp->fullIData(oldp+215,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_2),32);
    bufp->fullIData(oldp+216,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_3),32);
    bufp->fullIData(oldp+217,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_4),32);
    bufp->fullIData(oldp+218,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2, 0x10U)),32);
    bufp->fullIData(oldp+219,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_4, 1U)),32);
    bufp->fullIData(oldp+220,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_3, 2U)),32);
    bufp->fullIData(oldp+221,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_2, 4U)),32);
    bufp->fullIData(oldp+222,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftr_1__DOT__b_1, 8U)),32);
    bufp->fullIData(oldp+223,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1),32);
    bufp->fullIData(oldp+224,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2),32);
    bufp->fullIData(oldp+225,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3),32);
    bufp->fullIData(oldp+226,(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4),32);
    bufp->fullIData(oldp+227,((((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                                            >> 0x1fU))) 
                                << 0x10U) | (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__operand_a_2 
                                             >> 0x10U))),32);
    bufp->fullIData(oldp+228,(((0x80000000U & vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4) 
                               | (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_4 
                                  >> 1U))),32);
    bufp->fullIData(oldp+229,((((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
                                            >> 0x1fU))) 
                                << 0x1eU) | (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_3 
                                             >> 2U))),32);
    bufp->fullIData(oldp+230,((((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
                                            >> 0x1fU))) 
                                << 0x1cU) | (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_2 
                                             >> 4U))),32);
    bufp->fullIData(oldp+231,((((- (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
                                            >> 0x1fU))) 
                                << 0x18U) | (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__block_alu__DOT__shiftra_1__DOT__b_1 
                                             >> 8U))),32);
    bufp->fullIData(oldp+232,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rs1_data_D),32);
    bufp->fullIData(oldp+233,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__rs2_data_D),32);
    bufp->fullBit(oldp+234,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_sel));
    bufp->fullBit(oldp+235,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__predict_taken));
    bufp->fullBit(oldp+236,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__hit));
    bufp->fullSData(oldp+237,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__addr_pht),10);
    bufp->fullBit(oldp+238,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__br_less_D));
    bufp->fullBit(oldp+239,((0U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__brc_decode__DOT__sub))));
    bufp->fullBit(oldp+240,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__taken_D));
    bufp->fullIData(oldp+241,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_1),32);
    bufp->fullIData(oldp+242,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_2),32);
    bufp->fullBit(oldp+243,((1U & (((vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_1 
                                     >> 0x1fU) == (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_2 
                                                   >> 0x1fU))
                                    ? (~ (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__brc_decode__DOT__sub 
                                                  >> 0x20U)))
                                    : (vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__data_br_1 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+244,((1U & (IData)((vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__brc_decode__DOT__sub 
                                           >> 0x20U)))));
    bufp->fullQData(oldp+245,(vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__brc_decode__DOT__sub),33);
    bufp->fullBit(oldp+247,(vlSelfRef.tb_sim__DOT__i_clk));
    bufp->fullBit(oldp+248,(vlSelfRef.tb_sim__DOT__i_rst));
    bufp->fullIData(oldp+249,(vlSelfRef.tb_sim__DOT__i_io_sw),32);
    bufp->fullCData(oldp+250,(vlSelfRef.tb_sim__DOT__i_io_btn),4);
    bufp->fullBit(oldp+251,(vlSelfRef.tb_sim__DOT__dut__DOT__rst_F));
    bufp->fullBit(oldp+252,(vlSelfRef.tb_sim__DOT__dut__DOT__rst_D));
    bufp->fullBit(oldp+253,(vlSelfRef.tb_sim__DOT__dut__DOT__rst_M));
    bufp->fullBit(oldp+254,(vlSelfRef.tb_sim__DOT__dut__DOT__rst_E));
    bufp->fullBit(oldp+255,(vlSelfRef.tb_sim__DOT__dut__DOT____Vcellinp__detect_pipline__i_all_rst));
    bufp->fullIData(oldp+256,(((0U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__forwardA_E))
                                ? vlSelfRef.tb_sim__DOT__dut__DOT__decode_pipeline__DOT__reg_rs1_data_D
                                : ((1U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__forwardA_E))
                                    ? vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E
                                    : ((2U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__forwardA_E))
                                        ? vlSelfRef.tb_sim__DOT__dut__DOT__result_W
                                        : 0U)))),32);
    bufp->fullIData(oldp+257,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__BTB
                              [(0x3ffU & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F)]),32);
    bufp->fullIData(oldp+258,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_four_F),32);
    bufp->fullIData(oldp+259,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F),32);
    bufp->fullIData(oldp+260,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q1),32);
    bufp->fullIData(oldp+261,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_Q2),32);
    bufp->fullIData(oldp+262,(((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                                ? ((0x800U >= (0xfffU 
                                               & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F 
                                                  >> 2U)))
                                    ? vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__inst_mem__DOT__imem
                                   [(0xfffU & (vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F 
                                               >> 2U))]
                                    : 0U) : 0U)),32);
    bufp->fullSData(oldp+263,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__Pattern),10);
    bufp->fullIData(oldp+264,(vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__gshare_fetch__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+265,((0x3fffU & vlSelfRef.tb_sim__DOT__dut__DOT__fetch_pipeline__DOT__pc_F)),14);
    bufp->fullIData(oldp+266,(((0U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel))
                                ? ((IData)(vlSelfRef.tb_sim__DOT__i_rst)
                                    ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__INPUT
                                    : 0U) : ((1U == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel))
                                              ? (((~ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_mem_wren_E)) 
                                                  & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__en_op_buf))
                                                  ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp
                                                  : 0U)
                                              : ((2U 
                                                  == (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__mux31__DOT__addr_sel))
                                                  ? vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__data_out_1
                                                  : 0U)))),32);
    bufp->fullBit(oldp+267,((vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1
                             [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                        >> 3U))] & 
                             ((~ (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                  >> 2U)) & ((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                              >> 9U) 
                                             == vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1
                                             [(0x3fU 
                                               & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                                  >> 3U))])))));
    bufp->fullBit(oldp+268,((vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2
                             [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                        >> 3U))] & 
                             (((vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                >> 9U) == vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2
                               [(0x3fU & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                          >> 3U))]) 
                              & (vlSelfRef.tb_sim__DOT__dut__DOT__execute_pipeline__DOT__reg_alu_data_E 
                                 >> 2U)))));
    bufp->fullIData(oldp+269,(((4U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                ? ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                    ? 0U : ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                             ? (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) 
                                                 ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem))
                                                 ? 
                                                (0x3fffeU 
                                                 & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem)
                                                 : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q)
                                             : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q))
                                : ((2U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                    ? ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                        ? (1U | vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q)
                                        : (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) 
                                            ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem))
                                            ? (0x3fffeU 
                                               & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem)
                                            : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q))
                                    : ((1U & (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q))
                                        ? (1U | vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q)
                                        : (((IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem) 
                                            ^ (IData)(vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem))
                                            ? (0x3fffeU 
                                               & vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem)
                                            : vlSelfRef.tb_sim__DOT__dut__DOT__mem_pipeline__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q))))),18);
}
