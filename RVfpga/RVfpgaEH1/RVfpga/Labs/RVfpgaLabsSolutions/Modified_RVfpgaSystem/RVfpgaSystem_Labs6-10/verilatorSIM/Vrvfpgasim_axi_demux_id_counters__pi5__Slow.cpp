// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_axi_demux_id_counters__pi5.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vrvfpgasim_axi_demux_id_counters__pi5) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vrvfpgasim_axi_demux_id_counters__pi5::__Vconfigure(Vrvfpgasim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vrvfpgasim_axi_demux_id_counters__pi5::~Vrvfpgasim_axi_demux_id_counters__pi5() {
}

void Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__1(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__1\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__cnt_full = ((0xfffeU & (IData)(this->__PVT__cnt_full)) 
                             | (1U & (((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                       >> 4U) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    this->__PVT__cnt_full = ((0xfffdU & (IData)(this->__PVT__cnt_full)) 
                             | (2U & ((((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 1U)));
    this->__PVT__cnt_full = ((0xfffbU & (IData)(this->__PVT__cnt_full)) 
                             | (4U & ((((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 2U)));
    this->__PVT__cnt_full = ((0xfff7U & (IData)(this->__PVT__cnt_full)) 
                             | (8U & ((((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 3U)));
    this->__PVT__cnt_full = ((0xffefU & (IData)(this->__PVT__cnt_full)) 
                             | (0x10U & ((((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 4U)));
    this->__PVT__cnt_full = ((0xffdfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x20U & ((((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 5U)));
    this->__PVT__cnt_full = ((0xffbfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x40U & ((((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 6U)));
    this->__PVT__cnt_full = ((0xff7fU & (IData)(this->__PVT__cnt_full)) 
                             | (0x80U & ((((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 7U)));
    this->__PVT__cnt_full = ((0xfeffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x100U & ((((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 8U)));
    this->__PVT__cnt_full = ((0xfdffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x200U & ((((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 9U)));
    this->__PVT__cnt_full = ((0xfbffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x400U & ((((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xaU)));
    this->__PVT__cnt_full = ((0xf7ffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x800U & ((((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xbU)));
    this->__PVT__cnt_full = ((0xefffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x1000U & ((((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xcU)));
    this->__PVT__cnt_full = ((0xdfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x2000U & ((((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xdU)));
    this->__PVT__cnt_full = ((0xbfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x4000U & ((((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xeU)));
    this->__PVT__cnt_full = ((0x7fffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x8000U & ((((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xfU)));
    this->__PVT__occupied = ((0xfffeU & (IData)(this->__PVT__occupied)) 
                             | (0U != (0xfU & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
    this->__PVT__occupied = ((0xfffdU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 1U));
    this->__PVT__occupied = ((0xfffbU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 2U));
    this->__PVT__occupied = ((0xfff7U & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 3U));
    this->__PVT__occupied = ((0xffefU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 4U));
    this->__PVT__occupied = ((0xffdfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 5U));
    this->__PVT__occupied = ((0xffbfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 6U));
    this->__PVT__occupied = ((0xff7fU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 7U));
    this->__PVT__occupied = ((0xfeffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 8U));
    this->__PVT__occupied = ((0xfdffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 9U));
    this->__PVT__occupied = ((0xfbffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xaU));
    this->__PVT__occupied = ((0xf7ffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xbU));
    this->__PVT__occupied = ((0xefffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xcU));
    this->__PVT__occupied = ((0xdfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xdU));
    this->__PVT__occupied = ((0xbfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xeU));
    this->__PVT__occupied = ((0x7fffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xfU));
    this->__PVT__lookup_mst_select_o = (3U & (this->__PVT__mst_select_q 
                                              >> (0x1eU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                     >> 5U))));
    this->__PVT__lookup_mst_select_occupied_o = (1U 
                                                 & ((IData)(this->__PVT__occupied) 
                                                    >> 
                                                    (0xfU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                        >> 6U))));
}

void Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__4(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__4\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__occupied = ((0xfffeU & (IData)(this->__PVT__occupied)) 
                             | (0U != (0xfU & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
    this->__PVT__occupied = ((0xfffdU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 1U));
    this->__PVT__occupied = ((0xfffbU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 2U));
    this->__PVT__occupied = ((0xfff7U & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 3U));
    this->__PVT__occupied = ((0xffefU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 4U));
    this->__PVT__occupied = ((0xffdfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 5U));
    this->__PVT__occupied = ((0xffbfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 6U));
    this->__PVT__occupied = ((0xff7fU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 7U));
    this->__PVT__occupied = ((0xfeffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 8U));
    this->__PVT__occupied = ((0xfdffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 9U));
    this->__PVT__occupied = ((0xfbffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xaU));
    this->__PVT__occupied = ((0xf7ffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xbU));
    this->__PVT__occupied = ((0xefffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xcU));
    this->__PVT__occupied = ((0xdfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xdU));
    this->__PVT__occupied = ((0xbfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xeU));
    this->__PVT__occupied = ((0x7fffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xfU));
    this->__PVT__cnt_full = ((0xfffeU & (IData)(this->__PVT__cnt_full)) 
                             | (1U & (((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                       >> 4U) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    this->__PVT__cnt_full = ((0xfffdU & (IData)(this->__PVT__cnt_full)) 
                             | (2U & ((((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 1U)));
    this->__PVT__cnt_full = ((0xfffbU & (IData)(this->__PVT__cnt_full)) 
                             | (4U & ((((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 2U)));
    this->__PVT__cnt_full = ((0xfff7U & (IData)(this->__PVT__cnt_full)) 
                             | (8U & ((((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 3U)));
    this->__PVT__cnt_full = ((0xffefU & (IData)(this->__PVT__cnt_full)) 
                             | (0x10U & ((((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 4U)));
    this->__PVT__cnt_full = ((0xffdfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x20U & ((((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 5U)));
    this->__PVT__cnt_full = ((0xffbfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x40U & ((((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 6U)));
    this->__PVT__cnt_full = ((0xff7fU & (IData)(this->__PVT__cnt_full)) 
                             | (0x80U & ((((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 7U)));
    this->__PVT__cnt_full = ((0xfeffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x100U & ((((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 8U)));
    this->__PVT__cnt_full = ((0xfdffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x200U & ((((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 9U)));
    this->__PVT__cnt_full = ((0xfbffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x400U & ((((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xaU)));
    this->__PVT__cnt_full = ((0xf7ffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x800U & ((((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xbU)));
    this->__PVT__cnt_full = ((0xefffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x1000U & ((((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xcU)));
    this->__PVT__cnt_full = ((0xdfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x2000U & ((((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xdU)));
    this->__PVT__cnt_full = ((0xbfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x4000U & ((((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xeU)));
    this->__PVT__cnt_full = ((0x7fffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x8000U & ((((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xfU)));
    this->__PVT__lookup_mst_select_o = (3U & (this->__PVT__mst_select_q 
                                              >> (0x1eU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                                     << 1U))));
    this->__PVT__lookup_mst_select_occupied_o = (1U 
                                                 & ((IData)(this->__PVT__occupied) 
                                                    >> 
                                                    (0xfU 
                                                     & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U])));
}

void Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__2(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__2\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__cnt_full = ((0xfffeU & (IData)(this->__PVT__cnt_full)) 
                             | (1U & (((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                       >> 4U) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    this->__PVT__cnt_full = ((0xfffdU & (IData)(this->__PVT__cnt_full)) 
                             | (2U & ((((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 1U)));
    this->__PVT__cnt_full = ((0xfffbU & (IData)(this->__PVT__cnt_full)) 
                             | (4U & ((((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 2U)));
    this->__PVT__cnt_full = ((0xfff7U & (IData)(this->__PVT__cnt_full)) 
                             | (8U & ((((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 3U)));
    this->__PVT__cnt_full = ((0xffefU & (IData)(this->__PVT__cnt_full)) 
                             | (0x10U & ((((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 4U)));
    this->__PVT__cnt_full = ((0xffdfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x20U & ((((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 5U)));
    this->__PVT__cnt_full = ((0xffbfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x40U & ((((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 6U)));
    this->__PVT__cnt_full = ((0xff7fU & (IData)(this->__PVT__cnt_full)) 
                             | (0x80U & ((((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 7U)));
    this->__PVT__cnt_full = ((0xfeffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x100U & ((((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 8U)));
    this->__PVT__cnt_full = ((0xfdffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x200U & ((((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 9U)));
    this->__PVT__cnt_full = ((0xfbffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x400U & ((((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xaU)));
    this->__PVT__cnt_full = ((0xf7ffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x800U & ((((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xbU)));
    this->__PVT__cnt_full = ((0xefffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x1000U & ((((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xcU)));
    this->__PVT__cnt_full = ((0xdfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x2000U & ((((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xdU)));
    this->__PVT__cnt_full = ((0xbfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x4000U & ((((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xeU)));
    this->__PVT__cnt_full = ((0x7fffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x8000U & ((((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xfU)));
    this->__PVT__occupied = ((0xfffeU & (IData)(this->__PVT__occupied)) 
                             | (0U != (0xfU & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
    this->__PVT__occupied = ((0xfffdU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 1U));
    this->__PVT__occupied = ((0xfffbU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 2U));
    this->__PVT__occupied = ((0xfff7U & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 3U));
    this->__PVT__occupied = ((0xffefU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 4U));
    this->__PVT__occupied = ((0xffdfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 5U));
    this->__PVT__occupied = ((0xffbfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 6U));
    this->__PVT__occupied = ((0xff7fU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 7U));
    this->__PVT__occupied = ((0xfeffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 8U));
    this->__PVT__occupied = ((0xfdffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 9U));
    this->__PVT__occupied = ((0xfbffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xaU));
    this->__PVT__occupied = ((0xf7ffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xbU));
    this->__PVT__occupied = ((0xefffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xcU));
    this->__PVT__occupied = ((0xdfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xdU));
    this->__PVT__occupied = ((0xbfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xeU));
    this->__PVT__occupied = ((0x7fffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xfU));
    this->__PVT__lookup_mst_select_o = (3U & (this->__PVT__mst_select_q 
                                              >> (0x1eU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                     >> 5U))));
    this->__PVT__lookup_mst_select_occupied_o = (1U 
                                                 & ((IData)(this->__PVT__occupied) 
                                                    >> 
                                                    (0xfU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                        >> 6U))));
}

void Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__5(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__5\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__occupied = ((0xfffeU & (IData)(this->__PVT__occupied)) 
                             | (0U != (0xfU & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
    this->__PVT__occupied = ((0xfffdU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 1U));
    this->__PVT__occupied = ((0xfffbU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 2U));
    this->__PVT__occupied = ((0xfff7U & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 3U));
    this->__PVT__occupied = ((0xffefU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 4U));
    this->__PVT__occupied = ((0xffdfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 5U));
    this->__PVT__occupied = ((0xffbfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 6U));
    this->__PVT__occupied = ((0xff7fU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 7U));
    this->__PVT__occupied = ((0xfeffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 8U));
    this->__PVT__occupied = ((0xfdffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 9U));
    this->__PVT__occupied = ((0xfbffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xaU));
    this->__PVT__occupied = ((0xf7ffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xbU));
    this->__PVT__occupied = ((0xefffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xcU));
    this->__PVT__occupied = ((0xdfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xdU));
    this->__PVT__occupied = ((0xbfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xeU));
    this->__PVT__occupied = ((0x7fffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xfU));
    this->__PVT__cnt_full = ((0xfffeU & (IData)(this->__PVT__cnt_full)) 
                             | (1U & (((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                       >> 4U) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    this->__PVT__cnt_full = ((0xfffdU & (IData)(this->__PVT__cnt_full)) 
                             | (2U & ((((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 1U)));
    this->__PVT__cnt_full = ((0xfffbU & (IData)(this->__PVT__cnt_full)) 
                             | (4U & ((((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 2U)));
    this->__PVT__cnt_full = ((0xfff7U & (IData)(this->__PVT__cnt_full)) 
                             | (8U & ((((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 3U)));
    this->__PVT__cnt_full = ((0xffefU & (IData)(this->__PVT__cnt_full)) 
                             | (0x10U & ((((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 4U)));
    this->__PVT__cnt_full = ((0xffdfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x20U & ((((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 5U)));
    this->__PVT__cnt_full = ((0xffbfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x40U & ((((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 6U)));
    this->__PVT__cnt_full = ((0xff7fU & (IData)(this->__PVT__cnt_full)) 
                             | (0x80U & ((((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 7U)));
    this->__PVT__cnt_full = ((0xfeffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x100U & ((((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 8U)));
    this->__PVT__cnt_full = ((0xfdffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x200U & ((((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 9U)));
    this->__PVT__cnt_full = ((0xfbffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x400U & ((((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xaU)));
    this->__PVT__cnt_full = ((0xf7ffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x800U & ((((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xbU)));
    this->__PVT__cnt_full = ((0xefffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x1000U & ((((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xcU)));
    this->__PVT__cnt_full = ((0xdfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x2000U & ((((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xdU)));
    this->__PVT__cnt_full = ((0xbfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x4000U & ((((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xeU)));
    this->__PVT__cnt_full = ((0x7fffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x8000U & ((((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xfU)));
    this->__PVT__lookup_mst_select_o = (3U & (this->__PVT__mst_select_q 
                                              >> (0x1eU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                                     << 1U))));
    this->__PVT__lookup_mst_select_occupied_o = (1U 
                                                 & ((IData)(this->__PVT__occupied) 
                                                    >> 
                                                    (0xfU 
                                                     & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U])));
}

void Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__3(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__3\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__cnt_full = ((0xfffeU & (IData)(this->__PVT__cnt_full)) 
                             | (1U & (((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                       >> 4U) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    this->__PVT__cnt_full = ((0xfffdU & (IData)(this->__PVT__cnt_full)) 
                             | (2U & ((((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 1U)));
    this->__PVT__cnt_full = ((0xfffbU & (IData)(this->__PVT__cnt_full)) 
                             | (4U & ((((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 2U)));
    this->__PVT__cnt_full = ((0xfff7U & (IData)(this->__PVT__cnt_full)) 
                             | (8U & ((((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 3U)));
    this->__PVT__cnt_full = ((0xffefU & (IData)(this->__PVT__cnt_full)) 
                             | (0x10U & ((((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 4U)));
    this->__PVT__cnt_full = ((0xffdfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x20U & ((((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 5U)));
    this->__PVT__cnt_full = ((0xffbfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x40U & ((((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 6U)));
    this->__PVT__cnt_full = ((0xff7fU & (IData)(this->__PVT__cnt_full)) 
                             | (0x80U & ((((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 7U)));
    this->__PVT__cnt_full = ((0xfeffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x100U & ((((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 8U)));
    this->__PVT__cnt_full = ((0xfdffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x200U & ((((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 9U)));
    this->__PVT__cnt_full = ((0xfbffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x400U & ((((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xaU)));
    this->__PVT__cnt_full = ((0xf7ffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x800U & ((((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xbU)));
    this->__PVT__cnt_full = ((0xefffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x1000U & ((((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xcU)));
    this->__PVT__cnt_full = ((0xdfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x2000U & ((((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xdU)));
    this->__PVT__cnt_full = ((0xbfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x4000U & ((((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xeU)));
    this->__PVT__cnt_full = ((0x7fffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x8000U & ((((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xfU)));
    this->__PVT__occupied = ((0xfffeU & (IData)(this->__PVT__occupied)) 
                             | (0U != (0xfU & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
    this->__PVT__occupied = ((0xfffdU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 1U));
    this->__PVT__occupied = ((0xfffbU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 2U));
    this->__PVT__occupied = ((0xfff7U & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 3U));
    this->__PVT__occupied = ((0xffefU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 4U));
    this->__PVT__occupied = ((0xffdfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 5U));
    this->__PVT__occupied = ((0xffbfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 6U));
    this->__PVT__occupied = ((0xff7fU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 7U));
    this->__PVT__occupied = ((0xfeffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 8U));
    this->__PVT__occupied = ((0xfdffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 9U));
    this->__PVT__occupied = ((0xfbffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xaU));
    this->__PVT__occupied = ((0xf7ffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xbU));
    this->__PVT__occupied = ((0xefffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xcU));
    this->__PVT__occupied = ((0xdfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xdU));
    this->__PVT__occupied = ((0xbfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xeU));
    this->__PVT__occupied = ((0x7fffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xfU));
    this->__PVT__lookup_mst_select_o = (3U & (this->__PVT__mst_select_q 
                                              >> (0x1eU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                     >> 5U))));
    this->__PVT__lookup_mst_select_occupied_o = (1U 
                                                 & ((IData)(this->__PVT__occupied) 
                                                    >> 
                                                    (0xfU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                        >> 6U))));
}

void Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__6(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__6\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__occupied = ((0xfffeU & (IData)(this->__PVT__occupied)) 
                             | (0U != (0xfU & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
    this->__PVT__occupied = ((0xfffdU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 1U));
    this->__PVT__occupied = ((0xfffbU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 2U));
    this->__PVT__occupied = ((0xfff7U & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 3U));
    this->__PVT__occupied = ((0xffefU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 4U));
    this->__PVT__occupied = ((0xffdfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 5U));
    this->__PVT__occupied = ((0xffbfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 6U));
    this->__PVT__occupied = ((0xff7fU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 7U));
    this->__PVT__occupied = ((0xfeffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 8U));
    this->__PVT__occupied = ((0xfdffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 9U));
    this->__PVT__occupied = ((0xfbffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xaU));
    this->__PVT__occupied = ((0xf7ffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xbU));
    this->__PVT__occupied = ((0xefffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xcU));
    this->__PVT__occupied = ((0xdfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xdU));
    this->__PVT__occupied = ((0xbfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xeU));
    this->__PVT__occupied = ((0x7fffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xfU));
    this->__PVT__cnt_full = ((0xfffeU & (IData)(this->__PVT__cnt_full)) 
                             | (1U & (((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                       >> 4U) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    this->__PVT__cnt_full = ((0xfffdU & (IData)(this->__PVT__cnt_full)) 
                             | (2U & ((((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 1U)));
    this->__PVT__cnt_full = ((0xfffbU & (IData)(this->__PVT__cnt_full)) 
                             | (4U & ((((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 2U)));
    this->__PVT__cnt_full = ((0xfff7U & (IData)(this->__PVT__cnt_full)) 
                             | (8U & ((((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 3U)));
    this->__PVT__cnt_full = ((0xffefU & (IData)(this->__PVT__cnt_full)) 
                             | (0x10U & ((((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 4U)));
    this->__PVT__cnt_full = ((0xffdfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x20U & ((((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 5U)));
    this->__PVT__cnt_full = ((0xffbfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x40U & ((((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 6U)));
    this->__PVT__cnt_full = ((0xff7fU & (IData)(this->__PVT__cnt_full)) 
                             | (0x80U & ((((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 7U)));
    this->__PVT__cnt_full = ((0xfeffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x100U & ((((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 8U)));
    this->__PVT__cnt_full = ((0xfdffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x200U & ((((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 9U)));
    this->__PVT__cnt_full = ((0xfbffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x400U & ((((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xaU)));
    this->__PVT__cnt_full = ((0xf7ffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x800U & ((((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xbU)));
    this->__PVT__cnt_full = ((0xefffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x1000U & ((((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xcU)));
    this->__PVT__cnt_full = ((0xdfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x2000U & ((((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xdU)));
    this->__PVT__cnt_full = ((0xbfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x4000U & ((((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xeU)));
    this->__PVT__cnt_full = ((0x7fffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x8000U & ((((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xfU)));
    this->__PVT__lookup_mst_select_o = (3U & (this->__PVT__mst_select_q 
                                              >> (0x1eU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                                     << 1U))));
    this->__PVT__lookup_mst_select_occupied_o = (1U 
                                                 & ((IData)(this->__PVT__occupied) 
                                                    >> 
                                                    (0xfU 
                                                     & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U])));
}

void Vrvfpgasim_axi_demux_id_counters__pi5::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_ni = VL_RAND_RESET_I(1);
    __PVT__lookup_axi_id_i = VL_RAND_RESET_I(4);
    __PVT__lookup_mst_select_o = VL_RAND_RESET_I(2);
    __PVT__lookup_mst_select_occupied_o = VL_RAND_RESET_I(1);
    __PVT__full_o = VL_RAND_RESET_I(1);
    __PVT__push_axi_id_i = VL_RAND_RESET_I(4);
    __PVT__push_mst_select_i = VL_RAND_RESET_I(2);
    __PVT__push_i = VL_RAND_RESET_I(1);
    __PVT__inject_axi_id_i = VL_RAND_RESET_I(4);
    __PVT__inject_i = VL_RAND_RESET_I(1);
    __PVT__pop_axi_id_i = VL_RAND_RESET_I(4);
    __PVT__pop_i = VL_RAND_RESET_I(1);
    __PVT__mst_select_q = VL_RAND_RESET_I(32);
    __PVT__push_en = VL_RAND_RESET_I(16);
    __PVT__inject_en = VL_RAND_RESET_I(16);
    __PVT__pop_en = VL_RAND_RESET_I(16);
    __PVT__occupied = VL_RAND_RESET_I(16);
    __PVT__cnt_full = VL_RAND_RESET_I(16);
    __PVT__gen_counters__BRA__0__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__0__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__0__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__1__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__1__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__1__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__2__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__2__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__2__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__3__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__3__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__3__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__4__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__4__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__4__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__5__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__5__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__5__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__6__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__6__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__6__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__7__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__7__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__7__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__8__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__8__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__8__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__9__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__9__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__9__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__10__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__10__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__10__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__11__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__11__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__11__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__12__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__12__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__12__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__13__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__13__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__13__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__14__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__14__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__14__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__15__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__15__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    __PVT__gen_counters__BRA__15__KET____DOT__cnt_delta = VL_RAND_RESET_I(4);
    __PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(5);
    __PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(5);
    __Vdly__mst_select_q = VL_RAND_RESET_I(32);
}
