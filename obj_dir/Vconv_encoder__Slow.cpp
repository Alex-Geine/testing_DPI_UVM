// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconv_encoder.h for the primary calling header

#include "Vconv_encoder.h"
#include "Vconv_encoder__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vconv_encoder) {
    Vconv_encoder__Syms* __restrict vlSymsp = __VlSymsp = new Vconv_encoder__Syms(this, name());
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vconv_encoder::__Vconfigure(Vconv_encoder__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vconv_encoder::~Vconv_encoder() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vconv_encoder::_initial__TOP__1(Vconv_encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv_encoder::_initial__TOP__1\n"); );
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->testbench__DOT__clk = 0U;
}

void Vconv_encoder::_settle__TOP__3(Vconv_encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv_encoder::_settle__TOP__3\n"); );
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->testbench__DOT__dut_output = ((2U & (IData)(vlTOPp->testbench__DOT__dut_output)) 
                                          | (1U & (
                                                   ((IData)(vlTOPp->testbench__DOT__dut__DOT__shift_reg) 
                                                    >> 2U) 
                                                   ^ (IData)(vlTOPp->testbench__DOT__dut__DOT__shift_reg))));
    vlTOPp->testbench__DOT__dut_output = ((1U & (IData)(vlTOPp->testbench__DOT__dut_output)) 
                                          | (2U & (
                                                   (0x7ffffffeU 
                                                    & ((IData)(vlTOPp->testbench__DOT__dut__DOT__shift_reg) 
                                                       >> 1U)) 
                                                   ^ 
                                                   (0xfffffffeU 
                                                    & (IData)(vlTOPp->testbench__DOT__dut__DOT__shift_reg)))));
}

void Vconv_encoder::_initial__TOP__4(Vconv_encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv_encoder::_initial__TOP__4\n"); );
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vtask_testbench__DOT__conv_encoder_dpi__Vdpioc2__0__output_bits[8];
    // Body
    vlTOPp->testbench__DOT__unnamedblk1__DOT__input_bits[0U] = 1U;
    vlTOPp->testbench__DOT__unnamedblk1__DOT__input_bits[1U] = 0U;
    vlTOPp->testbench__DOT__unnamedblk1__DOT__input_bits[2U] = 1U;
    vlTOPp->testbench__DOT__unnamedblk1__DOT__input_bits[3U] = 1U;
    vlTOPp->testbench__DOT__rst_n = 1U;
    vlTOPp->__Vdpiimwrap_testbench__DOT__conv_encoder_dpi__Vdpioc2_TOP(vlTOPp->testbench__DOT__unnamedblk1__DOT__input_bits, __Vtask_testbench__DOT__conv_encoder_dpi__Vdpioc2__0__output_bits);
    vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[0U] 
        = __Vtask_testbench__DOT__conv_encoder_dpi__Vdpioc2__0__output_bits
        [0U];
    vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[1U] 
        = __Vtask_testbench__DOT__conv_encoder_dpi__Vdpioc2__0__output_bits
        [1U];
    vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[2U] 
        = __Vtask_testbench__DOT__conv_encoder_dpi__Vdpioc2__0__output_bits
        [2U];
    vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[3U] 
        = __Vtask_testbench__DOT__conv_encoder_dpi__Vdpioc2__0__output_bits
        [3U];
    vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[4U] 
        = __Vtask_testbench__DOT__conv_encoder_dpi__Vdpioc2__0__output_bits
        [4U];
    vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[5U] 
        = __Vtask_testbench__DOT__conv_encoder_dpi__Vdpioc2__0__output_bits
        [5U];
    vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[6U] 
        = __Vtask_testbench__DOT__conv_encoder_dpi__Vdpioc2__0__output_bits
        [6U];
    vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[7U] 
        = __Vtask_testbench__DOT__conv_encoder_dpi__Vdpioc2__0__output_bits
        [7U];
    vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits[0U] 
        = ((vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits
            [1U] << 1U) | vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits
           [0U]);
    if (VL_UNLIKELY(((IData)(vlTOPp->testbench__DOT__dut_output) 
                     != vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits
                     [0U]))) {
        VL_WRITEF("ERROR: Mismatch at bit 0! Model: %b, DUT: %b\n",
                  2,vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits
                  [0U],2,vlTOPp->testbench__DOT__dut_output);
        VL_FINISH_MT("tb/testbench.sv", 49, "");
    } else {
        VL_WRITEF("Bit 0: OK (Model=%b, DUT=%b)\n",
                  2,vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits
                  [0U],2,vlTOPp->testbench__DOT__dut_output);
    }
    vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits[1U] 
        = ((vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits
            [3U] << 1U) | vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits
           [2U]);
    if (VL_UNLIKELY(((IData)(vlTOPp->testbench__DOT__dut_output) 
                     != vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits
                     [1U]))) {
        VL_WRITEF("ERROR: Mismatch at bit 1! Model: %b, DUT: %b\n",
                  2,vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits
                  [1U],2,vlTOPp->testbench__DOT__dut_output);
        VL_FINISH_MT("tb/testbench.sv", 49, "");
    } else {
        VL_WRITEF("Bit 1: OK (Model=%b, DUT=%b)\n",
                  2,vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits
                  [1U],2,vlTOPp->testbench__DOT__dut_output);
    }
    vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits[2U] 
        = ((vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits
            [5U] << 1U) | vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits
           [4U]);
    if (VL_UNLIKELY(((IData)(vlTOPp->testbench__DOT__dut_output) 
                     != vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits
                     [2U]))) {
        VL_WRITEF("ERROR: Mismatch at bit 2! Model: %b, DUT: %b\n",
                  2,vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits
                  [2U],2,vlTOPp->testbench__DOT__dut_output);
        VL_FINISH_MT("tb/testbench.sv", 49, "");
    } else {
        VL_WRITEF("Bit 2: OK (Model=%b, DUT=%b)\n",
                  2,vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits
                  [2U],2,vlTOPp->testbench__DOT__dut_output);
    }
    vlTOPp->testbench__DOT__data_in = vlTOPp->testbench__DOT__unnamedblk1__DOT__input_bits
        [3U];
    vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits[3U] 
        = ((vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits
            [7U] << 1U) | vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits
           [6U]);
    if (VL_UNLIKELY(((IData)(vlTOPp->testbench__DOT__dut_output) 
                     != vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits
                     [3U]))) {
        VL_WRITEF("ERROR: Mismatch at bit 3! Model: %b, DUT: %b\n",
                  2,vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits
                  [3U],2,vlTOPp->testbench__DOT__dut_output);
        VL_FINISH_MT("tb/testbench.sv", 49, "");
    } else {
        VL_WRITEF("Bit 3: OK (Model=%b, DUT=%b)\n",
                  2,vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits
                  [3U],2,vlTOPp->testbench__DOT__dut_output);
    }
    vlTOPp->testbench__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
    VL_WRITEF("TEST PASSED!\n");
    VL_FINISH_MT("tb/testbench.sv", 57, "");
}

void Vconv_encoder::_eval_initial(Vconv_encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv_encoder::_eval_initial\n"); );
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__testbench__DOT__clk = 0U;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__testbench__DOT__rst_n 
        = vlTOPp->__VinpClk__TOP__testbench__DOT__rst_n;
    vlTOPp->_initial__TOP__4(vlSymsp);
}

void Vconv_encoder::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv_encoder::final\n"); );
    // Variables
    Vconv_encoder__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vconv_encoder::_eval_settle(Vconv_encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv_encoder::_eval_settle\n"); );
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vconv_encoder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv_encoder::_ctor_var_reset\n"); );
    // Body
    testbench__DOT__clk = VL_RAND_RESET_I(1);
    testbench__DOT__rst_n = VL_RAND_RESET_I(1);
    testbench__DOT__data_in = VL_RAND_RESET_I(1);
    testbench__DOT__dut_output = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            testbench__DOT__unnamedblk1__DOT__input_bits[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            testbench__DOT__unnamedblk1__DOT__model_bits[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            testbench__DOT__unnamedblk1__DOT__expected_bits[__Vi0] = VL_RAND_RESET_I(2);
    }}
    testbench__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    testbench__DOT__dut__DOT__shift_reg = VL_RAND_RESET_I(3);
    __VinpClk__TOP__testbench__DOT__rst_n = VL_RAND_RESET_I(1);
    __Vchglast__TOP__testbench__DOT__rst_n = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
