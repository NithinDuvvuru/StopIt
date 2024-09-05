// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vstop_it_tb__Syms.h"


void Vstop_it_tb___024root__trace_chg_0_sub_0(Vstop_it_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vstop_it_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root__trace_chg_0\n"); );
    // Init
    Vstop_it_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstop_it_tb___024root*>(voidSelf);
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vstop_it_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vstop_it_tb___024root__trace_chg_0_sub_0(Vstop_it_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->stop_it_tb__DOT__go_i));
        bufp->chgBit(oldp+1,(vlSelf->stop_it_tb__DOT__stop_i));
        bufp->chgBit(oldp+2,(vlSelf->stop_it_tb__DOT__load_i));
        bufp->chgSData(oldp+3,(vlSelf->stop_it_tb__DOT__switches_i),16);
        bufp->chgIData(oldp+4,(vlSelf->stop_it_tb__DOT__sim__DOT__unnamedblk4__DOT__rand_delay),32);
        bufp->chgIData(oldp+5,(vlSelf->stop_it_tb__DOT__sim__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+6,(vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal),16);
        bufp->chgBit(oldp+7,((1U & (~ ((((((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))) 
                                           | (1U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q))) 
                                          | (2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q))) 
                                         | (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT___28_)) 
                                        | ((4U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                           & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) 
                                       | (5U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))))));
        bufp->chgCData(oldp+8,((0xfU & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q))),4);
        bufp->chgCData(oldp+9,((1U & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q) 
                                      >> 4U))),4);
        bufp->chgBit(oldp+10,((1U & (~ (((((1U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                           | (2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q))) 
                                          | (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT___28_)) 
                                         | ((~ (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q)) 
                                            & (4U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))) 
                                        | (5U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))))));
        bufp->chgCData(oldp+11,((0xfU & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state))),4);
        bufp->chgCData(oldp+12,((1U & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state) 
                                       >> 4U))),4);
        bufp->chgCData(oldp+13,(vlSelf->stop_it_tb__DOT__stop_it_state),5);
        bufp->chgBit(oldp+14,(vlSelf->stop_it_tb__DOT__digits_match));
        bufp->chgBit(oldp+15,((5U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q))));
        bufp->chgBit(oldp+16,((0U != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q))));
        bufp->chgCData(oldp+17,(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q),5);
        bufp->chgCData(oldp+18,((0x1fU & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state))),5);
        bufp->chgBit(oldp+19,(vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement));
        bufp->chgBit(oldp+20,((1U & (~ ((4U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                        | ((3U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                           | ((2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                              | (0U 
                                                 != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___42___A)))))))));
        bufp->chgCData(oldp+21,(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q),5);
        bufp->chgCData(oldp+22,(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q),5);
        bufp->chgBit(oldp+23,(vlSelf->stop_it_tb__DOT__stop_it__DOT___27_));
        bufp->chgSData(oldp+24,(vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state),16);
        bufp->chgCData(oldp+25,(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state),8);
    }
    bufp->chgBit(oldp+26,(vlSelf->stop_it_tb__DOT__rst_ni));
    bufp->chgBit(oldp+27,(vlSelf->stop_it_tb__DOT__clk_4_i));
    bufp->chgBit(oldp+28,(vlSelf->stop_it_tb__DOT__valid_go_received));
    bufp->chgBit(oldp+29,(vlSelf->stop_it_tb__DOT__valid_stop_received));
    bufp->chgBit(oldp+30,(vlSelf->stop_it_tb__DOT__correct_stop_received));
    bufp->chgIData(oldp+31,(vlSelf->stop_it_tb__DOT__num_correct_stops_received),32);
    bufp->chgBit(oldp+32,(vlSelf->stop_it_tb__DOT__wrong_stop_received));
    bufp->chgBit(oldp+33,(((~ (IData)(vlSelf->stop_it_tb__DOT__stop_i)) 
                           & (2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))));
    bufp->chgCData(oldp+34,(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d),3);
    bufp->chgBit(oldp+35,(vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn));
    bufp->chgBit(oldp+36,(vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes));
    bufp->chgQData(oldp+37,(vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__go_time),64);
    bufp->chgQData(oldp+39,(vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__decrementing_time),64);
    bufp->chgQData(oldp+41,(vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__wait_time),64);
    bufp->chgQData(oldp+43,(vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__stop_time),64);
    bufp->chgQData(oldp+45,(vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__newround_time),64);
    bufp->chgQData(oldp+47,(vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__wait_time),64);
    bufp->chgQData(oldp+49,(vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__stop_time),64);
    bufp->chgQData(oldp+51,(vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__newround_time),64);
    bufp->chgQData(oldp+53,(vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__wait_time),64);
}

void Vstop_it_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root__trace_cleanup\n"); );
    // Init
    Vstop_it_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstop_it_tb___024root*>(voidSelf);
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
