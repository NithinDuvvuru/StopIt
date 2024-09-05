// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounters_tb.h for the primary calling header

#ifndef VERILATED_VCOUNTERS_TB___024ROOT_H_
#define VERILATED_VCOUNTERS_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcounters_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcounters_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ counters_tb__DOT__clk_4_i;
    CData/*0:0*/ counters_tb__DOT__rst_ni;
    CData/*0:0*/ counters_tb__DOT__en_i;
    CData/*4:0*/ counters_tb__DOT__time_counter__DOT__state_q;
    CData/*4:0*/ counters_tb__DOT__time_counter__DOT__state_d;
    CData/*4:0*/ counters_tb__DOT__game_counter__DOT__state_q;
    CData/*4:0*/ counters_tb__DOT__game_counter__DOT__state_d;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__counters_tb__DOT__clk_4_i__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he8e182f6__0;
    VlTriggerScheduler __VtrigSched_he8e182b7__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcounters_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcounters_tb___024root(Vcounters_tb__Syms* symsp, const char* v__name);
    ~Vcounters_tb___024root();
    VL_UNCOPYABLE(Vcounters_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
