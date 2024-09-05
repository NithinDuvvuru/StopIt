// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstop_it_tb.h for the primary calling header

#include "Vstop_it_tb__pch.h"
#include "Vstop_it_tb___024unit.h"

VL_ATTR_COLD void Vstop_it_tb___024unit___ctor_var_reset(Vstop_it_tb___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstop_it_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vstop_it_tb___024unit___ctor_var_reset\n"); );
    // Body
    for (int __Vi = 0; __Vi < 8; ++__Vi) {
        vlSelf->__Venumtab_enum_name0[__Vi] = std::string{""};
    }
    vlSelf->__Venumtab_enum_name0[0] = std::string{"WAITING_TO_START"};
    vlSelf->__Venumtab_enum_name0[1] = std::string{"STARTING"};
    vlSelf->__Venumtab_enum_name0[2] = std::string{"DECREMENTING"};
    vlSelf->__Venumtab_enum_name0[3] = std::string{"CORRECT"};
    vlSelf->__Venumtab_enum_name0[4] = std::string{"WRONG"};
    vlSelf->__Venumtab_enum_name0[5] = std::string{"WON"};
}
