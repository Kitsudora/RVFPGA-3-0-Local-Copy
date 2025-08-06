// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_dpram64__S10000_MBz1.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vrvfpgasim_dpram64__S10000_MBz1) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vrvfpgasim_dpram64__S10000_MBz1::__Vconfigure(Vrvfpgasim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vrvfpgasim_dpram64__S10000_MBz1::~Vrvfpgasim_dpram64__S10000_MBz1() {
}

void Vrvfpgasim_dpram64__S10000_MBz1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrvfpgasim_dpram64__S10000_MBz1::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__we = VL_RAND_RESET_I(8);
    __PVT__din = VL_RAND_RESET_Q(64);
    __PVT__waddr = VL_RAND_RESET_I(16);
    __PVT__raddr = VL_RAND_RESET_I(16);
    __PVT__dout = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
}
