// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstop_it_tb.h for the primary calling header

#include "Vstop_it_tb__pch.h"
#include "Vstop_it_tb___024root.h"

VL_ATTR_COLD void Vstop_it_tb___024root___eval_static(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vstop_it_tb___024root___eval_initial__TOP(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->stop_it_tb__DOT__stop_it__DOT___86___DOT____Vxrand_h8df4b479__0 
        = VL_RAND_RESET_I(32);
    vlSelf->stop_it_tb__DOT__stop_it__DOT___87___DOT____Vxrand_h8df4b479__0 
        = VL_RAND_RESET_I(32);
    vlSelf->stop_it_tb__DOT__stop_it__DOT___88___DOT____Vxrand_h8df4b479__0 
        = VL_RAND_RESET_I(32);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vxrand_h86990234__1 
        = (0xffffU & VL_RAND_RESET_I(16));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vxrand_h86990234__0 
        = (0xffffU & VL_RAND_RESET_I(16));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___6___DOT____Vxrand_h8df4b479__0 
        = VL_RAND_RESET_I(32);
}

VL_ATTR_COLD void Vstop_it_tb___024root___eval_final(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstop_it_tb___024root___dump_triggers__stl(Vstop_it_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vstop_it_tb___024root___eval_phase__stl(Vstop_it_tb___024root* vlSelf);

VL_ATTR_COLD void Vstop_it_tb___024root___eval_settle(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vstop_it_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dv/stop_it_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vstop_it_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstop_it_tb___024root___dump_triggers__stl(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstop_it_tb___024root___stl_sequent__TOP__0(Vstop_it_tb___024root* vlSelf);

VL_ATTR_COLD void Vstop_it_tb___024root___eval_stl(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstop_it_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vstop_it_tb___024root___stl_sequent__TOP__0(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___stl_sequent__TOP__0\n"); );
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
    CData/*1:0*/ stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vcellinp___6___S;
    stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vcellinp___6___S = 0;
    CData/*0:0*/ stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___6___DOT__found_active_sel_bit;
    stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___6___DOT__found_active_sel_bit = 0;
    // Body
    vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT___0_ 
        = ((0xffffffe0U & vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT___0_) 
           | (0x1fU & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q) 
                       - (IData)(1U))));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT____Vcellinp___3___D 
        = ((0xfeU & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state) 
                     << 1U)) | (1U & VL_REDXOR_8((0xe1U 
                                                  & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state)))));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT___0_ 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q)));
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
    vlSelf->stop_it_tb__DOT__valid_go_received = ((IData)(vlSelf->stop_it_tb__DOT__rst_ni) 
                                                  & ((0U 
                                                      == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state)) 
                                                     & (IData)(vlSelf->stop_it_tb__DOT__go_i)));
    vlSelf->stop_it_tb__DOT__valid_stop_received = 
        ((IData)(vlSelf->stop_it_tb__DOT__rst_ni) & 
         ((2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state)) 
          & (IData)(vlSelf->stop_it_tb__DOT__stop_i)));
    stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vcellinp___6___S 
        = ((2U & ((~ (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT___27_)) 
                  << 1U)) | (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT___27_));
    vlSelf->stop_it_tb__DOT__correct_stop_received 
        = ((IData)(vlSelf->stop_it_tb__DOT__valid_stop_received) 
           & (IData)(vlSelf->stop_it_tb__DOT__digits_match));
    vlSelf->stop_it_tb__DOT__wrong_stop_received = 
        ((~ (IData)(vlSelf->stop_it_tb__DOT__digits_match)) 
         & (IData)(vlSelf->stop_it_tb__DOT__valid_stop_received));
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
    vlSelf->stop_it_tb__DOT__stop_it__DOT___11_ = (
                                                   (0x10U 
                                                    != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q)) 
                                                   | (0xffffU 
                                                      == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal)));
    vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___3_ 
        = ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement)
            ? (1U | (0xfffeU & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state) 
                                << 1U))) : ((IData)(vlSelf->stop_it_tb__DOT__load_i)
                                             ? (IData)(vlSelf->stop_it_tb__DOT__switches_i)
                                             : (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vxrand_h86990234__1)));
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

VL_ATTR_COLD void Vstop_it_tb___024root___eval_triggers__stl(Vstop_it_tb___024root* vlSelf);

