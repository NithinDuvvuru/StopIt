// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlfsr_tb.h for the primary calling header

#ifndef VERILATED_VLFSR_TB___024ROOT_H_
#define VERILATED_VLFSR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vlfsr_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlfsr_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ lfsr_tb__DOT__clk_i;
    CData/*0:0*/ lfsr_tb__DOT__rst_ni;
    CData/*0:0*/ lfsr_tb__DOT__next_i;
    CData/*7:0*/ lfsr_tb__DOT__lfsr__DOT__state;
    CData/*0:0*/ __Vtrigprevexpr___TOP__lfsr_tb__DOT__clk_i__0;
    CData/*0:0*/ __VactContinue;
    VlWide<6>/*191:0*/ lfsr_tb__DOT__counters;
    IData/*31:0*/ lfsr_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ lfsr_tb__DOT__sim__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ lfsr_tb__DOT____Vlvbound_h428f624d__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb913d3c0__0;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vlfsr_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlfsr_tb___024root(Vlfsr_tb__Syms* symsp, const char* v__name);
    ~Vlfsr_tb___024root();
    VL_UNCOPYABLE(Vlfsr_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
