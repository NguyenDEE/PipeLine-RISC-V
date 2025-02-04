// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_all__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_all::Vtb_all(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_all__Syms(contextp(), _vcname__, this)}
    , CLOCK_50{vlSymsp->TOP.CLOCK_50}
    , KEY{vlSymsp->TOP.KEY}
    , HEX0{vlSymsp->TOP.HEX0}
    , HEX1{vlSymsp->TOP.HEX1}
    , HEX2{vlSymsp->TOP.HEX2}
    , HEX3{vlSymsp->TOP.HEX3}
    , HEX4{vlSymsp->TOP.HEX4}
    , HEX5{vlSymsp->TOP.HEX5}
    , HEX6{vlSymsp->TOP.HEX6}
    , HEX7{vlSymsp->TOP.HEX7}
    , LCD_DATA{vlSymsp->TOP.LCD_DATA}
    , LCD_RW{vlSymsp->TOP.LCD_RW}
    , LCD_EN{vlSymsp->TOP.LCD_EN}
    , LCD_RS{vlSymsp->TOP.LCD_RS}
    , LCD_ON{vlSymsp->TOP.LCD_ON}
    , LEDG{vlSymsp->TOP.LEDG}
    , SW{vlSymsp->TOP.SW}
    , LEDR{vlSymsp->TOP.LEDR}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_all::Vtb_all(const char* _vcname__)
    : Vtb_all(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_all::~Vtb_all() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_all___024root___eval_debug_assertions(Vtb_all___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_all___024root___eval_static(Vtb_all___024root* vlSelf);
void Vtb_all___024root___eval_initial(Vtb_all___024root* vlSelf);
void Vtb_all___024root___eval_settle(Vtb_all___024root* vlSelf);
void Vtb_all___024root___eval(Vtb_all___024root* vlSelf);

void Vtb_all::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_all::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_all___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_all___024root___eval_static(&(vlSymsp->TOP));
        Vtb_all___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_all___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_all___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_all::eventsPending() { return false; }

uint64_t Vtb_all::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_all::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_all___024root___eval_final(Vtb_all___024root* vlSelf);

VL_ATTR_COLD void Vtb_all::final() {
    Vtb_all___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_all::hierName() const { return vlSymsp->name(); }
const char* Vtb_all::modelName() const { return "Vtb_all"; }
unsigned Vtb_all::threads() const { return 1; }
void Vtb_all::prepareClone() const { contextp()->prepareClone(); }
void Vtb_all::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_all::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_all___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_all___024root__trace_init_top(Vtb_all___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_all___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_all___024root*>(voidSelf);
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_all___024root__trace_decl_types(tracep);
    Vtb_all___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_all___024root__trace_register(Vtb_all___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_all::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_all::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_all___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
