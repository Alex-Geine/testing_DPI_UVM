// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconv_encoder__Syms.h"


void Vconv_encoder::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vconv_encoder__Syms* __restrict vlSymsp = static_cast<Vconv_encoder__Syms*>(userp);
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vconv_encoder::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vconv_encoder__Syms* __restrict vlSymsp = static_cast<Vconv_encoder__Syms*>(userp);
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(vlTOPp->testbench__DOT__clk));
            tracep->chgBit(oldp+1,(vlTOPp->testbench__DOT__rst_n));
            tracep->chgBit(oldp+2,(vlTOPp->testbench__DOT__data_in));
            tracep->chgBit(oldp+3,(vlTOPp->testbench__DOT__unnamedblk1__DOT__input_bits[0]));
            tracep->chgBit(oldp+4,(vlTOPp->testbench__DOT__unnamedblk1__DOT__input_bits[1]));
            tracep->chgBit(oldp+5,(vlTOPp->testbench__DOT__unnamedblk1__DOT__input_bits[2]));
            tracep->chgBit(oldp+6,(vlTOPp->testbench__DOT__unnamedblk1__DOT__input_bits[3]));
            tracep->chgBit(oldp+7,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[0]));
            tracep->chgBit(oldp+8,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[1]));
            tracep->chgBit(oldp+9,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[2]));
            tracep->chgBit(oldp+10,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[3]));
            tracep->chgBit(oldp+11,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[4]));
            tracep->chgBit(oldp+12,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[5]));
            tracep->chgBit(oldp+13,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[6]));
            tracep->chgBit(oldp+14,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[7]));
            tracep->chgCData(oldp+15,(vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits[0]),2);
            tracep->chgCData(oldp+16,(vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits[1]),2);
            tracep->chgCData(oldp+17,(vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits[2]),2);
            tracep->chgCData(oldp+18,(vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits[3]),2);
            tracep->chgIData(oldp+19,(vlTOPp->testbench__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
        }
        tracep->chgCData(oldp+20,(vlTOPp->testbench__DOT__dut_output),2);
        tracep->chgCData(oldp+21,(vlTOPp->testbench__DOT__dut__DOT__shift_reg),3);
    }
}

void Vconv_encoder::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vconv_encoder__Syms* __restrict vlSymsp = static_cast<Vconv_encoder__Syms*>(userp);
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
