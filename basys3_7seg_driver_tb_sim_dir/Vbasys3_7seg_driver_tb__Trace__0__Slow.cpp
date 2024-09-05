// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vbasys3_7seg_driver_tb__Syms.h"


VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root__trace_init_sub__TOP__0(Vbasys3_7seg_driver_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("basys3_7seg_driver_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+26,0,"clk_1k_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_ni",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"digit0_en_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"digit0_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"digit1_en_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"digit1_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+6,0,"digit2_en_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"digit2_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"digit3_en_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"digit3_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,0,"NUM_TESTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+10,0,"expected_digit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"expected_digit_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("basys3_7seg_driver", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+26,0,"clk_1k_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"digit0_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"digit0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"digit1_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"digit1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+6,0,"digit2_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"digit2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"digit3_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"digit3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"anode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"segments_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+27,0,"state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+28,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"digit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+15,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("hex7seg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"F",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"digits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root__trace_init_top(Vbasys3_7seg_driver_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root__trace_init_top\n"); );
    // Body
    Vbasys3_7seg_driver_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vbasys3_7seg_driver_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vbasys3_7seg_driver_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root__trace_register(Vbasys3_7seg_driver_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vbasys3_7seg_driver_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vbasys3_7seg_driver_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vbasys3_7seg_driver_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vbasys3_7seg_driver_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root__trace_const_0_sub_0(Vbasys3_7seg_driver_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root__trace_const_0\n"); );
    // Init
    Vbasys3_7seg_driver_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbasys3_7seg_driver_tb___024root*>(voidSelf);
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbasys3_7seg_driver_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root__trace_const_0_sub_0(Vbasys3_7seg_driver_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+29,(0x64U),32);
}

VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root__trace_full_0_sub_0(Vbasys3_7seg_driver_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root__trace_full_0\n"); );
    // Init
    Vbasys3_7seg_driver_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbasys3_7seg_driver_tb___024root*>(voidSelf);
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbasys3_7seg_driver_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbasys3_7seg_driver_tb___024root__trace_full_0_sub_0(Vbasys3_7seg_driver_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbasys3_7seg_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbasys3_7seg_driver_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->basys3_7seg_driver_tb__DOT__rst_ni));
    bufp->fullBit(oldp+2,(vlSelf->basys3_7seg_driver_tb__DOT__digit0_en_i));
    bufp->fullCData(oldp+3,(vlSelf->basys3_7seg_driver_tb__DOT__digit0_i),4);
    bufp->fullBit(oldp+4,(vlSelf->basys3_7seg_driver_tb__DOT__digit1_en_i));
    bufp->fullCData(oldp+5,(vlSelf->basys3_7seg_driver_tb__DOT__digit1_i),4);
    bufp->fullBit(oldp+6,(vlSelf->basys3_7seg_driver_tb__DOT__digit2_en_i));
    bufp->fullCData(oldp+7,(vlSelf->basys3_7seg_driver_tb__DOT__digit2_i),4);
    bufp->fullBit(oldp+8,(vlSelf->basys3_7seg_driver_tb__DOT__digit3_en_i));
    bufp->fullCData(oldp+9,(vlSelf->basys3_7seg_driver_tb__DOT__digit3_i),4);
    bufp->fullCData(oldp+10,(vlSelf->basys3_7seg_driver_tb__DOT__expected_digit),4);
    bufp->fullBit(oldp+11,(vlSelf->basys3_7seg_driver_tb__DOT__expected_digit_en));
    bufp->fullCData(oldp+12,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__anode_o),4);
    bufp->fullCData(oldp+13,(((0xfU == (IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__anode_o))
                               ? 0x7fU : (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__A) 
                                           << 6U) | 
                                          (((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__B) 
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
    bufp->fullCData(oldp+14,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__digit),4);
    bufp->fullBit(oldp+15,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__A));
    bufp->fullBit(oldp+16,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__B));
    bufp->fullBit(oldp+17,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__C));
    bufp->fullBit(oldp+18,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__D));
    bufp->fullBit(oldp+19,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__E));
    bufp->fullBit(oldp+20,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__F));
    bufp->fullBit(oldp+21,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__G));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__digit) 
                                  >> 3U))));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__digit) 
                                  >> 2U))));
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__digit) 
                                  >> 1U))));
    bufp->fullBit(oldp+25,((1U & (IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__digit))));
    bufp->fullBit(oldp+26,(vlSelf->basys3_7seg_driver_tb__DOT__clk_1k_i));
    bufp->fullCData(oldp+27,((3U & ((IData)(1U) + (IData)(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__state_q)))),2);
    bufp->fullCData(oldp+28,(vlSelf->basys3_7seg_driver_tb__DOT__basys3_7seg_driver__DOT__state_q),2);
}
