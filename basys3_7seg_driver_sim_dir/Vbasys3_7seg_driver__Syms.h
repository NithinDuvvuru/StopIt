// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBASYS3_7SEG_DRIVER__SYMS_H_
#define VERILATED_VBASYS3_7SEG_DRIVER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbasys3_7seg_driver.h"

// INCLUDE MODULE CLASSES
#include "Vbasys3_7seg_driver___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vbasys3_7seg_driver__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbasys3_7seg_driver* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbasys3_7seg_driver___024root  TOP;

    // CONSTRUCTORS
    Vbasys3_7seg_driver__Syms(VerilatedContext* contextp, const char* namep, Vbasys3_7seg_driver* modelp);
    ~Vbasys3_7seg_driver__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
