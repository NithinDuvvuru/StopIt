// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstop_it_tb.h for the primary calling header

#include "Vstop_it_tb__pch.h"
#include "Vstop_it_tb__Syms.h"
#include "Vstop_it_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__1(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ stop_it_tb__DOT____Vrepeat3;
    stop_it_tb__DOT____Vrepeat3 = 0;
    // Body
    stop_it_tb__DOT____Vrepeat3 = 0x3d090U;
    while (VL_LTS_III(32, 0U, stop_it_tb__DOT____Vrepeat3)) {
        co_await vlSelf->__VtrigSched_h65058da2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge stop_it_tb.clk_4_i)", 
                                                           "dv/stop_it_tb.sv", 
                                                           149);
        stop_it_tb__DOT____Vrepeat3 = (stop_it_tb__DOT____Vrepeat3 
                                       - (IData)(1U));
    }
    VL_WRITEF_NX("Timed out\n[%0t] %%Fatal: stop_it_tb.sv:151: Assertion failed in %Nstop_it_tb\n",0,
                 64,VL_TIME_UNITED_Q(1),-3,vlSymsp->name());
    VL_STOP_MT("dv/stop_it_tb.sv", 151, "");
}

VL_INLINE_OPT VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__2(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Init
    IData/*31:0*/ stop_it_tb__DOT____Vrepeat4;
    stop_it_tb__DOT____Vrepeat4 = 0;
    std::string __Vtemp_1;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.fst"});
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("Begin simulation.\n",0);
    (void)VL_URANDOM_SEEDED_II(0x64U);
    vlSelf->stop_it_tb__DOT__go_i = 0U;
    vlSelf->stop_it_tb__DOT__stop_i = 0U;
    vlSelf->stop_it_tb__DOT__load_i = 0U;
    vlSelf->stop_it_tb__DOT__switches_i = 0U;
    vlSelf->stop_it_tb__DOT__rst_ni = 0U;
    co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge stop_it_tb.clk_4_i)", 
                                                       "dv/stop_it_tb.sv", 
                                                       166);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge stop_it_tb.clk_4_i)", 
                                                       "dv/stop_it_tb.sv", 
                                                       167);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->stop_it_tb__DOT__rst_ni = 1U;
    co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge stop_it_tb.clk_4_i)", 
                                                       "dv/stop_it_tb.sv", 
                                                       170);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    stop_it_tb__DOT____Vrepeat4 = 0x9c4U;
    while (VL_LTS_III(32, 0U, stop_it_tb__DOT____Vrepeat4)) {
        vlSelf->stop_it_tb__DOT__sim__DOT__unnamedblk4__DOT__rand_delay 
            = VL_URANDOM_RANGE_I(0U, 0x50U);
        vlSelf->stop_it_tb__DOT__go_i = 1U;
        co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge stop_it_tb.clk_4_i)", 
                                                           "dv/stop_it_tb.sv", 
                                                           176);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->stop_it_tb__DOT__go_i = 0U;
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U != (IData)(vlSelf->stop_it_tb__DOT__stop_it_state)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    co_await vlSelf->__VdlySched.delay(1ULL, 
                                                       nullptr, 
                                                       "dv/stop_it_tb.sv", 
                                                       180);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    __Vtemp_1 = Vstop_it_tb___024unit::__Venumtab_enum_name0
                        [(7U & (IData)(vlSelf->stop_it_tb__DOT__stop_it_state))];
                    VL_WRITEF_NX("[%0t] %%Error: stop_it_tb.sv:180: Assertion failed in %Nstop_it_tb.sim.unnamedblk4: After go, state should be STARTING. Received=%@\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -3,vlSymsp->name(),
                                 -1,&(__Vtemp_1));
                    VL_STOP_MT("dv/stop_it_tb.sv", 180, "");
                }
            }
        }
        co_await vlSelf->__VtrigSched_h4b8896b1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge (5'h2 == stop_it_tb.stop_it_state))", 
                                                           "dv/stop_it_tb.sv", 
                                                           182);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((0x1fU != (0x1fU & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    co_await vlSelf->__VdlySched.delay(1ULL, 
                                                       nullptr, 
                                                       "dv/stop_it_tb.sv", 
                                                       184);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    VL_WRITEF_NX("[%0t] %%Error: stop_it_tb.sv:184: Assertion failed in %Nstop_it_tb.sim.unnamedblk4: In DECREMENTING, counter should be initialized to 1f. Received=%x\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -3,vlSymsp->name(),
                                 8,(0x1fU & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q)));
                    VL_STOP_MT("dv/stop_it_tb.sv", 184, "");
                }
            }
        }
        vlSelf->stop_it_tb__DOT__sim__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i = 0U;
        while (VL_LTES_III(32, vlSelf->stop_it_tb__DOT__sim__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i, vlSelf->stop_it_tb__DOT__sim__DOT__unnamedblk4__DOT__rand_delay)) {
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               186);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->stop_it_tb__DOT__sim__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i 
                = ((IData)(1U) + vlSelf->stop_it_tb__DOT__sim__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i);
        }
        vlSelf->stop_it_tb__DOT__stop_i = 1U;
        co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge stop_it_tb.clk_4_i)", 
                                                           "dv/stop_it_tb.sv", 
                                                           189);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->stop_it_tb__DOT__stop_i = 0U;
        co_await vlSelf->__VtrigSched_hfa83947e__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge ((5'h0 == stop_it_tb.stop_it_state) & stop_it_tb.rst_ni))", 
                                                           "dv/stop_it_tb.sv", 
                                                           192);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge stop_it_tb.clk_4_i)", 
                                                           "dv/stop_it_tb.sv", 
                                                           193);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        stop_it_tb__DOT____Vrepeat4 = (stop_it_tb__DOT____Vrepeat4 
                                       - (IData)(1U));
    }
    VL_WRITEF_NX("[%0t] -Info: stop_it_tb.sv:196: %Nstop_it_tb.sim: All stop_it tests passed, but not every edge case is tested in this testbench. View dump.fst to confirm the behavior.\nEnd simulation.\n",0,
                 64,VL_TIME_UNITED_Q(1),-3,vlSymsp->name());
    VL_FINISH_MT("dv/stop_it_tb.sv", 200, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__4(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__4\n"); );
    // Init
    std::string __Vfunc_stop_it_tb__DOT__format_time__0__Vfuncout;
    QData/*63:0*/ __Vfunc_stop_it_tb__DOT__format_time__0__t;
    __Vfunc_stop_it_tb__DOT__format_time__0__t = 0;
    std::string __Vtemp_1;
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h8f6e87a2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge stop_it_tb.correct_stop_received)", 
                                                           "dv/stop_it_tb.sv", 
                                                           86);
        if (vlSelf->stop_it_tb__DOT__rst_ni) {
            co_await vlSelf->__VtrigSched_h65058da2__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               89);
            vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__stop_time 
                = VL_TIME_UNITED_Q(1);
            co_await vlSelf->__VtrigSched_h713bb166__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge ((5'h0 == stop_it_tb.stop_it_state) | (5'h5 == stop_it_tb.stop_it_state)))", 
                                                               "dv/stop_it_tb.sv", 
                                                               92);
            vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__newround_time 
                = VL_TIME_UNITED_Q(1);
            vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__wait_time 
                = (vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__newround_time 
                   - vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__stop_time);
            if (vlSelf->stop_it_tb__DOT__rst_ni) {
                if (vlSymsp->_vm_contextp__->assertOn()) {
                    if (VL_LIKELY((1U & (~ (4.00000000000000000e+03 
                                            == VL_ITOR_D_Q(64, vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__wait_time)))))) {
                        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                            co_await vlSelf->__VdlySched.delay(1ULL, 
                                                               nullptr, 
                                                               "dv/stop_it_tb.sv", 
                                                               97);
                            __Vtemp_1 = ([&]() {
                                    __Vfunc_stop_it_tb__DOT__format_time__0__t 
                                        = vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__wait_time;
                                    VL_TIMEFORMAT_IINI(0U, 2U, 
                                                       std::string{"s"}, 1U, vlSymsp->_vm_contextp__);
                                    __Vfunc_stop_it_tb__DOT__format_time__0__Vfuncout 
                                        = VL_SFORMATF_N_NX("%0t",0,
                                                           64,
                                                           __Vfunc_stop_it_tb__DOT__format_time__0__t,
                                                           -3) ;
                                }(), __Vfunc_stop_it_tb__DOT__format_time__0__Vfuncout);
                            VL_WRITEF_NX("[%0t] %%Error: stop_it_tb.sv:97: Assertion failed in %Nstop_it_tb.unnamedblk2: Expected 4 second pause after correct answer. Instead paused %@\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -3,vlSymsp->name(),
                                         -1,&(__Vtemp_1));
                            VL_STOP_MT("dv/stop_it_tb.sv", 97, "");
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__5(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__5\n"); );
    // Init
    std::string __Vtemp_1;
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h65058da2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge stop_it_tb.clk_4_i)", 
                                                           "dv/stop_it_tb.sv", 
                                                           140);
        if ((1U & (~ (IData)(vlSelf->stop_it_tb__DOT__rst_ni)))) {
            co_await vlSelf->__VtrigSched_h65058da2__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               142);
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_LIKELY((0U != (IData)(vlSelf->stop_it_tb__DOT__stop_it_state)))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        co_await vlSelf->__VdlySched.delay(1ULL, 
                                                           nullptr, 
                                                           "dv/stop_it_tb.sv", 
                                                           144);
                        __Vtemp_1 = Vstop_it_tb___024unit::__Venumtab_enum_name0
                            [(7U & (IData)(vlSelf->stop_it_tb__DOT__stop_it_state))];
                        VL_WRITEF_NX("[%0t] %%Error: stop_it_tb.sv:144: Assertion failed in %Nstop_it_tb: After reset, state should be WAITING_TO_START. Received=%@\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -3,vlSymsp->name(),
                                     -1,&(__Vtemp_1));
                        VL_STOP_MT("dv/stop_it_tb.sv", 144, "");
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__6(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__6\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h65058da2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge stop_it_tb.clk_4_i)", 
                                                           "dv/stop_it_tb.sv", 
                                                           113);
        if (vlSelf->stop_it_tb__DOT__rst_ni) {
            co_await vlSelf->__VtrigSched_h4baeb923__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge (5'h5 == stop_it_tb.stop_it_state))", 
                                                               "dv/stop_it_tb.sv", 
                                                               114);
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_LIKELY((0x11U != vlSelf->stop_it_tb__DOT__num_correct_stops_received))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        co_await vlSelf->__VdlySched.delay(1ULL, 
                                                           nullptr, 
                                                           "dv/stop_it_tb.sv", 
                                                           116);
                        VL_WRITEF_NX("[%0t] %%Error: stop_it_tb.sv:116: Assertion failed in %Nstop_it_tb: Expected WON state after 17 correct answers. Instead WON after %0d correct answers\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -3,vlSymsp->name(),
                                     32,vlSelf->stop_it_tb__DOT__num_correct_stops_received);
                        VL_STOP_MT("dv/stop_it_tb.sv", 116, "");
                    }
                }
            }
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               118);
            vlSelf->__VdlySet__stop_it_tb__DOT__rst_ni__v0 = 1U;
            vlSelf->__VdlySet__stop_it_tb__DOT__num_correct_stops_received__v0 = 1U;
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               121);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               121);
            vlSelf->__VdlySet__stop_it_tb__DOT__rst_ni__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__7(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__7\n"); );
    // Init
    std::string __Vtemp_1;
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h65058da2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge stop_it_tb.clk_4_i)", 
                                                           "dv/stop_it_tb.sv", 
                                                           106);
        if (vlSelf->stop_it_tb__DOT__rst_ni) {
            co_await vlSelf->__VtrigSched_h36a597e8__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge (32'sh11 == stop_it_tb.num_correct_stops_received))", 
                                                               "dv/stop_it_tb.sv", 
                                                               107);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            co_await vlSelf->__VtrigSched_h65058d63__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               108);
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_LIKELY((5U != (IData)(vlSelf->stop_it_tb__DOT__stop_it_state)))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        co_await vlSelf->__VdlySched.delay(1ULL, 
                                                           nullptr, 
                                                           "dv/stop_it_tb.sv", 
                                                           110);
                        __Vtemp_1 = Vstop_it_tb___024unit::__Venumtab_enum_name0
                            [(7U & (IData)(vlSelf->stop_it_tb__DOT__stop_it_state))];
                        VL_WRITEF_NX("[%0t] %%Error: stop_it_tb.sv:110: Assertion failed in %Nstop_it_tb: Expected WON state after 17 correct answers. Instead in state %@\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -3,vlSymsp->name(),
                                     -1,&(__Vtemp_1));
                        VL_STOP_MT("dv/stop_it_tb.sv", 110, "");
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT VlCoroutine Vstop_it_tb___024root___eval_initial__TOP__Vtiming__9(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_initial__TOP__Vtiming__9\n"); );
    // Init
    std::string __Vfunc_stop_it_tb__DOT__format_time__1__Vfuncout;
    QData/*63:0*/ __Vfunc_stop_it_tb__DOT__format_time__1__t;
    __Vfunc_stop_it_tb__DOT__format_time__1__t = 0;
    std::string __Vtemp_1;
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h38a71750__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge stop_it_tb.wrong_stop_received)", 
                                                           "dv/stop_it_tb.sv", 
                                                           126);
        if (vlSelf->stop_it_tb__DOT__rst_ni) {
            co_await vlSelf->__VtrigSched_h65058da2__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge stop_it_tb.clk_4_i)", 
                                                               "dv/stop_it_tb.sv", 
                                                               129);
            vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__stop_time 
                = VL_TIME_UNITED_Q(1);
            co_await vlSelf->__VtrigSched_h4b88b658__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge (5'h0 == stop_it_tb.stop_it_state))", 
                                                               "dv/stop_it_tb.sv", 
                                                               132);
            vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__newround_time 
                = VL_TIME_UNITED_Q(1);
            vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__wait_time 
                = (vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__newround_time 
                   - vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__stop_time);
            if (vlSelf->stop_it_tb__DOT__rst_ni) {
                if (vlSymsp->_vm_contextp__->assertOn()) {
                    if (VL_LIKELY((1U & (~ (4.00000000000000000e+03 
                                            == VL_ITOR_D_Q(64, vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__wait_time)))))) {
                        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                            co_await vlSelf->__VdlySched.delay(1ULL, 
                                                               nullptr, 
                                                               "dv/stop_it_tb.sv", 
                                                               137);
                            __Vtemp_1 = ([&]() {
                                    __Vfunc_stop_it_tb__DOT__format_time__1__t 
                                        = vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__wait_time;
                                    VL_TIMEFORMAT_IINI(0U, 2U, 
                                                       std::string{"s"}, 1U, vlSymsp->_vm_contextp__);
                                    __Vfunc_stop_it_tb__DOT__format_time__1__Vfuncout 
                                        = VL_SFORMATF_N_NX("%0t",0,
                                                           64,
                                                           __Vfunc_stop_it_tb__DOT__format_time__1__t,
                                                           -3) ;
                                }(), __Vfunc_stop_it_tb__DOT__format_time__1__Vfuncout);
                            VL_WRITEF_NX("[%0t] %%Error: stop_it_tb.sv:137: Assertion failed in %Nstop_it_tb.unnamedblk3: Expected 4 second pause after wrong answer. Instead paused %@\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -3,vlSymsp->name(),
                                         -1,&(__Vtemp_1));
                            VL_STOP_MT("dv/stop_it_tb.sv", 137, "");
                        }
                    }
                }
            }
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstop_it_tb___024root___dump_triggers__act(Vstop_it_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vstop_it_tb___024root___eval_triggers__act(Vstop_it_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root___eval_triggers__act\n"); );
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_hdb996f34__0;
    __Vtrigcurrexpr_hdb996f34__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_hdbbf5106__0;
    __Vtrigcurrexpr_hdbbf5106__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_h6ab44ae1__0;
    __Vtrigcurrexpr_h6ab44ae1__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_hf58c66b9__0;
    __Vtrigcurrexpr_hf58c66b9__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_hae92503f__0;
    __Vtrigcurrexpr_hae92503f__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_hdbbf71af__0;
    __Vtrigcurrexpr_hdbbf71af__0 = 0;
    __Vtrigcurrexpr_hdb996f34__0 = (5U == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state));
    __Vtrigcurrexpr_hdbbf5106__0 = (2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state));
    __Vtrigcurrexpr_h6ab44ae1__0 = ((0U == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state)) 
                                    & (IData)(vlSelf->stop_it_tb__DOT__rst_ni));
    __Vtrigcurrexpr_hf58c66b9__0 = ((0U == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state)) 
                                    | (5U == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state)));
    __Vtrigcurrexpr_hae92503f__0 = (0x11U == vlSelf->stop_it_tb__DOT__num_correct_stops_received);
    __Vtrigcurrexpr_hdbbf71af__0 = (0U == (IData)(vlSelf->stop_it_tb__DOT__stop_it_state));
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->stop_it_tb__DOT__clk_4_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__clk_4_i__0))));
    vlSelf->__VactTriggered.set(1U, ((((IData)(vlSelf->stop_it_tb__DOT__clk_4_i) 
                                       ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__clk_4_i__0)) 
                                      | ((IData)(__Vtrigcurrexpr_hdb996f34__0) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr_hdb996f34__0)))) 
                                     | vlSelf->__VdlySched.awaitingCurrentTime()));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->stop_it_tb__DOT__clk_4_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__clk_4_i__0))) 
                                     | ((IData)(vlSelf->stop_it_tb__DOT__correct_stop_received) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__correct_stop_received__0)))));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(4U, ((~ (IData)(vlSelf->stop_it_tb__DOT__clk_4_i)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__clk_4_i__0)));
    vlSelf->__VactTriggered.set(5U, ((IData)(__Vtrigcurrexpr_hdbbf5106__0) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr_hdbbf5106__0))));
    vlSelf->__VactTriggered.set(6U, ((IData)(__Vtrigcurrexpr_h6ab44ae1__0) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr_h6ab44ae1__0))));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSelf->stop_it_tb__DOT__valid_go_received) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__valid_go_received__0))));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSelf->stop_it_tb__DOT__correct_stop_received) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__correct_stop_received__0))));
    vlSelf->__VactTriggered.set(9U, ((IData)(__Vtrigcurrexpr_hf58c66b9__0) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr_hf58c66b9__0))));
    vlSelf->__VactTriggered.set(0xaU, ((IData)(__Vtrigcurrexpr_hdb996f34__0) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr_hdb996f34__0))));
    vlSelf->__VactTriggered.set(0xbU, ((IData)(__Vtrigcurrexpr_hae92503f__0) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr_hae92503f__0))));
    vlSelf->__VactTriggered.set(0xcU, ((IData)(vlSelf->stop_it_tb__DOT__wrong_stop_received) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__wrong_stop_received__0))));
    vlSelf->__VactTriggered.set(0xdU, ((IData)(__Vtrigcurrexpr_hdbbf71af__0) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr_hdbbf71af__0))));
    vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__clk_4_i__0 
        = vlSelf->stop_it_tb__DOT__clk_4_i;
    vlSelf->__Vtrigprevexpr_hdb996f34__0 = __Vtrigcurrexpr_hdb996f34__0;
    vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__correct_stop_received__0 
        = vlSelf->stop_it_tb__DOT__correct_stop_received;
    vlSelf->__Vtrigprevexpr_hdbbf5106__0 = __Vtrigcurrexpr_hdbbf5106__0;
    vlSelf->__Vtrigprevexpr_h6ab44ae1__0 = __Vtrigcurrexpr_h6ab44ae1__0;
    vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__valid_go_received__0 
        = vlSelf->stop_it_tb__DOT__valid_go_received;
    vlSelf->__Vtrigprevexpr_hf58c66b9__0 = __Vtrigcurrexpr_hf58c66b9__0;
    vlSelf->__Vtrigprevexpr_hae92503f__0 = __Vtrigcurrexpr_hae92503f__0;
    vlSelf->__Vtrigprevexpr___TOP__stop_it_tb__DOT__wrong_stop_received__0 
        = vlSelf->stop_it_tb__DOT__wrong_stop_received;
    vlSelf->__Vtrigprevexpr_hdbbf71af__0 = __Vtrigcurrexpr_hdbbf71af__0;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstop_it_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
