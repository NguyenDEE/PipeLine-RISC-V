// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VEXECUTE_CYCLE_H_
#define VERILATED_VEXECUTE_CYCLE_H_  // guard

#include "verilated.h"

class Vexecute_cycle__Syms;
class Vexecute_cycle___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vexecute_cycle VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vexecute_cycle__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&i_clk,0,0);
    VL_IN8(&i_rst,0,0);
    VL_IN8(&i_enb_E,0,0);
    VL_IN8(&i_ins_n_vld_E,0,0);
    VL_IN8(&i_slt_sl_E,2,0);
    VL_IN8(&i_rd_wren_E,0,0);
    VL_IN8(&i_op_a_sel_E,0,0);
    VL_IN8(&i_op_b_sel_E,0,0);
    VL_IN8(&i_alu_op_E,3,0);
    VL_IN8(&i_mem_wren_E,0,0);
    VL_IN8(&i_wb_sel_E,1,0);
    VL_IN8(&i_forwardA_E,1,0);
    VL_IN8(&i_forwardB_E,1,0);
    VL_OUT8(&o_ins_n_vld_M,0,0);
    VL_OUT8(&o_slt_sl_M,2,0);
    VL_OUT8(&o_rd_wren_M,0,0);
    VL_OUT8(&o_mem_wren_M,0,0);
    VL_OUT8(&o_wb_sel_M,1,0);
    VL_IN(&i_pc_E,31,0);
    VL_IN(&i_pc_4_E,31,0);
    VL_IN(&i_imm_E,31,0);
    VL_IN(&i_rs1_data_E,31,0);
    VL_IN(&i_rs2_data_E,31,0);
    VL_IN(&i_alu_data_M,31,0);
    VL_IN(&i_rs_W,31,0);
    VL_OUT(&o_pc_4_M,31,0);
    VL_OUT(&o_alu_data_M,31,0);
    VL_OUT(&o_rs2_data_M,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vexecute_cycle___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vexecute_cycle(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vexecute_cycle(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vexecute_cycle();
  private:
    VL_UNCOPYABLE(Vexecute_cycle);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
