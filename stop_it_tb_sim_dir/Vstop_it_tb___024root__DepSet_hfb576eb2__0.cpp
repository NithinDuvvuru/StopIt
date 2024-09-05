// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstop_it_tb.h for the primary calling header

#include "Vstop_it_tb__pch.h"
#include "Vstop_it_tb___024root.h"

VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__0(Vstop_it_tb___024root* vlSelf);
VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__1(Vstop_it_tb___024root* vlSelf);
VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__2(Vstop_it_tb___024root* vlSelf);
VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__3(Vstop_it_tb___024root* vlSelf);
VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__4(Vstop_it_tb___024root* vlSelf);
VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__5(Vstop_it_tb___024root* vlSelf);
VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__6(Vstop_it_tb___024root* vlSelf);
VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__7(Vstop_it_tb___024root* vlSelf);
VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__8(Vstop_it_tb___024root* vlSelf);
VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__9(Vstop_it_tb___024root* vlSelf);

void Vstop_it_tb___024root___eval_initial(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__5(vlSelf);
    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__6(vlSelf);
    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__7(vlSelf);
    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__8(vlSelf);
    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__9(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__clk_4_i__0 
        = vlSelf->stop_it_tb__DOT__clk_4_i;
    vlSelf->__Vtrigprevexpr_he71494ea__0 = (5U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q));
    vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__correct_stop_received__0 
        = vlSelf->stop_it_tb__DOT__correct_stop_received;
    vlSelf->__Vtrigprevexpr_he72a2d3b__0 = (2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q));
    vlSelf->__Vtrigprevexpr_hcbd425e5__0 = ((0U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                            & (IData)(vlSelf->stop_it_tb__DOT__rst_ni));
    vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__valid_go_received__0 
        = vlSelf->stop_it_tb__DOT__valid_go_received;
    vlSelf->__Vtrigprevexpr_h2c437c22__0 = ((0U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                            | (5U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)));
    vlSelf->__Vtrigprevexpr_hae92503f__0 = (0x11U == vlSelf->stop_it_tb__DOT__num_correct_stops_received);
    vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__wrong_stop_received__0 
        = vlSelf->stop_it_tb__DOT__wrong_stop_received;
    vlSelf->__Vtrigprevexpr_he72a49f5__0 = (0U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q));
}

VL_INLINE_OPT VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__0(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->stop_it_tb__DOT__clk_4_i = 0U;
    while (1U) {
        vlSelf->stop_it_tb__DOT__clk_4_i = (1U & (~ (IData)(vlSelf->stop_it_tb__DOT__clk_4_i)));
        co_await vlSelf->__VdlySched.delay(0x7dULL, 
                                           nullptr, 
                                           "dv/stop_it_tb.sv", 
                                           55);
    }
}

VL_INLINE_OPT VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__3(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h85af2133__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge stop_it_tb.valid_go_received)", 
                                                           "dv/stop_it_tb.sv", 
                                                           67);
        if (vlSelf->stop_it_tb__DOT__rst_ni) {
            co_await vlSelf->__VtrigSched_h65058da2__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               70);
            vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__go_time 
                = VL_TIME_UNITED_Q(1);
            co_await vlSelf->__VtrigSched_h3f1e72e4__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge (5'h2 == stop_it_tb.stop_it.state_q))", 
                                                               "dv/stop_it_tb.sv", 
                                                               73);
            vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__decrementing_time 
                = VL_TIME_UNITED_Q(1);
            vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__wait_time 
                = (vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__decrementing_time 
                   - vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__go_time);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__8(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__8\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h65058da2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge stop_it_tb.clk_4_i)", 
                                                           "dv/stop_it_tb.sv", 
                                                           101);
        if (vlSelf->stop_it_tb__DOT__rst_ni) {
            co_await vlSelf->__VtrigSched_h8f6e87a2__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge stop_it_tb.correct_stop_received)", 
                                                               "dv/stop_it_tb.sv", 
                                                               102);
            vlSelf->__VdlyVal__stop_it_tb__DOT__num_correct_stops_received__v1 
                = ((IData)(1U) + vlSelf->stop_it_tb__DOT__num_correct_stops_received);
            vlSelf->__VdlySet__stop_it_tb__DOT__num_correct_stops_received__v1 = 1U;
        }
    }
}

