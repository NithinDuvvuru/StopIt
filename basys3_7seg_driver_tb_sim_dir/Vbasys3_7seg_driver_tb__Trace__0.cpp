// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vbasys3_7seg_driver_tb__Syms.h"


void Vbasys3_7seg_driver_tb___024root__trace_chg_0_sub_0(Vbasys3_7seg_driver_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vbasys3_7seg_driver_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root__trace_chg_0\n"); );
    // Init
    Vbasys3_7seg_driver_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbasys3_7seg_driver_tb___024root*>(voidSelf);
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbasys3_7seg_driver_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbasys3_7seg_driver_tb___024root__trace_chg_0_sub_0(Vbasys3_7seg_driver_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->basys3_7seg_driver_tb__DOT__rst_ni));
        bufp->chgBit(oldp+1,(vlSelf->basys3_7seg_driver_tb__DOT__digit0_en_i));
        bufp->chgCData(oldp+2,(vlSelf->basys3_7seg_driver_tb__DOT__digit0_i),4);
        bufp->chgBit(oldp+3,(vlSelf->basys3_7seg_driver_tb__DOT__digit1_en_i));
        bufp->chgCData(oldp+4,(vlSelf->basys3_7seg_driver_tb__DOT__digit1_i),4);
        bufp->chgBit(oldp+5,(vlSelf->basys3_7seg_driver_tb__DOT__digit2_en_i));
        bufp->chgCData(oldp+6,(vlSelf->basys3_7seg_driver_tb__DOT__digit2_i),4);
        bufp->chgBit(oldp+7,(vlSelf->basys3_7seg_driver_tb__DOT__digit3_en_i));
        bufp->chgCData(oldp+8,(vlSelf->basys3_7seg_driver_tb__DOT__digit3_i),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+9,(vlSelf->basys3_7seg_driver_tb__DOT__expected_digit),4);
        bufp->chgBit(oldp+10,(vlSelf->basys3_7seg_driver_tb__DOT__expected_digit_en));
        bufp->chgCData(oldp+11,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__anode_o),4);
        bufp->chgCData(oldp+12,(((0xfU == (IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__anode_o))
                                  ? 0x7fU : (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__A) 
                                              << 6U) 
                                             | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__B) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__C) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__D) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__E) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__F) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__G))))))))),7);
        bufp->chgCData(oldp+13,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__digit),4);
        bufp->chgBit(oldp+14,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__A));
        bufp->chgBit(oldp+15,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__B));
        bufp->chgBit(oldp+16,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__C));
        bufp->chgBit(oldp+17,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__D));
        bufp->chgBit(oldp+18,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__E));
        bufp->chgBit(oldp+19,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__F));
        bufp->chgBit(oldp+20,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__G));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__digit) 
                                     >> 3U))));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__digit) 
                                     >> 2U))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__digit) 
                                     >> 1U))));
        bufp->chgBit(oldp+24,((1U & (IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__digit))));
    }
    bufp->chgBit(oldp+25,(vlSelf->basys3_7seg_driver_tb__DOT__clk_1k_i));
    bufp->chgCData(oldp+26,((3U & ((IData)(1U) + (IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__state_q)))),2);
    bufp->chgCData(oldp+27,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__state_q),2);
}

void Vbasys3_7seg_driver_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root__trace_cleanup\n"); );
    // Init
    Vbasys3_7seg_driver_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbasys3_7seg_driver_tb___024root*>(voidSelf);
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
