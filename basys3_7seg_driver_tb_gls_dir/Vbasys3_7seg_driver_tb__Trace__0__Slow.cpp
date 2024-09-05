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
    tracep->declBit(c+10,0,"clk_1k_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_ni",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"digit0_en_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"digit0_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"digit1_en_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"digit1_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+6,0,"digit2_en_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"digit2_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"digit3_en_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"digit3_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"NUM_TESTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+11,0,"expected_digit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+13,0,"expected_digit_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("basys3_7seg_driver", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"anode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"clk_1k_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"digit0_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"digit0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"digit1_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"digit1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+6,0,"digit2_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"digit2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"digit3_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"digit3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"segments_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+14,0,"sv2v_tmp_9A0E9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,1);
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
    bufp->fullIData(oldp+12,(0x64U),32);
    bufp->fullBit(oldp+13,(0U));
    bufp->fullCData(oldp+14,(0xfU),4);
    bufp->fullCData(oldp+15,(0x7fU),7);
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
    bufp->fullBit(oldp+10,(vlSelf->basys3_7seg_driver_tb__DOT__clk_1k_i));
    bufp->fullCData(oldp+11,(vlSelf->basys3_7seg_driver_tb__DOT____Vxrand_h8df6f9e8__0),4);
}
