// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_swervolf_core__Bz1.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__19(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__19\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1166[3];
    WData/*95:0*/ __Vtemp1167[3];
    WData/*95:0*/ __Vtemp1169[3];
    WData/*95:0*/ __Vtemp1170[3];
    WData/*95:0*/ __Vtemp1171[3];
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xffc00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x11U) & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x16U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x11U) & ((6U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x16U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x11U) & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x16U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xff800000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x12U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x17U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x12U) & ((7U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x17U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x12U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x17U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xff000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x13U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x18U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x13U) & ((8U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x18U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x13U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x18U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xfe000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x14U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x19U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x14U) & ((9U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x19U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x14U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x19U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xfc000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x15U) & ((0xaU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1aU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x15U) & ((0xaU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1aU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x15U) & ((0xaU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1aU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xf8000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x16U) & ((0xbU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1bU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x16U) & ((0xbU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1bU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x16U) & ((0xbU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1bU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xf0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x17U) & ((0xcU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1cU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x17U) & ((0xcU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1cU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x17U) & ((0xcU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1cU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xe0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x18U) & ((0xdU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1dU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x18U) & ((0xdU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1dU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x18U) & ((0xdU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1dU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xc0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x19U) & ((0xeU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1eU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x19U) & ((0xeU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1eU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x19U) & ((0xeU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0x80000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x1aU) & ((0xfU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1fU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x1aU) & ((0xfU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1fU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x1aU) & ((0xfU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1fU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                 >> 6U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                   >> 6U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                  >> 6U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0x7fffffeU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                               >> 5U) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                         << 1U)) | 
                             (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                               >> 5U) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                         << 1U))) | 
                            (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 5U) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                        << 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffffffcU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                               >> 4U) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                         << 2U)) | 
                             (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                               >> 4U) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                         << 2U))) | 
                            (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 4U) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                        << 2U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0x1ffffff8U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                >> 3U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 3U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                >> 3U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 3U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 >> 3U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 3U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0x3ffffff0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                >> 2U) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 4U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                >> 2U) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 4U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 >> 2U) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0x7fffffe0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                >> 1U) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 5U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                >> 1U) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 5U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 >> 1U) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffffffc0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                               & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                  << 6U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             & ((6U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                                << 6U))) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                   << 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffffff80U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 1U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 7U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 1U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 7U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 1U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 7U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffffff00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 2U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 8U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 2U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 8U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 2U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfffffe00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 3U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 9U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 3U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 9U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 3U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 9U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfffffc00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 4U) & ((0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xaU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 4U) & ((0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xaU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 4U) & ((0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfffff800U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 5U) & ((0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xbU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 5U) & ((0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xbU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 5U) & ((0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xbU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfffff000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 6U) & ((0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xcU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 6U) & ((0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xcU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 6U) & ((0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xcU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffffe000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 7U) & ((0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xdU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 7U) & ((0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xdU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 7U) & ((0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xdU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffffc000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 8U) & ((0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xeU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 8U) & ((0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xeU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 8U) & ((0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xeU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffff8000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 9U) & ((0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xfU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 9U) & ((0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xfU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 9U) & ((0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xfU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffff0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 9U) & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0x10U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 9U) & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0x10U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 9U) & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0x10U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfffe0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xaU) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x11U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xaU) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x11U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xaU) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x11U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfffc0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xbU) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x12U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xbU) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x12U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xbU) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x12U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfff80000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xcU) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x13U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xcU) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x13U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xcU) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfff00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xdU) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x14U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xdU) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x14U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xdU) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x14U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffe00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xeU) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x15U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xeU) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x15U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xeU) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x15U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xffc00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xfU) & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x16U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xfU) & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x16U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xfU) & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x16U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xff800000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x10U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x17U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x10U) & ((7U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x17U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x10U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x17U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xff000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x11U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x18U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x11U) & ((8U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x18U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x11U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x18U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfe000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x12U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x19U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x12U) & ((9U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x19U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x12U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x19U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xfc000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x13U) & ((0xaU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1aU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x13U) & ((0xaU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1aU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x13U) & ((0xaU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1aU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xf8000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x14U) & ((0xbU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1bU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x14U) & ((0xbU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1bU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x14U) & ((0xbU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1bU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xf0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x15U) & ((0xcU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1cU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x15U) & ((0xcU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1cU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x15U) & ((0xcU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1cU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xe0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x16U) & ((0xdU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1dU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x16U) & ((0xdU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1dU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x16U) & ((0xdU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1dU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0xc0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x17U) & ((0xeU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1eU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x17U) & ((0xeU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1eU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x17U) & ((0xeU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]) 
           | (0x80000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x18U) & ((0xfU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1fU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x18U) & ((0xfU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1fU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x18U) & ((0xfU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1fU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt 
        = ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpmc_b_ns)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mpmc_wb)) 
            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_chain_masked_e4 
        = ((8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                  & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain) 
                          >> 2U)) << 3U) | (0xfffffff8U 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                                               << 1U))))) 
           | ((4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                     & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain) 
                             >> 2U)) << 2U) | (0x7ffffffcU 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                                                  >> 1U))))) 
              | ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                        & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain)) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4)) 
                           << 1U))) | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain)) 
                                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                                                   >> 1U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4_ns 
        = (((((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e4) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                              >> 9U) | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pred_valid_e4)))))) 
              & ((0x1eU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4) 
                           << 1U)) | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                            >> 8U)))) 
             | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e4) 
                             & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                   >> 9U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pred_valid_e4)))) 
                & ((0x1cU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4) 
                             << 2U)) | ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                               >> 7U)) 
                                        | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                 >> 8U)))))) 
            | ((- (IData)((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e4)) 
                            & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
                                  >> 0x12U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pred_valid_e4)))) 
               & ((0x1eU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4) 
                            << 1U)) | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                             >> 8U))))) 
           | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e4)) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pred_valid_e4)))))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__bp_wb_ff__din 
        = ((0x30000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                        << 0xcU)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                      << 0xfU) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4) 
                                                   << 0xeU) 
                                                  | ((0x3ffe000U 
                                                      & ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
                                                            >> 6U) 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                                                              << 0xdU)) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                               >> 2U)) 
                                                             << 0xdU)) 
                                                         & ((~ 
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                              >> 9U)) 
                                                            << 0xdU))) 
                                                     | ((0x1800U 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                            << 7U)) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4) 
                                                               << 9U) 
                                                              | ((0x1fff00U 
                                                                  & (((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U] 
                                                                         >> 0xbU) 
                                                                        & ((~ 
                                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                             >> 2U)) 
                                                                           << 8U)) 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
                                                                          << 8U)) 
                                                                      & ((~ 
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                                           >> 9U)) 
                                                                         << 8U)) 
                                                                     & ((~ 
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                          >> 9U)) 
                                                                        << 8U))) 
                                                                 | ((0xc0U 
                                                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                                         << 0x12U) 
                                                                        | (0x3ffc0U 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
                                                                              >> 0xeU)))) 
                                                                    | ((0x30U 
                                                                        & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                            << 0x10U) 
                                                                           | (0xfff0U 
                                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U] 
                                                                                >> 0x10U)))) 
                                                                       | ((8U 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[0U] 
                                                                              << 3U)) 
                                                                          | ((4U 
                                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[0U] 
                                                                                << 2U)) 
                                                                             | ((2U 
                                                                                & ((0x7fffffeU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                                                >> 5U)) 
                                                                                ^ 
                                                                                (0x3fffffeU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                                                >> 6U)))) 
                                                                                | (1U 
                                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 6U) 
                                                                                ^ 
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 7U))))))))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4 
        = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                                | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4_trigger_ff__dout) 
                                    >> 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                              >> 6U)))))) 
              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                 >> 0x10U)) & (~ (((((8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                            << 1U)) 
                                     | ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2)) 
                                        | ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                  >> 1U)) 
                                           | (1U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                               >> 2U))))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_data)) 
                                   & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4_raw)))) 
                                  | (- (IData)((1U 
                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
                                                    >> 0x12U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
                                                      >> 0x11U)))))))) 
            & (~ (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_store) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_data)) 
                  & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4_raw)))))) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_enabled));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_lo) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo)) 
           | (0xfffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_lo) 
                               << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo)) 
           | (0xfffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_lo) 
                               << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo)) 
           | (0xfffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_lo) 
                               << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_hi) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                 >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi)) 
           | (0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_hi) 
                              << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi)) 
           | (0xffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_hi) 
                              << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_hi) 
                              << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_lo) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                  >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
           | (0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_lo) 
                              << 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                                        >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
           | (0xffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_lo) 
                              << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                                        >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_lo) 
                              << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                                        >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_hi) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                  >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                             >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
           | (0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_hi) 
                              << 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                                        >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
           | (0xffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_hi) 
                              << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                                        >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_hi) 
                              << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3) 
                                        >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_lo) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
           | (0xfffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_lo) 
                               << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
           | (0xfffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_lo) 
                               << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
           | (0xfffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_lo) 
                               << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_hi) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                 >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
           | (0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_hi) 
                              << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
           | (0xffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_hi) 
                              << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_hi) 
                              << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_lo) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                  >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
           | (0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_lo) 
                              << 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                                        >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
           | (0xffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_lo) 
                              << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                                        >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_lo) 
                              << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                                        >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_hi) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                  >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                             >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
           | (0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_hi) 
                              << 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                                        >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
           | (0xffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_hi) 
                              << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                                        >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_hi) 
                              << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc4) 
                                        >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_lo) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
           | (0xfffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_lo) 
                               << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
           | (0xfffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_lo) 
                               << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
           | (0xfffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_lo) 
                               << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_hi) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                 >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
           | (0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_hi) 
                              << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
           | (0xffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_hi) 
                              << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_hi) 
                              << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_lo) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                  >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
           | (0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_lo) 
                              << 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                                        >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
           | (0xffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_lo) 
                              << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                                        >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_lo) 
                              << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                                        >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_hi) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                  >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                             >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
           | (0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_hi) 
                              << 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                                        >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
           | (0xffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_hi) 
                              << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                                        >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_hi) 
                              << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc5) 
                                        >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                   >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (0xfffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
                               << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (0xfffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
                               << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (0xfffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
                               << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                 >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
                              << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (0xffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
                              << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
                              << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (2U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                        >> 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                   << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                        >> 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                   << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                        >> 9U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                   << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x10U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                           >> 0xcU)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                        << 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x20U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                           >> 0xfU)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                        << 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x40U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                           >> 0x12U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                         << 6U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x80U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                           >> 0x15U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                         << 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x100U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    << 7U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x200U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    << 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 8U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x400U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    << 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 9U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x800U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    >> 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x1000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                           << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                     >> 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                << 0xbU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x2000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                           << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                     >> 8U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                << 0xcU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x4000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                           << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                     >> 0xbU)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                  << 0xdU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x8000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                           << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                     >> 0xeU)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                  << 0xeU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x10000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                            << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 0xeU)) 
                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                             << 0xeU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x20000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                            << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 0xbU)) 
                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                             << 0xfU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x40000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                            << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 8U)) & 
                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                           << 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x80000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                            << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 5U)) & 
                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                           << 0x11U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x100000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                             << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                          << 2U)) & 
                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            << 0x12U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x200000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                             << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                          >> 1U)) & 
                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            << 0x13U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x400000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                             << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                          >> 4U)) & 
                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            << 0x14U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x800000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                             << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                          >> 7U)) & 
                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            << 0x15U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x1000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                              << 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                           << 0x15U)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               << 0x15U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x2000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                              << 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                           << 0x12U)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               << 0x16U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x4000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                              << 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                           << 0xfU)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               << 0x17U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x8000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                              << 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                           << 0xcU)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               << 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x10000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                               << 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                            << 9U)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                << 0x19U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x20000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                               << 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                            << 6U)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                << 0x1aU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x40000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                               << 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                            << 3U)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                << 0x1bU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
           | (0x80000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                               << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                << 0x1cU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (2U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                        >> 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                   >> 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                        >> 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                   >> 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                        >> 9U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                   >> 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x10U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                           >> 0xcU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x20U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                           >> 0xfU)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                        << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x40U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                           >> 0x12U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                         << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x80U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                           >> 0x15U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                         << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x100U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    << 7U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x200U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    << 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x400U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    << 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x800U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                    >> 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                               << 6U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x1000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                           << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                     >> 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                << 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x2000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                           << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                     >> 8U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                << 8U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x4000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                           << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                     >> 0xbU)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                  << 9U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x8000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                           << 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                     >> 0xeU)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                                  << 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x10000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                            << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 0xeU)) 
                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                             << 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x20000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                            << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 0xbU)) 
                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                             << 0xbU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x40000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                            << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 8U)) & 
                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                           << 0xcU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x80000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                            << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                         << 5U)) & 
                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                           << 0xdU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x100000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                             << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                          << 2U)) & 
                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            << 0xeU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x200000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                             << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                          >> 1U)) & 
                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            << 0xfU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x400000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                             << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                          >> 4U)) & 
                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            << 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x800000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                             << 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                          >> 7U)) & 
                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            << 0x11U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x1000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                              << 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                           << 0x15U)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               << 0x11U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x2000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                              << 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                           << 0x12U)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               << 0x12U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x4000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                              << 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                           << 0xfU)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               << 0x13U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x8000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                              << 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                           << 0xcU)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                               << 0x14U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x10000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                               << 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                            << 9U)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                << 0x15U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x20000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                               << 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                            << 6U)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                << 0x16U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x40000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                               << 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                            << 3U)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                << 0x17U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
           | (0x80000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                               << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                                << 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4_trigger_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_e3)
            ? ((0x100U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                          >> 0x14U)) | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e3ff__dout 
                                                 >> 0xcU)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4_trigger_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e3_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e3_clken)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e2)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e3));
    VL_EXTENDS_WQ(66,33, __Vtemp1166, vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_ff_e2);
    __Vtemp1167[0U] = __Vtemp1166[0U];
    __Vtemp1167[1U] = __Vtemp1166[1U];
    __Vtemp1167[2U] = (3U & __Vtemp1166[2U]);
    VL_EXTENDS_WQ(66,33, __Vtemp1169, vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_ff_e2);
    __Vtemp1170[0U] = __Vtemp1169[0U];
    __Vtemp1170[1U] = __Vtemp1169[1U];
    __Vtemp1170[2U] = (3U & __Vtemp1169[2U]);
    VL_MULS_WWW(66,66,66, __Vtemp1171, __Vtemp1167, __Vtemp1170);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__prod_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e3_clken)
            ? (((QData)((IData)(__Vtemp1171[1U])) << 0x20U) 
               | (QData)((IData)(__Vtemp1171[0U])))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__prod_e3);
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e2_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e2_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((QData)((IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs1_sign_e1) 
                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e1 
                                    >> 0x1fU)))) << 0x20U) 
               | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e1)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((QData)((IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs2_sign_e1) 
                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e1 
                                    >> 0x1fU)))) << 0x20U) 
               | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e1)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e2_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_ff_e2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_ff_e2;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_after_unfreeze1) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i0_e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_final;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i1_e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_final;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i0_wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_after_unfreeze2)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_freeze);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i1_wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_after_unfreeze2)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_freeze);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i0_e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_freeze;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i1_e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_freeze;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i0_wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_freeze;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i1_wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_freeze;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc4_clken 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc4_clken) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc4_clken_q)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x3ffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken)
                        ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc2_in 
                           >> 1U) : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc2ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc2_clken 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc2_clken_q)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc3_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x3ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc3_in 
                           >> 1U));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sadc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_dc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_in_dccm_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_in_pic_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_external_dc2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_byten_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc2;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc3ff__dout);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sadc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_dc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_in_dccm_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_in_pic_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_external_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_byten_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc3;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc3_clken 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc3_clken) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc3_clken_q)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
              & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
               & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
               & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
               & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
               & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
               & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
               & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3)) 
                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3))) 
               & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_ecc_error_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen = 0U;
    if ((1U & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 9U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
            = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found)))) {
        if ((1U & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                      >> 0x13U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3) 
                      << 1U));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found)))) {
        if ((1U & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                      >> 0x1dU)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3) 
                      << 2U));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found)))) {
        if ((1U & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                      >> 7U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3) 
                      << 3U));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found)))) {
        if ((1U & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                      >> 0x11U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3) 
                      << 4U));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found)))) {
        if ((1U & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                      >> 0x1bU)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3) 
                      << 5U));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found)))) {
        if ((1U & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                      >> 5U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3) 
                      << 6U));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found)))) {
        if ((1U & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                      >> 0xfU)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3) 
                      << 7U));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
            ? ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                ? 0U : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                         ? 0U : 3U)) : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                                         ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                                             ? 0U : 
                                            (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_err_wb)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))
                                              ? 0U : 3U))
                                         : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                                             ? 0U : 
                                            (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_rd_parity_final_err_ff) 
                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))
                                              ? 1U : 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0U;
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
        if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0U;
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0U;
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en 
                = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final;
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en 
                    = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_rd_parity_final_err_ff) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_icache_sb_error_val_ff)) 
                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en;
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i1_flush_upper_e1 
        = ((((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                >> 4U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__cond_mispredict)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__target_mispredict)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__valid_ff)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
           & (((((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout)) 
                 | (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout))) 
                & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                      >> 1U))) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_write_stall)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_perr 
        = (((((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                & (3U == (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                        >> 0x20U))))) 
               & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfinalperr) 
                               >> 2U)))) | (((3U == 
                                              (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                             & (3U 
                                                != 
                                                (3U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                            >> 0x20U))))) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfinalperr) 
                                               >> 2U))) 
             | (((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                 & (3U == (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                         >> 0x10U))))) 
                & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfinalperr) 
                                >> 1U))))) | (((3U 
                                                != 
                                                (3U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                               & (3U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x10U))))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfinalperr) 
                                                 >> 1U))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_sbecc 
        = (((((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                & (3U == (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                        >> 0x20U))))) 
               & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignsbecc) 
                               >> 2U)))) | (((3U == 
                                              (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                             & (3U 
                                                != 
                                                (3U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                            >> 0x20U))))) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignsbecc) 
                                               >> 2U))) 
             | (((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                 & (3U == (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                         >> 0x10U))))) 
                & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignsbecc) 
                                >> 1U))))) | (((3U 
                                                != 
                                                (3U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                               & (3U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x10U))))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignsbecc) 
                                                 >> 1U))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_perr 
        = ((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
             & (0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfinalperr)))) 
            | ((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfinalperr))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_sbecc 
        = ((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
             & (0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignsbecc)))) 
            | ((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignsbecc))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1 
        = ((((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                >> 4U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__cond_mispredict)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__target_mispredict)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__valid_ff)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
        = ((0x1ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U]) 
           | (0x200U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__valid_ff)
                          ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__cond_mispredict) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__target_mispredict)) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))
                          : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                             >> 9U)) << 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
        = ((0x2ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U]) 
           | (0x100U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__valid_ff)
                          ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__actual_taken)
                          : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                             >> 8U)) << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
        = ((0x3dfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U]) 
           | (0x20U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__valid_ff)
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__newhist) 
                            >> 1U) : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                                      >> 5U)) << 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
        = ((0x3efU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U]) 
           | (0x10U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__valid_ff)
                         ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__newhist)
                         : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                            >> 4U)) << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
        = ((0x1ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U]) 
           | (0x200U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__valid_ff)
                          ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__cond_mispredict) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__target_mispredict)) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))
                          : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                             >> 9U)) << 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
        = ((0x2ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U]) 
           | (0x100U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__valid_ff)
                          ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__actual_taken)
                          : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                             >> 8U)) << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
        = ((0x3dfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U]) 
           | (0x20U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__valid_ff)
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__newhist) 
                            >> 1U) : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                                      >> 5U)) << 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
        = ((0x3efU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U]) 
           | (0x10U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__valid_ff)
                         ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__newhist)
                         : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[2U] 
                            >> 4U)) << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
        = (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_path_final) 
           | ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__req_ff__dout) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
        if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate 
                    = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_err_wb) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2_raw) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_valid 
        = (((((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                & (3U == (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                        >> 0x20U))))) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval) 
                  >> 3U)) | (((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                              & (3U != (3U & (IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                      >> 0x20U))))) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval) 
                                >> 2U))) | (((3U != 
                                              (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                             & (3U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                            >> 0x10U))))) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval) 
                                               >> 2U))) 
            | (((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                & (3U != (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                        >> 0x10U))))) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval) 
                  >> 1U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_valid 
        = ((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval) 
                >> 1U)) | ((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__unfreeze_cycle1) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_freeze;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_freeze;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_freeze;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_freeze;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__unfreeze_cycle2)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_freeze
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__unfreeze_cycle2)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_freeze
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_final;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_final;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                  == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                             << 0x1bU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                          >> 5U))))) 
              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                 >> 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (0x3ffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                              == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                         << 0x11U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                           >> 0xfU))))) 
                          << 1U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                    >> 0x12U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (0x1cU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                            == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                       << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                 >> 0x19U))))) 
                        << 2U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                  >> 0x1bU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                                 == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                            << 0x1dU) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                              >> 3U))))) 
                             << 3U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (0x7fff0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                               == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                          << 0x13U) 
                                         | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                            >> 0xdU))))) 
                           << 4U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 0xdU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (0x3e0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                             == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 9U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                  >> 0x17U))))) 
                         << 5U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                   >> 0x16U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (0xffffffc0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                                  == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                            >> 1U)))) 
                              << 6U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (0xffff80U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
                                == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                          >> 0xbU)))) 
                            << 7U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                      >> 8U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | (0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)))
                        ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5
                            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data)
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)
                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_dc5
                            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | (0xff00U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)))
                           ? ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                               ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                  >> 8U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                            >> 8U))
                           : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)
                               ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_dc5 
                                  >> 8U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                            >> 8U))) 
                         << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | (0xff0000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)))
                             ? ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                                 ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                    >> 0x10U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                 >> 0x10U))
                             : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)
                                 ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_dc5 
                                    >> 0x10U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                                 >> 0x10U))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | (0xff000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)))
                               ? ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                                   ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                      >> 0x18U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                   >> 0x18U))
                               : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)
                                   ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_dc5 
                                      >> 0x18U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                                   >> 0x18U))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                     : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (2U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                      ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5)) 
                         >> 1U) : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                   >> 1U)) << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (4U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                      ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5)) 
                         >> 2U) : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                   >> 2U)) << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                      ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5)) 
                         >> 3U) : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                   >> 3U)) << 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | (0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                        ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5
                            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data)
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | (0xff00U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                           ? ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                               ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                  >> 8U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                            >> 8U))
                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                              >> 8U)) << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | (0xff0000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                             ? ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                                 ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                    >> 0x10U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                 >> 0x10U))
                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                >> 0x10U)) << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | (0xff000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))
                               ? ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                                   ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5 
                                      >> 0x18U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                   >> 0x18U))
                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                  >> 0x18U)) << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr_ns 
        = (0x1fU & ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
                      & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                          << 0x1fU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                       >> 1U))) | (
                                                   (- (IData)(
                                                              (1U 
                                                               & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout)) 
                                                                  & (~ 
                                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                                      >> 1U)))))) 
                                                   & ((((((- (IData)(
                                                                     (4U 
                                                                      <= (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids)))) 
                                                          & ((0x10U 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr)) 
                                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__final_h))) 
                                                         | ((- (IData)(
                                                                       (3U 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids)))) 
                                                            & ((0x18U 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr)) 
                                                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__final_h)))) 
                                                        | ((- (IData)(
                                                                      (2U 
                                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids)))) 
                                                           & ((0x1cU 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr) 
                                                                  << 2U)) 
                                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__final_h)))) 
                                                       | ((- (IData)(
                                                                     (1U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids)))) 
                                                          & ((0x1eU 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr) 
                                                                 << 1U)) 
                                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__final_h)))) 
                                                      | ((- (IData)(
                                                                    (0U 
                                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids)))) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr))))) 
                    | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                   >> 1U)))))))) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__adder_pc_in_f2 
        = (0xfffffffU & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_fg_crossing_f2))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__faddrf2_ff__dout) 
                         | ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_fg_crossing_f2))))) 
                            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                               >> 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_total_branch_offset_f2 
        = (7U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                     >> 3U)))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2_enc_shift)) 
                  | ((- (IData)((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                          >> 3U))))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2_enc))) 
                 | (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_fg_crossing_f2)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_instr 
        = (((((- (IData)(((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                          & (3U == (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                  >> 0x20U))))))) 
              & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                         >> 0x20U))) | ((- (IData)(
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                    & (3U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x20U))))))) 
                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l3 
                                           & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__third_legal)))))) 
            | ((- (IData)(((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                           & (3U == (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                   >> 0x10U))))))) 
               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                          >> 0x10U)))) | ((- (IData)(
                                                     ((3U 
                                                       != 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                      & (3U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x10U))))))) 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l3 
                                             & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_legal))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr 
        = (((- (IData)((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
           | ((- (IData)((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))) 
              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l3 
                 & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_legal))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = ((0xfffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_jal) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U] 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U]) 
           | (0xfffe0000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall) 
                             << 0x11U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U] 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U]) 
           | (0xffff8000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pja) 
                             << 0xfU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U] 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_predict_br 
        = (1U & ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                            >> 0x1cU)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pja)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                        & (1U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                           >> 0xaU)))) 
                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (2U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (3U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[2U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (4U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[3U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (5U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[4U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (6U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[5U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (7U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[6U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (8U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[7U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (9U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[8U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0xaU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[9U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0xbU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xaU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0xcU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xbU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0xdU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xcU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0xeU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xdU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0xfU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xeU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x10U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xfU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x11U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x10U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x12U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x11U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x13U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x12U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x14U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x13U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x15U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x14U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x16U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x15U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x17U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x16U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x18U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x17U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x19U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x18U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1aU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x19U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1bU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1aU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1cU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1bU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1dU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1cU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1eU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1dU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1fU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1eU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e1 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e2 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e3 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_wb 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e1 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e2 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e3 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_wb 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                        & (1U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                           >> 5U)))) 
                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (2U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (3U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[2U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (4U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[3U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (5U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[4U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (6U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[5U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (7U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[6U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (8U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[7U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (9U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[8U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0xaU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[9U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0xbU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xaU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0xcU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xbU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0xdU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xcU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0xeU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xdU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0xfU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xeU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x10U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xfU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x11U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x10U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x12U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x11U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x13U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x12U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x14U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x13U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x15U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x14U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x16U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x15U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x17U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x16U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x18U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x17U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x19U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x18U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x1aU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x19U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x1bU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1aU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x1cU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1bU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x1dU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1cU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x1eU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1dU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x1fU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1eU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
              == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                           >> 0xaU))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                             >> 5U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 9U)) & ((0x1fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 9U)) & ((0x1fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x13U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                           << 0x16U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                             >> 0xaU))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x13U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                           << 0x16U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                             >> 0xaU))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x1dU)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                             >> 0x14U))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x1dU)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                             >> 0x14U))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 7U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 7U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x11U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                             >> 8U))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x11U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                             >> 8U))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x1bU)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                             >> 0x12U))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x1bU)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                             >> 0x12U))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 5U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                  >> 0x1cU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 5U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                  >> 0x1cU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 0xfU)) & ((0x1fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                         >> 6U)) == 
                               (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                         >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 0xfU)) & ((0x1fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                         >> 6U)) == 
                               (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                         >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e1 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e2 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e3 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_wb 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e1 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e2 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e3 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_wb 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw;
    if ((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_error) 
                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                    >> 0x13U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall))) 
               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_icaf_d) 
                   | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                              >> 0x21U))) | (IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                                     >> 0x22U)))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp = 0ULL;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x2000000000000ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x1000000000000ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x800000000000ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x800000000ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (1ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x2000ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__load_stbuf_reqvld_dc3) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_ecc_error_dc3)
                  ? (7U > (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any))
                  : (8U > (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any)))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_dc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_addr_hi_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)
                  : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                     >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
        = ((0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1) 
           | (0xfffff000U & (((0xfffff000U & (((- (IData)(
                                                          (1U 
                                                           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1) 
                                                               >> 0xbU) 
                                                              ^ ~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout))))) 
                                               << 0xcU) 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_dc1)) 
                              | (((- (IData)(((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1) 
                                                  >> 0xbU)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout)))) 
                                  & ((IData)(1U) + 
                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_dc1 
                                      >> 0xcU))) << 0xcU)) 
                             | (((- (IData)((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1) 
                                                    >> 0xbU) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout)))))) 
                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_dc1 
                                     >> 0xcU) - (IData)(1U))) 
                                << 0xcU))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 1U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 2U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 3U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 1U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 2U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 3U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 1U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 2U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 3U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 1U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 2U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way0__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0) 
               >> 3U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way0__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 1U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 2U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 3U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 1U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 2U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 3U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 1U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 2U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 3U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 1U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 2U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way1__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1) 
               >> 3U)) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way1__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 2U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((4U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x1cU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 4U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((8U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 6U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 8U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 0xaU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 0xcU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 0xeU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                   >> 0x10U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                  >> 0x12U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                  >> 0x14U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                  >> 0x16U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                >> 0x18U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 6U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                >> 0x1aU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                >> 0x1cU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                      << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
                                >> 0x1eU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 2U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x1cU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 4U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 6U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 8U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 0xaU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 0xcU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 0xeU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                   >> 0x10U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                  >> 0x12U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                  >> 0x14U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                  >> 0x16U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                >> 0x18U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 6U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                >> 0x1aU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                >> 0x1cU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                      << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
                                >> 0x1eU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 2U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((4U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x1cU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 4U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((8U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 6U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 8U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 0xaU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 0xcU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 0xeU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                   >> 0x10U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                  >> 0x12U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                  >> 0x14U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                  >> 0x16U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                >> 0x18U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 6U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                >> 0x1aU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                >> 0x1cU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                      << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
                                >> 0x1eU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__2__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 2U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x1cU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 4U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 6U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 8U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 0xaU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 0xcU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 0xeU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                   >> 0x10U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                  >> 0x12U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                  >> 0x14U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                  >> 0x16U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                >> 0x18U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 6U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                >> 0x1aU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                >> 0x1cU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                      << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
                                >> 0x1eU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__3__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 2U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((4U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x1cU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 4U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((8U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 6U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 8U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 0xaU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 0xcU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 0xeU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                   >> 0x10U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                  >> 0x12U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                  >> 0x14U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                  >> 0x16U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                >> 0x18U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 6U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                >> 0x1aU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                >> 0x1cU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                      << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
                                >> 0x1eU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__4__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 2U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x1cU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 4U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 6U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 8U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 0xaU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 0xcU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 0xeU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                   >> 0x10U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                  >> 0x12U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                  >> 0x14U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                  >> 0x16U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                >> 0x18U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 6U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                >> 0x1aU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                >> 0x1cU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                      << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
                                >> 0x1eU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__5__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 2U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((4U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x1cU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 4U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((8U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 6U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 8U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 0xaU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 0xcU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 0xeU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                   >> 0x10U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                  >> 0x12U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                  >> 0x14U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                  >> 0x16U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                >> 0x18U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 6U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                >> 0x1aU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                >> 0x1cU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                      << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
                                >> 0x1eU)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__6__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                     >> 2U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                     >> 4U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                     >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                     >> 8U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x200000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                     >> 0xaU) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x400000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                     >> 0xcU) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x800000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                     >> 0xeU) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x1000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                     >> 0x10U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x2000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                     >> 0x12U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x4000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                     >> 0x14U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x8000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                     >> 0x16U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                     >> 0x18U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                     >> 0x1aU) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                     >> 0x1cU) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U] 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[3U]))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
                     >> 0x1eU) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__BANKS__BRA__7__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_ns 
        = (((((2U & (((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mstatus_wb)) 
                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                           >> 0xcU))))) 
                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt)) 
                         << 1U)) | ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mstatus_wb) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                   >> 0xcU)))) 
                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                       >> 2U)))) | 
              ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                       >> 0xcU)))))) 
               & (2U | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus) 
                              >> 1U))))) | ((- (IData)(
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                            >> 0xcU))))) 
                                            & (1U | 
                                               (2U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))))) 
            | ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mstatus_wb) 
                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                 >> 0xcU))))) & ((2U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                       >> 3U))))) 
           | ((- (IData)((1U & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mstatus_wb)) 
                                  & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                        >> 0xcU))) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout))) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt)))))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4 
        = ((8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                  & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain) 
                          >> 2U)) << 3U) | (0xfffffff8U 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                                               << 1U))))) 
           | ((4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                     & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain) 
                             >> 2U)) << 2U) | (0x7ffffffcU 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                                                  >> 1U))))) 
              | ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                        & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain)) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4)) 
                           << 1U))) | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain)) 
                                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                                                   >> 1U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)))) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4)) 
                       | ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)))) 
                          & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                     >> 0x20U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo) 
                                             >> 1U)))) 
                           & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo) 
                                               >> 2U)))) 
                             & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo) 
                                                 >> 2U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo) 
           | (0xff000000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo) 
                                                 >> 3U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                          >> 0x18U))) 
                              | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo) 
                                                   >> 3U)))) 
                                 & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                            >> 0x38U)))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)))) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4)) 
                       | ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)))) 
                          & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                     >> 0x20U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi) 
                                             >> 1U)))) 
                           & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi) 
                                               >> 2U)))) 
                             & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi) 
                                                 >> 2U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi) 
           | (0xff000000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi) 
                                                 >> 3U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                          >> 0x18U))) 
                              | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi) 
                                                   >> 3U)))) 
                                 & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc4 
                                            >> 0x38U)))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)))) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5)) 
                       | ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)))) 
                          & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                     >> 0x20U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo) 
                                             >> 1U)))) 
                           & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo) 
                                               >> 2U)))) 
                             & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo) 
                                                 >> 2U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo) 
           | (0xff000000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo) 
                                                 >> 3U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                          >> 0x18U))) 
                              | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo) 
                                                   >> 3U)))) 
                                 & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                            >> 0x38U)))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)))) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5)) 
                       | ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)))) 
                          & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                     >> 0x20U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi) 
                                             >> 1U)))) 
                           & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi) 
                                               >> 2U)))) 
                             & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi) 
                                                 >> 2U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi) 
           | (0xff000000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi) 
                                                 >> 3U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                          >> 0x18U))) 
                              | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi) 
                                                   >> 3U)))) 
                                 & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc5 
                                            >> 0x38U)))) 
                             << 0x18U)));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer_in = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtagff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedwff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomergeff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nbff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffectff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsignff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                     >> 0xcU));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_writeff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                     >> 0xdU));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_szff__DOT____Vcellinp__dffs__din 
            = ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                      >> 0xfU)) | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                         >> 0x11U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__dffs__din 
            = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)
                : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__dffs__din 
            = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)))
                ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))
                : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer_in 
            = (7U & ((7U > (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer))
                      ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer))
                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtagff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedwff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomergeff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nbff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffectff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsignff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_writeff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_szff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
           & ((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) 
                    | (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer))) 
                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain)) 
                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)) 
               | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write))) 
              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                 >> 2U)));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc4_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc4_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc4_clken;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc4ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc3;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc4_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc4_clken_q;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc4ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc4;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc2_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc2_in);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc2_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc1;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc2ff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc2_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc2_clken_q;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc2;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc3_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc3_in);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_rden_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_dc2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc3_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc3_clken;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc2;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc3ff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_rden_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_dccm_rden_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc3_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc3_clken_q;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc3;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xfffffff0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
           | (0xfU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                       ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                       : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                          >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xffffff0fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
           | (0xf0U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                         ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                            >> 4U)) << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xfffff0ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
           | (0xf00U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                          ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                          : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                             >> 4U)) << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xffff0fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
           | (0xf000U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                           ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                           : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                              >> 4U)) << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xfff0ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
           | (0xf0000U & (((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                            : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                               >> 4U)) << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xff0fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
           | (0xf00000U & (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                             ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                             : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                >> 4U)) << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xf0ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
           | (0xf000000U & (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                              ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                              : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                 >> 4U)) << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
           | (0xf0000000U & (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)
                               : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                  >> 4U)) << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U] 
        = ((0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U]) 
           | (0xffffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                          ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
                          : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U]) 
           | (0xffff0000U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
                               : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U] 
        = ((0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U]) 
           | (0xffffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                          ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
                          : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U]) 
           | (0xffff0000U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
                               : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[2U] 
        = ((0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[2U]) 
           | (0xffffU & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                          ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
                          : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[2U] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[2U]) 
           | (0xffff0000U & (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
                               : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[3U] 
        = ((0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[3U]) 
           | (0xffffU & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                          ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
                          : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[3U] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[3U]) 
           | (0xffff0000U & (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3
                               : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_dat_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ic_index_q__dout)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata 
        = (((QData)((IData)((((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                & (3U == (3U & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                        >> 0x20U))))) 
                               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff) 
                                     >> 2U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff) 
                                                 >> 3U)) 
                             | ((((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                  & (3U == (3U & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                          >> 0x10U))))) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff) 
                                       >> 1U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff) 
                                                   >> 2U))))) 
            << 0x24U) | (((QData)((IData)((((((((3U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                & (3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x20U))))) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc) 
                                                      >> 2U)))) 
                                              | (((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                  & (3U 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x20U))))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc) 
                                                    >> 2U))) 
                                             | (((3U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                 & (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                >> 0x10U))))) 
                                                & (0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc) 
                                                       >> 1U))))) 
                                            | (((3U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                & (3U 
                                                   != 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x10U))))) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc) 
                                                  >> 1U))) 
                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))))) 
                          << 0x23U) | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_sbecc)) 
                                        << 0x22U) | 
                                       (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_perr)) 
                                         << 0x21U) 
                                        | (((QData)((IData)(
                                                            (((((((((3U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                    & (3U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x20U))))) 
                                                                   & (0U 
                                                                      != 
                                                                      (3U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf) 
                                                                          >> 2U)))) 
                                                                  << 0x1fU) 
                                                                 | (0x80000000U 
                                                                    & ((((3U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                         & (3U 
                                                                            != 
                                                                            (3U 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x20U))))) 
                                                                        << 0x1fU) 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf) 
                                                                          << 0x1dU)))) 
                                                                | ((((3U 
                                                                      != 
                                                                      (3U 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                     & (3U 
                                                                        == 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x10U))))) 
                                                                    & (0U 
                                                                       != 
                                                                       (3U 
                                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf) 
                                                                           >> 1U)))) 
                                                                   << 0x1fU)) 
                                                               | (0x80000000U 
                                                                  & ((((3U 
                                                                        != 
                                                                        (3U 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                       & (3U 
                                                                          != 
                                                                          (3U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x10U))))) 
                                                                      << 0x1fU) 
                                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf) 
                                                                        << 0x1eU)))) 
                                                              & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                                 << 0x1fU)) 
                                                             | ((3U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))
                                                                 ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc
                                                                 : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc)))) 
                                            << 1U) 
                                           | (QData)((IData)(
                                                             (((3U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                               & (3U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                              >> 0x10U))))) 
                                                              | ((3U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                 & (3U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x20U)))))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
        = (((QData)((IData)((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff))) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff) 
                                >> 1U)))) << 0x24U) 
           | (((QData)((IData)(((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                  & (0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc)))) 
                                 | ((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc))) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))))) 
               << 0x23U) | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_sbecc)) 
                             << 0x22U) | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_perr)) 
                                           << 0x21U) 
                                          | (((QData)((IData)(
                                                              ((((((3U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                   & (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf)))) 
                                                                  | ((3U 
                                                                      != 
                                                                      (3U 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf))) 
                                                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
                                                                << 0x1fU) 
                                                               | vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))) 
                                              << 1U) 
                                             | (QData)((IData)(
                                                               (3U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__fp_enable 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_lower_e4) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_lower_e4)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i1_flush_upper_e1));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_taken_e1 
        = (1U & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
                   >> 8U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__e1ghrdecff__dout)) 
                 | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
                     >> 5U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__e1ghrdecff__dout)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_valid_e1 
        = (1U & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_flush_final_f))) 
                  & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[1U] 
                      >> 0x13U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U] 
                                   >> 9U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_taken_e1 
        = (1U & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
                   >> 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__e1ghrdecff__dout) 
                             >> 1U)) | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
                                         >> 5U) & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__e1ghrdecff__dout) 
                                                    >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e1 
        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_flush_final_f))) 
                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[1U] 
                     >> 0x13U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
                                  >> 9U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f1 
        = (0x1ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
                      >> 0xeU) ^ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
                                  >> 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
        = (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr))) 
            & ((0x7fffffe0U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout) 
               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rid_ff) 
                   << 2U) | (3U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout)))) 
           | ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_uncacheable_f1 
        = (1U & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac 
                    >> (0x1eU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
                                 >> 0x1aU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1 
        = (3U & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
                   >> 3U) ^ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
                             >> 5U)) ^ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1 
                                        >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__ic_crit_wd_rdy_mod 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__lru_update_valid_f2 
        = (((((0x1ffffff8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                              >> 3U)) | (0xffffff8U 
                                         & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                            >> 4U))) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                << 3U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                               >> 1U)) << 3U)) | ((
                                                   (((0x3ffffffcU 
                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                         >> 2U)) 
                                                     | (0x1ffffffcU 
                                                        & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                           >> 3U))) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                                                       << 2U)) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                        >> 1U)) 
                                                      << 2U)) 
                                                  | (((((0x7ffffffeU 
                                                         & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                            >> 1U)) 
                                                        | (0x3ffffffeU 
                                                           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                              >> 2U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                                                          << 1U)) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                           >> 1U)) 
                                                         << 1U)) 
                                                     | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                          | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                             >> 1U)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                            >> 1U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2 
        = ((((0U != (((4U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                       ? ((2U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                           ? ((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                               ? (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                        >> 7U)) : (3U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                      >> 6U)))
                           : ((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                               ? (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                        >> 5U)) : (0xfU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                      >> 4U))))
                       : ((2U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                           ? ((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                               ? (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                           >> 3U)) : 
                              (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                        >> 2U))) : 
                          ((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                            ? (0x7fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                        >> 1U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2)))) 
                     & ((4U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                         ? ((2U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                             ? ((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                                 ? (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                          >> 7U)) : 
                                (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                       >> 6U))) : (
                                                   (1U 
                                                    & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                                                    ? 
                                                   (7U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                                       >> 5U))
                                                    : 
                                                   (0xfU 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                                       >> 4U))))
                         : ((2U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                             ? ((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                                 ? (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                             >> 3U))
                                 : (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                             >> 2U)))
                             : ((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)
                                 ? (0x7fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                             >> 1U))
                                 : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw)))))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                  >> 1U))) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                 >> 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken)) 
           | (1U & ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                          >> 5U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                     | ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                            >> 5U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken)) 
           | (1U & ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                          >> 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                                     >> 1U)) | ((~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                                  >> 5U)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken)) 
           | (1U & ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                          >> 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                                     >> 2U)) | ((~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                                  >> 5U)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken)) 
           | (1U & ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                          >> 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                                     >> 3U)) | ((~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                                  >> 5U)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken)) 
           | (2U & ((0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                                     >> 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                                               << 1U)) 
                                   | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                       >> 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate) 
                                                 << 1U)))) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags) 
                       << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clken)) 
           | (2U & ((0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                                     >> 4U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                                   | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                       >> 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate) 
                                                 << 1U)))) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags) 
                       << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clken)) 
           | (2U & ((0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                                     >> 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                                               >> 1U)) 
                                   | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                       >> 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate) 
                                                 << 1U)))) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags) 
                       << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clken)) 
           | (2U & ((0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout) 
                                     >> 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff) 
                                               >> 2U)) 
                                   | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                       >> 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate) 
                                                 << 1U)))) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags) 
                       << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clken 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__req_ff__dout) 
                    >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2)) 
                  | (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f2))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_tag_valid 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq) 
           & (- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_uncacheable_ff)) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_val 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_valid) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                  >> 2U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__flush_final)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_shift 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_valid) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                 >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_valid) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_valid) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                  >> 3U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__flush_final)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_valid) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                 >> 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_dc2_in 
        = (((QData)((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_dc1 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(((0x400U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_result_dc3
                               : ((0x40U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1)
                                   ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff
                                   : ((0x20U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1)
                                       ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff
                                       : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_dc1)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc2 
        = (((QData)((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_pre_dc2 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(((0x80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e2
                               : ((0x100U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2)
                                   ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_result_dc3
                                   : ((0x10U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2)
                                       ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff
                                       : ((8U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2)
                                           ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff
                                           : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_pre_dc2))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_data_dc3 
        = (((QData)((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_pre_dc3 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                               | (- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)))))) 
                              & ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3)
                                  ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_result_e4_eff
                                  : ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3)
                                      ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_result_e4_eff
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_pre_dc3)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__rs_addr__pc 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__adder_pc_in_f2 
            << 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_total_branch_offset_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__predtgt_addr__pc 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__adder_pc_in_f2 
            << 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_total_branch_offset_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = ((0xffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap) 
           | (((~ ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                    >> 0x16U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U] 
                                 >> 3U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_predict_br)) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = ((0xffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap) 
           | (0x1ff8U & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                           >> 0x13U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U]) 
                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_predict_br) 
                            << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d 
        = (0xfU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e1)
                     ? (1U | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout) 
                              << 4U)) : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e1)
                                          ? (2U | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout) 
                                                   << 4U))
                                          : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e2)
                                              ? (3U 
                                                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout) 
                                                    << 4U))
                                              : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e2)
                                                  ? 
                                                 (4U 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout) 
                                                     << 4U))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e3)
                                                   ? 
                                                  (5U 
                                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout) 
                                                      << 4U))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e3)
                                                    ? 
                                                   (6U 
                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout) 
                                                       << 4U))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e4)
                                                     ? 
                                                    (7U 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout) 
                                                        << 4U))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e4)
                                                      ? 
                                                     (8U 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout) 
                                                         << 4U))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_wb)
                                                       ? 
                                                      (9U 
                                                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout) 
                                                          << 4U))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_wb)
                                                        ? 
                                                       (0xaU 
                                                        | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout) 
                                                           << 4U))
                                                        : 0U)))))))))) 
                   >> 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e1)
                    ? (1U | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout) 
                             << 4U)) : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e1)
                                         ? (2U | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout) 
                                                  << 4U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e2)
                                             ? (3U 
                                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout) 
                                                   << 4U))
                                             : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e2)
                                                 ? 
                                                (4U 
                                                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout) 
                                                    << 4U))
                                                 : 
                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e3)
                                                  ? 
                                                 (5U 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout) 
                                                     << 4U))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e3)
                                                   ? 
                                                  (6U 
                                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout) 
                                                      << 4U))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e4)
                                                    ? 
                                                   (7U 
                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout) 
                                                       << 4U))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e4)
                                                     ? 
                                                    (8U 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout) 
                                                        << 4U))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_wb)
                                                      ? 
                                                     (9U 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout) 
                                                         << 4U))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_wb)
                                                       ? 
                                                      (0xaU 
                                                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout) 
                                                          << 4U))
                                                       : 0U)))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d 
        = (0xfU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e1)
                     ? (1U | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout) 
                              << 4U)) : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e1)
                                          ? (2U | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout) 
                                                   << 4U))
                                          : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e2)
                                              ? (3U 
                                                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout) 
                                                    << 4U))
                                              : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e2)
                                                  ? 
                                                 (4U 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout) 
                                                     << 4U))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e3)
                                                   ? 
                                                  (5U 
                                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout) 
                                                      << 4U))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e3)
                                                    ? 
                                                   (6U 
                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout) 
                                                       << 4U))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e4)
                                                     ? 
                                                    (7U 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout) 
                                                        << 4U))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e4)
                                                      ? 
                                                     (8U 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout) 
                                                         << 4U))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_wb)
                                                       ? 
                                                      (9U 
                                                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout) 
                                                          << 4U))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_wb)
                                                        ? 
                                                       (0xaU 
                                                        | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout) 
                                                           << 4U))
                                                        : 0U)))))))))) 
                   >> 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e1)
                    ? (1U | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout) 
                             << 4U)) : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e1)
                                         ? (2U | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout) 
                                                  << 4U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e2)
                                             ? (3U 
                                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout) 
                                                   << 4U))
                                             : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e2)
                                                 ? 
                                                (4U 
                                                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout) 
                                                    << 4U))
                                                 : 
                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e3)
                                                  ? 
                                                 (5U 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout) 
                                                     << 4U))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e3)
                                                   ? 
                                                  (6U 
                                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout) 
                                                      << 4U))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e4)
                                                    ? 
                                                   (7U 
                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout) 
                                                       << 4U))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e4)
                                                     ? 
                                                    (8U 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout) 
                                                        << 4U))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_wb)
                                                      ? 
                                                     (9U 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout) 
                                                         << 4U))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_wb)
                                                       ? 
                                                      (0xaU 
                                                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout) 
                                                          << 4U))
                                                       : 0U)))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0xffe7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | (0x180U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                 >> 0x25U)) << 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0x81fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | ((0x78000U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                    >> 0x21U)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                      >> 0x1fU)) << 0xeU)) 
                 | (0x2000U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                        >> 0x20U)) 
                               << 0xdU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0xfff9fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | (0x60U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                >> 0x1dU)) << 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0xfe1ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | ((0x1800U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                   >> 0x1aU)) << 0xbU)) 
              | ((0x400U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                     >> 0x18U)) << 0xaU)) 
                 | (0x200U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                       >> 0x19U)) << 9U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x17U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_case));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x17U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_case));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x17U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_case));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x79fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | ((0x4000U & (((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 0x27U)))
                            ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                       >> 0x29U)) : (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                             >> 0x29U))) 
                          << 0xeU)) | (0x2000U & ((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 0x27U)))
                                                    ? (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 0x28U))
                                                    : (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                               >> 0x28U))) 
                                                  << 0xdU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | ((0x40000U & (((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 0x27U)))
                             ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                        >> 0x16U)) : (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                              >> 0x16U))) 
                           << 0x12U)) | ((0x20000U 
                                          & (((1U & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 0x27U)))
                                               ? (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                          >> 0x15U))
                                               : (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                          >> 0x15U))) 
                                             << 0x11U)) 
                                         | (0x10000U 
                                            & (((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                            >> 0x27U)))
                                                 ? (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                            >> 0x14U))
                                                 : (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                            >> 0x14U))) 
                                               << 0x10U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x7efffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | (0x1000U & (((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 0x27U)))
                           ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                      >> 0x1dU)) : (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                            >> 0x1dU))) 
                         << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_jal 
        = (1U & ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                            >> 0x17U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_case))) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_case))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_case))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__non_block_case_d 
        = (1U & ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                            >> 0x31U)) & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                  >> 0x29U))) 
                  | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                              >> 0x31U)) & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                    >> 9U)))) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_depend_i0_d 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
             & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                        >> 0x2dU))) & ((0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)) 
                                       == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x2dU))) & ((0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                   >> 5U)) 
                                         == (0x1fU 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff 
        = (1U & ((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                             >> 0x31U))) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_d 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                       >> 0x2dU))) & ((0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 0xaU)) 
                                      == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_d 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                       >> 0x2dU))) & ((0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 5U)) 
                                      == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write 
        = (1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x10U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_debug_fence_d))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x30U)) & (0U != (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                  >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x2fU)) & (0U != (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                  >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtrff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3)
                  ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3))
                      ? ((IData)(2U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))
                      : ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_lo) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_lo) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
           | (0xfffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_lo) 
                               << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
           | (0xfffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_lo) 
                               << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
           | (0xfffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_lo) 
                               << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
           | (0xfffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_lo) 
                               << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
           | (0xfffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_lo) 
                               << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
           | (0xfffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_lo) 
                               << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_hi) 
                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                   >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_hi) 
                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                   >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi)) 
           | (0xffffffeU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_hi) 
                               << 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi)) 
           | (0xffffffeU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_hi) 
                               << 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi)) 
           | (0xffffffcU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_hi) 
                               << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi)) 
           | (0xffffffcU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_hi) 
                               << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi)) 
           | (0xffffff8U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_hi) 
                               << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi)) 
           | (0xffffff8U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_hi) 
                               << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
              & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                 | ((0U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((1U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((2U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((3U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((4U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((5U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((6U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((7U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sadc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_addr_lo_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)
                  : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                     >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_dc1 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac 
                  >> (1U | (0x1eU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                     >> 0x1bU)))) & 
                 (~ ((0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                       >> 0x1cU))) 
                     | (0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                         >> 0x1cU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned 
        = ((7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                  >> 2U)) != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc1 
        = ((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                   >> 0x10U))) & (0xf004U 
                                                  == 
                                                  (0xffffU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                      >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc1 
        = ((0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                     >> 0xfU))) & (0x1e018U 
                                                   == 
                                                   (0x1ffffU 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                       >> 0xfU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc1 
        = ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                  >> 2U)) != (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc1 
        = ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                  >> 2U)) != (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid_ff__DOT__din_new 
        = ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en)))) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
              & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
               & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
               & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
               & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
               & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
               & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
               & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
               & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            if ((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = (0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                          & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                              | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual))) 
                             | (4U == ((0x17U >= (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag))))
                                        ? (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)))))
                                        : 0U)))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
            }
        }
    } else {
        if ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            if ((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                           & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                          | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                             & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                      == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)))))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                          & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                              & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] 
                    = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))))
                        ? ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U])
                            ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                       >> 0x20U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | ((((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                               & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            }
        } else {
            if ((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (1U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                           & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                               & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                 & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                          | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                             & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] 
                    = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((0x20U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x10U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            if ((8U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = (0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                           << 1U) & (((0xfffffffeU 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                                      | ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 1U)) 
                                         << 1U)) | 
                                     ((4U == ((0x17U 
                                               >= (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                          >> 3U)))))
                                               ? (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (7U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                             >> 3U))))))
                                               : 0U)) 
                                      << 1U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
            }
        }
    } else {
        if ((0x10U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            if ((8U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                            & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                           << 1U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                      << 1U) & (((1U 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                                 << 1U) 
                                                | (0xfffffffeU 
                                                   & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                        & ((~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                             >> 1U)) 
                                                           << 1U)) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                              >> 3U))) 
                                                         << 1U)))))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0xfffffffeU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                 >> 1U)) 
                                             << 1U)) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                            << 1U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                                & (1U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q)))) 
                                            << 1U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] 
                    = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                               >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                            >> 1U))))
                        ? ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U])
                            ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                       >> 0x20U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | (((((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                          << 1U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            }
        } else {
            if ((8U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (2U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                            & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                                & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                  & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                              & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                          << 1U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] 
                    = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((0x100U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            if ((0x40U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = (0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                           << 2U) & (((0xfffffffcU 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                                      | ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 2U)) 
                                         << 2U)) | 
                                     ((4U == ((0x17U 
                                               >= (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                          >> 6U)))))
                                               ? (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (7U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                             >> 6U))))))
                                               : 0U)) 
                                      << 2U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
            }
        }
    } else {
        if ((0x80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            if ((0x40U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                           << 2U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                      << 2U) & (((2U 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                                 << 2U) 
                                                | (0xfffffffcU 
                                                   & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                        & ((~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                             >> 2U)) 
                                                           << 2U)) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                              >> 6U))) 
                                                         << 2U)))))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0xfffffffcU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                 >> 2U)) 
                                             << 2U)) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                            << 2U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                              & (2U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                                & (2U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q)))) 
                                            << 2U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] 
                    = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                               >> 2U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                            >> 2U))))
                        ? ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U])
                            ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                       >> 0x20U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | (((((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                          << 2U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            }
        } else {
            if ((0x40U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (4U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                            & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                                & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                  & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                              & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                          << 2U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] 
                    = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((0x800U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x400U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            if ((0x200U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = (0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                           << 3U) & (((0xfffffff8U 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                                      | ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 3U)) 
                                         << 3U)) | 
                                     ((4U == ((0x17U 
                                               >= (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                          >> 9U)))))
                                               ? (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (7U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                             >> 9U))))))
                                               : 0U)) 
                                      << 3U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
            }
        }
    } else {
        if ((0x400U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            if ((0x200U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                            & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                           << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                      << 3U) & (((3U 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                                 << 3U) 
                                                | (0xfffffff8U 
                                                   & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                        & ((~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                             >> 3U)) 
                                                           << 3U)) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                              >> 9U))) 
                                                         << 3U)))))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0xfffffff8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                 >> 3U)) 
                                             << 3U)) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                            << 3U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffff8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                              & (3U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                                & (3U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q)))) 
                                            << 3U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] 
                    = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                               >> 3U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                            >> 3U))))
                        ? ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U])
                            ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                       >> 0x20U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | (((((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                          << 3U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            }
        } else {
            if ((0x200U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (8U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                            & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                                & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                  & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                              & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                          << 3U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] 
                    = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[4U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((0x4000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x2000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[4U] = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            if ((0x1000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[4U] = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = (0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                           << 4U) & (((0xfffffff0U 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                                      | ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 4U)) 
                                         << 4U)) | 
                                     ((4U == ((0x17U 
                                               >= (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                          >> 0xcU)))))
                                               ? (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (7U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                             >> 0xcU))))))
                                               : 0U)) 
                                      << 4U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
            }
        }
    } else {
        if ((0x2000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            if ((0x1000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                            & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                           << 4U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                      << 4U) & (((4U 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                                 << 4U) 
                                                | (0xfffffff0U 
                                                   & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                        & ((~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                             >> 4U)) 
                                                           << 4U)) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                              >> 0xcU))) 
                                                         << 4U)))))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0xfffffff0U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                 >> 4U)) 
                                             << 4U)) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                            << 4U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffff0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                              & (4U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                                & (4U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q)))) 
                                            << 4U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[4U] 
                    = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                               >> 4U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                            >> 4U))))
                        ? ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[4U])
                            ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                       >> 0x20U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | (((((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                          << 4U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            }
        } else {
            if ((0x1000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0x10U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                            & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                                & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                  & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                              & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                          << 4U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[4U] 
                    = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[5U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((0x20000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x10000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[5U] = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            if ((0x8000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[5U] = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = (0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                           << 5U) & (((0xffffffe0U 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                                      | ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 5U)) 
                                         << 5U)) | 
                                     ((4U == ((0x17U 
                                               >= (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                          >> 0xfU)))))
                                               ? (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (7U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                             >> 0xfU))))))
                                               : 0U)) 
                                      << 5U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
            }
        }
    } else {
        if ((0x10000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            if ((0x8000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                            & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                           << 5U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                      << 5U) & (((5U 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                                 << 5U) 
                                                | (0xffffffe0U 
                                                   & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                        & ((~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                             >> 5U)) 
                                                           << 5U)) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                              >> 0xfU))) 
                                                         << 5U)))))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0xffffffe0U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                 >> 5U)) 
                                             << 5U)) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                            << 5U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xffffffe0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                              & (5U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                                & (5U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q)))) 
                                            << 5U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[5U] 
                    = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                               >> 5U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                            >> 5U))))
                        ? ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[5U])
                            ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                       >> 0x20U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | (((((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                          << 5U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            }
        } else {
            if ((0x8000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0x20U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                            & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                                & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                  & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                              & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                          << 5U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[5U] 
                    = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[6U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((0x100000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x80000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[6U] = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            if ((0x40000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[6U] = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = (0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                           << 6U) & (((0xffffffc0U 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                                      | ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 6U)) 
                                         << 6U)) | 
                                     ((4U == ((0x17U 
                                               >= (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                          >> 0x12U)))))
                                               ? (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (7U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                             >> 0x12U))))))
                                               : 0U)) 
                                      << 6U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
            }
        }
    } else {
        if ((0x80000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            if ((0x40000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                            & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                           << 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                      << 6U) & (((6U 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                                 << 6U) 
                                                | (0xffffffc0U 
                                                   & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                        & ((~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                             >> 6U)) 
                                                           << 6U)) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                              >> 0x12U))) 
                                                         << 6U)))))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0xffffffc0U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                 >> 6U)) 
                                             << 6U)) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                            << 6U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                              & (6U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                                & (6U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q)))) 
                                            << 6U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[6U] 
                    = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                               >> 6U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                            >> 6U))))
                        ? ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[6U])
                            ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                       >> 0x20U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | (((((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                          << 6U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            }
        } else {
            if ((0x40000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0x40U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                            & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                                & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                  & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                              & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                          << 6U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[6U] 
                    = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((0x800000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x400000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U] = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            if ((0x200000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U] = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                           << 7U) & (((0xffffff80U 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                                      | ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 7U)) 
                                         << 7U)) | 
                                     ((4U == ((0x17U 
                                               >= (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                          >> 0x15U)))))
                                               ? (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (7U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                             >> 0x15U))))))
                                               : 0U)) 
                                      << 7U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
            }
        }
    } else {
        if ((0x400000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            if ((0x200000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                            & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                           << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                      << 7U) & (((7U 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                                 << 7U) 
                                                | (0xffffff80U 
                                                   & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                        & ((~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                             >> 7U)) 
                                                           << 7U)) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                              >> 0x15U))) 
                                                         << 7U)))))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0xffffff80U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                 >> 7U)) 
                                             << 7U)) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                            << 7U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xffffff80U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                              & (7U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                                & (7U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q)))) 
                                            << 7U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U] 
                    = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                               >> 7U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                            >> 7U))))
                        ? ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[7U])
                            ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                       >> 0x20U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | (((((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                          << 7U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            }
        } else {
            if ((0x200000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0x80U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                            & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                                & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                  & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                              & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                          << 7U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U] 
                    = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__fp_enable) 
         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__fp_enable_ff))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_lower_e4)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[0U]
                : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_lower_e4)
                    ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[0U]
                    : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1)
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[0U]
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i1_flush_upper_e1)
                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[0U]
                            : 0U))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_lower_e4)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U]
                : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_lower_e4)
                    ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U]
                    : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1)
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[1U]
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i1_flush_upper_e1)
                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[1U]
                            : 0U))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_lower_e4)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U]
                : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_lower_e4)
                    ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U]
                    : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1)
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U]
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i1_flush_upper_e1)
                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U]
                            : 0U))));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1_ns 
        = ((((((- (IData)((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e1)) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
                               >> 9U) | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_valid_e1)))))) 
               & ((0x1eU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1) 
                            << 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_taken_e1))) 
              | ((- (IData)(((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e1)) 
                              & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
                                    >> 9U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_valid_e1)))) 
                 & ((0x1cU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1) 
                              << 2U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_taken_e1) 
                                          << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_taken_e1))))) 
             | ((- (IData)(((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                  >> 2U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e1))) 
                             & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[1U] 
                                   >> 0x12U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_valid_e1)))) 
                & ((0x1eU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1) 
                             << 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_taken_e1)))) 
            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                 >> 2U)))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4))) 
           | ((- (IData)((1U & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                     >> 2U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e1))) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_valid_e1)))))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2_in = 0U;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2_in 
            = (0x3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[0U]);
    }
    if ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[1U] 
                              << 6U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[2U] 
                              << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[3U] 
                              << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_out[2U] 
                                           >> 0xeU)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2_in = 0U;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2_in 
            = (0x3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[0U]);
    }
    if ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[1U] 
                              << 6U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[2U] 
                              << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[3U] 
                              << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_out[2U] 
                                           >> 0xeU)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2_in = 0U;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2_in 
            = (0x3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[0U]);
    }
    if ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[1U] 
                              << 6U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[2U] 
                              << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[3U] 
                              << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_out[2U] 
                                           >> 0xeU)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2_in = 0U;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2_in 
            = (0x3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[0U]);
    }
    if ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[1U] 
                              << 6U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[2U] 
                              << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[3U] 
                              << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_out[2U] 
                                           >> 0xeU)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2_in = 0U;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2_in 
            = (0x3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[0U]);
    }
    if ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[1U] 
                              << 6U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[2U] 
                              << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[3U] 
                              << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_out[2U] 
                                           >> 0xeU)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2_in = 0U;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2_in 
            = (0x3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[0U]);
    }
    if ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[1U] 
                              << 6U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[2U] 
                              << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[3U] 
                              << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_out[2U] 
                                           >> 0xeU)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2_in = 0U;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2_in 
            = (0x3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[0U]);
    }
    if ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[1U] 
                              << 6U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[2U] 
                              << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[3U] 
                              << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_out[2U] 
                                           >> 0xeU)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2_in = 0U;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2_in 
            = (0x3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[0U]);
    }
    if ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[1U] 
                              << 6U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[0U] 
                                        >> 0x1aU)));
    }
    if ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[2U] 
                              << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[1U] 
                                          >> 0x14U)));
    }
    if ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2_in 
            = (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[3U] 
                              << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_out[2U] 
                                           >> 0xeU)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__in 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_bank_wb;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__in) 
                     << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__in) 
                               << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__in) 
                     << 1U) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__in)) 
                               << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout)) 
           | (2U & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__in) 
                         >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__in)) 
                    << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout)) 
           | (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__in) 
                        >> 1U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__branch_error_bank_conflict_f1 
        = (0xfU & ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_wb) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_error_addr_wb) 
                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))))) 
                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__1__Vfuncout) 
                      | (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_all_banks_error_wb))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_rd_addr_hashed_f1 
        = ((0xcU & ((0xfffffffcU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr_ns)) 
                    ^ (8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr_ns) 
                             >> 1U)))) | (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1) 
                                                ^ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr_ns))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_crit_word 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__ic_crit_wd_rdy_mod) 
             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                   >> 2U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_write_stall)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b0 
        = (0xfU & (((IData)(1U) << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                   & (- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__lru_update_valid_f2))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b1 
        = (0xfU & (((IData)(1U) << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                   & (- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__lru_update_valid_f2) 
                                       >> 1U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b2 
        = (0xfU & (((IData)(1U) << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                   & (- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__lru_update_valid_f2) 
                                       >> 2U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b3 
        = (0xfU & (((IData)(1U) << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                   & (- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__lru_update_valid_f2) 
                                       >> 3U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                  >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
             >> 1U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2))) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2 
        = (0x7fU & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2))) 
                     & ((0x40U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2) 
                                  >> 1U)) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2) 
                                                           >> 6U)))) 
                                              << 5U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2) 
                                                              >> 5U)))) 
                                                 << 4U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2) 
                                                                 >> 4U)))) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2) 
                                                                    >> 3U)))) 
                                                       << 2U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3fU 
                                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2) 
                                                                       >> 2U)))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0x7fU 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2) 
                                                                >> 1U)))))))))) 
                    | (- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((1U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((1U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((2U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((2U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((3U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((3U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((4U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((4U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((5U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((5U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((6U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((6U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((7U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((7U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((8U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((8U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((9U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((9U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0xaU == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0xaU == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0xbU == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0xbU == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0xcU == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0xcU == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0xdU == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0xdU == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0xeU == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0xeU == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0xfU == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0xfU == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x10U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x10U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x11U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x11U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x12U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x12U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x13U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x13U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x14U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x14U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x15U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x15U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x16U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x16U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x17U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x17U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x18U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x18U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way0_tagvalid_dup__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way0_tagvalid_dup__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clken) 
            & ((((0x19U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff)) 
                | ((0x19U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)))
            ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way0_tagvalid_dup__dout));
}
