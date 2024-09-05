// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounters_tb.h for the primary calling header

#include "Vcounters_tb__pch.h"
#include "Vcounters_tb___024root.h"

VlCoroutine Vcounters_tb___024root___eval_initial__TOP__Vtiming__0(Vcounters_tb___024root* vlSelf);
VlCoroutine Vcounters_tb___024root___eval_initial__TOP__Vtiming__1(Vcounters_tb___024root* vlSelf);
VlCoroutine Vcounters_tb___024root___eval_initial__TOP__Vtiming__2(Vcounters_tb___024root* vlSelf);

void Vcounters_tb___024root___eval_initial(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_initial\n"); );
    // Body
    Vcounters_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcounters_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vcounters_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__counters_tb__DOT__clk_4_i__0 
        = vlSelf->counters_tb__DOT__clk_4_i;
}

VL_INLINE_OPT VlCoroutine Vcounters_tb___024root___eval_initial__TOP__Vtiming__0(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->counters_tb__DOT__clk_4_i = 0U;
    while (1U) {
        vlSelf->counters_tb__DOT__clk_4_i = (1U & (~ (IData)(vlSelf->counters_tb__DOT__clk_4_i)));
        co_await vlSelf->__VdlySched.delay(0x7dULL, 
                                           nullptr, 
                                           "dv/counters_tb.sv", 
                                           26);
    }
}

void Vcounters_tb___024root___act_comb__TOP__0(Vcounters_tb___024root* vlSelf);

void Vcounters_tb___024root___eval_act(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_act\n"); );
    // Body
    if ((7ULL & vlSelf->__VactTriggered.word(0U))) {
        Vcounters_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcounters_tb___024root___act_comb__TOP__0(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->counters_tb__DOT__time_counter__DOT__state_d 
        = (0x1fU & ((IData)(vlSelf->counters_tb__DOT__time_counter__DOT__state_q) 
                    + (IData)(vlSelf->counters_tb__DOT__en_i)));
    vlSelf->counters_tb__DOT__game_counter__DOT__state_d 
        = (0x1fU & ((IData)(vlSelf->counters_tb__DOT__game_counter__DOT__state_q) 
                    - (IData)(vlSelf->counters_tb__DOT__en_i)));
}

void Vcounters_tb___024root___nba_sequent__TOP__0(Vcounters_tb___024root* vlSelf);
void Vcounters_tb___024root___nba_comb__TOP__0(Vcounters_tb___024root* vlSelf);

void Vcounters_tb___024root___eval_nba(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcounters_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcounters_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcounters_tb___024root___nba_sequent__TOP__0(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->counters_tb__DOT__rst_ni) {
        vlSelf->counters_tb__DOT__game_counter__DOT__state_q 
            = vlSelf->counters_tb__DOT__game_counter__DOT__state_d;
        vlSelf->counters_tb__DOT__time_counter__DOT__state_q 
            = vlSelf->counters_tb__DOT__time_counter__DOT__state_d;
    } else {
        vlSelf->counters_tb__DOT__game_counter__DOT__state_q = 0x1fU;
        vlSelf->counters_tb__DOT__time_counter__DOT__state_q = 0U;
    }
}

VL_INLINE_OPT void Vcounters_tb___024root___nba_comb__TOP__0(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->counters_tb__DOT__game_counter__DOT__state_d 
        = (0x1fU & ((IData)(vlSelf->counters_tb__DOT__game_counter__DOT__state_q) 
                    - (IData)(vlSelf->counters_tb__DOT__en_i)));
    vlSelf->counters_tb__DOT__time_counter__DOT__state_d 
        = (0x1fU & ((IData)(vlSelf->counters_tb__DOT__time_counter__DOT__state_q) 
                    + (IData)(vlSelf->counters_tb__DOT__en_i)));
}

void Vcounters_tb___024root___timing_resume(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he8e182f6__0.resume("@(posedge counters_tb.clk_4_i)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he8e182b7__0.resume("@(negedge counters_tb.clk_4_i)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vcounters_tb___024root___timing_commit(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he8e182f6__0.commit("@(posedge counters_tb.clk_4_i)");
    }
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he8e182b7__0.commit("@(negedge counters_tb.clk_4_i)");
    }
}

void Vcounters_tb___024root___eval_triggers__act(Vcounters_tb___024root* vlSelf);

bool Vcounters_tb___024root___eval_phase__act(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcounters_tb___024root___eval_triggers__act(vlSelf);
    Vcounters_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vcounters_tb___024root___timing_resume(vlSelf);
        Vcounters_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcounters_tb___024root___eval_phase__nba(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcounters_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounters_tb___024root___dump_triggers__nba(Vcounters_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounters_tb___024root___dump_triggers__act(Vcounters_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounters_tb___024root___eval(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcounters_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dv/counters_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vcounters_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dv/counters_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vcounters_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vcounters_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcounters_tb___024root___eval_debug_assertions(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