void Vstop_it_tb___024root___act_comb__TOP__0(Vstop_it_tb___024root* vlSelf);

void Vstop_it_tb___024root___eval_act(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_act\n"); );
    // Body
    if ((0x78ULL & vlSelf->__VactTriggered.word(0U))) {
        Vstop_it_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vstop_it_tb___024root___act_comb__TOP__0(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->stop_it_tb__DOT__valid_go_received = ((IData)(vlSelf->stop_it_tb__DOT__rst_ni) 
                                                  & ((0U 
                                                      == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                                     & (IData)(vlSelf->stop_it_tb__DOT__go_i)));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes = 1U;
    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
    vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement = 0U;
    vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d 
        = ((0x10U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
            ? 0U : ((8U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
                     ? 0U : ((4U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
                              ? ((2U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
                                  ? 0U : ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
                                           ? 5U : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))
                                                    ? 0U
                                                    : 4U)))
                              : ((2U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
                                  ? ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
                                      ? ((0x10U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))
                                          ? ((0xffffU 
                                              == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal))
                                              ? 5U : 0U)
                                          : 3U) : ((IData)(vlSelf->stop_it_tb__DOT__stop_i)
                                                    ? 
                                                   (((0x1fU 
                                                      & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state)) 
                                                     == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q))
                                                     ? 3U
                                                     : 4U)
                                                    : 2U))
                                  : ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
                                      ? ((8U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))
                                          ? 2U : 1U)
                                      : ((IData)(vlSelf->stop_it_tb__DOT__go_i)
                                          ? 1U : 0U))))));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__gameEn = 0U;
    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 0U;
    if ((1U & (~ ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes = 1U;
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__gameEn = 0U;
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 1U;
                    } else {
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 1U;
                        if ((0x10U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) {
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes = 1U;
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 0U;
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__gameEn = 0U;
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 0U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
                    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 1U;
                    if ((0x10U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) {
                        if ((0xffffU != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal))) {
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes = 1U;
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 0U;
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__gameEn = 0U;
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 0U;
                        }
                    }
                } else {
                    if (vlSelf->stop_it_tb__DOT__stop_i) {
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes = 1U;
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 1U;
                    }
                    vlSelf->stop_it_tb__DOT__stop_it__DOT__gameEn 
                        = (1U & (~ (IData)(vlSelf->stop_it_tb__DOT__stop_i)));
                }
            } else if ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
                if ((8U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) {
                    vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes = 1U;
                    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 0U;
                }
                vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 1U;
            } else {
                vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes = 0U;
                vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 0U;
                vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 1U;
                if (vlSelf->stop_it_tb__DOT__go_i) {
                    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
                    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 1U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement = 0U;
                        if ((0x10U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) {
                            if ((0xffffU != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal))) {
                                vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement = 1U;
                            }
                        }
                    } else if (vlSelf->stop_it_tb__DOT__stop_i) {
                        if (((0x1fU & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state)) 
                             == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q))) {
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->stop_it_tb__DOT__valid_stop_received = 
        ((IData)(vlSelf->stop_it_tb__DOT__rst_ni) & 
         ((2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
          & (IData)(vlSelf->stop_it_tb__DOT__stop_i)));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_d 
        = (0x1fU & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q) 
                    - (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__gameEn)));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_d 
        = (0x1fU & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q) 
                    + (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn)));
    vlSelf->stop_it_tb__DOT__correct_stop_received 
        = ((IData)(vlSelf->stop_it_tb__DOT__valid_stop_received) 
           & (IData)(vlSelf->stop_it_tb__DOT__digits_match));
    vlSelf->stop_it_tb__DOT__wrong_stop_received = 
        ((~ (IData)(vlSelf->stop_it_tb__DOT__digits_match)) 
         & (IData)(vlSelf->stop_it_tb__DOT__valid_stop_received));
}

void Vstop_it_tb___024root___nba_sequent__TOP__0(Vstop_it_tb___024root* vlSelf);
void Vstop_it_tb___024root___nba_sequent__TOP__1(Vstop_it_tb___024root* vlSelf);
void Vstop_it_tb___024root___nba_sequent__TOP__2(Vstop_it_tb___024root* vlSelf);
void Vstop_it_tb___024root___nba_comb__TOP__0(Vstop_it_tb___024root* vlSelf);
void Vstop_it_tb___024root___nba_comb__TOP__1(Vstop_it_tb___024root* vlSelf);

