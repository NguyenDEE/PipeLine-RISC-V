// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VPIPELINE_H_
#define VERILATED_VPIPELINE_H_  // guard

#include "verilated.h"

class Vpipeline__Syms;
class Vpipeline___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vpipeline VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vpipeline__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&i_clk,0,0);
    VL_IN8(&i_rst,0,0);
    VL_IN8(&i_io_btn,3,0);
    VL_OUT8(&o_SRAM_CE_N,0,0);
    VL_OUT8(&o_SRAM_WE_N,0,0);
    VL_OUT8(&o_SRAM_LB_N,0,0);
    VL_OUT8(&o_SRAM_UB_N,0,0);
    VL_OUT8(&o_SRAM_OE_N,0,0);
    VL_OUT8(&o_io_hex0,6,0);
    VL_OUT8(&o_io_hex1,6,0);
    VL_OUT8(&o_io_hex2,6,0);
    VL_OUT8(&o_io_hex3,6,0);
    VL_OUT8(&o_io_hex4,6,0);
    VL_OUT8(&o_io_hex5,6,0);
    VL_OUT8(&o_io_hex6,6,0);
    VL_OUT8(&o_io_hex7,6,0);
    VL_OUT8(&o_ins_n_vld,0,0);
    VL_INOUT16(&o_SRAM_DQ,15,0);
    VL_IN(&i_io_sw,31,0);
    VL_OUT(&o_SRAM_ADDR,17,0);
    VL_OUT(&o_io_ledr,31,0);
    VL_OUT(&o_io_ledg,31,0);
    VL_OUT(&o_io_lcd,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vpipeline___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vpipeline(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vpipeline(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vpipeline();
  private:
    VL_UNCOPYABLE(Vpipeline);  ///< Copying not allowed

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
