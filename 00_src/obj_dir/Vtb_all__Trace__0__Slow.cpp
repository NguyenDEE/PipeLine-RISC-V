// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_all__Syms.h"


VL_ATTR_COLD void Vtb_all___024root__trace_init_sub__TOP__0(Vtb_all___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+94,0,"CLOCK_50",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"SW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+96,0,"KEY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+97,0,"LEDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+98,0,"LEDG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+99,0,"HEX0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+100,0,"HEX1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+101,0,"HEX2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+102,0,"HEX3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+103,0,"HEX4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+104,0,"HEX5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+105,0,"HEX6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+106,0,"HEX7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+107,0,"LCD_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+108,0,"LCD_RW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"LCD_EN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"LCD_RS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"LCD_ON",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tb_all", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+94,0,"CLOCK_50",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"SW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+96,0,"KEY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+97,0,"LEDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+98,0,"LEDG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+99,0,"HEX0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+100,0,"HEX1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+101,0,"HEX2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+102,0,"HEX3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+103,0,"HEX4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+104,0,"HEX5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+105,0,"HEX6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+106,0,"HEX7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+107,0,"LCD_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+108,0,"LCD_RW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"LCD_EN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"LCD_RS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"LCD_ON",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"io_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"io_ledg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"io_ledr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"io_lcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"ins_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+94,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"i_io_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"i_io_btn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"o_ins_n_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"o_pc_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"o_io_lcd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"o_io_ledg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"o_io_ledr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"o_io_hex0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+100,0,"o_io_hex1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+101,0,"o_io_hex2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+102,0,"o_io_hex3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+103,0,"o_io_hex4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+104,0,"o_io_hex5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+105,0,"o_io_hex6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+106,0,"o_io_hex7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+17,0,"alu_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"pc_four",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"nxt_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"ld_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"imm_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+23,0,"br_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rd_wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"op_a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"op_b_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"mem_wren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"br_unsigned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"br_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"br_equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"slt_sl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+120,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("block_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"i_operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"i_operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"i_alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"o_alu_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"A_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+130,0,"A_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+131,0,"A_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+132,0,"A_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+133,0,"A_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+134,0,"A_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+135,0,"A_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+136,0,"A_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+137,0,"A_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+138,0,"A_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+139,0,"A_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+25,0,"carryFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"overFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"srl_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"srr_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"sra_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("shiftl_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("shiftr_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("shiftra_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+30,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+37,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("block_brc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"i_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"i_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"i_br_un",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"o_br_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"o_br_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"overFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"zeroFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"carryFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("block_ctrl_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"i_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"i_br_less",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"i_br_equal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"o_ins_n_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"o_slt_sl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+23,0,"o_pc_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"o_br_unsigned",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"o_rd_wren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"o_op_a_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"o_op_b_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"o_alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"o_mem_wren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"o_wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"o_imm_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("block_imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"o_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+116,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("block_immgen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"i_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"i_immsel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,0,"o_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("block_lsu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+94,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"i_st_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"i_lsu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"i_lsu_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"i_io_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"i_io_btn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"slt_sl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+120,0,"o_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"o_ld_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"o_io_ledr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"o_io_ledg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"o_io_hex0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+100,0,"o_io_hex1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+101,0,"o_io_hex2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+102,0,"o_io_hex3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+103,0,"o_io_hex4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+104,0,"o_io_hex5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+105,0,"o_io_hex6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+106,0,"o_io_hex7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+115,0,"o_io_lcd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"en_datamem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"en_op_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"data_out_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"data_out_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"io_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"INPUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("demux_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+41,0,"i_lsu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+39,0,"en_datamem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"en_op_buf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"start_datamem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+141,0,"end_datamem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+142,0,"start_op_bf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+143,0,"end_op_bf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_sdram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+94,0,"in_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"in_CSn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"in_write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"in_CASn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"in_RASn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"in_bank_select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+44,0,"in_sdram_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+20,0,"in_sdram_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"out_sdram_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"o_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"READ_CAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"WRITE_CAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"registered_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+43,0,"registered_bank_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+147,0,"registered_write_cas",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"cnt_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"BANK0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+149,0,"BANK1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"in_data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"in_data_2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"in_data_3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"i_lsu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+118,0,"o_ld_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"addr_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("outputperiph", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"slt_sl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+20,0,"st_data_2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"addr_2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+40,0,"en_bf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"st_en_2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"data_out_2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"io_lcd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"io_ledg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"io_ledr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"io_hex0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+100,0,"io_hex1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+101,0,"io_hex2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+102,0,"io_hex3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+103,0,"io_hex4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+104,0,"io_hex5_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+105,0,"io_hex6_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+106,0,"io_hex7_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+48,0,"data_bs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"data_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("MEMBF", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+53+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("trsf_st", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"slt_sl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"addr_sp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"data_bf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"data_bs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"data_af",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"SB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+152,0,"SH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+153,0,"LW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+154,0,"LB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+155,0,"LH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+156,0,"LBU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+157,0,"LHU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"memb_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"memh_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("block_mux_a", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("block_mux_b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("block_mux_pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("block_mux_wb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"data_2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+117,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("block_pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+94,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"i_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"i_next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"o_pc_current",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("block_pcplus4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"pc_current_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"pc_plus4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("block_regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+94,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"i_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"i_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"i_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+117,0,"i_rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"i_rd_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"o_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"o_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+58+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_all___024root__trace_init_top(Vtb_all___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_all___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_all___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_all___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_all___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_all___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_all___024root__trace_register(Vtb_all___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_all___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_all___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_all___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_all___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_all___024root__trace_const_0_sub_0(Vtb_all___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_all___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_const_0\n"); );
    // Init
    Vtb_all___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_all___024root*>(voidSelf);
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_all___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_all___024root__trace_const_0_sub_0(Vtb_all___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+129,(0U),4);
    bufp->fullCData(oldp+130,(1U),4);
    bufp->fullCData(oldp+131,(2U),4);
    bufp->fullCData(oldp+132,(3U),4);
    bufp->fullCData(oldp+133,(4U),4);
    bufp->fullCData(oldp+134,(5U),4);
    bufp->fullCData(oldp+135,(6U),4);
    bufp->fullCData(oldp+136,(7U),4);
    bufp->fullCData(oldp+137,(8U),4);
    bufp->fullCData(oldp+138,(9U),4);
    bufp->fullCData(oldp+139,(0xaU),4);
    bufp->fullSData(oldp+140,(0x2000U),16);
    bufp->fullSData(oldp+141,(0x4000U),16);
    bufp->fullSData(oldp+142,(0x7000U),16);
    bufp->fullSData(oldp+143,(0x7040U),16);
    bufp->fullBit(oldp+144,(1U));
    bufp->fullIData(oldp+145,(0x20U),32);
    bufp->fullIData(oldp+146,(0x100U),32);
    bufp->fullBit(oldp+147,(0U));
    bufp->fullCData(oldp+148,(2U),2);
    bufp->fullCData(oldp+149,(3U),2);
    bufp->fullCData(oldp+150,(2U),3);
    bufp->fullCData(oldp+151,(0U),3);
    bufp->fullCData(oldp+152,(1U),3);
    bufp->fullCData(oldp+153,(5U),3);
    bufp->fullCData(oldp+154,(3U),3);
    bufp->fullCData(oldp+155,(4U),3);
    bufp->fullCData(oldp+156,(6U),3);
    bufp->fullCData(oldp+157,(7U),3);
}

VL_ATTR_COLD void Vtb_all___024root__trace_full_0_sub_0(Vtb_all___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_all___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_full_0\n"); );
    // Init
    Vtb_all___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_all___024root*>(voidSelf);
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_all___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_all___024root__trace_full_0_sub_0(Vtb_all___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_all__DOT__ins_valid));
    bufp->fullIData(oldp+2,(vlSelfRef.tb_all__DOT__dut__DOT__pc_four),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_all__DOT__dut__DOT__instr),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_all__DOT__dut__DOT__imm),32);
    bufp->fullCData(oldp+5,(vlSelfRef.tb_all__DOT__dut__DOT__wb_sel),2);
    bufp->fullCData(oldp+6,(vlSelfRef.tb_all__DOT__dut__DOT__alu_op),4);
    bufp->fullCData(oldp+7,(vlSelfRef.tb_all__DOT__dut__DOT__imm_sel),3);
    bufp->fullBit(oldp+8,(vlSelfRef.tb_all__DOT__dut__DOT__rd_wren));
    bufp->fullBit(oldp+9,(vlSelfRef.tb_all__DOT__dut__DOT__op_a_sel));
    bufp->fullBit(oldp+10,(vlSelfRef.tb_all__DOT__dut__DOT__op_b_sel));
    bufp->fullBit(oldp+11,(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren));
    bufp->fullBit(oldp+12,(vlSelfRef.tb_all__DOT__dut__DOT__br_unsigned));
    bufp->fullCData(oldp+13,(vlSelfRef.tb_all__DOT__dut__DOT__slt_sl),3);
    bufp->fullCData(oldp+14,(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs1_addr),5);
    bufp->fullCData(oldp+15,(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr),5);
    bufp->fullCData(oldp+16,(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rd_addr),5);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_all__DOT__dut__DOT__alu_data),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_all__DOT__dut__DOT__nxt_pc),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_all__DOT__dut__DOT__rs1_data),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_all__DOT__dut__DOT__rs2_data),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_all__DOT__dut__DOT__operand_a),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_all__DOT__dut__DOT__operand_b),32);
    bufp->fullBit(oldp+23,(vlSelfRef.tb_all__DOT__dut__DOT__br_sel));
    bufp->fullBit(oldp+24,(vlSelfRef.tb_all__DOT__dut__DOT__br_less));
    bufp->fullBit(oldp+25,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__carryFlag));
    bufp->fullBit(oldp+26,((1U & (((vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                    >> 0x1fU) == (vlSelfRef.tb_all__DOT__dut__DOT__operand_b 
                                                  >> 0x1fU))
                                   ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__carryFlag)
                                   : (vlSelfRef.tb_all__DOT__dut__DOT__operand_a 
                                      >> 0x1fU)))));
    bufp->fullIData(oldp+27,(((IData)(1U) + ((~ vlSelfRef.tb_all__DOT__dut__DOT__operand_b) 
                                             + vlSelfRef.tb_all__DOT__dut__DOT__operand_a))),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__srl_tmp),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__srr_tmp),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__sra_tmp),32);
    bufp->fullCData(oldp+31,((0x1fU & vlSelfRef.tb_all__DOT__dut__DOT__operand_b)),5);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__tmp),32);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftl_1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__tmp),32);
    bufp->fullIData(oldp+35,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftr_1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__tmp),32);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_all__DOT__dut__DOT__block_alu__DOT__shiftra_1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+38,(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT__carryFlag));
    bufp->fullBit(oldp+39,(((0x2000U <= (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)) 
                            & (0x4000U > (0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)))));
    bufp->fullBit(oldp+40,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__en_op_buf));
    bufp->fullSData(oldp+41,((0xffffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)),16);
    bufp->fullBit(oldp+42,((1U & (~ ((0x2000U <= (0xffffU 
                                                  & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)) 
                                     & (0x4000U > (0xffffU 
                                                   & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)))))));
    bufp->fullCData(oldp+43,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_bank_sel),2);
    bufp->fullSData(oldp+44,((0x1fffU & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)),13);
    bufp->fullBit(oldp+45,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__WRITE_CAS));
    bufp->fullSData(oldp+46,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__registered_row),13);
    bufp->fullCData(oldp+47,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel),2);
    bufp->fullIData(oldp+48,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_bs),32);
    bufp->fullIData(oldp+49,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp),32);
    bufp->fullCData(oldp+50,((3U & vlSelfRef.tb_all__DOT__dut__DOT__alu_data)),2);
    bufp->fullIData(oldp+51,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memb_tmp),32);
    bufp->fullIData(oldp+52,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__trsf_st__DOT__memh_tmp),32);
    bufp->fullIData(oldp+53,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[0]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[1]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[2]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[3]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF[4]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[0]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[1]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[2]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[3]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[4]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[5]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[6]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[7]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[8]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[9]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[10]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[11]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[12]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[13]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[14]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[15]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[16]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[17]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[18]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[19]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[20]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[21]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[22]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[23]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[24]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[25]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[26]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[27]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[28]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[29]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[30]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg[31]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+91,((1U & vlSelfRef.tb_all__DOT__dut__DOT__pc)));
    bufp->fullIData(oldp+92,(vlSelfRef.tb_all__DOT__dut__DOT__pc),32);
    bufp->fullSData(oldp+93,((0x1fffU & vlSelfRef.tb_all__DOT__dut__DOT__pc)),13);
    bufp->fullBit(oldp+94,(vlSelfRef.CLOCK_50));
    bufp->fullIData(oldp+95,(vlSelfRef.SW),18);
    bufp->fullCData(oldp+96,(vlSelfRef.KEY),4);
    bufp->fullIData(oldp+97,(vlSelfRef.LEDR),18);
    bufp->fullSData(oldp+98,(vlSelfRef.LEDG),9);
    bufp->fullCData(oldp+99,(vlSelfRef.HEX0),7);
    bufp->fullCData(oldp+100,(vlSelfRef.HEX1),7);
    bufp->fullCData(oldp+101,(vlSelfRef.HEX2),7);
    bufp->fullCData(oldp+102,(vlSelfRef.HEX3),7);
    bufp->fullCData(oldp+103,(vlSelfRef.HEX4),7);
    bufp->fullCData(oldp+104,(vlSelfRef.HEX5),7);
    bufp->fullCData(oldp+105,(vlSelfRef.HEX6),7);
    bufp->fullCData(oldp+106,(vlSelfRef.HEX7),7);
    bufp->fullCData(oldp+107,(vlSelfRef.LCD_DATA),8);
    bufp->fullBit(oldp+108,(vlSelfRef.LCD_RW));
    bufp->fullBit(oldp+109,(vlSelfRef.LCD_EN));
    bufp->fullBit(oldp+110,(vlSelfRef.LCD_RS));
    bufp->fullBit(oldp+111,(vlSelfRef.LCD_ON));
    bufp->fullIData(oldp+112,((0x1ffffU & vlSelfRef.SW)),32);
    bufp->fullIData(oldp+113,(((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)
                                ? 0U : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                               [1U])),32);
    bufp->fullIData(oldp+114,(((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)
                                ? 0U : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                               [0U])),32);
    bufp->fullIData(oldp+115,(((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)
                                ? 0U : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__MEMBF
                               [4U])),32);
    bufp->fullBit(oldp+116,(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst));
    bufp->fullIData(oldp+117,(((0U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__wb_sel))
                                ? vlSelfRef.tb_all__DOT__dut__DOT__alu_data
                                : ((1U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__wb_sel))
                                    ? ((0U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                                        ? ((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)
                                            ? 0U : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__INPUT)
                                        : ((1U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                                            ? (((~ (IData)(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren)) 
                                                & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__en_op_buf))
                                                ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp
                                                : 0U)
                                            : ((2U 
                                                == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                                                ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__data_out_1
                                                : 0U)))
                                    : ((2U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__wb_sel))
                                        ? vlSelfRef.tb_all__DOT__dut__DOT__pc_four
                                        : 0U)))),32);
    bufp->fullIData(oldp+118,(((0U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                                ? ((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)
                                    ? 0U : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__INPUT)
                                : ((1U == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                                    ? (((~ (IData)(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren)) 
                                        & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__en_op_buf))
                                        ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp
                                        : 0U) : ((2U 
                                                  == (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mux31__DOT__addr_sel))
                                                  ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__data_out_1
                                                  : 0U)))),32);
    bufp->fullBit(oldp+119,((0U == ((IData)(1U) + (
                                                   ((0U 
                                                     == (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr))
                                                     ? 0xffffffffU
                                                     : 
                                                    (~ 
                                                     vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                                     [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr])) 
                                                   + vlSelfRef.tb_all__DOT__dut__DOT__rs1_data)))));
    bufp->fullBit(oldp+120,(vlSelfRef.tb_all__DOT__dut__DOT__stall));
    bufp->fullBit(oldp+121,((((IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0) 
                              == ((0U != (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr)) 
                                  & (vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                     [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr] 
                                     >> 0x1fU))) ? (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT__carryFlag)
                              : (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_brc__DOT____VdfgRegularize_hd76aa6c3_0_0))));
    bufp->fullIData(oldp+122,(((IData)(1U) + (((0U 
                                                == (IData)(vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr))
                                                ? 0xffffffffU
                                                : (~ 
                                                   vlSelfRef.tb_all__DOT__dut__DOT__block_regfile__DOT__Reg
                                                   [vlSelfRef.tb_all__DOT__dut__DOT____Vcellinp__block_regfile__i_rs2_addr])) 
                                              + vlSelfRef.tb_all__DOT__dut__DOT__rs1_data))),32);
    bufp->fullIData(oldp+123,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__data_out_1),32);
    bufp->fullIData(oldp+124,((((~ (IData)(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren)) 
                                & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__en_op_buf))
                                ? vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__outputperiph__DOT__data_tmp
                                : 0U)),32);
    bufp->fullIData(oldp+125,(((IData)(vlSelfRef.tb_all__DOT____Vcellinp__dut__i_rst)
                                ? 0U : vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__INPUT)),32);
    bufp->fullIData(oldp+126,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__INPUT),32);
    bufp->fullBit(oldp+127,(((~ (IData)(vlSelfRef.tb_all__DOT__dut__DOT__mem_wren)) 
                             & (IData)(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT____VdfgRegularize_h537b932d_0_0))));
    bufp->fullBit(oldp+128,(vlSelfRef.tb_all__DOT__dut__DOT__block_lsu__DOT__mem_sdram__DOT__cnt_stall));
}
