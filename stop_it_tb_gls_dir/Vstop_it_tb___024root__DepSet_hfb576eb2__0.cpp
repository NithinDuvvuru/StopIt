// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstop_it_tb.h for the primary calling header

#include "Vstop_it_tb__pch.h"
#include "Vstop_it_tb___024root.h"

VL_ATTR_COLD void Vstop_it_tb___024root___eval_initial__TOP(Vstop_it_tb___024root* vlSelf);
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
    Vstop_it_tb___024root___eval_initial__TOP(vlSelf);
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
    vlSelf->__Vtrigprevexpr_hdb996f34__0 = (5U == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state));
    vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__correct_stop_received__0 
        = vlSelf->stop_it_tb__DOT__correct_stop_received;
    vlSelf->__Vtrigprevexpr_hdbbf5106__0 = (2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state));
    vlSelf->__Vtrigprevexpr_h6ab44ae1__0 = ((0U == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state)) 
                                            & (IData)(vlSelf->stop_it_tb__DOT__rst_ni));
    vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__valid_go_received__0 
        = vlSelf->stop_it_tb__DOT__valid_go_received;
    vlSelf->__Vtrigprevexpr_hf58c66b9__0 = ((0U == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state)) 
                                            | (5U == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state)));
    vlSelf->__Vtrigprevexpr_hae92503f__0 = (0x11U == vlSelf->stop_it_tb__DOT__num_correct_stops_received);
    vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__wrong_stop_received__0 
        = vlSelf->stop_it_tb__DOT__wrong_stop_received;
    vlSelf->__Vtrigprevexpr_hdbbf71af__0 = (0U == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state));
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
            co_await vlSelf->__VtrigSched_h4b8896b1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge (5'h2 == stop_it_tb.stop_it_state))", 
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
    }
}

