// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmem_cycle.h for the primary calling header

#ifndef VERILATED_VMEM_CYCLE___024ROOT_H_
#define VERILATED_VMEM_CYCLE___024ROOT_H_  // guard

#include "verilated.h"


class Vmem_cycle__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmem_cycle___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(i_clk,0,0);
        VL_IN8(i_rst,0,0);
        VL_IN8(i_enb_M,0,0);
        VL_IN8(i_ins_n_vld_M,0,0);
        VL_IN8(i_slt_sl_M,2,0);
        VL_IN8(i_rd_wren_M,0,0);
        VL_IN8(i_mem_wren_M,0,0);
        VL_IN8(i_wb_sel_M,1,0);
        VL_IN8(i_io_btn,3,0);
        VL_OUT8(o_stall_M,0,0);
        VL_OUT8(o_SRAM_CE_N,0,0);
        VL_OUT8(o_SRAM_WE_N,0,0);
        VL_OUT8(o_SRAM_LB_N,0,0);
        VL_OUT8(o_SRAM_UB_N,0,0);
        VL_OUT8(o_SRAM_OE_N,0,0);
        VL_OUT8(o_io_hex0,6,0);
        VL_OUT8(o_io_hex1,6,0);
        VL_OUT8(o_io_hex2,6,0);
        VL_OUT8(o_io_hex3,6,0);
        VL_OUT8(o_io_hex4,6,0);
        VL_OUT8(o_io_hex5,6,0);
        VL_OUT8(o_io_hex6,6,0);
        VL_OUT8(o_io_hex7,6,0);
        VL_OUT8(o_ins_n_vld_W,0,0);
        VL_OUT8(o_rd_wren_W,0,0);
        VL_OUT8(o_wb_sel_W,1,0);
        CData/*0:0*/ mem_cycle__DOT__stall_M;
        CData/*0:0*/ mem_cycle__DOT__reg_stall_M;
        CData/*0:0*/ mem_cycle__DOT__reg_ins_n_vld_M;
        CData/*0:0*/ mem_cycle__DOT__reg_rd_wren_M;
        CData/*1:0*/ mem_cycle__DOT__reg_wb_sel_M;
        CData/*6:0*/ mem_cycle__DOT__reg_io_hex0;
        CData/*6:0*/ mem_cycle__DOT__reg_io_hex1;
        CData/*6:0*/ mem_cycle__DOT__reg_io_hex2;
        CData/*6:0*/ mem_cycle__DOT__reg_io_hex3;
        CData/*6:0*/ mem_cycle__DOT__reg_io_hex4;
        CData/*6:0*/ mem_cycle__DOT__reg_io_hex5;
        CData/*6:0*/ mem_cycle__DOT__reg_io_hex6;
        CData/*6:0*/ mem_cycle__DOT__reg_io_hex7;
        CData/*0:0*/ mem_cycle__DOT__lsu_mem__DOT__en_op_buf;
        CData/*0:0*/ mem_cycle__DOT__lsu_mem__DOT__read_signal;
        CData/*0:0*/ mem_cycle__DOT__lsu_mem__DOT__write_signal;
        CData/*0:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__ACK;
        CData/*0:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__rd_mem;
        CData/*0:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem;
        CData/*0:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1;
        CData/*0:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2;
        CData/*3:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__current_state;
        CData/*3:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__nxt_state;
        CData/*2:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_d;
        CData/*2:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__sram_state_q;
        CData/*3:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_d;
        CData/*3:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__bmask_q;
        CData/*1:0*/ mem_cycle__DOT__lsu_mem__DOT__mux31__DOT__addr_sel;
        CData/*0:0*/ __VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0;
        CData/*0:0*/ __VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1;
        CData/*0:0*/ __VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2;
        CData/*0:0*/ __VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3;
        CData/*0:0*/ __VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4;
        CData/*0:0*/ __VdlySet__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5;
        CData/*0:0*/ __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__1;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_1__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__hit_miss_2__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__i_rst__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_INOUT16(o_SRAM_DQ,15,0);
        SData/*15:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out1;
        SData/*15:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__DOUT__strong__out2;
        VL_IN(i_pc_4_M,31,0);
        VL_IN(i_alu_data_M,31,0);
        VL_IN(i_rs2_data_M,31,0);
        VL_IN(i_io_sw,31,0);
        VL_OUT(o_SRAM_ADDR,17,0);
        VL_OUT(o_ld_data_W,31,0);
        VL_OUT(o_io_ledr,31,0);
        VL_OUT(o_io_ledg,31,0);
        VL_OUT(o_io_lcd,31,0);
        VL_OUT(o_pc_4_W,31,0);
        VL_OUT(o_alu_data_W,31,0);
        IData/*31:0*/ mem_cycle__DOT__reg_ld_data_M;
        IData/*31:0*/ mem_cycle__DOT__reg_pc_4_M;
        IData/*31:0*/ mem_cycle__DOT__reg_alu_data_M;
        IData/*31:0*/ mem_cycle__DOT__reg_io_ledr;
        IData/*31:0*/ mem_cycle__DOT__reg_io_ledg;
        IData/*31:0*/ mem_cycle__DOT__reg_io_lcd;
        IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__data_out_1;
        IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__INPUT;
        IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__addr_mem;
        IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__wr_mem_data;
        IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_1;
        IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__mem_q_2;
        IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_1;
        IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__addr_q_2;
        IData/*17:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_d;
        IData/*17:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__addr_q;
        IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_d;
        IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__wdata_q;
        IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_d;
        IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__sram_mem__DOT__rdata_q;
        IData/*31:0*/ mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__data_tmp;
        IData/*31:0*/ __VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v0;
        IData/*31:0*/ __VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v1;
        IData/*31:0*/ __VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v2;
        IData/*31:0*/ __VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v3;
        IData/*31:0*/ __VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v4;
        IData/*31:0*/ __VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v5;
        IData/*31:0*/ __VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v6;
        IData/*31:0*/ __VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v7;
        IData/*31:0*/ __VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v8;
        IData/*31:0*/ __VdlyVal__mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF__v9;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 512> mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1;
        VlUnpacked<IData/*31:0*/, 512> mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2;
        VlUnpacked<IData/*20:0*/, 512> mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1;
        VlUnpacked<IData/*20:0*/, 512> mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2;
        VlUnpacked<CData/*0:0*/, 512> mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1;
        VlUnpacked<CData/*0:0*/, 512> mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2;
        VlUnpacked<CData/*0:0*/, 512> mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_1;
        VlUnpacked<CData/*0:0*/, 512> mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__dirty_2;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 512> mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__lru_1;
        VlUnpacked<IData/*31:0*/, 5> mem_cycle__DOT__lsu_mem__DOT__outputperiph__DOT__MEMBF;
        VlUnpacked<IData/*31:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__0;
        VlUnpacked<IData/*31:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__0;
        VlUnpacked<CData/*0:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__0;
        VlUnpacked<CData/*0:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__0;
        VlUnpacked<IData/*20:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__0;
        VlUnpacked<IData/*20:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__0;
        VlUnpacked<IData/*31:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__1;
        VlUnpacked<IData/*31:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__1;
        VlUnpacked<CData/*0:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__1;
        VlUnpacked<CData/*0:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__1;
        VlUnpacked<IData/*20:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__1;
        VlUnpacked<IData/*20:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__1;
        VlUnpacked<IData/*31:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_1__2;
        VlUnpacked<IData/*31:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__cache_mem_2__2;
        VlUnpacked<CData/*0:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_1__2;
        VlUnpacked<CData/*0:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__valid_2__2;
        VlUnpacked<IData/*20:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_1__2;
        VlUnpacked<IData/*20:0*/, 512> __Vtrigprevexpr___TOP__mem_cycle__DOT__lsu_mem__DOT__lsu_mem__DOT__cachemem__DOT__tag_2__2;
    };
    VlTriggerVec<9> __VstlTriggered;
    VlTriggerVec<9> __VicoTriggered;
    VlTriggerVec<10> __VactTriggered;
    VlTriggerVec<10> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmem_cycle__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmem_cycle___024root(Vmem_cycle__Syms* symsp, const char* v__name);
    ~Vmem_cycle___024root();
    VL_UNCOPYABLE(Vmem_cycle___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
