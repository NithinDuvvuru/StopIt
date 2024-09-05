// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbasys3_7seg_driver.h for the primary calling header

#ifndef VERILATED_VBASYS3_7SEG_DRIVER___024ROOT_H_
#define VERILATED_VBASYS3_7SEG_DRIVER___024ROOT_H_  // guard

#include "verilated.h"


class Vbasys3_7seg_driver__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbasys3_7seg_driver___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_1k_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(digit0_en_i,0,0);
    VL_IN8(digit0_i,3,0);
    VL_IN8(digit1_en_i,0,0);
    VL_IN8(digit1_i,3,0);
    VL_IN8(digit2_en_i,0,0);
    VL_IN8(digit2_i,3,0);
    VL_IN8(digit3_en_i,0,0);
    VL_IN8(digit3_i,3,0);
    VL_OUT8(anode_o,3,0);
    VL_OUT8(segments_o,6,0);
    CData/*1:0*/ basys3_7seg_driver__DOT__state_d;
    CData/*1:0*/ basys3_7seg_driver__DOT__state_q;
    CData/*3:0*/ basys3_7seg_driver__DOT__digit;
    CData/*0:0*/ basys3_7seg_driver__DOT__A;
    CData/*0:0*/ basys3_7seg_driver__DOT__B;
    CData/*0:0*/ basys3_7seg_driver__DOT__C;
    CData/*0:0*/ basys3_7seg_driver__DOT__D;
    CData/*0:0*/ basys3_7seg_driver__DOT__E;
    CData/*0:0*/ basys3_7seg_driver__DOT__F;
    CData/*0:0*/ basys3_7seg_driver__DOT__G;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_1k_i__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbasys3_7seg_driver__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbasys3_7seg_driver___024root(Vbasys3_7seg_driver__Syms* symsp, const char* v__name);
    ~Vbasys3_7seg_driver___024root();
    VL_UNCOPYABLE(Vbasys3_7seg_driver___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
