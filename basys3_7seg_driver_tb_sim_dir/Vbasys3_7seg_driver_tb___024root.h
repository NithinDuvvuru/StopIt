// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbasys3_7seg_driver_tb.h for the primary calling header

#ifndef VERILATED_VBASYS3_7SEG_DRIVER_TB___024ROOT_H_
#define VERILATED_VBASYS3_7SEG_DRIVER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vbasys3_7seg_driver_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbasys3_7seg_driver_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ basys3_7seg_driver_tb__DOT__clk_1k_i;
    CData/*3:0*/ basys3_7seg_driver_tb__DOT____Vxrand_h8df6f9e8__0;
    CData/*0:0*/ basys3_7seg_driver_tb__DOT__rst_ni;
    CData/*0:0*/ basys3_7seg_driver_tb__DOT__digit0_en_i;
    CData/*3:0*/ basys3_7seg_driver_tb__DOT__digit0_i;
    CData/*0:0*/ basys3_7seg_driver_tb__DOT__digit1_en_i;
    CData/*3:0*/ basys3_7seg_driver_tb__DOT__digit1_i;
    CData/*0:0*/ basys3_7seg_driver_tb__DOT__digit2_en_i;
    CData/*3:0*/ basys3_7seg_driver_tb__DOT__digit2_i;
    CData/*0:0*/ basys3_7seg_driver_tb__DOT__digit3_en_i;
    CData/*3:0*/ basys3_7seg_driver_tb__DOT__digit3_i;
    CData/*3:0*/ basys3_7seg_driver_tb__DOT__expected_digit;
    CData/*0:0*/ basys3_7seg_driver_tb__DOT__expected_digit_en;
    CData/*3:0*/ basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__anode_o;
    CData/*1:0*/ basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__state_d;
    CData/*1:0*/ basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__state_q;
    CData/*3:0*/ basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__digit;
    CData/*0:0*/ basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__A;
    CData/*0:0*/ basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__B;
    CData/*0:0*/ basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__C;
    CData/*0:0*/ basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__D;
    CData/*0:0*/ basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__E;
    CData/*0:0*/ basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__F;
    CData/*0:0*/ basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__G;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__basys3_7seg_driver_tb__DOT__clk_1k_i__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hddad697d__0;
    VlTriggerScheduler __VtrigSched_hddad6a3c__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbasys3_7seg_driver_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbasys3_7seg_driver_tb___024root(Vbasys3_7seg_driver_tb__Syms* symsp, const char* v__name);
    ~Vbasys3_7seg_driver_tb___024root();
    VL_UNCOPYABLE(Vbasys3_7seg_driver_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
