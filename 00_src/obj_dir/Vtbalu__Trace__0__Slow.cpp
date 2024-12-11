// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtbalu__Syms.h"


VL_ATTR_COLD void Vtbalu___024root__trace_init_sub__TOP__0(Vtbalu___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tbalu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i_operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"i_operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"i_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,0,"o_alu_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i_operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"i_operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"i_alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,0,"o_alu_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"A_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+45,0,"A_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"A_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"A_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"A_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+49,0,"A_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+50,0,"A_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"A_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"A_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"A_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,0,"A_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"carryFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"overFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"srl_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"srr_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"sra_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("shiftl_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i_rs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"i_amount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"b_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"b_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"b_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"b_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("shift_16bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_1bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_2bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+23,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_4bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_8bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("shiftr_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i_rs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"i_amount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"b_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"b_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"b_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"b_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("shift_16bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_1bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+30,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_2bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_4bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+32,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_8bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("shiftra_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i_rs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"i_amount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"b_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"b_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"b_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"b_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("shift_16bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_1bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_2bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+39,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_4bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_8bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+41,0,"data_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"data_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtbalu___024root__trace_init_top(Vtbalu___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtbalu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtbalu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtbalu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtbalu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtbalu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtbalu___024root__trace_register(Vtbalu___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtbalu___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtbalu___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtbalu___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtbalu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtbalu___024root__trace_const_0_sub_0(Vtbalu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtbalu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root__trace_const_0\n"); );
    // Init
    Vtbalu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbalu___024root*>(voidSelf);
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtbalu___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtbalu___024root__trace_const_0_sub_0(Vtbalu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+44,(0U),4);
    bufp->fullCData(oldp+45,(1U),4);
    bufp->fullCData(oldp+46,(2U),4);
    bufp->fullCData(oldp+47,(3U),4);
    bufp->fullCData(oldp+48,(4U),4);
    bufp->fullCData(oldp+49,(5U),4);
    bufp->fullCData(oldp+50,(6U),4);
    bufp->fullCData(oldp+51,(7U),4);
    bufp->fullCData(oldp+52,(8U),4);
    bufp->fullCData(oldp+53,(9U),4);
    bufp->fullCData(oldp+54,(0xaU),4);
}

VL_ATTR_COLD void Vtbalu___024root__trace_full_0_sub_0(Vtbalu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtbalu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root__trace_full_0\n"); );
    // Init
    Vtbalu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbalu___024root*>(voidSelf);
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtbalu___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtbalu___024root__trace_full_0_sub_0(Vtbalu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbalu___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.tbalu__DOT__i_operand_a),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tbalu__DOT__i_operand_b),32);
    bufp->fullCData(oldp+3,(vlSelfRef.tbalu__DOT__i_alu_op),4);
    bufp->fullIData(oldp+4,(((IData)(1U) + ((~ vlSelfRef.tbalu__DOT__i_operand_b) 
                                            + vlSelfRef.tbalu__DOT__i_operand_a))),32);
    bufp->fullCData(oldp+5,((0x1fU & vlSelfRef.tbalu__DOT__i_operand_b)),5);
    bufp->fullIData(oldp+6,(VL_SHIFTL_III(32,32,32, vlSelfRef.tbalu__DOT__i_operand_a, 0x10U)),32);
    bufp->fullBit(oldp+7,((1U & (vlSelfRef.tbalu__DOT__i_operand_b 
                                 >> 4U))));
    bufp->fullBit(oldp+8,((1U & vlSelfRef.tbalu__DOT__i_operand_b)));
    bufp->fullBit(oldp+9,((1U & (vlSelfRef.tbalu__DOT__i_operand_b 
                                 >> 1U))));
    bufp->fullBit(oldp+10,((1U & (vlSelfRef.tbalu__DOT__i_operand_b 
                                  >> 2U))));
    bufp->fullBit(oldp+11,((1U & (vlSelfRef.tbalu__DOT__i_operand_b 
                                  >> 3U))));
    bufp->fullIData(oldp+12,(VL_SHIFTR_III(32,32,32, vlSelfRef.tbalu__DOT__i_operand_a, 0x10U)),32);
    bufp->fullIData(oldp+13,((((- (IData)((vlSelfRef.tbalu__DOT__i_operand_a 
                                           >> 0x1fU))) 
                               << 0x10U) | (vlSelfRef.tbalu__DOT__i_operand_a 
                                            >> 0x10U))),32);
    bufp->fullBit(oldp+14,(vlSelfRef.tbalu__DOT__dut__DOT__carryFlag));
    bufp->fullIData(oldp+15,(vlSelfRef.tbalu__DOT__dut__DOT__srl_tmp),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tbalu__DOT__dut__DOT__srr_tmp),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tbalu__DOT__dut__DOT__sra_tmp),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_1),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_2),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_3),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_4),32);
    bufp->fullIData(oldp+22,(VL_SHIFTL_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_4, 1U)),32);
    bufp->fullIData(oldp+23,(VL_SHIFTL_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_3, 2U)),32);
    bufp->fullIData(oldp+24,(VL_SHIFTL_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_2, 4U)),32);
    bufp->fullIData(oldp+25,(VL_SHIFTL_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftl_1__DOT__b_1, 8U)),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_1),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_2),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_3),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_4),32);
    bufp->fullIData(oldp+30,(VL_SHIFTR_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_4, 1U)),32);
    bufp->fullIData(oldp+31,(VL_SHIFTR_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_3, 2U)),32);
    bufp->fullIData(oldp+32,(VL_SHIFTR_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_2, 4U)),32);
    bufp->fullIData(oldp+33,(VL_SHIFTR_III(32,32,32, vlSelfRef.tbalu__DOT__dut__DOT__shiftr_1__DOT__b_1, 8U)),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_1),32);
    bufp->fullIData(oldp+35,(vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_2),32);
    bufp->fullIData(oldp+36,(vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_3),32);
    bufp->fullIData(oldp+37,(vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_4),32);
    bufp->fullIData(oldp+38,(((0x80000000U & vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_4) 
                              | (vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_4 
                                 >> 1U))),32);
    bufp->fullIData(oldp+39,((((- (IData)((vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_3 
                                           >> 0x1fU))) 
                               << 0x1eU) | (vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_3 
                                            >> 2U))),32);
    bufp->fullIData(oldp+40,((((- (IData)((vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_2 
                                           >> 0x1fU))) 
                               << 0x1cU) | (vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_2 
                                            >> 4U))),32);
    bufp->fullIData(oldp+41,((((- (IData)((vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_1 
                                           >> 0x1fU))) 
                               << 0x18U) | (vlSelfRef.tbalu__DOT__dut__DOT__shiftra_1__DOT__b_1 
                                            >> 8U))),32);
    bufp->fullIData(oldp+42,(((8U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                               ? ((4U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                   ? 0U : ((2U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                                ? 0U
                                                : vlSelfRef.tbalu__DOT__i_operand_b)
                                            : ((1U 
                                                & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                                ? vlSelfRef.tbalu__DOT__dut__DOT__sra_tmp
                                                : vlSelfRef.tbalu__DOT__dut__DOT__srr_tmp)))
                               : ((4U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                   ? ((2U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                       ? ((1U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                           ? vlSelfRef.tbalu__DOT__dut__DOT__srl_tmp
                                           : (vlSelfRef.tbalu__DOT__i_operand_a 
                                              & vlSelfRef.tbalu__DOT__i_operand_b))
                                       : ((1U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                           ? (vlSelfRef.tbalu__DOT__i_operand_a 
                                              | vlSelfRef.tbalu__DOT__i_operand_b)
                                           : (vlSelfRef.tbalu__DOT__i_operand_a 
                                              ^ vlSelfRef.tbalu__DOT__i_operand_b)))
                                   : ((2U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                       ? ((1U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                           ? (IData)(vlSelfRef.tbalu__DOT__dut__DOT__carryFlag)
                                           : (1U & 
                                              (((vlSelfRef.tbalu__DOT__i_operand_a 
                                                 >> 0x1fU) 
                                                == 
                                                (vlSelfRef.tbalu__DOT__i_operand_b 
                                                 >> 0x1fU))
                                                ? (IData)(vlSelfRef.tbalu__DOT__dut__DOT__carryFlag)
                                                : (vlSelfRef.tbalu__DOT__i_operand_a 
                                                   >> 0x1fU))))
                                       : ((1U & (IData)(vlSelfRef.tbalu__DOT__i_alu_op))
                                           ? ((IData)(1U) 
                                              + ((~ vlSelfRef.tbalu__DOT__i_operand_b) 
                                                 + vlSelfRef.tbalu__DOT__i_operand_a))
                                           : (vlSelfRef.tbalu__DOT__i_operand_a 
                                              + vlSelfRef.tbalu__DOT__i_operand_b)))))),32);
    bufp->fullBit(oldp+43,((1U & (((vlSelfRef.tbalu__DOT__i_operand_a 
                                    >> 0x1fU) == (vlSelfRef.tbalu__DOT__i_operand_b 
                                                  >> 0x1fU))
                                   ? (IData)(vlSelfRef.tbalu__DOT__dut__DOT__carryFlag)
                                   : (vlSelfRef.tbalu__DOT__i_operand_a 
                                      >> 0x1fU)))));
}
