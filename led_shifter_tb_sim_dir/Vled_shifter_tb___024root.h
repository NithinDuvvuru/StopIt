// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vled_shifter_tb.h for the primary calling header

#ifndef VERILATED_VLED_SHIFTER_TB___024ROOT_H_
#define VERILATED_VLED_SHIFTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vled_shifter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vled_shifter_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ led_shifter_tb__DOT__clk_i;
    CData/*0:0*/ led_shifter_tb__DOT__rst_ni;
    CData/*0:0*/ led_shifter_tb__DOT__shift_i;
    CData/*0:0*/ led_shifter_tb__DOT__load_i;
    CData/*0:0*/ led_shifter_tb__DOT__off_i;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__led_shifter_tb__DOT__clk_i__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ led_shifter_tb__DOT__switches_i;
    SData/*15:0*/ led_shifter_tb__DOT__unnamedblk1__DOT__past_switches;
    SData/*15:0*/ led_shifter_tb__DOT__unnamedblk2__DOT__past_leds;
    SData/*15:0*/ led_shifter_tb__DOT__sim__DOT__past_leds;
    SData/*15:0*/ led_shifter_tb__DOT__led_shifter__DOT__leds_o;
    SData/*15:0*/ led_shifter_tb__DOT__led_shifter__DOT__state;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he0de042d__0;
    VlTriggerScheduler __VtrigSched_he0de04ec__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vled_shifter_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vled_shifter_tb___024root(Vled_shifter_tb__Syms* symsp, const char* v__name);
    ~Vled_shifter_tb___024root();
    VL_UNCOPYABLE(Vled_shifter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
