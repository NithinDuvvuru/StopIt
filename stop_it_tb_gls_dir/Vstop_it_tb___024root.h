// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstop_it_tb.h for the primary calling header

#ifndef VERILATED_VSTOP_IT_TB___024ROOT_H_
#define VERILATED_VSTOP_IT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vstop_it_tb___024unit;


class Vstop_it_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstop_it_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vstop_it_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ stop_it_tb__DOT__rst_ni;
        CData/*0:0*/ stop_it_tb__DOT__clk_4_i;
        CData/*0:0*/ stop_it_tb__DOT__valid_go_received;
        CData/*0:0*/ stop_it_tb__DOT__correct_stop_received;
        CData/*0:0*/ stop_it_tb__DOT__wrong_stop_received;
        CData/*0:0*/ stop_it_tb__DOT__go_i;
        CData/*0:0*/ stop_it_tb__DOT__stop_i;
        CData/*0:0*/ stop_it_tb__DOT__load_i;
        CData/*4:0*/ stop_it_tb__DOT__stop_it_state;
        CData/*0:0*/ stop_it_tb__DOT__valid_stop_received;
        CData/*0:0*/ stop_it_tb__DOT__digits_match;
        CData/*0:0*/ stop_it_tb__DOT__stop_it__DOT___11_;
        CData/*0:0*/ stop_it_tb__DOT__stop_it__DOT___27_;
        CData/*0:0*/ stop_it_tb__DOT__stop_it__DOT___28_;
        CData/*0:0*/ stop_it_tb__DOT__stop_it__DOT__scoreIncrement;
        CData/*2:0*/ stop_it_tb__DOT__stop_it__DOT__state_d;
        CData/*0:0*/ stop_it_tb__DOT__stop_it__DOT__timeEn;
        CData/*0:0*/ stop_it_tb__DOT__stop_it__DOT__timeRes;
        CData/*2:0*/ stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q;
        CData/*1:0*/ stop_it_tb__DOT__stop_it__DOT____Vcellinp___42___A;
        CData/*4:0*/ stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___S;
        CData/*3:0*/ stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___S;
        CData/*5:0*/ stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___S;
        CData/*4:0*/ stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q;
        CData/*7:0*/ stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state;
        CData/*7:0*/ stop_it_tb__DOT__stop_it__DOT__lfsr__DOT____Vcellinp___3___D;
        CData/*4:0*/ stop_it_tb__DOT__stop_it__DOT__time_counter__DOT___0_;
        CData/*4:0*/ stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q;
        CData/*0:0*/ __VdlySet__stop_it_tb__DOT__rst_ni__v0;
        CData/*0:0*/ __VdlySet__stop_it_tb__DOT__num_correct_stops_received__v0;
        CData/*0:0*/ __VdlySet__stop_it_tb__DOT__rst_ni__v1;
        CData/*0:0*/ __VdlySet__stop_it_tb__DOT__num_correct_stops_received__v1;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__stop_it_tb__DOT__clk_4_i__0;
        CData/*0:0*/ __Vtrigprevexpr_hdb996f34__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__stop_it_tb__DOT__correct_stop_received__0;
        CData/*0:0*/ __Vtrigprevexpr_hdbbf5106__0;
        CData/*0:0*/ __Vtrigprevexpr_h6ab44ae1__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__stop_it_tb__DOT__valid_go_received__0;
        CData/*0:0*/ __Vtrigprevexpr_hf58c66b9__0;
        CData/*0:0*/ __Vtrigprevexpr_hae92503f__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__stop_it_tb__DOT__wrong_stop_received__0;
        CData/*0:0*/ __Vtrigprevexpr_hdbbf71af__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ stop_it_tb__DOT__switches_i;
        SData/*15:0*/ stop_it_tb__DOT__stop_it__DOT__ledVal;
        SData/*15:0*/ stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vxrand_h86990234__1;
        SData/*15:0*/ stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vxrand_h86990234__0;
        SData/*15:0*/ stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___3_;
        SData/*15:0*/ stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state;
        IData/*31:0*/ stop_it_tb__DOT__num_correct_stops_received;
        IData/*31:0*/ stop_it_tb__DOT__sim__DOT__unnamedblk4__DOT__rand_delay;
        IData/*31:0*/ stop_it_tb__DOT__sim__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ stop_it_tb__DOT__stop_it__DOT___86___DOT____Vxrand_h8df4b479__0;
        IData/*31:0*/ stop_it_tb__DOT__stop_it__DOT___87___DOT____Vxrand_h8df4b479__0;
        IData/*31:0*/ stop_it_tb__DOT__stop_it__DOT___88___DOT____Vxrand_h8df4b479__0;
        IData/*31:0*/ stop_it_tb__DOT__stop_it__DOT__game_counter__DOT___0_;
        IData/*31:0*/ stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___6___DOT____Vxrand_h8df4b479__0;
        IData/*31:0*/ __VdlyVal__stop_it_tb__DOT__num_correct_stops_received__v1;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ stop_it_tb__DOT__unnamedblk1__DOT__go_time;
        QData/*63:0*/ stop_it_tb__DOT__unnamedblk1__DOT__decrementing_time;
        QData/*63:0*/ stop_it_tb__DOT__unnamedblk1__DOT__wait_time;
        QData/*63:0*/ stop_it_tb__DOT__unnamedblk2__DOT__stop_time;
    };
    struct {
        QData/*63:0*/ stop_it_tb__DOT__unnamedblk2__DOT__newround_time;
        QData/*63:0*/ stop_it_tb__DOT__unnamedblk2__DOT__wait_time;
        QData/*63:0*/ stop_it_tb__DOT__unnamedblk3__DOT__stop_time;
        QData/*63:0*/ stop_it_tb__DOT__unnamedblk3__DOT__newround_time;
        QData/*63:0*/ stop_it_tb__DOT__unnamedblk3__DOT__wait_time;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h65058da2__0;
    VlTriggerScheduler __VtrigSched_h65058d63__0;
    VlTriggerScheduler __VtrigSched_h4b8896b1__0;
    VlTriggerScheduler __VtrigSched_hfa83947e__0;
    VlTriggerScheduler __VtrigSched_h85af2133__0;
    VlTriggerScheduler __VtrigSched_h713bb166__0;
    VlTriggerScheduler __VtrigSched_h8f6e87a2__0;
    VlTriggerScheduler __VtrigSched_h36a597e8__0;
    VlTriggerScheduler __VtrigSched_h4baeb923__0;
    VlTriggerScheduler __VtrigSched_h4b88b658__0;
    VlTriggerScheduler __VtrigSched_h38a71750__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<14> __VactTriggered;
    VlTriggerVec<14> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vstop_it_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vstop_it_tb___024root(Vstop_it_tb__Syms* symsp, const char* v__name);
    ~Vstop_it_tb___024root();
    VL_UNCOPYABLE(Vstop_it_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
