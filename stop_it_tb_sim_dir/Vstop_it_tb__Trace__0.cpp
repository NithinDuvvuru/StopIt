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
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+6,(vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes));
        bufp->chgBit(oldp+7,(vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn));
        bufp->chgBit(oldp+8,(vlSelf->stop_it_tb__DOT__stop_it__DOT__gameRes));
        bufp->chgBit(oldp+9,(vlSelf->stop_it_tb__DOT__stop_it__DOT__gameEn));
        bufp->chgCData(oldp+10,(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d),5);
        bufp->chgBit(oldp+11,(vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgSData(oldp+12,(vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal),16);
        bufp->chgBit(oldp+13,(vlSelf->stop_it_tb__DOT__digit0_en_o));
        bufp->chgCData(oldp+14,((0xfU & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q))),4);
        bufp->chgBit(oldp+15,(vlSelf->stop_it_tb__DOT__digit1_en_o));
        bufp->chgCData(oldp+16,((1U & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q) 
                                       >> 4U))),4);
        bufp->chgBit(oldp+17,(vlSelf->stop_it_tb__DOT__digit2_en_o));
        bufp->chgCData(oldp+18,((0xfU & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state))),4);
        bufp->chgBit(oldp+19,(vlSelf->stop_it_tb__DOT__digit3_en_o));
        bufp->chgCData(oldp+20,((1U & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state) 
                                       >> 4U))),4);
        bufp->chgCData(oldp+21,(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q),5);
        bufp->chgBit(oldp+22,(vlSelf->stop_it_tb__DOT__digits_match));
        bufp->chgCData(oldp+23,(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q),5);
        bufp->chgCData(oldp+24,(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q),5);
        bufp->chgCData(oldp+25,((0x1fU & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state))),5);
        bufp->chgBit(oldp+26,(vlSelf->stop_it_tb__DOT__stop_it__DOT__shift));
        bufp->chgBit(oldp+27,((5U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_q))));
        bufp->chgBit(oldp+28,(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp__led_shifter__off_i));
        bufp->chgSData(oldp+29,(vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state),16);
        bufp->chgCData(oldp+30,(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state),8);
    }
    bufp->chgBit(oldp+31,(vlSelf->stop_it_tb__DOT__rst_ni));
    bufp->chgBit(oldp+32,(vlSelf->stop_it_tb__DOT__clk_4_i));
    bufp->chgBit(oldp+33,(vlSelf->stop_it_tb__DOT__valid_go_received));
    bufp->chgBit(oldp+34,(vlSelf->stop_it_tb__DOT__valid_stop_received));
    bufp->chgBit(oldp+35,(vlSelf->stop_it_tb__DOT__correct_stop_received));
    bufp->chgIData(oldp+36,(vlSelf->stop_it_tb__DOT__num_correct_stops_received),32);
    bufp->chgBit(oldp+37,(vlSelf->stop_it_tb__DOT__wrong_stop_received));
    bufp->chgCData(oldp+38,((0x1fU & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q) 
                                      - (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__gameEn)))),5);
    bufp->chgCData(oldp+39,((0x1fU & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q) 
                                      + (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn)))),5);
    bufp->chgQData(oldp+40,(vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__go_time),64);
    bufp->chgQData(oldp+42,(vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__decrementing_time),64);
    bufp->chgQData(oldp+44,(vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__wait_time),64);
    bufp->chgQData(oldp+46,(vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__stop_time),64);
    bufp->chgQData(oldp+48,(vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__newround_time),64);
    bufp->chgQData(oldp+50,(vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__wait_time),64);
    bufp->chgQData(oldp+52,(vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__stop_time),64);
    bufp->chgQData(oldp+54,(vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__newround_time),64);
    bufp->chgQData(oldp+56,(vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__wait_time),64);
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
