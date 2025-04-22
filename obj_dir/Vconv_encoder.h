// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCONV_ENCODER_H_
#define _VCONV_ENCODER_H_  // guard

#include "verilated_heavy.h"
#include "Vconv_encoder__Dpi.h"

//==========

class Vconv_encoder__Syms;
class Vconv_encoder_VerilatedVcd;


//----------

VL_MODULE(Vconv_encoder) {
  public:
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ testbench__DOT__clk;
    CData/*0:0*/ testbench__DOT__rst_n;
    CData/*0:0*/ testbench__DOT__data_in;
    CData/*1:0*/ testbench__DOT__dut_output;
    CData/*2:0*/ testbench__DOT__dut__DOT__shift_reg;
    IData/*31:0*/ testbench__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    CData/*0:0*/ testbench__DOT__unnamedblk1__DOT__input_bits[4];
    CData/*0:0*/ testbench__DOT__unnamedblk1__DOT__model_bits[8];
    CData/*1:0*/ testbench__DOT__unnamedblk1__DOT__expected_bits[4];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __VinpClk__TOP__testbench__DOT__rst_n;
    CData/*0:0*/ __Vclklast__TOP__testbench__DOT__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__testbench__DOT__rst_n;
    CData/*0:0*/ __Vchglast__TOP__testbench__DOT__rst_n;
    CData/*0:0*/ __Vm_traceActivity[1];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vconv_encoder__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vconv_encoder);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vconv_encoder(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vconv_encoder();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
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
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vconv_encoder__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vconv_encoder__Syms* symsp, bool first);
    void __Vdpiimwrap_testbench__DOT__conv_encoder_dpi__Vdpioc2_TOP(const CData/*0:0*/ (&input_bits)[4], CData/*0:0*/ (&output_bits)[8]);
  private:
    static QData _change_request(Vconv_encoder__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vconv_encoder__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vconv_encoder__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vconv_encoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vconv_encoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vconv_encoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__4(Vconv_encoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vconv_encoder__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vconv_encoder__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
