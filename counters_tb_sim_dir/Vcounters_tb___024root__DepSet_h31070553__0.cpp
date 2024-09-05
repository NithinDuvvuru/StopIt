// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounters_tb.h for the primary calling header

#include "Vcounters_tb__pch.h"
#include "Vcounters_tb__Syms.h"
#include "Vcounters_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vcounters_tb___024root___eval_initial__TOP__Vtiming__1(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.fst"});
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("Begin simulation.\n",0);
    (void)VL_URANDOM_SEEDED_II(0x64U);
    vlSelf->counters_tb__DOT__rst_ni = 0U;
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       47);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       48);
    vlSelf->counters_tb__DOT__rst_ni = 1U;
    vlSelf->counters_tb__DOT__en_i = 1U;
    co_await vlSelf->__VtrigSched_he8e182b7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       51);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       53);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x1eU != (IData)(vlSelf->counters_tb__DOT__game_counter__DOT__state_q)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                co_await vlSelf->__VdlySched.delay(1ULL, 
                                                   nullptr, 
                                                   "dv/counters_tb.sv", 
                                                   55);
                VL_WRITEF_NX("[%0t] %%Error: counters_tb.sv:55: Assertion failed in %Ncounters_tb.sim: Game counter did not decrement from 1f to 1e.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -3,vlSymsp->name());
                VL_STOP_MT("dv/counters_tb.sv", 55, "");
            }
        }
    }
    vlSelf->counters_tb__DOT__en_i = 0U;
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       57);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x1eU != (IData)(vlSelf->counters_tb__DOT__game_counter__DOT__state_q)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                co_await vlSelf->__VdlySched.delay(1ULL, 
                                                   nullptr, 
                                                   "dv/counters_tb.sv", 
                                                   59);
                VL_WRITEF_NX("[%0t] %%Error: counters_tb.sv:59: Assertion failed in %Ncounters_tb.sim: Game counter did not pause on en=0.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -3,vlSymsp->name());
                VL_STOP_MT("dv/counters_tb.sv", 59, "");
            }
        }
    }
    vlSelf->counters_tb__DOT__en_i = 1U;
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       61);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0U != (IData)(vlSelf->counters_tb__DOT__game_counter__DOT__state_q)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                co_await vlSelf->__VdlySched.delay(1ULL, 
                                                   nullptr, 
                                                   "dv/counters_tb.sv", 
                                                   63);
                VL_WRITEF_NX("[%0t] %%Error: counters_tb.sv:63: Assertion failed in %Ncounters_tb.sim: Game counter: Expected=0, received=%x\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -3,vlSymsp->name(),5,(IData)(vlSelf->counters_tb__DOT__game_counter__DOT__state_q));
                VL_STOP_MT("dv/counters_tb.sv", 63, "");
            }
        }
    }
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       64);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x1fU != (IData)(vlSelf->counters_tb__DOT__game_counter__DOT__state_q)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                co_await vlSelf->__VdlySched.delay(1ULL, 
                                                   nullptr, 
                                                   "dv/counters_tb.sv", 
                                                   66);
                VL_WRITEF_NX("[%0t] %%Error: counters_tb.sv:66: Assertion failed in %Ncounters_tb.sim: Game counter: Expected=0, received=%x\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -3,vlSymsp->name(),5,(IData)(vlSelf->counters_tb__DOT__game_counter__DOT__state_q));
                VL_STOP_MT("dv/counters_tb.sv", 66, "");
            }
        }
    }
    vlSelf->counters_tb__DOT__rst_ni = 0U;
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       69);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       70);
    vlSelf->counters_tb__DOT__rst_ni = 1U;
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       73);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U != (IData)(vlSelf->counters_tb__DOT__time_counter__DOT__state_q)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                co_await vlSelf->__VdlySched.delay(1ULL, 
                                                   nullptr, 
                                                   "dv/counters_tb.sv", 
                                                   75);
                VL_WRITEF_NX("[%0t] %%Error: counters_tb.sv:75: Assertion failed in %Ncounters_tb.sim: Time counter: Expected=1, received=%x\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -3,vlSymsp->name(),5,(IData)(vlSelf->counters_tb__DOT__time_counter__DOT__state_q));
                VL_STOP_MT("dv/counters_tb.sv", 75, "");
            }
        }
    }
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       76);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((2U != (IData)(vlSelf->counters_tb__DOT__time_counter__DOT__state_q)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                co_await vlSelf->__VdlySched.delay(1ULL, 
                                                   nullptr, 
                                                   "dv/counters_tb.sv", 
                                                   78);
                VL_WRITEF_NX("[%0t] %%Error: counters_tb.sv:78: Assertion failed in %Ncounters_tb.sim: Time counter: Expected=2, received=%x\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -3,vlSymsp->name(),5,(IData)(vlSelf->counters_tb__DOT__time_counter__DOT__state_q));
                VL_STOP_MT("dv/counters_tb.sv", 78, "");
            }
        }
    }
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       79);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       79);
    co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge counters_tb.clk_4_i)", 
                                                       "dv/counters_tb.sv", 
                                                       79);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((5U != (IData)(vlSelf->counters_tb__DOT__time_counter__DOT__state_q)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                co_await vlSelf->__VdlySched.delay(1ULL, 
                                                   nullptr, 
                                                   "dv/counters_tb.sv", 
                                                   81);
                VL_WRITEF_NX("[%0t] %%Error: counters_tb.sv:81: Assertion failed in %Ncounters_tb.sim: Time counter: Expected=5, received=%x\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -3,vlSymsp->name(),5,(IData)(vlSelf->counters_tb__DOT__time_counter__DOT__state_q));
                VL_STOP_MT("dv/counters_tb.sv", 81, "");
            }
        }
    }
    VL_WRITEF_NX("[%0t] -Info: counters_tb.sv:83: %Ncounters_tb.sim: All counters tests passed, but not every edge case is tested in this testbench. View dump.fst to confirm the behavior.\nEnd simulation.\n",0,
                 64,VL_TIME_UNITED_Q(1),-3,vlSymsp->name());
    VL_FINISH_MT("dv/counters_tb.sv", 87, "");
}