VL_INLINE_OPT void Vstop_it_tb___024root___act_comb__TOP__0(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*4:0*/ stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B;
    stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B = 0;
    CData/*3:0*/ stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___B;
    stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___B = 0;
    IData/*17:0*/ stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B;
    stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B = 0;
    CData/*0:0*/ stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit;
    stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit = 0;
    CData/*0:0*/ stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit;
    stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit = 0;
    CData/*0:0*/ stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit;
    stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 0;
    // Body
    vlSelf->stop_it_tb__DOT__valid_go_received = ((IData)(vlSelf->stop_it_tb__DOT__rst_ni) 
                                                  & ((0U 
                                                      == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state)) 
                                                     & (IData)(vlSelf->stop_it_tb__DOT__go_i)));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___3_ 
        = ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement)
            ? (1U | (0xfffeU & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state) 
                                << 1U))) : ((IData)(vlSelf->stop_it_tb__DOT__load_i)
                                             ? (IData)(vlSelf->stop_it_tb__DOT__switches_i)
                                             : (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vxrand_h86990234__1)));
    stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___B 
        = (((IData)(vlSelf->stop_it_tb__DOT__go_i) 
            << 3U) | (((8U != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q)) 
                       << 2U) | (((0x10U != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q)) 
                                  << 1U) | (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT___11_))));
    vlSelf->stop_it_tb__DOT__valid_stop_received = 
        ((IData)(vlSelf->stop_it_tb__DOT__rst_ni) & 
         ((2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state)) 
          & (IData)(vlSelf->stop_it_tb__DOT__stop_i)));
    stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B 
        = (1U | (((IData)(vlSelf->stop_it_tb__DOT__go_i) 
                  << 4U) | (((IData)(vlSelf->stop_it_tb__DOT__stop_i) 
                             << 3U) | (((0x10U != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q)) 
                                        << 2U) | ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT___11_) 
                                                  << 1U)))));
    stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B 
        = (5U | (((IData)(vlSelf->stop_it_tb__DOT__go_i) 
                  << 0xfU) | ((((8U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))
                                 ? 2U : 1U) << 0xcU) 
                              | ((((IData)(vlSelf->stop_it_tb__DOT__stop_i)
                                    ? (((0x1fU & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state)) 
                                        == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q))
                                        ? 3U : 4U) : 2U) 
                                  << 9U) | ((((0x10U 
                                               == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))
                                               ? 0U
                                               : 4U) 
                                             << 6U) 
                                            | (((0x10U 
                                                 == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))
                                                 ? 
                                                ((0xffffU 
                                                  == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal))
                                                  ? 5U
                                                  : 0U)
                                                 : 3U) 
                                               << 3U))))));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
    stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit = 0U;
    if ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___87___DOT____Vxrand_h8df4b479__0
                      : (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___B)));
        stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit = 1U;
    }
    if ((2U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___87___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___B), 1U)));
        stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit = 1U;
    }
    if ((4U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___87___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___B), 2U)));
        stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit = 1U;
    }
    if ((8U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___87___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___B), 3U)));
        stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit = 1U;
    }
    vlSelf->stop_it_tb__DOT__correct_stop_received 
        = ((IData)(vlSelf->stop_it_tb__DOT__valid_stop_received) 
           & (IData)(vlSelf->stop_it_tb__DOT__digits_match));
    vlSelf->stop_it_tb__DOT__wrong_stop_received = 
        ((~ (IData)(vlSelf->stop_it_tb__DOT__digits_match)) 
         & (IData)(vlSelf->stop_it_tb__DOT__valid_stop_received));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 0U;
    stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit = 0U;
    if ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___86___DOT____Vxrand_h8df4b479__0
                      : (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B)));
        stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit = 1U;
    }
    if ((2U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___86___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B), 1U)));
        stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit = 1U;
    }
    if ((4U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___86___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B), 2U)));
        stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit = 1U;
    }
    if ((8U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___86___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B), 3U)));
        stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit = 1U;
    }
    if ((0x10U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___86___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B), 4U)));
        stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit = 1U;
    }
    vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d = 0U;
    stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 0U;
    if ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d 
            = (7U & ((IData)(stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___88___DOT____Vxrand_h8df4b479__0
                      : stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B));
        stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 1U;
    }
    if ((2U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d 
            = (7U & ((IData)(stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___88___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B, 3U)));
        stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 1U;
    }
    if ((4U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d 
            = (7U & ((IData)(stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___88___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B, 6U)));
        stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 1U;
    }
    if ((8U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d 
            = (7U & ((IData)(stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___88___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B, 9U)));
        stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 1U;
    }
    if ((0x10U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d 
            = (7U & ((IData)(stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___88___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B, 0xcU)));
        stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 1U;
    }
    if ((0x20U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d 
            = (7U & ((IData)(stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___88___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B, 0xfU)));
        stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 1U;
    }
}

void Vstop_it_tb___024root___nba_sequent__TOP__0(Vstop_it_tb___024root* vlSelf);
void Vstop_it_tb___024root___nba_sequent__TOP__1(Vstop_it_tb___024root* vlSelf);
void Vstop_it_tb___024root___nba_sequent__TOP__2(Vstop_it_tb___024root* vlSelf);
void Vstop_it_tb___024root___nba_sequent__TOP__3(Vstop_it_tb___024root* vlSelf);
void Vstop_it_tb___024root___nba_comb__TOP__0(Vstop_it_tb___024root* vlSelf);
void Vstop_it_tb___024root___nba_comb__TOP__1(Vstop_it_tb___024root* vlSelf);

void Vstop_it_tb___024root___eval_nba(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstop_it_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstop_it_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstop_it_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstop_it_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x79ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstop_it_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x7bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstop_it_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vstop_it_tb___024root___nba_sequent__TOP__0(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->__VdlySet__stop_it_tb__DOT__num_correct_stops_received__v0) {
        vlSelf->__VdlySet__stop_it_tb__DOT__num_correct_stops_received__v0 = 0U;
        vlSelf->stop_it_tb__DOT__num_correct_stops_received = 0U;
    }
}

VL_INLINE_OPT void Vstop_it_tb___024root___nba_sequent__TOP__1(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__VdlySet__stop_it_tb__DOT__num_correct_stops_received__v1) {
        vlSelf->__VdlySet__stop_it_tb__DOT__num_correct_stops_received__v1 = 0U;
        vlSelf->stop_it_tb__DOT__num_correct_stops_received 
            = vlSelf->__VdlyVal__stop_it_tb__DOT__num_correct_stops_received__v1;
    }
}

VL_INLINE_OPT void Vstop_it_tb___024root___nba_sequent__TOP__2(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*1:0*/ stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vcellinp___6___S;
    stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vcellinp___6___S = 0;
    CData/*0:0*/ stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___6___DOT__found_active_sel_bit;
    stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___6___DOT__found_active_sel_bit = 0;
    // Body
    if (vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes) {
        if (vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn) {
            vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q 
                = vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT___0_;
        }
    } else {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q = 0U;
    }
    if ((0U != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q))) {
        if (((~ (IData)(vlSelf->stop_it_tb__DOT__stop_i)) 
             & (2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))) {
            vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q 
                = (0x1fU & vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT___0_);
        }
    } else {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q = 0x1fU;
    }
    if (vlSelf->stop_it_tb__DOT__rst_ni) {
        if (((IData)(vlSelf->stop_it_tb__DOT__load_i) 
             | (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement))) {
            vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state 
                = vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___3_;
        }
        if ((1U & (~ ((4U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                      | ((3U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                         | ((2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                            | (0U != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___42___A)))))))) {
            vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state 
                = vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT____Vcellinp___3___D;
        }
        vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q 
            = vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d;
    } else {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state = 0U;
        vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state = 1U;
        vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q = 0U;
    }
    vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT___0_ 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q)));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT___0_ 
        = ((0xffffffe0U & vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT___0_) 
           | (0x1fU & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q) 
                       - (IData)(1U))));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT____Vcellinp___3___D 
        = ((0xfeU & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state) 
                     << 1U)) | (1U & VL_REDXOR_8((0xe1U 
                                                  & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state)))));
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
    vlSelf->stop_it_tb__DOT__stop_it__DOT___28_ = (
                                                   (3U 
                                                    == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                                   & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q));
    vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___S 
        = ((8U & ((~ (IData)((0U != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))) 
                  << 3U)) | (((1U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                              << 2U) | (((4U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))));
    vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___S 
        = ((0x20U & ((~ (IData)((0U != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))) 
                     << 5U)) | (((1U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                 << 4U) | (((2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                            << 3U) 
                                           | (((4U 
                                                == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                               << 2U) 
                                              | (((3U 
                                                   == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                                  << 1U) 
                                                 | (5U 
                                                    == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))))));
    vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___42___A 
        = (((1U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
            << 1U) | (5U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)));
    vlSelf->stop_it_tb__DOT__stop_it_state = vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q;
    vlSelf->stop_it_tb__DOT__stop_it__DOT___27_ = (
                                                   (5U 
                                                    == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                                   & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q));
    vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___S 
        = ((0x10U & ((~ (IData)((0U != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))) 
                     << 4U)) | (((2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                 << 3U) | (((4U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                            << 2U) 
                                           | (((3U 
                                                == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___42___A))))));
    stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vcellinp___6___S 
        = ((2U & ((~ (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT___27_)) 
                  << 1U)) | (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT___27_));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal = vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vxrand_h86990234__0;
    stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___6___DOT__found_active_sel_bit = 0U;
    if ((1U & (IData)(stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vcellinp___6___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal 
            = (0xffffU & ((IData)(stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___6___DOT__found_active_sel_bit)
                           ? vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___6___DOT____Vxrand_h8df4b479__0
                           : ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state) 
                              << 0x10U)));
        stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___6___DOT__found_active_sel_bit = 1U;
    }
    if ((2U & (IData)(stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vcellinp___6___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal 
            = (0xffffU & ((IData)(stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___6___DOT__found_active_sel_bit)
                           ? vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___6___DOT____Vxrand_h8df4b479__0
                           : VL_SHIFTR_III(32,32,32, 
                                           ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state) 
                                            << 0x10U), 0x10U)));
        stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___6___DOT__found_active_sel_bit = 1U;
    }
    vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement 
        = ((3U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
           & ((0xffffU != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal)) 
              & (0x10U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))));
    vlSelf->stop_it_tb__DOT__stop_it__DOT___11_ = (
                                                   (0x10U 
                                                    != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q)) 
                                                   | (0xffffU 
                                                      == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal)));
}

VL_INLINE_OPT void Vstop_it_tb___024root___nba_sequent__TOP__3(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->__VdlySet__stop_it_tb__DOT__rst_ni__v0) {
        vlSelf->__VdlySet__stop_it_tb__DOT__rst_ni__v0 = 0U;
        vlSelf->stop_it_tb__DOT__rst_ni = 0U;
    }
    if (vlSelf->__VdlySet__stop_it_tb__DOT__rst_ni__v1) {
        vlSelf->__VdlySet__stop_it_tb__DOT__rst_ni__v1 = 0U;
        vlSelf->stop_it_tb__DOT__rst_ni = 1U;
    }
}

VL_INLINE_OPT void Vstop_it_tb___024root___nba_comb__TOP__0(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*4:0*/ stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B;
    stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B = 0;
    CData/*3:0*/ stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___B;
    stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___B = 0;
    IData/*17:0*/ stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B;
    stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B = 0;
    CData/*0:0*/ stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit;
    stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit = 0;
    CData/*0:0*/ stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit;
    stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit = 0;
    CData/*0:0*/ stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit;
    stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 0;
    // Body
    stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B 
        = (5U | (((IData)(vlSelf->stop_it_tb__DOT__go_i) 
                  << 0xfU) | ((((8U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))
                                 ? 2U : 1U) << 0xcU) 
                              | ((((IData)(vlSelf->stop_it_tb__DOT__stop_i)
                                    ? (((0x1fU & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state)) 
                                        == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q))
                                        ? 3U : 4U) : 2U) 
                                  << 9U) | ((((0x10U 
                                               == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))
                                               ? 0U
                                               : 4U) 
                                             << 6U) 
                                            | (((0x10U 
                                                 == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))
                                                 ? 
                                                ((0xffffU 
                                                  == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal))
                                                  ? 5U
                                                  : 0U)
                                                 : 3U) 
                                               << 3U))))));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___3_ 
        = ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement)
            ? (1U | (0xfffeU & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state) 
                                << 1U))) : ((IData)(vlSelf->stop_it_tb__DOT__load_i)
                                             ? (IData)(vlSelf->stop_it_tb__DOT__switches_i)
                                             : (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vxrand_h86990234__1)));
    stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___B 
        = (((IData)(vlSelf->stop_it_tb__DOT__go_i) 
            << 3U) | (((8U != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q)) 
                       << 2U) | (((0x10U != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q)) 
                                  << 1U) | (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT___11_))));
    stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B 
        = (1U | (((IData)(vlSelf->stop_it_tb__DOT__go_i) 
                  << 4U) | (((IData)(vlSelf->stop_it_tb__DOT__stop_i) 
                             << 3U) | (((0x10U != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q)) 
                                        << 2U) | ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT___11_) 
                                                  << 1U)))));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d = 0U;
    stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 0U;
    if ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d 
            = (7U & ((IData)(stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___88___DOT____Vxrand_h8df4b479__0
                      : stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B));
        stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 1U;
    }
    if ((2U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d 
            = (7U & ((IData)(stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___88___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B, 3U)));
        stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 1U;
    }
    if ((4U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d 
            = (7U & ((IData)(stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___88___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B, 6U)));
        stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 1U;
    }
    if ((8U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d 
            = (7U & ((IData)(stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___88___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B, 9U)));
        stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 1U;
    }
    if ((0x10U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d 
            = (7U & ((IData)(stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___88___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B, 0xcU)));
        stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 1U;
    }
    if ((0x20U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d 
            = (7U & ((IData)(stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___88___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___B, 0xfU)));
        stop_it_tb__DOT__stop_it__DOT___88___DOT__found_active_sel_bit = 1U;
    }
    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = 1U;
    stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit = 0U;
    if ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___87___DOT____Vxrand_h8df4b479__0
                      : (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___B)));
        stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit = 1U;
    }
    if ((2U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___87___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___B), 1U)));
        stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit = 1U;
    }
    if ((4U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___87___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___B), 2U)));
        stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit = 1U;
    }
    if ((8U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___87___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___B), 3U)));
        stop_it_tb__DOT__stop_it__DOT___87___DOT__found_active_sel_bit = 1U;
    }
    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = 0U;
    stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit = 0U;
    if ((1U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___86___DOT____Vxrand_h8df4b479__0
                      : (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B)));
        stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit = 1U;
    }
    if ((2U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___86___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B), 1U)));
        stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit = 1U;
    }
    if ((4U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___86___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B), 2U)));
        stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit = 1U;
    }
    if ((8U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___86___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B), 3U)));
        stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit = 1U;
    }
    if ((0x10U & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___S))) {
        vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn 
            = (1U & ((IData)(stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit)
                      ? vlSelf->stop_it_tb__DOT__stop_it__DOT___86___DOT____Vxrand_h8df4b479__0
                      : VL_SHIFTR_III(32,32,32, (IData)(stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___B), 4U)));
        stop_it_tb__DOT__stop_it__DOT___86___DOT__found_active_sel_bit = 1U;
    }
}