VL_ATTR_COLD bool Vstop_it_tb___024root___eval_phase__stl(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vstop_it_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vstop_it_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstop_it_tb___024root___dump_triggers__act(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge stop_it_tb.clk_4_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(edge stop_it_tb.clk_4_i or posedge (5'h5 == stop_it_tb.stop_it_state) or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge stop_it_tb.clk_4_i or posedge stop_it_tb.correct_stop_received)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge stop_it_tb.clk_4_i)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge (5'h2 == stop_it_tb.stop_it_state))\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge ((5'h0 == stop_it_tb.stop_it_state) & stop_it_tb.rst_ni))\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge stop_it_tb.valid_go_received)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge stop_it_tb.correct_stop_received)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge ((5'h0 == stop_it_tb.stop_it_state) | (5'h5 == stop_it_tb.stop_it_state)))\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge (5'h5 == stop_it_tb.stop_it_state))\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge (32'sh11 == stop_it_tb.num_correct_stops_received))\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge stop_it_tb.wrong_stop_received)\n");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(posedge (5'h0 == stop_it_tb.stop_it_state))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstop_it_tb___024root___dump_triggers__nba(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge stop_it_tb.clk_4_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(edge stop_it_tb.clk_4_i or posedge (5'h5 == stop_it_tb.stop_it_state) or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge stop_it_tb.clk_4_i or posedge stop_it_tb.correct_stop_received)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge stop_it_tb.clk_4_i)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge (5'h2 == stop_it_tb.stop_it_state))\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge ((5'h0 == stop_it_tb.stop_it_state) & stop_it_tb.rst_ni))\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge stop_it_tb.valid_go_received)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge stop_it_tb.correct_stop_received)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge ((5'h0 == stop_it_tb.stop_it_state) | (5'h5 == stop_it_tb.stop_it_state)))\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge (5'h5 == stop_it_tb.stop_it_state))\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge (32'sh11 == stop_it_tb.num_correct_stops_received))\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge stop_it_tb.wrong_stop_received)\n");
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(posedge (5'h0 == stop_it_tb.stop_it_state))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstop_it_tb___024root___ctor_var_reset(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->stop_it_tb__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__clk_4_i = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__go_i = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__stop_i = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__load_i = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__switches_i = VL_RAND_RESET_I(16);
    vlSelf->stop_it_tb__DOT__stop_it_state = VL_RAND_RESET_I(5);
    vlSelf->stop_it_tb__DOT__valid_go_received = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__valid_stop_received = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__digits_match = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__correct_stop_received = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__num_correct_stops_received = 0;
    vlSelf->stop_it_tb__DOT__wrong_stop_received = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__go_time = VL_RAND_RESET_Q(64);
    vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__decrementing_time = VL_RAND_RESET_Q(64);
    vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__wait_time = VL_RAND_RESET_Q(64);
    vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__stop_time = VL_RAND_RESET_Q(64);
    vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__newround_time = VL_RAND_RESET_Q(64);
    vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__wait_time = VL_RAND_RESET_Q(64);
    vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__stop_time = VL_RAND_RESET_Q(64);
    vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__newround_time = VL_RAND_RESET_Q(64);
    vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__wait_time = VL_RAND_RESET_Q(64);
    vlSelf->stop_it_tb__DOT__sim__DOT__unnamedblk4__DOT__rand_delay = 0;
    vlSelf->stop_it_tb__DOT__sim__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->stop_it_tb__DOT__stop_it__DOT___11_ = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__stop_it__DOT___27_ = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__stop_it__DOT___28_ = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal = VL_RAND_RESET_I(16);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d = VL_RAND_RESET_I(3);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes = VL_RAND_RESET_I(1);
    vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q = VL_RAND_RESET_I(3);
    vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___42___A = VL_RAND_RESET_I(2);
    vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___86___S = VL_RAND_RESET_I(5);
    vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___87___S = VL_RAND_RESET_I(4);
    vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___88___S = VL_RAND_RESET_I(6);
    vlSelf->stop_it_tb__DOT__stop_it__DOT___86___DOT____Vxrand_h8df4b479__0 = VL_RAND_RESET_I(32);
    vlSelf->stop_it_tb__DOT__stop_it__DOT___87___DOT____Vxrand_h8df4b479__0 = VL_RAND_RESET_I(32);
    vlSelf->stop_it_tb__DOT__stop_it__DOT___88___DOT____Vxrand_h8df4b479__0 = VL_RAND_RESET_I(32);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT___0_ = VL_RAND_RESET_I(32);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q = VL_RAND_RESET_I(5);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vxrand_h86990234__1 = VL_RAND_RESET_I(16);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT____Vxrand_h86990234__0 = VL_RAND_RESET_I(16);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___3_ = VL_RAND_RESET_I(16);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state = VL_RAND_RESET_I(16);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT___6___DOT____Vxrand_h8df4b479__0 = VL_RAND_RESET_I(32);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state = VL_RAND_RESET_I(8);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT____Vcellinp___3___D = VL_RAND_RESET_I(8);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT___0_ = VL_RAND_RESET_I(5);
    vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__stop_it_tb__DOT__rst_ni__v0 = 0;
    vlSelf->__VdlySet__stop_it_tb__DOT__num_correct_stops_received__v0 = 0;
    vlSelf->__VdlySet__stop_it_tb__DOT__rst_ni__v1 = 0;
    vlSelf->__VdlyVal__stop_it_tb__DOT__num_correct_stops_received__v1 = 0;
    vlSelf->__VdlySet__stop_it_tb__DOT__num_correct_stops_received__v1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__clk_4_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hdb996f34__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__correct_stop_received__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hdbbf5106__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h6ab44ae1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__valid_go_received__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hf58c66b9__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hae92503f__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__wrong_stop_received__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hdbbf71af__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