void Vstop_it_tb___024root___eval_nba(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstop_it_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstop_it_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstop_it_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x79ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstop_it_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x7bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstop_it_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 1024> Vstop_it_tb__ConstPool__TABLE_h5d4f5af3_0;

VL_INLINE_OPT void Vstop_it_tb___024root___nba_sequent__TOP__0(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state) 
                     << 2U) | (((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__shift) 
                                << 1U) | (IData)(vlSelf->stop_it_tb__DOT__rst_ni)));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state 
        = Vstop_it_tb__ConstPool__TABLE_h5d4f5af3_0
        [__Vtableidx1];
    if (vlSelf->stop_it_tb__DOT__rst_ni) {
        if (vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement) {
            vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state 
                = (1U | (0xfffeU & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state) 
                                    << 1U)));
        } else if (vlSelf->stop_it_tb__DOT__load_i) {
            vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state 
                = vlSelf->stop_it_tb__DOT__switches_i;
        }
        vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q 
            = vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d;
    } else {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state = 0U;
        vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q = 0U;
    }
    vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q 
        = ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes)
            ? (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_d)
            : 0x1fU);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q 
        = ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes)
            ? (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_d)
            : 0U);
    vlSelf->stop_it_tb__DOT__digits_match = (((0xfU 
                                               & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q)) 
                                              == (0xfU 
                                                  & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state))) 
                                             & ((1U 
                                                 & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state) 
                                                    >> 4U))));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__shift = 1U;
    if ((1U & (~ ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q) 
                              >> 1U)))) {
                    vlSelf->stop_it_tb__DOT__stop_it__DOT__shift = 0U;
                }
            } else if ((2U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                vlSelf->stop_it_tb__DOT__stop_it__DOT__shift = 0U;
            } else if ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                vlSelf->stop_it_tb__DOT__stop_it__DOT__shift = 0U;
            }
        }
    }
    vlSelf->stop_it_tb__DOT__digit0_en_o = (1U & (~ 
                                                  ((((((0U 
                                                        == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                                       | (1U 
                                                          == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) 
                                                      | (2U 
                                                         == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) 
                                                     | ((3U 
                                                         == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                                        & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) 
                                                    | ((4U 
                                                        == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                                       & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) 
                                                   | (5U 
                                                      == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)))));
    vlSelf->stop_it_tb__DOT__digit1_en_o = (1U & (~ 
                                                  ((((((0U 
                                                        == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                                       | (1U 
                                                          == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) 
                                                      | (2U 
                                                         == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) 
                                                     | ((3U 
                                                         == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                                        & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) 
                                                    | ((4U 
                                                        == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                                       & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) 
                                                   | (5U 
                                                      == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)))));
    vlSelf->stop_it_tb__DOT__digit2_en_o = (1U & (~ 
                                                  (((((1U 
                                                       == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                                      | (2U 
                                                         == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) 
                                                     | ((3U 
                                                         == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                                        & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) 
                                                    | ((4U 
                                                        == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                                       & (~ (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q)))) 
                                                   | (5U 
                                                      == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)))));
    vlSelf->stop_it_tb__DOT__digit3_en_o = (1U & (~ 
                                                  (((((1U 
                                                       == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                                      | (2U 
                                                         == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) 
                                                     | ((3U 
                                                         == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                                        & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) 
                                                    | ((4U 
                                                        == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                                       & (~ (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q)))) 
                                                   | (5U 
                                                      == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)))));
    vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp__led_shifter__off_i 
        = ((5U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
           & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal = 
        ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp__led_shifter__off_i)
          ? ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp__led_shifter__off_i)
              ? 0U : (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state))
          : (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state));
}

VL_INLINE_OPT void Vstop_it_tb___024root___nba_sequent__TOP__1(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__VdlySet__stop_it_tb__DOT__num_correct_stops_received__v0) {
        vlSelf->__VdlySet__stop_it_tb__DOT__num_correct_stops_received__v0 = 0U;
        vlSelf->stop_it_tb__DOT__num_correct_stops_received = 0U;
    }
    if (vlSelf->__VdlySet__stop_it_tb__DOT__rst_ni__v0) {
        vlSelf->__VdlySet__stop_it_tb__DOT__rst_ni__v0 = 0U;
        vlSelf->stop_it_tb__DOT__rst_ni = 0U;
    }
    if (vlSelf->__VdlySet__stop_it_tb__DOT__rst_ni__v1) {
        vlSelf->__VdlySet__stop_it_tb__DOT__rst_ni__v1 = 0U;
        vlSelf->stop_it_tb__DOT__rst_ni = 1U;
    }
}

VL_INLINE_OPT void Vstop_it_tb___024root___nba_sequent__TOP__2(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->__VdlySet__stop_it_tb__DOT__num_correct_stops_received__v1) {
        vlSelf->__VdlySet__stop_it_tb__DOT__num_correct_stops_received__v1 = 0U;
        vlSelf->stop_it_tb__DOT__num_correct_stops_received 
            = vlSelf->__VdlyVal__stop_it_tb__DOT__num_correct_stops_received__v1;
    }
}

VL_INLINE_OPT void Vstop_it_tb___024root___nba_comb__TOP__0(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes = 1U;
    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
    vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement = 0U;
    vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d 
        = ((0x10U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
            ? 0U : ((8U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
                     ? 0U : ((4U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
                              ? ((2U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
                                  ? 0U : ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
                                           ? 5U : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))
                                                    ? 0U
                                                    : 4U)))
                              : ((2U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
                                  ? ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
                                      ? ((0x10U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))
                                          ? ((0xffffU 
                                              == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal))
                                              ? 5U : 0U)
                                          : 3U) : ((IData)(vlSelf->stop_it_tb__DOT__stop_i)
                                                    ? 
                                                   (((0x1fU 
                                                      & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state)) 
                                                     == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q))
                                                     ? 3U
                                                     : 4U)
                                                    : 2U))
                                  : ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))
                                      ? ((8U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))
                                          ? 2U : 1U)
                                      : ((IData)(vlSelf->stop_it_tb__DOT__go_i)
                                          ? 1U : 0U))))));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__gameEn = 0U;
    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 0U;
    if ((1U & (~ ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes = 1U;
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__gameEn = 0U;
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 1U;
                    } else {
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 1U;
                        if ((0x10U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) {
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes = 1U;
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 0U;
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__gameEn = 0U;
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 0U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
                    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 1U;
                    if ((0x10U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) {
                        if ((0xffffU != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal))) {
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes = 1U;
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 0U;
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__gameEn = 0U;
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 0U;
                        }
                    }
                } else {
                    if (vlSelf->stop_it_tb__DOT__stop_i) {
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes = 1U;
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 1U;
                    }
                    vlSelf->stop_it_tb__DOT__stop_it__DOT__gameEn 
                        = (1U & (~ (IData)(vlSelf->stop_it_tb__DOT__stop_i)));
                }
            } else if ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
                if ((8U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) {
                    vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes = 1U;
                    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 0U;
                }
                vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 1U;
            } else {
                vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes = 0U;
                vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 0U;
                vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 1U;
                if (vlSelf->stop_it_tb__DOT__go_i) {
                    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
                    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 1U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))) {
                        vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement = 0U;
                        if ((0x10U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) {
                            if ((0xffffU != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal))) {
                                vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement = 1U;
                            }
                        }
                    } else if (vlSelf->stop_it_tb__DOT__stop_i) {
                        if (((0x1fU & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state)) 
                             == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q))) {
                            vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_d 
        = (0x1fU & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q) 
                    - (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__gameEn)));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_d 
        = (0x1fU & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q) 
                    + (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn)));
}

VL_INLINE_OPT void Vstop_it_tb___024root___nba_comb__TOP__1(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->stop_it_tb__DOT__valid_go_received = ((IData)(vlSelf->stop_it_tb__DOT__rst_ni) 
                                                  & ((0U 
                                                      == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
                                                     & (IData)(vlSelf->stop_it_tb__DOT__go_i)));
    vlSelf->stop_it_tb__DOT__valid_stop_received = 
        ((IData)(vlSelf->stop_it_tb__DOT__rst_ni) & 
         ((2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q)) 
          & (IData)(vlSelf->stop_it_tb__DOT__stop_i)));
    vlSelf->stop_it_tb__DOT__correct_stop_received 
        = ((IData)(vlSelf->stop_it_tb__DOT__valid_stop_received) 
           & (IData)(vlSelf->stop_it_tb__DOT__digits_match));
    vlSelf->stop_it_tb__DOT__wrong_stop_received = 
        ((~ (IData)(vlSelf->stop_it_tb__DOT__digits_match)) 
         & (IData)(vlSelf->stop_it_tb__DOT__valid_stop_received));
}

void Vstop_it_tb___024root___timing_resume(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h65058da2__0.resume("@(posedge stop_it_tb.clk_4_i)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h65058d63__0.resume("@(negedge stop_it_tb.clk_4_i)");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h3f1e72e4__0.resume("@(posedge (5'h2 == stop_it_tb.stop_it.state_q))");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h5be46992__0.resume("@(posedge ((5'h0 == stop_it_tb.stop_it.state_q) & stop_it_tb.rst_ni))");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h85af2133__0.resume("@(posedge stop_it_tb.valid_go_received)");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8f6e87a2__0.resume("@(posedge stop_it_tb.correct_stop_received)");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hbbf4c3bd__0.resume("@(posedge ((5'h0 == stop_it_tb.stop_it.state_q) | (5'h5 == stop_it_tb.stop_it.state_q)))");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h3f23da95__0.resume("@(posedge (5'h5 == stop_it_tb.stop_it.state_q))");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h36a597e8__0.resume("@(posedge (32'sh11 == stop_it_tb.num_correct_stops_received))");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h38a71750__0.resume("@(posedge stop_it_tb.wrong_stop_received)");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h3f1d8de2__0.resume("@(posedge (5'h0 == stop_it_tb.stop_it.state_q))");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vstop_it_tb___024root___timing_commit(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h65058da2__0.commit("@(posedge stop_it_tb.clk_4_i)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h65058d63__0.commit("@(negedge stop_it_tb.clk_4_i)");
    }
    if ((! (0x20ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h3f1e72e4__0.commit("@(posedge (5'h2 == stop_it_tb.stop_it.state_q))");
    }
    if ((! (0x40ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h5be46992__0.commit("@(posedge ((5'h0 == stop_it_tb.stop_it.state_q) & stop_it_tb.rst_ni))");
    }
    if ((! (0x80ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h85af2133__0.commit("@(posedge stop_it_tb.valid_go_received)");
    }
    if ((! (0x100ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8f6e87a2__0.commit("@(posedge stop_it_tb.correct_stop_received)");
    }
    if ((! (0x200ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hbbf4c3bd__0.commit("@(posedge ((5'h0 == stop_it_tb.stop_it.state_q) | (5'h5 == stop_it_tb.stop_it.state_q)))");
    }
    if ((! (0x400ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h3f23da95__0.commit("@(posedge (5'h5 == stop_it_tb.stop_it.state_q))");
    }
    if ((! (0x800ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h36a597e8__0.commit("@(posedge (32'sh11 == stop_it_tb.num_correct_stops_received))");
    }
    if ((! (0x1000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h38a71750__0.commit("@(posedge stop_it_tb.wrong_stop_received)");
    }
    if ((! (0x2000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h3f1d8de2__0.commit("@(posedge (5'h0 == stop_it_tb.stop_it.state_q))");
    }
}

void Vstop_it_tb___024root___eval_triggers__act(Vstop_it_tb___024root* vlSelf);

bool Vstop_it_tb___024root___eval_phase__act(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<14> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vstop_it_tb___024root___eval_triggers__act(vlSelf);
    Vstop_it_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vstop_it_tb___024root___timing_resume(vlSelf);
        Vstop_it_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vstop_it_tb___024root___eval_phase__nba(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vstop_it_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstop_it_tb___024root___dump_triggers__nba(Vstop_it_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vstop_it_tb___024root___dump_triggers__act(Vstop_it_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vstop_it_tb___024root___eval(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vstop_it_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dv/stop_it_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vstop_it_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dv/stop_it_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vstop_it_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vstop_it_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vstop_it_tb___024root___eval_debug_assertions(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