VL_INLINE_OPT void Vstop_it_tb___024root___nba_comb__TOP__1(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->stop_it_tb__DOT__valid_go_received = ((IData)(vlSelf->stop_it_tb__DOT__rst_ni) 
                                                  & ((0U 
                                                      == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state)) 
                                                     & (IData)(vlSelf->stop_it_tb__DOT__go_i)));
    vlSelf->stop_it_tb__DOT__valid_stop_received = 
        ((IData)(vlSelf->stop_it_tb__DOT__rst_ni) & 
         ((2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state)) 
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
        vlSelf->__VtrigSched_h4b8896b1__0.resume("@(posedge (5'h2 == stop_it_tb.stop_it_state))");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hfa83947e__0.resume("@(posedge ((5'h0 == stop_it_tb.stop_it_state) & stop_it_tb.rst_ni))");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h85af2133__0.resume("@(posedge stop_it_tb.valid_go_received)");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8f6e87a2__0.resume("@(posedge stop_it_tb.correct_stop_received)");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h713bb166__0.resume("@(posedge ((5'h0 == stop_it_tb.stop_it_state) | (5'h5 == stop_it_tb.stop_it_state)))");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4baeb923__0.resume("@(posedge (5'h5 == stop_it_tb.stop_it_state))");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h36a597e8__0.resume("@(posedge (32'sh11 == stop_it_tb.num_correct_stops_received))");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h38a71750__0.resume("@(posedge stop_it_tb.wrong_stop_received)");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4b88b658__0.resume("@(posedge (5'h0 == stop_it_tb.stop_it_state))");
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
        vlSelf->__VtrigSched_h4b8896b1__0.commit("@(posedge (5'h2 == stop_it_tb.stop_it_state))");
    }
    if ((! (0x40ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hfa83947e__0.commit("@(posedge ((5'h0 == stop_it_tb.stop_it_state) & stop_it_tb.rst_ni))");
    }
    if ((! (0x80ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h85af2133__0.commit("@(posedge stop_it_tb.valid_go_received)");
    }
    if ((! (0x100ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8f6e87a2__0.commit("@(posedge stop_it_tb.correct_stop_received)");
    }
    if ((! (0x200ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h713bb166__0.commit("@(posedge ((5'h0 == stop_it_tb.stop_it_state) | (5'h5 == stop_it_tb.stop_it_state)))");
    }
    if ((! (0x400ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4baeb923__0.commit("@(posedge (5'h5 == stop_it_tb.stop_it_state))");
    }
    if ((! (0x800ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h36a597e8__0.commit("@(posedge (32'sh11 == stop_it_tb.num_correct_stops_received))");
    }
    if ((! (0x1000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h38a71750__0.commit("@(posedge stop_it_tb.wrong_stop_received)");
    }
    if ((! (0x2000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4b88b658__0.commit("@(posedge (5'h0 == stop_it_tb.stop_it_state))");
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
