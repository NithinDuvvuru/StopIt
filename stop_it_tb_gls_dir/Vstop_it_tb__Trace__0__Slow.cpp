// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vstop_it_tb__Syms.h"


VL_ATTR_COLD void Vstop_it_tb___024root__trace_init_sub__TOP__0(Vstop_it_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("stop_it_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"rst_ni",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"clk_4_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"go_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"stop_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"load_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"switches_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"leds_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+8,0,"digit0_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"digit0_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"digit1_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"digit1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"digit2_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"digit2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"digit3_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"digit3_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"stop_it_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"NUM_TESTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+29,0,"valid_go_received",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"valid_stop_received",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"digits_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"correct_stop_received",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"num_correct_stops_received",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+33,0,"wrong_stop_received",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("sim", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"rand_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stop_it", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+28,0,"clk_4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"digit0_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"digit0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"digit1_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"digit1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"digit2_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"digit2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"digit3_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"digit3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+16,0,"flashing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"gameEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"gameRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"gameVal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1,0,"go_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"ledVal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"leds_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+3,0,"load_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"randVal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+27,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"scoreIncrement",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+22,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+2,0,"stop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"switches_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+36,0,"timeEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"timeRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"timerVal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("game_counter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+28,0,"clk_4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"count_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+34,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("led_shifter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+28,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"leds_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+3,0,"load_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"off_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"shift_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"switches_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("lfsr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+28,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"next_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"rand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+27,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("time_counter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+28,0,"clk_4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"count_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+38,0,"go_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::TIME, false,-1, 63,0);
    tracep->declQuad(c+40,0,"decrementing_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::TIME, false,-1, 63,0);
    tracep->declQuad(c+42,0,"wait_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::TIME, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+44,0,"stop_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::TIME, false,-1, 63,0);
    tracep->declQuad(c+46,0,"newround_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::TIME, false,-1, 63,0);
    tracep->declQuad(c+48,0,"wait_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::TIME, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+50,0,"stop_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::TIME, false,-1, 63,0);
    tracep->declQuad(c+52,0,"newround_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::TIME, false,-1, 63,0);
    tracep->declQuad(c+54,0,"wait_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::TIME, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vstop_it_tb___024root__trace_init_top(Vstop_it_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root__trace_init_top\n"); );
    // Body
    Vstop_it_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vstop_it_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vstop_it_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vstop_it_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vstop_it_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vstop_it_tb___024root__trace_register(Vstop_it_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vstop_it_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vstop_it_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vstop_it_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vstop_it_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vstop_it_tb___024root__trace_const_0_sub_0(Vstop_it_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vstop_it_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root__trace_const_0\n"); );
    // Init
    Vstop_it_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstop_it_tb___024root*>(voidSelf);
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vstop_it_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vstop_it_tb___024root__trace_const_0_sub_0(Vstop_it_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+56,(0x9c4U),32);
}

VL_ATTR_COLD void Vstop_it_tb___024root__trace_full_0_sub_0(Vstop_it_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vstop_it_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root__trace_full_0\n"); );
    // Init
    Vstop_it_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstop_it_tb___024root*>(voidSelf);
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vstop_it_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vstop_it_tb___024root__trace_full_0_sub_0(Vstop_it_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstop_it_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->stop_it_tb__DOT__go_i));
    bufp->fullBit(oldp+2,(vlSelf->stop_it_tb__DOT__stop_i));
    bufp->fullBit(oldp+3,(vlSelf->stop_it_tb__DOT__load_i));
    bufp->fullSData(oldp+4,(vlSelf->stop_it_tb__DOT__switches_i),16);
    bufp->fullIData(oldp+5,(vlSelf->stop_it_tb__DOT__sim__DOT__unnamedblk4__DOT__rand_delay),32);
    bufp->fullIData(oldp+6,(vlSelf->stop_it_tb__DOT__sim__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i),32);
    bufp->fullSData(oldp+7,(vlSelf->stop_it_tb__DOT__stop_it__DOT__ledVal),16);
    bufp->fullBit(oldp+8,((1U & (~ ((((((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))) 
                                        | (1U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q))) 
                                       | (2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q))) 
                                      | (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT___28_)) 
                                     | ((4U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                        & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q))) 
                                    | (5U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))))));
    bufp->fullCData(oldp+9,((0xfU & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q))),4);
    bufp->fullCData(oldp+10,((1U & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q) 
                                    >> 4U))),4);
    bufp->fullBit(oldp+11,((1U & (~ (((((1U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                        | (2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q))) 
                                       | (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT___28_)) 
                                      | ((~ (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q)) 
                                         & (4U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))) 
                                     | (5U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))))));
    bufp->fullCData(oldp+12,((0xfU & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state))),4);
    bufp->fullCData(oldp+13,((1U & ((IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state) 
                                    >> 4U))),4);
    bufp->fullCData(oldp+14,(vlSelf->stop_it_tb__DOT__stop_it_state),5);
    bufp->fullBit(oldp+15,(vlSelf->stop_it_tb__DOT__digits_match));
    bufp->fullBit(oldp+16,((5U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q))));
    bufp->fullBit(oldp+17,((0U != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q))));
    bufp->fullCData(oldp+18,(vlSelf->stop_it_tb__DOT__stop_it__DOT__game_counter__DOT__state_q),5);
    bufp->fullCData(oldp+19,((0x1fU & (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state))),5);
    bufp->fullBit(oldp+20,(vlSelf->stop_it_tb__DOT__stop_it__DOT__scoreIncrement));
    bufp->fullBit(oldp+21,((1U & (~ ((4U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                     | ((3U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                        | ((2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)) 
                                           | (0U != (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellinp___42___A)))))))));
    bufp->fullCData(oldp+22,(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q),5);
    bufp->fullCData(oldp+23,(vlSelf->stop_it_tb__DOT__stop_it__DOT__time_counter__DOT__state_q),5);
    bufp->fullBit(oldp+24,(vlSelf->stop_it_tb__DOT__stop_it__DOT___27_));
    bufp->fullSData(oldp+25,(vlSelf->stop_it_tb__DOT__stop_it__DOT__led_shifter__DOT__state),16);
    bufp->fullCData(oldp+26,(vlSelf->stop_it_tb__DOT__stop_it__DOT__lfsr__DOT__state),8);
    bufp->fullBit(oldp+27,(vlSelf->stop_it_tb__DOT__rst_ni));
    bufp->fullBit(oldp+28,(vlSelf->stop_it_tb__DOT__clk_4_i));
    bufp->fullBit(oldp+29,(vlSelf->stop_it_tb__DOT__valid_go_received));
    bufp->fullBit(oldp+30,(vlSelf->stop_it_tb__DOT__valid_stop_received));
    bufp->fullBit(oldp+31,(vlSelf->stop_it_tb__DOT__correct_stop_received));
    bufp->fullIData(oldp+32,(vlSelf->stop_it_tb__DOT__num_correct_stops_received),32);
    bufp->fullBit(oldp+33,(vlSelf->stop_it_tb__DOT__wrong_stop_received));
    bufp->fullBit(oldp+34,(((~ (IData)(vlSelf->stop_it_tb__DOT__stop_i)) 
                            & (2U == (IData)(vlSelf->stop_it_tb__DOT__stop_it__DOT____Vcellout___41___Q)))));
    bufp->fullCData(oldp+35,(vlSelf->stop_it_tb__DOT__stop_it__DOT__state_d),3);
    bufp->fullBit(oldp+36,(vlSelf->stop_it_tb__DOT__stop_it__DOT__timeEn));
    bufp->fullBit(oldp+37,(vlSelf->stop_it_tb__DOT__stop_it__DOT__timeRes));
    bufp->fullQData(oldp+38,(vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__go_time),64);
    bufp->fullQData(oldp+40,(vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__decrementing_time),64);
    bufp->fullQData(oldp+42,(vlSelf->stop_it_tb__DOT__unnamedblk1__DOT__wait_time),64);
    bufp->fullQData(oldp+44,(vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__stop_time),64);
    bufp->fullQData(oldp+46,(vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__newround_time),64);
    bufp->fullQData(oldp+48,(vlSelf->stop_it_tb__DOT__unnamedblk2__DOT__wait_time),64);
    bufp->fullQData(oldp+50,(vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__stop_time),64);
    bufp->fullQData(oldp+52,(vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__newround_time),64);
    bufp->fullQData(oldp+54,(vlSelf->stop_it_tb__DOT__unnamedblk3__DOT__wait_time),64);
}
