// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr_tb.h for the primary calling header

#include "Vlfsr_tb__pch.h"
#include "Vlfsr_tb___024root.h"

VlCoroutine Vlfsr_tb___024root___eval_initial__TOP__Vtiming__0(Vlfsr_tb___024root* vlSelf);
VlCoroutine Vlfsr_tb___024root___eval_initial__TOP__Vtiming__1(Vlfsr_tb___024root* vlSelf);
VlCoroutine Vlfsr_tb___024root___eval_initial__TOP__Vtiming__2(Vlfsr_tb___024root* vlSelf);

void Vlfsr_tb___024root___eval_initial(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___eval_initial\n"); );
    // Body
    Vlfsr_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vlfsr_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vlfsr_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__lfsr_tb__DOT__clk_i__0 
        = vlSelf->lfsr_tb__DOT__clk_i;
}

VL_INLINE_OPT VlCoroutine Vlfsr_tb___024root___eval_initial__TOP__Vtiming__0(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->lfsr_tb__DOT__clk_i = 0U;
    while (1U) {
        vlSelf->lfsr_tb__DOT__clk_i = (1U & (~ (IData)(vlSelf->lfsr_tb__DOT__clk_i)));
        co_await vlSelf->__VdlySched.delay(0x7dULL, 
                                           nullptr, 
                                           "dv/lfsr_tb.sv", 
                                           22);
    }
}

void Vlfsr_tb___024root___eval_act(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___eval_act\n"); );
}

void Vlfsr_tb___024root___nba_sequent__TOP__0(Vlfsr_tb___024root* vlSelf);