VL_INLINE_OPT VlCoroutine Vcounters_tb___024root___eval_initial__TOP__Vtiming__2(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge counters_tb.clk_4_i)", 
                                                           "dv/counters_tb.sv", 
                                                           30);
        if ((1U & (~ (IData)(vlSelf->counters_tb__DOT__rst_ni)))) {
            co_await vlSelf->__VtrigSched_he8e182f6__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge counters_tb.clk_4_i)", 
                                                               "dv/counters_tb.sv", 
                                                               32);
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_LIKELY((0U != (IData)(vlSelf->counters_tb__DOT__time_counter__DOT__state_q)))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        co_await vlSelf->__VdlySched.delay(1ULL, 
                                                           nullptr, 
                                                           "dv/counters_tb.sv", 
                                                           34);
                        VL_WRITEF_NX("[%0t] %%Error: counters_tb.sv:34: Assertion failed in %Ncounters_tb: Time counter should be initialized to 0.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -3,vlSymsp->name());
                        VL_STOP_MT("dv/counters_tb.sv", 34, "");
                    }
                }
            }
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_LIKELY((0x1fU != (IData)(vlSelf->counters_tb__DOT__game_counter__DOT__state_q)))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        co_await vlSelf->__VdlySched.delay(1ULL, 
                                                           nullptr, 
                                                           "dv/counters_tb.sv", 
                                                           36);
                        VL_WRITEF_NX("[%0t] %%Error: counters_tb.sv:36: Assertion failed in %Ncounters_tb: Game counter should be initialized to 1f.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -3,vlSymsp->name());
                        VL_STOP_MT("dv/counters_tb.sv", 36, "");
                    }
                }
            }
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounters_tb___024root___dump_triggers__act(Vcounters_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounters_tb___024root___eval_triggers__act(Vcounters_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounters_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounters_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->counters_tb__DOT__clk_4_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__counters_tb__DOT__clk_4_i__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->counters_tb__DOT__clk_4_i)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__counters_tb__DOT__clk_4_i__0)));
    vlSelf->__Vtrigprevexpr___TOP__counters_tb__DOT__clk_4_i__0 
        = vlSelf->counters_tb__DOT__clk_4_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcounters_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
