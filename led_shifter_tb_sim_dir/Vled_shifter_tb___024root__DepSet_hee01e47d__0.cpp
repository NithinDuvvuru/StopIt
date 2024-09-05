// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vled_shifter_tb.h for the primary calling header

#include "Vled_shifter_tb__pch.h"
#include "Vled_shifter_tb__Syms.h"
#include "Vled_shifter_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__1(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.fst"});
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("Begin simulation.\n",0);
    (void)VL_URANDOM_SEEDED_II(0x64U);
    vlSelf->led_shifter_tb__DOT__rst_ni = 0U;
    co_await vlSelf->__VtrigSched_he0de042d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge led_shifter_tb.clk_i)", 
                                                       "dv/led_shifter_tb.sv", 
                                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_he0de04ec__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge led_shifter_tb.clk_i)", 
                                                       "dv/led_shifter_tb.sv", 
                                                       83);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->led_shifter_tb__DOT__rst_ni = 1U;
    vlSelf->led_shifter_tb__DOT__switches_i = (0xffffU 
                                               & VL_RANDOM_I());
    vlSelf->led_shifter_tb__DOT__load_i = 1U;
    vlSelf->led_shifter_tb__DOT__off_i = 0U;
    vlSelf->led_shifter_tb__DOT__shift_i = 0U;
    co_await vlSelf->__VtrigSched_he0de04ec__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge led_shifter_tb.clk_i)", 
                                                       "dv/led_shifter_tb.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->led_shifter_tb__DOT__switches_i = (0xffffU 
                                               & (1U 
                                                  | VL_RANDOM_I()));
    vlSelf->led_shifter_tb__DOT__load_i = 1U;
    vlSelf->led_shifter_tb__DOT__off_i = 0U;
    vlSelf->led_shifter_tb__DOT__shift_i = 1U;
    co_await vlSelf->__VtrigSched_he0de04ec__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge led_shifter_tb.clk_i)", 
                                                       "dv/led_shifter_tb.sv", 
                                                       96);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->led_shifter_tb__DOT__switches_i = (0xffffU 
                                               & VL_RANDOM_I());
    vlSelf->led_shifter_tb__DOT__load_i = 0U;
    vlSelf->led_shifter_tb__DOT__off_i = 0U;
    vlSelf->led_shifter_tb__DOT__shift_i = 1U;
    co_await vlSelf->__VtrigSched_he0de04ec__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge led_shifter_tb.clk_i)", 
                                                       "dv/led_shifter_tb.sv", 
                                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->led_shifter_tb__DOT__switches_i = (0xffffU 
                                               & VL_RANDOM_I());
    vlSelf->led_shifter_tb__DOT__load_i = 0U;
    vlSelf->led_shifter_tb__DOT__off_i = 0U;
    vlSelf->led_shifter_tb__DOT__shift_i = 1U;
    co_await vlSelf->__VtrigSched_he0de04ec__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge led_shifter_tb.clk_i)", 
                                                       "dv/led_shifter_tb.sv", 
                                                       108);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->led_shifter_tb__DOT__sim__DOT__past_leds 
        = vlSelf->led_shifter_tb__DOT__led_shifter__DOT__leds_o;
    vlSelf->led_shifter_tb__DOT__switches_i = (0xffffU 
                                               & VL_RANDOM_I());
    vlSelf->led_shifter_tb__DOT__load_i = 0U;
    vlSelf->led_shifter_tb__DOT__off_i = 1U;
    vlSelf->led_shifter_tb__DOT__shift_i = 0U;
    co_await vlSelf->__VtrigSched_he0de04ec__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge led_shifter_tb.clk_i)", 
                                                       "dv/led_shifter_tb.sv", 
                                                       115);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->led_shifter_tb__DOT__switches_i = (0xffffU 
                                               & VL_RANDOM_I());
    vlSelf->led_shifter_tb__DOT__load_i = 0U;
    vlSelf->led_shifter_tb__DOT__off_i = 0U;
    vlSelf->led_shifter_tb__DOT__shift_i = 0U;
    co_await vlSelf->__VtrigSched_he0de04ec__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge led_shifter_tb.clk_i)", 
                                                       "dv/led_shifter_tb.sv", 
                                                       121);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->led_shifter_tb__DOT__sim__DOT__past_leds) 
                       != (IData)(vlSelf->led_shifter_tb__DOT__led_shifter__DOT__leds_o)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                co_await vlSelf->__VdlySched.delay(1ULL, 
                                                   nullptr, 
                                                   "dv/led_shifter_tb.sv", 
                                                   123);
                vlSelf->__Vm_traceActivity[2U] = 1U;
                VL_WRITEF_NX("[%0t] %%Error: led_shifter_tb.sv:123: Assertion failed in %Nled_shifter_tb.sim: LEDs should not have changed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -3,vlSymsp->name());
                VL_STOP_MT("dv/led_shifter_tb.sv", 123, "");
            }
        }
    }
    VL_WRITEF_NX("[%0t] -Info: led_shifter_tb.sv:125: %Nled_shifter_tb.sim: All led_shifter tests passed, but not every edge case is tested in this testbench. View dump.fst to confirm the behavior.\nEnd simulation.\n",0,
                 64,VL_TIME_UNITED_Q(1),-3,vlSymsp->name());
    VL_FINISH_MT("dv/led_shifter_tb.sv", 129, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__2(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "dv/led_shifter_tb.sv", 
                                           42);
        if (vlSelf->led_shifter_tb__DOT__off_i) {
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_LIKELY((0U != (IData)(vlSelf->led_shifter_tb__DOT__led_shifter__DOT__leds_o)))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        co_await vlSelf->__VdlySched.delay(1ULL, 
                                                           nullptr, 
                                                           "dv/led_shifter_tb.sv", 
                                                           45);
                        VL_WRITEF_NX("[%0t] %%Error: led_shifter_tb.sv:45: Assertion failed in %Nled_shifter_tb: Off should set all LEDs to 0.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -3,vlSymsp->name());
                        VL_STOP_MT("dv/led_shifter_tb.sv", 45, "");
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT VlCoroutine Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__3(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_he0de042d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge led_shifter_tb.clk_i)", 
                                                           "dv/led_shifter_tb.sv", 
                                                           60);
        if (vlSelf->led_shifter_tb__DOT__rst_ni) {
            if ((((IData)(vlSelf->led_shifter_tb__DOT__shift_i) 
                  & (~ (IData)(vlSelf->led_shifter_tb__DOT__load_i))) 
                 & (~ (IData)(vlSelf->led_shifter_tb__DOT__off_i)))) {
                vlSelf->led_shifter_tb__DOT__unnamedblk2__DOT__past_leds 
                    = vlSelf->led_shifter_tb__DOT__led_shifter__DOT__leds_o;
                co_await vlSelf->__VtrigSched_he0de042d__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge led_shifter_tb.clk_i)", 
                                                                   "dv/led_shifter_tb.sv", 
                                                                   66);
                if ((1U & (~ (IData)(vlSelf->led_shifter_tb__DOT__off_i)))) {
                    if (vlSymsp->_vm_contextp__->assertOn()) {
                        if (VL_LIKELY(((IData)(vlSelf->led_shifter_tb__DOT__led_shifter__DOT__leds_o) 
                                       != (1U | (0xfffeU 
                                                 & ((IData)(vlSelf->led_shifter_tb__DOT__unnamedblk2__DOT__past_leds) 
                                                    << 1U)))))) {
                            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                co_await vlSelf->__VdlySched.delay(1ULL, 
                                                                   nullptr, 
                                                                   "dv/led_shifter_tb.sv", 
                                                                   69);
                                VL_WRITEF_NX("[%0t] %%Error: led_shifter_tb.sv:69: Assertion failed in %Nled_shifter_tb.unnamedblk2: Shift incorrect. Expected %b. received %b.\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -3,vlSymsp->name(),
                                             16,(1U 
                                                 | (0xfffeU 
                                                    & ((IData)(vlSelf->led_shifter_tb__DOT__unnamedblk2__DOT__past_leds) 
                                                       << 1U))),
                                             16,(IData)(vlSelf->led_shifter_tb__DOT__led_shifter__DOT__leds_o));
                                VL_STOP_MT("dv/led_shifter_tb.sv", 69, "");
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT VlCoroutine Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__4(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_he0de042d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge led_shifter_tb.clk_i)", 
                                                           "dv/led_shifter_tb.sv", 
                                                           49);
        if (vlSelf->led_shifter_tb__DOT__rst_ni) {
            if (vlSelf->led_shifter_tb__DOT__load_i) {
                vlSelf->led_shifter_tb__DOT__unnamedblk1__DOT__past_switches 
                    = vlSelf->led_shifter_tb__DOT__switches_i;
                co_await vlSelf->__VtrigSched_he0de042d__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge led_shifter_tb.clk_i)", 
                                                                   "dv/led_shifter_tb.sv", 
                                                                   52);
                if ((1U & (~ (IData)(vlSelf->led_shifter_tb__DOT__off_i)))) {
                    if (vlSymsp->_vm_contextp__->assertOn()) {
                        if (VL_LIKELY(((IData)(vlSelf->led_shifter_tb__DOT__led_shifter__DOT__leds_o) 
                                       != (IData)(vlSelf->led_shifter_tb__DOT__unnamedblk1__DOT__past_switches)))) {
                            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                co_await vlSelf->__VdlySched.delay(1ULL, 
                                                                   nullptr, 
                                                                   "dv/led_shifter_tb.sv", 
                                                                   55);
                                VL_WRITEF_NX("[%0t] %%Error: led_shifter_tb.sv:55: Assertion failed in %Nled_shifter_tb.unnamedblk1: Load should set LEDs to %b, received 00100000\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -3,vlSymsp->name(),
                                             16,(IData)(vlSelf->led_shifter_tb__DOT__unnamedblk1__DOT__past_switches));
                                VL_STOP_MT("dv/led_shifter_tb.sv", 55, "");
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT VlCoroutine Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__5(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_initial__TOP__Vtiming__5\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_he0de042d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge led_shifter_tb.clk_i)", 
                                                           "dv/led_shifter_tb.sv", 
                                                           34);
        if ((1U & (~ (IData)(vlSelf->led_shifter_tb__DOT__rst_ni)))) {
            co_await vlSelf->__VtrigSched_he0de042d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge led_shifter_tb.clk_i)", 
                                                               "dv/led_shifter_tb.sv", 
                                                               36);
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_LIKELY((0U != (IData)(vlSelf->led_shifter_tb__DOT__led_shifter__DOT__leds_o)))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        co_await vlSelf->__VdlySched.delay(1ULL, 
                                                           nullptr, 
                                                           "dv/led_shifter_tb.sv", 
                                                           38);
                        VL_WRITEF_NX("[%0t] %%Error: led_shifter_tb.sv:38: Assertion failed in %Nled_shifter_tb: Reset should set all LEDs to 0.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -3,vlSymsp->name());
                        VL_STOP_MT("dv/led_shifter_tb.sv", 38, "");
                    }
                }
            }
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_shifter_tb___024root___dump_triggers__act(Vled_shifter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vled_shifter_tb___024root___eval_triggers__act(Vled_shifter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vled_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_shifter_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->led_shifter_tb__DOT__clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__led_shifter_tb__DOT__clk_i__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->led_shifter_tb__DOT__clk_i)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__led_shifter_tb__DOT__clk_i__0)));
    vlSelf->__Vtrigprevexpr___TOP__led_shifter_tb__DOT__clk_i__0 
        = vlSelf->led_shifter_tb__DOT__clk_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vled_shifter_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