void Vlfsr_tb___024root___eval_nba(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlfsr_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*7:0*/, 1024> Vlfsr_tb__ConstPool__TABLE_h5d4f5af3_0;

VL_INLINE_OPT void Vlfsr_tb___024root___nba_sequent__TOP__0(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<6>/*191:0*/ __Vdly__lfsr_tb__DOT__counters;
    VL_ZERO_W(192, __Vdly__lfsr_tb__DOT__counters);
    CData/*7:0*/ __Vdly__lfsr_tb__DOT__lfsr__DOT__state;
    __Vdly__lfsr_tb__DOT__lfsr__DOT__state = 0;
    // Body
    __Vdly__lfsr_tb__DOT__lfsr__DOT__state = vlSelf->lfsr_tb__DOT__lfsr__DOT__state;
    __Vdly__lfsr_tb__DOT__counters[0U] = vlSelf->lfsr_tb__DOT__counters[0U];
    __Vdly__lfsr_tb__DOT__counters[1U] = vlSelf->lfsr_tb__DOT__counters[1U];
    __Vdly__lfsr_tb__DOT__counters[2U] = vlSelf->lfsr_tb__DOT__counters[2U];
    __Vdly__lfsr_tb__DOT__counters[3U] = vlSelf->lfsr_tb__DOT__counters[3U];
    __Vdly__lfsr_tb__DOT__counters[4U] = vlSelf->lfsr_tb__DOT__counters[4U];
    __Vdly__lfsr_tb__DOT__counters[5U] = vlSelf->lfsr_tb__DOT__counters[5U];
    if (vlSelf->lfsr_tb__DOT__rst_ni) {
        vlSelf->lfsr_tb__DOT__unnamedblk1__DOT__i = 5U;
        vlSelf->lfsr_tb__DOT____Vlvbound_h428f624d__0 
            = (vlSelf->lfsr_tb__DOT__counters[0U] + 
               (1U & (IData)(vlSelf->lfsr_tb__DOT__lfsr__DOT__state)));
        __Vdly__lfsr_tb__DOT__counters[0U] = vlSelf->lfsr_tb__DOT____Vlvbound_h428f624d__0;
        vlSelf->lfsr_tb__DOT____Vlvbound_h428f624d__0 
            = (vlSelf->lfsr_tb__DOT__counters[1U] + 
               (1U & ((IData)(vlSelf->lfsr_tb__DOT__lfsr__DOT__state) 
                      >> 1U)));
        __Vdly__lfsr_tb__DOT__counters[1U] = vlSelf->lfsr_tb__DOT____Vlvbound_h428f624d__0;
        vlSelf->lfsr_tb__DOT____Vlvbound_h428f624d__0 
            = (vlSelf->lfsr_tb__DOT__counters[2U] + 
               (1U & ((IData)(vlSelf->lfsr_tb__DOT__lfsr__DOT__state) 
                      >> 2U)));
        __Vdly__lfsr_tb__DOT__counters[2U] = vlSelf->lfsr_tb__DOT____Vlvbound_h428f624d__0;
        vlSelf->lfsr_tb__DOT____Vlvbound_h428f624d__0 
            = (vlSelf->lfsr_tb__DOT__counters[3U] + 
               (1U & ((IData)(vlSelf->lfsr_tb__DOT__lfsr__DOT__state) 
                      >> 3U)));
        __Vdly__lfsr_tb__DOT__counters[3U] = vlSelf->lfsr_tb__DOT____Vlvbound_h428f624d__0;
        vlSelf->lfsr_tb__DOT____Vlvbound_h428f624d__0 
            = (vlSelf->lfsr_tb__DOT__counters[4U] + 
               (1U & ((IData)(vlSelf->lfsr_tb__DOT__lfsr__DOT__state) 
                      >> 4U)));
        __Vdly__lfsr_tb__DOT__counters[4U] = vlSelf->lfsr_tb__DOT____Vlvbound_h428f624d__0;
    }
    __Vtableidx1 = (((IData)(vlSelf->lfsr_tb__DOT__lfsr__DOT__state) 
                     << 2U) | (((IData)(vlSelf->lfsr_tb__DOT__next_i) 
                                << 1U) | (IData)(vlSelf->lfsr_tb__DOT__rst_ni)));
    __Vdly__lfsr_tb__DOT__lfsr__DOT__state = Vlfsr_tb__ConstPool__TABLE_h5d4f5af3_0
        [__Vtableidx1];
    vlSelf->lfsr_tb__DOT__lfsr__DOT__state = __Vdly__lfsr_tb__DOT__lfsr__DOT__state;
    vlSelf->lfsr_tb__DOT__counters[0U] = __Vdly__lfsr_tb__DOT__counters[0U];
    vlSelf->lfsr_tb__DOT__counters[1U] = __Vdly__lfsr_tb__DOT__counters[1U];
    vlSelf->lfsr_tb__DOT__counters[2U] = __Vdly__lfsr_tb__DOT__counters[2U];
    vlSelf->lfsr_tb__DOT__counters[3U] = __Vdly__lfsr_tb__DOT__counters[3U];
    vlSelf->lfsr_tb__DOT__counters[4U] = __Vdly__lfsr_tb__DOT__counters[4U];
    vlSelf->lfsr_tb__DOT__counters[5U] = __Vdly__lfsr_tb__DOT__counters[5U];
}

void Vlfsr_tb___024root___timing_resume(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hb913d3c0__0.resume("@(posedge lfsr_tb.clk_i)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vlfsr_tb___024root___timing_commit(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hb913d3c0__0.commit("@(posedge lfsr_tb.clk_i)");
    }
}

void Vlfsr_tb___024root___eval_triggers__act(Vlfsr_tb___024root* vlSelf);

bool Vlfsr_tb___024root___eval_phase__act(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vlfsr_tb___024root___eval_triggers__act(vlSelf);
    Vlfsr_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vlfsr_tb___024root___timing_resume(vlSelf);
        Vlfsr_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vlfsr_tb___024root___eval_phase__nba(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vlfsr_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlfsr_tb___024root___dump_triggers__nba(Vlfsr_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlfsr_tb___024root___dump_triggers__act(Vlfsr_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vlfsr_tb___024root___eval(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vlfsr_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dv/lfsr_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vlfsr_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dv/lfsr_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vlfsr_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vlfsr_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vlfsr_tb___024root___eval_debug_assertions(Vlfsr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlfsr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
