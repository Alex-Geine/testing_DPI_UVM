// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconv_encoder__Syms.h"


//======================

void Vconv_encoder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vconv_encoder::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vconv_encoder__Syms* __restrict vlSymsp = static_cast<Vconv_encoder__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vconv_encoder::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vconv_encoder::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vconv_encoder__Syms* __restrict vlSymsp = static_cast<Vconv_encoder__Syms*>(userp);
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vconv_encoder::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vconv_encoder__Syms* __restrict vlSymsp = static_cast<Vconv_encoder__Syms*>(userp);
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"testbench clk", false,-1);
        tracep->declBit(c+2,"testbench rst_n", false,-1);
        tracep->declBit(c+3,"testbench data_in", false,-1);
        tracep->declBus(c+21,"testbench dut_output", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBit(c+4+i*1,"testbench unnamedblk1 input_bits", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBit(c+8+i*1,"testbench unnamedblk1 model_bits", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+16+i*1,"testbench unnamedblk1 expected_bits", true,(i+0), 1,0);}}
        tracep->declBus(c+20,"testbench unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBit(c+1,"testbench dut clk", false,-1);
        tracep->declBit(c+2,"testbench dut rst_n", false,-1);
        tracep->declBit(c+3,"testbench dut data_in", false,-1);
        tracep->declBus(c+21,"testbench dut data_out", false,-1, 1,0);
        tracep->declBus(c+22,"testbench dut shift_reg", false,-1, 2,0);
    }
}

void Vconv_encoder::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vconv_encoder::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vconv_encoder__Syms* __restrict vlSymsp = static_cast<Vconv_encoder__Syms*>(userp);
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vconv_encoder::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vconv_encoder__Syms* __restrict vlSymsp = static_cast<Vconv_encoder__Syms*>(userp);
    Vconv_encoder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->testbench__DOT__clk));
        tracep->fullBit(oldp+2,(vlTOPp->testbench__DOT__rst_n));
        tracep->fullBit(oldp+3,(vlTOPp->testbench__DOT__data_in));
        tracep->fullBit(oldp+4,(vlTOPp->testbench__DOT__unnamedblk1__DOT__input_bits[0]));
        tracep->fullBit(oldp+5,(vlTOPp->testbench__DOT__unnamedblk1__DOT__input_bits[1]));
        tracep->fullBit(oldp+6,(vlTOPp->testbench__DOT__unnamedblk1__DOT__input_bits[2]));
        tracep->fullBit(oldp+7,(vlTOPp->testbench__DOT__unnamedblk1__DOT__input_bits[3]));
        tracep->fullBit(oldp+8,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[0]));
        tracep->fullBit(oldp+9,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[1]));
        tracep->fullBit(oldp+10,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[2]));
        tracep->fullBit(oldp+11,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[3]));
        tracep->fullBit(oldp+12,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[4]));
        tracep->fullBit(oldp+13,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[5]));
        tracep->fullBit(oldp+14,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[6]));
        tracep->fullBit(oldp+15,(vlTOPp->testbench__DOT__unnamedblk1__DOT__model_bits[7]));
        tracep->fullCData(oldp+16,(vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits[0]),2);
        tracep->fullCData(oldp+17,(vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits[1]),2);
        tracep->fullCData(oldp+18,(vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits[2]),2);
        tracep->fullCData(oldp+19,(vlTOPp->testbench__DOT__unnamedblk1__DOT__expected_bits[3]),2);
        tracep->fullIData(oldp+20,(vlTOPp->testbench__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
        tracep->fullCData(oldp+21,(vlTOPp->testbench__DOT__dut_output),2);
        tracep->fullCData(oldp+22,(vlTOPp->testbench__DOT__dut__DOT__shift_reg),3);
    }
}
