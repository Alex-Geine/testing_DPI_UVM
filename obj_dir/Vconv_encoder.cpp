// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconv_encoder.h for the primary calling header

#include "Vconv_encoder.h"
#include "Vconv_encoder__Syms.h"

#include "verilated_dpi.h"

//==========

void Vconv_encoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconv_encoder::eval\n"); );
    Vconv_encoder__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("tb/testbench.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vconv_encoder::_eval_initial_loop(Vconv_encoder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("tb/testbench.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vconv_encoder::__Vdpiimwrap_testbench__DOT__conv_encoder_dpi__Vdpioc2_TOP(const CData/*0:0*/ (&input_bits)[4], CData/*0:0*/ (&output_bits)[8]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv_encoder::__Vdpiimwrap_testbench__DOT__conv_encoder_dpi__Vdpioc2_TOP\n"); );
    // Body
    static const int input_bits__Vopenprops__ulims[2] = {0, 3};
    static const VerilatedVarProps input_bits__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 0, 0, VerilatedVarProps::Unpacked(), 1, input_bits__Vopenprops__ulims);
    VerilatedDpiOpenVar input_bits__Vopenarray (&input_bits__Vopenprops, &input_bits);
    static const int output_bits__Vopenprops__ulims[2] = {0, 7};
    static const VerilatedVarProps output_bits__Vopenprops(VLVT_UINT8, VLVD_OUT, VerilatedVarProps::Packed(), 0, 0, VerilatedVarProps::Unpacked(), 1, output_bits__Vopenprops__ulims);
    VerilatedDpiOpenVar output_bits__Vopenarray (&output_bits__Vopenprops, &output_bits);
    conv_encoder_dpi(&input_bits__Vopenarray, &output_bits__Vopenarray);
}

VL_INLINE_OPT void Vconv_encoder::_sequent__TOP__2(Vconv_encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv_encoder::_sequent__TOP__2\n"); );
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->testbench__DOT__dut__DOT__shift_reg = ((IData)(vlTOPp->testbench__DOT__rst_n)
                                                    ? 
                                                   ((6U 
                                                     & ((IData)(vlTOPp->testbench__DOT__dut__DOT__shift_reg) 
                                                        << 1U)) 
                                                    | (IData)(vlTOPp->testbench__DOT__data_in))
                                                    : 0U);
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

void Vconv_encoder::_eval(Vconv_encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv_encoder::_eval\n"); );
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->testbench__DOT__clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__DOT__clk))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__testbench__DOT__rst_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__testbench__DOT__rst_n)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__testbench__DOT__clk = vlTOPp->testbench__DOT__clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__testbench__DOT__rst_n 
        = vlTOPp->__VinpClk__TOP__testbench__DOT__rst_n;
    vlTOPp->__VinpClk__TOP__testbench__DOT__rst_n = vlTOPp->testbench__DOT__rst_n;
}

VL_INLINE_OPT QData Vconv_encoder::_change_request(Vconv_encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv_encoder::_change_request\n"); );
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vconv_encoder::_change_request_1(Vconv_encoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv_encoder::_change_request_1\n"); );
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->testbench__DOT__rst_n ^ vlTOPp->__Vchglast__TOP__testbench__DOT__rst_n));
    VL_DEBUG_IF( if(__req && ((vlTOPp->testbench__DOT__rst_n ^ vlTOPp->__Vchglast__TOP__testbench__DOT__rst_n))) VL_DBG_MSGF("        CHANGE: tb/testbench.sv:8: testbench.rst_n\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__testbench__DOT__rst_n 
        = vlTOPp->testbench__DOT__rst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vconv_encoder::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv_encoder::_eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
