// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_mem_tb.h for the primary calling header

#ifndef VERILATED_VDATA_MEM_TB___024ROOT_H_
#define VERILATED_VDATA_MEM_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdata_mem_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_mem_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ data_mem_tb__DOT__i_clk;
        CData/*0:0*/ data_mem_tb__DOT__i_rst;
        CData/*0:0*/ data_mem_tb__DOT__i_rden;
        CData/*0:0*/ data_mem_tb__DOT__i_wren;
        CData/*0:0*/ data_mem_tb__DOT__o_stall;
        CData/*0:0*/ data_mem_tb__DOT__o_SRAM_CE_N;
        CData/*0:0*/ data_mem_tb__DOT__o_SRAM_WE_N;
        CData/*0:0*/ data_mem_tb__DOT__o_SRAM_LB_N;
        CData/*0:0*/ data_mem_tb__DOT__o_SRAM_UB_N;
        CData/*0:0*/ data_mem_tb__DOT__o_SRAM_OE_N;
        CData/*0:0*/ data_mem_tb__DOT__dut__DOT__ACK;
        CData/*0:0*/ data_mem_tb__DOT__dut__DOT__rd_mem;
        CData/*0:0*/ data_mem_tb__DOT__dut__DOT__wr_mem;
        CData/*0:0*/ data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_1;
        CData/*0:0*/ data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_2;
        CData/*3:0*/ data_mem_tb__DOT__dut__DOT__cachemem__DOT__current_state;
        CData/*3:0*/ data_mem_tb__DOT__dut__DOT__cachemem__DOT__nxt_state;
        CData/*2:0*/ data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_d;
        CData/*2:0*/ data_mem_tb__DOT__dut__DOT__sram_mem__DOT__sram_state_q;
        CData/*3:0*/ data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_d;
        CData/*3:0*/ data_mem_tb__DOT__dut__DOT__sram_mem__DOT__bmask_q;
        CData/*0:0*/ __VdlySet__data_mem_tb__DOT__i_clk__v0;
        CData/*0:0*/ __VdlySet__data_mem_tb__DOT__i_clk__v1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_1__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_2__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_1__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__hit_miss_2__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__data_mem_tb__DOT__i_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__data_mem_tb__DOT__i_rst__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out1;
        SData/*15:0*/ data_mem_tb__DOT__dut__DOT__sram_mem__DOT__DOUT__strong__out2;
        IData/*31:0*/ data_mem_tb__DOT__i_addr;
        IData/*31:0*/ data_mem_tb__DOT__i_data;
        IData/*31:0*/ data_mem_tb__DOT__o_data;
        IData/*31:0*/ data_mem_tb__DOT__dut__DOT__addr_mem;
        IData/*31:0*/ data_mem_tb__DOT__dut__DOT__wr_mem_data;
        IData/*31:0*/ data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_1;
        IData/*31:0*/ data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_q_2;
        IData/*31:0*/ data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_1;
        IData/*31:0*/ data_mem_tb__DOT__dut__DOT__cachemem__DOT__mem_d_2;
        IData/*31:0*/ data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_1;
        IData/*31:0*/ data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_d_2;
        IData/*31:0*/ data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_1;
        IData/*31:0*/ data_mem_tb__DOT__dut__DOT__cachemem__DOT__addr_q_2;
        IData/*17:0*/ data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_d;
        IData/*17:0*/ data_mem_tb__DOT__dut__DOT__sram_mem__DOT__addr_q;
        IData/*31:0*/ data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_d;
        IData/*31:0*/ data_mem_tb__DOT__dut__DOT__sram_mem__DOT__wdata_q;
        IData/*31:0*/ data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_d;
        IData/*31:0*/ data_mem_tb__DOT__dut__DOT__sram_mem__DOT__rdata_q;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 64> data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1;
        VlUnpacked<IData/*31:0*/, 64> data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2;
        VlUnpacked<IData/*22:0*/, 64> data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_1;
        VlUnpacked<IData/*22:0*/, 64> data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_2;
        VlUnpacked<CData/*0:0*/, 64> data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_1;
        VlUnpacked<CData/*0:0*/, 64> data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_2;
        VlUnpacked<CData/*0:0*/, 64> data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_1;
        VlUnpacked<CData/*0:0*/, 64> data_mem_tb__DOT__dut__DOT__cachemem__DOT__dirty_2;
        VlUnpacked<CData/*0:0*/, 64> data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_1;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 64> data_mem_tb__DOT__dut__DOT__cachemem__DOT__lru_2;
        VlUnpacked<IData/*31:0*/, 64> __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1__0;
        VlUnpacked<IData/*31:0*/, 64> __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2__0;
        VlUnpacked<CData/*0:0*/, 64> __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_1__0;
        VlUnpacked<CData/*0:0*/, 64> __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_2__0;
        VlUnpacked<IData/*22:0*/, 64> __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_1__0;
        VlUnpacked<IData/*22:0*/, 64> __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_2__0;
        VlUnpacked<IData/*31:0*/, 64> __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_1__1;
        VlUnpacked<IData/*31:0*/, 64> __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__cache_mem_2__1;
        VlUnpacked<CData/*0:0*/, 64> __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_1__1;
        VlUnpacked<CData/*0:0*/, 64> __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__valid_2__1;
        VlUnpacked<IData/*22:0*/, 64> __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_1__1;
        VlUnpacked<IData/*22:0*/, 64> __Vtrigprevexpr___TOP__data_mem_tb__DOT__dut__DOT__cachemem__DOT__tag_2__1;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<9> __VstlTriggered;
    VlTriggerVec<11> __VactTriggered;
    VlTriggerVec<11> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdata_mem_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_mem_tb___024root(Vdata_mem_tb__Syms* symsp, const char* v__name);
    ~Vdata_mem_tb___024root();
    VL_UNCOPYABLE(Vdata_mem_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
