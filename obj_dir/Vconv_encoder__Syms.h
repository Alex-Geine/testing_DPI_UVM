// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCONV_ENCODER__SYMS_H_
#define _VCONV_ENCODER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vconv_encoder.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vconv_encoder__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vconv_encoder*                 TOPp;
    
    // CREATORS
    Vconv_encoder__Syms(Vconv_encoder* topp, const char* namep);
    ~Vconv_encoder__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
