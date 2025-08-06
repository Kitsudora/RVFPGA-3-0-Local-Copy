// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_axi_demux_id_counters__pi5.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__7(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__7\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__push_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__aw_push)
                             ? (0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                  >> 6U))))
                             : 0U);
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__10(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__10\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__mst_select_q = this->__PVT__mst_select_q;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    this->__Vdly__mst_select_q = ((0xfffffffcU & this->__Vdly__mst_select_q) 
                                  | ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                      ? (3U & ((1U 
                                                & (IData)(this->__PVT__push_en))
                                                ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                : this->__PVT__mst_select_q))
                                      : 0U));
    this->__Vdly__mst_select_q = ((0xfffffff3U & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((2U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 2U)))
                                       : 0U) << 2U));
    this->__Vdly__mst_select_q = ((0xffffffcfU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((4U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 4U)))
                                       : 0U) << 4U));
    this->__Vdly__mst_select_q = ((0xffffff3fU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((8U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 6U)))
                                       : 0U) << 6U));
    this->__Vdly__mst_select_q = ((0xfffffcffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x10U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 8U)))
                                       : 0U) << 8U));
    this->__Vdly__mst_select_q = ((0xfffff3ffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x20U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xaU)))
                                       : 0U) << 0xaU));
    this->__Vdly__mst_select_q = ((0xffffcfffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x40U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xcU)))
                                       : 0U) << 0xcU));
    this->__Vdly__mst_select_q = ((0xffff3fffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x80U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xeU)))
                                       : 0U) << 0xeU));
    this->__Vdly__mst_select_q = ((0xfffcffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x100U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x10U)))
                                       : 0U) << 0x10U));
    this->__Vdly__mst_select_q = ((0xfff3ffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x200U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x12U)))
                                       : 0U) << 0x12U));
    this->__Vdly__mst_select_q = ((0xffcfffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x400U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x14U)))
                                       : 0U) << 0x14U));
    this->__Vdly__mst_select_q = ((0xff3fffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x800U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x16U)))
                                       : 0U) << 0x16U));
    this->__Vdly__mst_select_q = ((0xfcffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x1000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x18U)))
                                       : 0U) << 0x18U));
    this->__Vdly__mst_select_q = ((0xf3ffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x2000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1aU)))
                                       : 0U) << 0x1aU));
    this->__Vdly__mst_select_q = ((0xcfffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x4000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1cU)))
                                       : 0U) << 0x1cU));
    this->__Vdly__mst_select_q = ((0x3fffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x8000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1eU)))
                                       : 0U) << 0x1eU));
    this->__PVT__mst_select_q = this->__Vdly__mst_select_q;
    this->__PVT__cnt_full = ((0x7fffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x8000U & ((((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xfU)));
    this->__PVT__occupied = ((0x7fffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xfU));
    this->__PVT__cnt_full = ((0xbfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x4000U & ((((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xeU)));
    this->__PVT__occupied = ((0xbfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xeU));
    this->__PVT__cnt_full = ((0xdfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x2000U & ((((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xdU)));
    this->__PVT__occupied = ((0xdfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xdU));
    this->__PVT__cnt_full = ((0xefffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x1000U & ((((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xcU)));
    this->__PVT__occupied = ((0xefffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xcU));
    this->__PVT__cnt_full = ((0xf7ffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x800U & ((((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xbU)));
    this->__PVT__occupied = ((0xf7ffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xbU));
    this->__PVT__cnt_full = ((0xfbffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x400U & ((((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xaU)));
    this->__PVT__occupied = ((0xfbffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xaU));
    this->__PVT__cnt_full = ((0xfdffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x200U & ((((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 9U)));
    this->__PVT__occupied = ((0xfdffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 9U));
    this->__PVT__cnt_full = ((0xfeffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x100U & ((((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 8U)));
    this->__PVT__occupied = ((0xfeffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 8U));
    this->__PVT__cnt_full = ((0xff7fU & (IData)(this->__PVT__cnt_full)) 
                             | (0x80U & ((((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 7U)));
    this->__PVT__occupied = ((0xff7fU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 7U));
    this->__PVT__cnt_full = ((0xffbfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x40U & ((((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 6U)));
    this->__PVT__occupied = ((0xffbfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 6U));
    this->__PVT__cnt_full = ((0xffdfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x20U & ((((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 5U)));
    this->__PVT__occupied = ((0xffdfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 5U));
    this->__PVT__cnt_full = ((0xffefU & (IData)(this->__PVT__cnt_full)) 
                             | (0x10U & ((((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 4U)));
    this->__PVT__occupied = ((0xffefU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 4U));
    this->__PVT__cnt_full = ((0xfff7U & (IData)(this->__PVT__cnt_full)) 
                             | (8U & ((((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 3U)));
    this->__PVT__occupied = ((0xfff7U & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 3U));
    this->__PVT__cnt_full = ((0xfffbU & (IData)(this->__PVT__cnt_full)) 
                             | (4U & ((((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 2U)));
    this->__PVT__occupied = ((0xfffbU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 2U));
    this->__PVT__cnt_full = ((0xfffdU & (IData)(this->__PVT__cnt_full)) 
                             | (2U & ((((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 1U)));
    this->__PVT__occupied = ((0xfffdU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 1U));
    this->__PVT__cnt_full = ((0xfffeU & (IData)(this->__PVT__cnt_full)) 
                             | (1U & (((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                       >> 4U) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    this->__PVT__occupied = ((0xfffeU & (IData)(this->__PVT__occupied)) 
                             | (0U != (0xfU & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__16(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__16\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__26(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__26\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__pop_en = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                     >> 4U))) ? (0xffffU 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                                        >> 3U))))
                            : 0U);
    this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((1U & (IData)(this->__PVT__push_en))
                ? (~ (IData)(this->__PVT__pop_en)) : (IData)(this->__PVT__pop_en)))) {
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ (IData)(this->__PVT__push_en)) 
                               & (IData)(this->__PVT__pop_en)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((1U & (IData)(this->__PVT__push_en))
                                ? ((1U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((1U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((1U & (IData)(this->__PVT__push_en))
                                ? ((1U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((1U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((2U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 1U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 1U)))) {
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 1U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 1U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((2U & (IData)(this->__PVT__push_en))
                                ? ((2U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((2U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((2U & (IData)(this->__PVT__push_en))
                                ? ((2U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((2U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((4U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 2U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 2U)))) {
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 2U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 2U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((4U & (IData)(this->__PVT__push_en))
                                ? ((4U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((4U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((4U & (IData)(this->__PVT__push_en))
                                ? ((4U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((4U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((8U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 3U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 3U)))) {
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 3U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 3U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((8U & (IData)(this->__PVT__push_en))
                                ? ((8U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((8U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((8U & (IData)(this->__PVT__push_en))
                                ? ((8U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((8U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x10U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 4U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 4U)))) {
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 4U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 4U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x10U & (IData)(this->__PVT__push_en))
                                ? ((0x10U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x10U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x10U & (IData)(this->__PVT__push_en))
                                ? ((0x10U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x10U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x20U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 5U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 5U)))) {
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 5U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 5U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x20U & (IData)(this->__PVT__push_en))
                                ? ((0x20U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x20U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x20U & (IData)(this->__PVT__push_en))
                                ? ((0x20U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x20U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x40U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 6U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 6U)))) {
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 6U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 6U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x40U & (IData)(this->__PVT__push_en))
                                ? ((0x40U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x40U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x40U & (IData)(this->__PVT__push_en))
                                ? ((0x40U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x40U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x80U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 7U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 7U)))) {
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 7U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 7U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x80U & (IData)(this->__PVT__push_en))
                                ? ((0x80U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x80U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x80U & (IData)(this->__PVT__push_en))
                                ? ((0x80U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x80U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x100U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 8U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 8U)))) {
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 8U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 8U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x100U & (IData)(this->__PVT__push_en))
                                ? ((0x100U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x100U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x100U & (IData)(this->__PVT__push_en))
                                ? ((0x100U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x100U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x200U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 9U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 9U)))) {
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 9U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 9U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x200U & (IData)(this->__PVT__push_en))
                                ? ((0x200U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x200U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x200U & (IData)(this->__PVT__push_en))
                                ? ((0x200U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x200U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x400U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xaU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xaU)))) {
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xaU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xaU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x400U & (IData)(this->__PVT__push_en))
                                ? ((0x400U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x400U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x400U & (IData)(this->__PVT__push_en))
                                ? ((0x400U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x400U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x800U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xbU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xbU)))) {
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xbU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xbU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x800U & (IData)(this->__PVT__push_en))
                                ? ((0x800U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x800U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x800U & (IData)(this->__PVT__push_en))
                                ? ((0x800U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x800U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x1000U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xcU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xcU)))) {
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xcU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xcU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x1000U & (IData)(this->__PVT__push_en))
                                ? ((0x1000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x1000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x1000U & (IData)(this->__PVT__push_en))
                                ? ((0x1000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x1000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x2000U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xdU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xdU)))) {
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xdU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xdU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x2000U & (IData)(this->__PVT__push_en))
                                ? ((0x2000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x2000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x2000U & (IData)(this->__PVT__push_en))
                                ? ((0x2000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x2000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x4000U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xeU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xeU)))) {
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xeU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xeU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x4000U & (IData)(this->__PVT__push_en))
                                ? ((0x4000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x4000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x4000U & (IData)(this->__PVT__push_en))
                                ? ((0x4000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x4000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x8000U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xfU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xfU)))) {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xfU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xfU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x8000U & (IData)(this->__PVT__push_en))
                                ? ((0x8000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x8000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x8000U & (IData)(this->__PVT__push_en))
                                ? ((0x8000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x8000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__13(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__13\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__mst_select_q = this->__PVT__mst_select_q;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    this->__Vdly__mst_select_q = ((0xfffffffcU & this->__Vdly__mst_select_q) 
                                  | ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                      ? (3U & ((1U 
                                                & (IData)(this->__PVT__push_en))
                                                ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                : this->__PVT__mst_select_q))
                                      : 0U));
    this->__Vdly__mst_select_q = ((0xfffffff3U & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((2U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 2U)))
                                       : 0U) << 2U));
    this->__Vdly__mst_select_q = ((0xffffffcfU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((4U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 4U)))
                                       : 0U) << 4U));
    this->__Vdly__mst_select_q = ((0xffffff3fU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((8U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 6U)))
                                       : 0U) << 6U));
    this->__Vdly__mst_select_q = ((0xfffffcffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x10U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 8U)))
                                       : 0U) << 8U));
    this->__Vdly__mst_select_q = ((0xfffff3ffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x20U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xaU)))
                                       : 0U) << 0xaU));
    this->__Vdly__mst_select_q = ((0xffffcfffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x40U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xcU)))
                                       : 0U) << 0xcU));
    this->__Vdly__mst_select_q = ((0xffff3fffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x80U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xeU)))
                                       : 0U) << 0xeU));
    this->__Vdly__mst_select_q = ((0xfffcffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x100U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x10U)))
                                       : 0U) << 0x10U));
    this->__Vdly__mst_select_q = ((0xfff3ffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x200U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x12U)))
                                       : 0U) << 0x12U));
    this->__Vdly__mst_select_q = ((0xffcfffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x400U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x14U)))
                                       : 0U) << 0x14U));
    this->__Vdly__mst_select_q = ((0xff3fffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x800U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x16U)))
                                       : 0U) << 0x16U));
    this->__Vdly__mst_select_q = ((0xfcffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x1000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x18U)))
                                       : 0U) << 0x18U));
    this->__Vdly__mst_select_q = ((0xf3ffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x2000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1aU)))
                                       : 0U) << 0x1aU));
    this->__Vdly__mst_select_q = ((0xcfffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x4000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1cU)))
                                       : 0U) << 0x1cU));
    this->__Vdly__mst_select_q = ((0x3fffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x8000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1eU)))
                                       : 0U) << 0x1eU));
    this->__PVT__mst_select_q = this->__Vdly__mst_select_q;
    this->__PVT__occupied = ((0x7fffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xfU));
    this->__PVT__cnt_full = ((0x7fffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x8000U & ((((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xfU)));
    this->__PVT__occupied = ((0xbfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xeU));
    this->__PVT__cnt_full = ((0xbfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x4000U & ((((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xeU)));
    this->__PVT__occupied = ((0xdfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xdU));
    this->__PVT__cnt_full = ((0xdfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x2000U & ((((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xdU)));
    this->__PVT__occupied = ((0xefffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xcU));
    this->__PVT__cnt_full = ((0xefffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x1000U & ((((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xcU)));
    this->__PVT__occupied = ((0xf7ffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xbU));
    this->__PVT__cnt_full = ((0xf7ffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x800U & ((((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xbU)));
    this->__PVT__occupied = ((0xfbffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xaU));
    this->__PVT__cnt_full = ((0xfbffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x400U & ((((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xaU)));
    this->__PVT__occupied = ((0xfdffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 9U));
    this->__PVT__cnt_full = ((0xfdffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x200U & ((((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 9U)));
    this->__PVT__occupied = ((0xfeffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 8U));
    this->__PVT__cnt_full = ((0xfeffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x100U & ((((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 8U)));
    this->__PVT__occupied = ((0xff7fU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 7U));
    this->__PVT__cnt_full = ((0xff7fU & (IData)(this->__PVT__cnt_full)) 
                             | (0x80U & ((((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 7U)));
    this->__PVT__occupied = ((0xffbfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 6U));
    this->__PVT__cnt_full = ((0xffbfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x40U & ((((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 6U)));
    this->__PVT__occupied = ((0xffdfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 5U));
    this->__PVT__cnt_full = ((0xffdfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x20U & ((((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 5U)));
    this->__PVT__occupied = ((0xffefU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 4U));
    this->__PVT__cnt_full = ((0xffefU & (IData)(this->__PVT__cnt_full)) 
                             | (0x10U & ((((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 4U)));
    this->__PVT__occupied = ((0xfff7U & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 3U));
    this->__PVT__cnt_full = ((0xfff7U & (IData)(this->__PVT__cnt_full)) 
                             | (8U & ((((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 3U)));
    this->__PVT__occupied = ((0xfffbU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 2U));
    this->__PVT__cnt_full = ((0xfffbU & (IData)(this->__PVT__cnt_full)) 
                             | (4U & ((((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 2U)));
    this->__PVT__occupied = ((0xfffdU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 1U));
    this->__PVT__cnt_full = ((0xfffdU & (IData)(this->__PVT__cnt_full)) 
                             | (2U & ((((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 1U)));
    this->__PVT__occupied = ((0xfffeU & (IData)(this->__PVT__occupied)) 
                             | (0U != (0xfU & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
    this->__PVT__cnt_full = ((0xfffeU & (IData)(this->__PVT__cnt_full)) 
                             | (1U & (((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                       >> 4U) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__17(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__17\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__25(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__25\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__push_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__ar_push)
                             ? (0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U])))
                             : 0U);
    this->__PVT__inject_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__atop_inject)
                               ? (0xffffU & ((IData)(1U) 
                                             << (0xfU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                    >> 6U))))
                               : 0U);
    this->__PVT__pop_en = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
                                  & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                     >> 1U))) ? (0xffffU 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                                         << 0x1cU) 
                                                        | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                           >> 4U)))))
                            : 0U);
    this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en 
        = (1U & ((1U & (IData)(this->__PVT__push_en))
                  ? ((IData)(this->__PVT__inject_en) 
                     | (~ (IData)(this->__PVT__pop_en)))
                  : ((1U & (IData)(this->__PVT__inject_en))
                      ? (~ (IData)(this->__PVT__pop_en))
                      : (IData)(this->__PVT__pop_en))));
    this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = (1U & ((~ (IData)(this->__PVT__push_en)) 
                 & ((~ (IData)(this->__PVT__inject_en)) 
                    & (IData)(this->__PVT__pop_en))));
    this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = ((1U & (IData)(this->__PVT__push_en)) ? (
                                                   (1U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 0U
                                                     : 1U))
            : ((1U & (IData)(this->__PVT__inject_en))
                ? ((1U & (IData)(this->__PVT__pop_en))
                    ? 0U : 1U) : ((1U & (IData)(this->__PVT__pop_en))
                                   ? 1U : 0U)));
    this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
        = (1U & ((2U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 1U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 1U))) : ((2U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 1U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 1U))));
    this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 1U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 1U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 1U))));
    this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = ((2U & (IData)(this->__PVT__push_en)) ? (
                                                   (2U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 0U
                                                     : 1U))
            : ((2U & (IData)(this->__PVT__inject_en))
                ? ((2U & (IData)(this->__PVT__pop_en))
                    ? 0U : 1U) : ((2U & (IData)(this->__PVT__pop_en))
                                   ? 1U : 0U)));
    this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
        = (1U & ((4U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 2U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 2U))) : ((4U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 2U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 2U))));
    this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 2U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 2U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 2U))));
    this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
        = ((4U & (IData)(this->__PVT__push_en)) ? (
                                                   (4U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((4U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 0U
                                                     : 1U))
            : ((4U & (IData)(this->__PVT__inject_en))
                ? ((4U & (IData)(this->__PVT__pop_en))
                    ? 0U : 1U) : ((4U & (IData)(this->__PVT__pop_en))
                                   ? 1U : 0U)));
    this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
        = (1U & ((8U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 3U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 3U))) : ((8U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 3U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 3U))));
    this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 3U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 3U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 3U))));
    this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
        = ((8U & (IData)(this->__PVT__push_en)) ? (
                                                   (8U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((8U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 0U
                                                     : 1U))
            : ((8U & (IData)(this->__PVT__inject_en))
                ? ((8U & (IData)(this->__PVT__pop_en))
                    ? 0U : 1U) : ((8U & (IData)(this->__PVT__pop_en))
                                   ? 1U : 0U)));
    this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
        = (1U & ((0x10U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 4U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 4U))) : ((0x10U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 4U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 4U))));
    this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 4U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 4U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 4U))));
    this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
        = ((0x10U & (IData)(this->__PVT__push_en)) ? 
           ((0x10U & (IData)(this->__PVT__inject_en))
             ? ((0x10U & (IData)(this->__PVT__pop_en))
                 ? 1U : 2U) : ((0x10U & (IData)(this->__PVT__pop_en))
                                ? 0U : 1U)) : ((0x10U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (
                                                   (0x10U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (0x10U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
        = (1U & ((0x20U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 5U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 5U))) : ((0x20U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 5U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 5U))));
    this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 5U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 5U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 5U))));
    this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
        = ((0x20U & (IData)(this->__PVT__push_en)) ? 
           ((0x20U & (IData)(this->__PVT__inject_en))
             ? ((0x20U & (IData)(this->__PVT__pop_en))
                 ? 1U : 2U) : ((0x20U & (IData)(this->__PVT__pop_en))
                                ? 0U : 1U)) : ((0x20U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (0x20U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
        = (1U & ((0x40U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 6U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 6U))) : ((0x40U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 6U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 6U))));
    this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 6U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 6U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 6U))));
    this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
        = ((0x40U & (IData)(this->__PVT__push_en)) ? 
           ((0x40U & (IData)(this->__PVT__inject_en))
             ? ((0x40U & (IData)(this->__PVT__pop_en))
                 ? 1U : 2U) : ((0x40U & (IData)(this->__PVT__pop_en))
                                ? 0U : 1U)) : ((0x40U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (0x40U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
        = (1U & ((0x80U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 7U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 7U))) : ((0x80U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 7U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 7U))));
    this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 7U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 7U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 7U))));
    this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
        = ((0x80U & (IData)(this->__PVT__push_en)) ? 
           ((0x80U & (IData)(this->__PVT__inject_en))
             ? ((0x80U & (IData)(this->__PVT__pop_en))
                 ? 1U : 2U) : ((0x80U & (IData)(this->__PVT__pop_en))
                                ? 0U : 1U)) : ((0x80U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (
                                                   (0x80U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (0x80U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
        = (1U & ((0x100U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 8U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 8U))) : ((0x100U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 8U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 8U))));
    this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 8U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 8U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 8U))));
    this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
        = ((0x100U & (IData)(this->__PVT__push_en))
            ? ((0x100U & (IData)(this->__PVT__inject_en))
                ? ((0x100U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x100U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x100U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
        = (1U & ((0x200U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 9U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 9U))) : ((0x200U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 9U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 9U))));
    this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 9U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 9U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 9U))));
    this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
        = ((0x200U & (IData)(this->__PVT__push_en))
            ? ((0x200U & (IData)(this->__PVT__inject_en))
                ? ((0x200U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x200U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x200U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x200U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x200U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
        = (1U & ((0x400U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xaU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xaU))) : (
                                                   (0x400U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xaU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xaU))));
    this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xaU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xaU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xaU))));
    this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
        = ((0x400U & (IData)(this->__PVT__push_en))
            ? ((0x400U & (IData)(this->__PVT__inject_en))
                ? ((0x400U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x400U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x400U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x400U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x400U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
        = (1U & ((0x800U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xbU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xbU))) : (
                                                   (0x800U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xbU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xbU))));
    this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xbU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xbU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xbU))));
    this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
        = ((0x800U & (IData)(this->__PVT__push_en))
            ? ((0x800U & (IData)(this->__PVT__inject_en))
                ? ((0x800U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x800U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x800U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x800U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x800U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
        = (1U & ((0x1000U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xcU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xcU))) : (
                                                   (0x1000U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xcU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xcU))));
    this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xcU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xcU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xcU))));
    this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
        = ((0x1000U & (IData)(this->__PVT__push_en))
            ? ((0x1000U & (IData)(this->__PVT__inject_en))
                ? ((0x1000U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x1000U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x1000U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x1000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x1000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
        = (1U & ((0x2000U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xdU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xdU))) : (
                                                   (0x2000U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xdU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xdU))));
    this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xdU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xdU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xdU))));
    this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
        = ((0x2000U & (IData)(this->__PVT__push_en))
            ? ((0x2000U & (IData)(this->__PVT__inject_en))
                ? ((0x2000U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x2000U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x2000U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x2000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x2000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
        = (1U & ((0x4000U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xeU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xeU))) : (
                                                   (0x4000U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xeU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xeU))));
    this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xeU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xeU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xeU))));
    this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
        = ((0x4000U & (IData)(this->__PVT__push_en))
            ? ((0x4000U & (IData)(this->__PVT__inject_en))
                ? ((0x4000U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x4000U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x4000U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x4000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x4000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
        = (1U & ((0x8000U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xfU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xfU))) : (
                                                   (0x8000U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xfU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xfU))));
    this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xfU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xfU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xfU))));
    this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
        = ((0x8000U & (IData)(this->__PVT__push_en))
            ? ((0x8000U & (IData)(this->__PVT__inject_en))
                ? ((0x8000U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x8000U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x8000U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x8000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x8000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__8(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__8\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__push_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__aw_push)
                             ? (0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                  >> 6U))))
                             : 0U);
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__11(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__11\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__mst_select_q = this->__PVT__mst_select_q;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    this->__Vdly__mst_select_q = ((0xfffffffcU & this->__Vdly__mst_select_q) 
                                  | ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                      ? (3U & ((1U 
                                                & (IData)(this->__PVT__push_en))
                                                ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                : this->__PVT__mst_select_q))
                                      : 0U));
    this->__Vdly__mst_select_q = ((0xfffffff3U & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((2U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 2U)))
                                       : 0U) << 2U));
    this->__Vdly__mst_select_q = ((0xffffffcfU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((4U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 4U)))
                                       : 0U) << 4U));
    this->__Vdly__mst_select_q = ((0xffffff3fU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((8U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 6U)))
                                       : 0U) << 6U));
    this->__Vdly__mst_select_q = ((0xfffffcffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x10U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 8U)))
                                       : 0U) << 8U));
    this->__Vdly__mst_select_q = ((0xfffff3ffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x20U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xaU)))
                                       : 0U) << 0xaU));
    this->__Vdly__mst_select_q = ((0xffffcfffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x40U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xcU)))
                                       : 0U) << 0xcU));
    this->__Vdly__mst_select_q = ((0xffff3fffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x80U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xeU)))
                                       : 0U) << 0xeU));
    this->__Vdly__mst_select_q = ((0xfffcffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x100U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x10U)))
                                       : 0U) << 0x10U));
    this->__Vdly__mst_select_q = ((0xfff3ffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x200U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x12U)))
                                       : 0U) << 0x12U));
    this->__Vdly__mst_select_q = ((0xffcfffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x400U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x14U)))
                                       : 0U) << 0x14U));
    this->__Vdly__mst_select_q = ((0xff3fffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x800U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x16U)))
                                       : 0U) << 0x16U));
    this->__Vdly__mst_select_q = ((0xfcffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x1000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x18U)))
                                       : 0U) << 0x18U));
    this->__Vdly__mst_select_q = ((0xf3ffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x2000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1aU)))
                                       : 0U) << 0x1aU));
    this->__Vdly__mst_select_q = ((0xcfffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x4000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1cU)))
                                       : 0U) << 0x1cU));
    this->__Vdly__mst_select_q = ((0x3fffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x8000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1eU)))
                                       : 0U) << 0x1eU));
    this->__PVT__mst_select_q = this->__Vdly__mst_select_q;
    this->__PVT__cnt_full = ((0x7fffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x8000U & ((((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xfU)));
    this->__PVT__occupied = ((0x7fffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xfU));
    this->__PVT__cnt_full = ((0xbfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x4000U & ((((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xeU)));
    this->__PVT__occupied = ((0xbfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xeU));
    this->__PVT__cnt_full = ((0xdfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x2000U & ((((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xdU)));
    this->__PVT__occupied = ((0xdfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xdU));
    this->__PVT__cnt_full = ((0xefffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x1000U & ((((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xcU)));
    this->__PVT__occupied = ((0xefffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xcU));
    this->__PVT__cnt_full = ((0xf7ffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x800U & ((((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xbU)));
    this->__PVT__occupied = ((0xf7ffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xbU));
    this->__PVT__cnt_full = ((0xfbffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x400U & ((((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xaU)));
    this->__PVT__occupied = ((0xfbffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xaU));
    this->__PVT__cnt_full = ((0xfdffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x200U & ((((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 9U)));
    this->__PVT__occupied = ((0xfdffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 9U));
    this->__PVT__cnt_full = ((0xfeffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x100U & ((((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 8U)));
    this->__PVT__occupied = ((0xfeffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 8U));
    this->__PVT__cnt_full = ((0xff7fU & (IData)(this->__PVT__cnt_full)) 
                             | (0x80U & ((((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 7U)));
    this->__PVT__occupied = ((0xff7fU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 7U));
    this->__PVT__cnt_full = ((0xffbfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x40U & ((((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 6U)));
    this->__PVT__occupied = ((0xffbfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 6U));
    this->__PVT__cnt_full = ((0xffdfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x20U & ((((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 5U)));
    this->__PVT__occupied = ((0xffdfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 5U));
    this->__PVT__cnt_full = ((0xffefU & (IData)(this->__PVT__cnt_full)) 
                             | (0x10U & ((((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 4U)));
    this->__PVT__occupied = ((0xffefU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 4U));
    this->__PVT__cnt_full = ((0xfff7U & (IData)(this->__PVT__cnt_full)) 
                             | (8U & ((((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 3U)));
    this->__PVT__occupied = ((0xfff7U & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 3U));
    this->__PVT__cnt_full = ((0xfffbU & (IData)(this->__PVT__cnt_full)) 
                             | (4U & ((((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 2U)));
    this->__PVT__occupied = ((0xfffbU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 2U));
    this->__PVT__cnt_full = ((0xfffdU & (IData)(this->__PVT__cnt_full)) 
                             | (2U & ((((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 1U)));
    this->__PVT__occupied = ((0xfffdU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 1U));
    this->__PVT__cnt_full = ((0xfffeU & (IData)(this->__PVT__cnt_full)) 
                             | (1U & (((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                       >> 4U) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    this->__PVT__occupied = ((0xfffeU & (IData)(this->__PVT__occupied)) 
                             | (0U != (0xfU & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__18(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__18\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__28(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__28\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__pop_en = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                     >> 0x1dU))) ? 
                           (0xffffU & ((IData)(1U) 
                                       << (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                                   >> 3U))))
                            : 0U);
    this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((1U & (IData)(this->__PVT__push_en))
                ? (~ (IData)(this->__PVT__pop_en)) : (IData)(this->__PVT__pop_en)))) {
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ (IData)(this->__PVT__push_en)) 
                               & (IData)(this->__PVT__pop_en)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((1U & (IData)(this->__PVT__push_en))
                                ? ((1U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((1U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((1U & (IData)(this->__PVT__push_en))
                                ? ((1U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((1U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((2U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 1U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 1U)))) {
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 1U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 1U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((2U & (IData)(this->__PVT__push_en))
                                ? ((2U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((2U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((2U & (IData)(this->__PVT__push_en))
                                ? ((2U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((2U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((4U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 2U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 2U)))) {
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 2U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 2U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((4U & (IData)(this->__PVT__push_en))
                                ? ((4U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((4U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((4U & (IData)(this->__PVT__push_en))
                                ? ((4U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((4U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((8U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 3U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 3U)))) {
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 3U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 3U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((8U & (IData)(this->__PVT__push_en))
                                ? ((8U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((8U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((8U & (IData)(this->__PVT__push_en))
                                ? ((8U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((8U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x10U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 4U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 4U)))) {
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 4U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 4U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x10U & (IData)(this->__PVT__push_en))
                                ? ((0x10U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x10U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x10U & (IData)(this->__PVT__push_en))
                                ? ((0x10U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x10U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x20U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 5U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 5U)))) {
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 5U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 5U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x20U & (IData)(this->__PVT__push_en))
                                ? ((0x20U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x20U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x20U & (IData)(this->__PVT__push_en))
                                ? ((0x20U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x20U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x40U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 6U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 6U)))) {
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 6U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 6U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x40U & (IData)(this->__PVT__push_en))
                                ? ((0x40U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x40U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x40U & (IData)(this->__PVT__push_en))
                                ? ((0x40U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x40U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x80U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 7U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 7U)))) {
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 7U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 7U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x80U & (IData)(this->__PVT__push_en))
                                ? ((0x80U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x80U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x80U & (IData)(this->__PVT__push_en))
                                ? ((0x80U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x80U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x100U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 8U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 8U)))) {
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 8U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 8U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x100U & (IData)(this->__PVT__push_en))
                                ? ((0x100U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x100U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x100U & (IData)(this->__PVT__push_en))
                                ? ((0x100U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x100U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x200U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 9U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 9U)))) {
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 9U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 9U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x200U & (IData)(this->__PVT__push_en))
                                ? ((0x200U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x200U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x200U & (IData)(this->__PVT__push_en))
                                ? ((0x200U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x200U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x400U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xaU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xaU)))) {
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xaU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xaU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x400U & (IData)(this->__PVT__push_en))
                                ? ((0x400U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x400U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x400U & (IData)(this->__PVT__push_en))
                                ? ((0x400U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x400U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x800U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xbU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xbU)))) {
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xbU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xbU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x800U & (IData)(this->__PVT__push_en))
                                ? ((0x800U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x800U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x800U & (IData)(this->__PVT__push_en))
                                ? ((0x800U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x800U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x1000U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xcU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xcU)))) {
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xcU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xcU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x1000U & (IData)(this->__PVT__push_en))
                                ? ((0x1000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x1000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x1000U & (IData)(this->__PVT__push_en))
                                ? ((0x1000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x1000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x2000U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xdU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xdU)))) {
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xdU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xdU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x2000U & (IData)(this->__PVT__push_en))
                                ? ((0x2000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x2000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x2000U & (IData)(this->__PVT__push_en))
                                ? ((0x2000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x2000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x4000U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xeU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xeU)))) {
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xeU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xeU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x4000U & (IData)(this->__PVT__push_en))
                                ? ((0x4000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x4000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x4000U & (IData)(this->__PVT__push_en))
                                ? ((0x4000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x4000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x8000U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xfU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xfU)))) {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xfU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xfU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x8000U & (IData)(this->__PVT__push_en))
                                ? ((0x8000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x8000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x8000U & (IData)(this->__PVT__push_en))
                                ? ((0x8000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x8000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__14(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__14\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__mst_select_q = this->__PVT__mst_select_q;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    this->__Vdly__mst_select_q = ((0xfffffffcU & this->__Vdly__mst_select_q) 
                                  | ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                      ? (3U & ((1U 
                                                & (IData)(this->__PVT__push_en))
                                                ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                : this->__PVT__mst_select_q))
                                      : 0U));
    this->__Vdly__mst_select_q = ((0xfffffff3U & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((2U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 2U)))
                                       : 0U) << 2U));
    this->__Vdly__mst_select_q = ((0xffffffcfU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((4U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 4U)))
                                       : 0U) << 4U));
    this->__Vdly__mst_select_q = ((0xffffff3fU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((8U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 6U)))
                                       : 0U) << 6U));
    this->__Vdly__mst_select_q = ((0xfffffcffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x10U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 8U)))
                                       : 0U) << 8U));
    this->__Vdly__mst_select_q = ((0xfffff3ffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x20U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xaU)))
                                       : 0U) << 0xaU));
    this->__Vdly__mst_select_q = ((0xffffcfffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x40U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xcU)))
                                       : 0U) << 0xcU));
    this->__Vdly__mst_select_q = ((0xffff3fffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x80U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xeU)))
                                       : 0U) << 0xeU));
    this->__Vdly__mst_select_q = ((0xfffcffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x100U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x10U)))
                                       : 0U) << 0x10U));
    this->__Vdly__mst_select_q = ((0xfff3ffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x200U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x12U)))
                                       : 0U) << 0x12U));
    this->__Vdly__mst_select_q = ((0xffcfffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x400U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x14U)))
                                       : 0U) << 0x14U));
    this->__Vdly__mst_select_q = ((0xff3fffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x800U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x16U)))
                                       : 0U) << 0x16U));
    this->__Vdly__mst_select_q = ((0xfcffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x1000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x18U)))
                                       : 0U) << 0x18U));
    this->__Vdly__mst_select_q = ((0xf3ffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x2000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1aU)))
                                       : 0U) << 0x1aU));
    this->__Vdly__mst_select_q = ((0xcfffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x4000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1cU)))
                                       : 0U) << 0x1cU));
    this->__Vdly__mst_select_q = ((0x3fffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x8000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1eU)))
                                       : 0U) << 0x1eU));
    this->__PVT__mst_select_q = this->__Vdly__mst_select_q;
    this->__PVT__occupied = ((0x7fffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xfU));
    this->__PVT__cnt_full = ((0x7fffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x8000U & ((((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xfU)));
    this->__PVT__occupied = ((0xbfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xeU));
    this->__PVT__cnt_full = ((0xbfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x4000U & ((((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xeU)));
    this->__PVT__occupied = ((0xdfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xdU));
    this->__PVT__cnt_full = ((0xdfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x2000U & ((((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xdU)));
    this->__PVT__occupied = ((0xefffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xcU));
    this->__PVT__cnt_full = ((0xefffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x1000U & ((((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xcU)));
    this->__PVT__occupied = ((0xf7ffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xbU));
    this->__PVT__cnt_full = ((0xf7ffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x800U & ((((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xbU)));
    this->__PVT__occupied = ((0xfbffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xaU));
    this->__PVT__cnt_full = ((0xfbffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x400U & ((((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xaU)));
    this->__PVT__occupied = ((0xfdffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 9U));
    this->__PVT__cnt_full = ((0xfdffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x200U & ((((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 9U)));
    this->__PVT__occupied = ((0xfeffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 8U));
    this->__PVT__cnt_full = ((0xfeffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x100U & ((((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 8U)));
    this->__PVT__occupied = ((0xff7fU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 7U));
    this->__PVT__cnt_full = ((0xff7fU & (IData)(this->__PVT__cnt_full)) 
                             | (0x80U & ((((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 7U)));
    this->__PVT__occupied = ((0xffbfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 6U));
    this->__PVT__cnt_full = ((0xffbfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x40U & ((((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 6U)));
    this->__PVT__occupied = ((0xffdfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 5U));
    this->__PVT__cnt_full = ((0xffdfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x20U & ((((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 5U)));
    this->__PVT__occupied = ((0xffefU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 4U));
    this->__PVT__cnt_full = ((0xffefU & (IData)(this->__PVT__cnt_full)) 
                             | (0x10U & ((((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 4U)));
    this->__PVT__occupied = ((0xfff7U & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 3U));
    this->__PVT__cnt_full = ((0xfff7U & (IData)(this->__PVT__cnt_full)) 
                             | (8U & ((((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 3U)));
    this->__PVT__occupied = ((0xfffbU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 2U));
    this->__PVT__cnt_full = ((0xfffbU & (IData)(this->__PVT__cnt_full)) 
                             | (4U & ((((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 2U)));
    this->__PVT__occupied = ((0xfffdU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 1U));
    this->__PVT__cnt_full = ((0xfffdU & (IData)(this->__PVT__cnt_full)) 
                             | (2U & ((((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 1U)));
    this->__PVT__occupied = ((0xfffeU & (IData)(this->__PVT__occupied)) 
                             | (0U != (0xfU & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
    this->__PVT__cnt_full = ((0xfffeU & (IData)(this->__PVT__cnt_full)) 
                             | (1U & (((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                       >> 4U) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__19(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__19\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__27(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__27\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__push_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__ar_push)
                             ? (0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U])))
                             : 0U);
    this->__PVT__inject_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__atop_inject)
                               ? (0xffffU & ((IData)(1U) 
                                             << (0xfU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                    >> 6U))))
                               : 0U);
    this->__PVT__pop_en = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                      >> 0x19U)) & 
                                  (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                   >> 1U))) ? (0xffffU 
                                               & ((IData)(1U) 
                                                  << 
                                                  (0xfU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                                       << 0x1cU) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                         >> 4U)))))
                            : 0U);
    this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en 
        = (1U & ((1U & (IData)(this->__PVT__push_en))
                  ? ((IData)(this->__PVT__inject_en) 
                     | (~ (IData)(this->__PVT__pop_en)))
                  : ((1U & (IData)(this->__PVT__inject_en))
                      ? (~ (IData)(this->__PVT__pop_en))
                      : (IData)(this->__PVT__pop_en))));
    this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = (1U & ((~ (IData)(this->__PVT__push_en)) 
                 & ((~ (IData)(this->__PVT__inject_en)) 
                    & (IData)(this->__PVT__pop_en))));
    this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = ((1U & (IData)(this->__PVT__push_en)) ? (
                                                   (1U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 0U
                                                     : 1U))
            : ((1U & (IData)(this->__PVT__inject_en))
                ? ((1U & (IData)(this->__PVT__pop_en))
                    ? 0U : 1U) : ((1U & (IData)(this->__PVT__pop_en))
                                   ? 1U : 0U)));
    this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
        = (1U & ((2U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 1U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 1U))) : ((2U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 1U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 1U))));
    this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 1U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 1U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 1U))));
    this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = ((2U & (IData)(this->__PVT__push_en)) ? (
                                                   (2U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 0U
                                                     : 1U))
            : ((2U & (IData)(this->__PVT__inject_en))
                ? ((2U & (IData)(this->__PVT__pop_en))
                    ? 0U : 1U) : ((2U & (IData)(this->__PVT__pop_en))
                                   ? 1U : 0U)));
    this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
        = (1U & ((4U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 2U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 2U))) : ((4U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 2U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 2U))));
    this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 2U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 2U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 2U))));
    this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
        = ((4U & (IData)(this->__PVT__push_en)) ? (
                                                   (4U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((4U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 0U
                                                     : 1U))
            : ((4U & (IData)(this->__PVT__inject_en))
                ? ((4U & (IData)(this->__PVT__pop_en))
                    ? 0U : 1U) : ((4U & (IData)(this->__PVT__pop_en))
                                   ? 1U : 0U)));
    this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
        = (1U & ((8U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 3U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 3U))) : ((8U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 3U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 3U))));
    this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 3U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 3U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 3U))));
    this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
        = ((8U & (IData)(this->__PVT__push_en)) ? (
                                                   (8U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((8U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 0U
                                                     : 1U))
            : ((8U & (IData)(this->__PVT__inject_en))
                ? ((8U & (IData)(this->__PVT__pop_en))
                    ? 0U : 1U) : ((8U & (IData)(this->__PVT__pop_en))
                                   ? 1U : 0U)));
    this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
        = (1U & ((0x10U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 4U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 4U))) : ((0x10U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 4U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 4U))));
    this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 4U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 4U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 4U))));
    this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
        = ((0x10U & (IData)(this->__PVT__push_en)) ? 
           ((0x10U & (IData)(this->__PVT__inject_en))
             ? ((0x10U & (IData)(this->__PVT__pop_en))
                 ? 1U : 2U) : ((0x10U & (IData)(this->__PVT__pop_en))
                                ? 0U : 1U)) : ((0x10U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (
                                                   (0x10U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (0x10U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
        = (1U & ((0x20U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 5U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 5U))) : ((0x20U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 5U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 5U))));
    this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 5U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 5U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 5U))));
    this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
        = ((0x20U & (IData)(this->__PVT__push_en)) ? 
           ((0x20U & (IData)(this->__PVT__inject_en))
             ? ((0x20U & (IData)(this->__PVT__pop_en))
                 ? 1U : 2U) : ((0x20U & (IData)(this->__PVT__pop_en))
                                ? 0U : 1U)) : ((0x20U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (0x20U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
        = (1U & ((0x40U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 6U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 6U))) : ((0x40U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 6U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 6U))));
    this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 6U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 6U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 6U))));
    this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
        = ((0x40U & (IData)(this->__PVT__push_en)) ? 
           ((0x40U & (IData)(this->__PVT__inject_en))
             ? ((0x40U & (IData)(this->__PVT__pop_en))
                 ? 1U : 2U) : ((0x40U & (IData)(this->__PVT__pop_en))
                                ? 0U : 1U)) : ((0x40U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (0x40U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
        = (1U & ((0x80U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 7U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 7U))) : ((0x80U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 7U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 7U))));
    this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 7U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 7U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 7U))));
    this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
        = ((0x80U & (IData)(this->__PVT__push_en)) ? 
           ((0x80U & (IData)(this->__PVT__inject_en))
             ? ((0x80U & (IData)(this->__PVT__pop_en))
                 ? 1U : 2U) : ((0x80U & (IData)(this->__PVT__pop_en))
                                ? 0U : 1U)) : ((0x80U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (
                                                   (0x80U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (0x80U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
        = (1U & ((0x100U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 8U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 8U))) : ((0x100U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 8U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 8U))));
    this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 8U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 8U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 8U))));
    this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
        = ((0x100U & (IData)(this->__PVT__push_en))
            ? ((0x100U & (IData)(this->__PVT__inject_en))
                ? ((0x100U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x100U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x100U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
        = (1U & ((0x200U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 9U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 9U))) : ((0x200U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 9U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 9U))));
    this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 9U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 9U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 9U))));
    this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
        = ((0x200U & (IData)(this->__PVT__push_en))
            ? ((0x200U & (IData)(this->__PVT__inject_en))
                ? ((0x200U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x200U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x200U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x200U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x200U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
        = (1U & ((0x400U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xaU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xaU))) : (
                                                   (0x400U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xaU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xaU))));
    this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xaU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xaU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xaU))));
    this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
        = ((0x400U & (IData)(this->__PVT__push_en))
            ? ((0x400U & (IData)(this->__PVT__inject_en))
                ? ((0x400U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x400U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x400U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x400U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x400U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
        = (1U & ((0x800U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xbU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xbU))) : (
                                                   (0x800U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xbU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xbU))));
    this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xbU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xbU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xbU))));
    this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
        = ((0x800U & (IData)(this->__PVT__push_en))
            ? ((0x800U & (IData)(this->__PVT__inject_en))
                ? ((0x800U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x800U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x800U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x800U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x800U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
        = (1U & ((0x1000U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xcU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xcU))) : (
                                                   (0x1000U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xcU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xcU))));
    this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xcU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xcU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xcU))));
    this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
        = ((0x1000U & (IData)(this->__PVT__push_en))
            ? ((0x1000U & (IData)(this->__PVT__inject_en))
                ? ((0x1000U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x1000U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x1000U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x1000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x1000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
        = (1U & ((0x2000U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xdU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xdU))) : (
                                                   (0x2000U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xdU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xdU))));
    this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xdU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xdU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xdU))));
    this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
        = ((0x2000U & (IData)(this->__PVT__push_en))
            ? ((0x2000U & (IData)(this->__PVT__inject_en))
                ? ((0x2000U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x2000U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x2000U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x2000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x2000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
        = (1U & ((0x4000U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xeU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xeU))) : (
                                                   (0x4000U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xeU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xeU))));
    this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xeU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xeU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xeU))));
    this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
        = ((0x4000U & (IData)(this->__PVT__push_en))
            ? ((0x4000U & (IData)(this->__PVT__inject_en))
                ? ((0x4000U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x4000U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x4000U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x4000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x4000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
        = (1U & ((0x8000U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xfU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xfU))) : (
                                                   (0x8000U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xfU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xfU))));
    this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xfU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xfU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xfU))));
    this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
        = ((0x8000U & (IData)(this->__PVT__push_en))
            ? ((0x8000U & (IData)(this->__PVT__inject_en))
                ? ((0x8000U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x8000U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x8000U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x8000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x8000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__9(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__9\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__push_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__aw_push)
                             ? (0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                  >> 6U))))
                             : 0U);
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__12(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__12\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__mst_select_q = this->__PVT__mst_select_q;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    this->__Vdly__mst_select_q = ((0xfffffffcU & this->__Vdly__mst_select_q) 
                                  | ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                      ? (3U & ((1U 
                                                & (IData)(this->__PVT__push_en))
                                                ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                : this->__PVT__mst_select_q))
                                      : 0U));
    this->__Vdly__mst_select_q = ((0xfffffff3U & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((2U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 2U)))
                                       : 0U) << 2U));
    this->__Vdly__mst_select_q = ((0xffffffcfU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((4U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 4U)))
                                       : 0U) << 4U));
    this->__Vdly__mst_select_q = ((0xffffff3fU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((8U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 6U)))
                                       : 0U) << 6U));
    this->__Vdly__mst_select_q = ((0xfffffcffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x10U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 8U)))
                                       : 0U) << 8U));
    this->__Vdly__mst_select_q = ((0xfffff3ffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x20U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xaU)))
                                       : 0U) << 0xaU));
    this->__Vdly__mst_select_q = ((0xffffcfffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x40U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xcU)))
                                       : 0U) << 0xcU));
    this->__Vdly__mst_select_q = ((0xffff3fffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x80U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xeU)))
                                       : 0U) << 0xeU));
    this->__Vdly__mst_select_q = ((0xfffcffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x100U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x10U)))
                                       : 0U) << 0x10U));
    this->__Vdly__mst_select_q = ((0xfff3ffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x200U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x12U)))
                                       : 0U) << 0x12U));
    this->__Vdly__mst_select_q = ((0xffcfffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x400U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x14U)))
                                       : 0U) << 0x14U));
    this->__Vdly__mst_select_q = ((0xff3fffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x800U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x16U)))
                                       : 0U) << 0x16U));
    this->__Vdly__mst_select_q = ((0xfcffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x1000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x18U)))
                                       : 0U) << 0x18U));
    this->__Vdly__mst_select_q = ((0xf3ffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x2000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1aU)))
                                       : 0U) << 0x1aU));
    this->__Vdly__mst_select_q = ((0xcfffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x4000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1cU)))
                                       : 0U) << 0x1cU));
    this->__Vdly__mst_select_q = ((0x3fffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x8000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1eU)))
                                       : 0U) << 0x1eU));
    this->__PVT__mst_select_q = this->__Vdly__mst_select_q;
    this->__PVT__cnt_full = ((0x7fffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x8000U & ((((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xfU)));
    this->__PVT__occupied = ((0x7fffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xfU));
    this->__PVT__cnt_full = ((0xbfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x4000U & ((((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xeU)));
    this->__PVT__occupied = ((0xbfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xeU));
    this->__PVT__cnt_full = ((0xdfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x2000U & ((((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xdU)));
    this->__PVT__occupied = ((0xdfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xdU));
    this->__PVT__cnt_full = ((0xefffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x1000U & ((((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xcU)));
    this->__PVT__occupied = ((0xefffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xcU));
    this->__PVT__cnt_full = ((0xf7ffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x800U & ((((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xbU)));
    this->__PVT__occupied = ((0xf7ffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xbU));
    this->__PVT__cnt_full = ((0xfbffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x400U & ((((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xaU)));
    this->__PVT__occupied = ((0xfbffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xaU));
    this->__PVT__cnt_full = ((0xfdffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x200U & ((((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 9U)));
    this->__PVT__occupied = ((0xfdffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 9U));
    this->__PVT__cnt_full = ((0xfeffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x100U & ((((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 8U)));
    this->__PVT__occupied = ((0xfeffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 8U));
    this->__PVT__cnt_full = ((0xff7fU & (IData)(this->__PVT__cnt_full)) 
                             | (0x80U & ((((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 7U)));
    this->__PVT__occupied = ((0xff7fU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 7U));
    this->__PVT__cnt_full = ((0xffbfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x40U & ((((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 6U)));
    this->__PVT__occupied = ((0xffbfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 6U));
    this->__PVT__cnt_full = ((0xffdfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x20U & ((((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 5U)));
    this->__PVT__occupied = ((0xffdfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 5U));
    this->__PVT__cnt_full = ((0xffefU & (IData)(this->__PVT__cnt_full)) 
                             | (0x10U & ((((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 4U)));
    this->__PVT__occupied = ((0xffefU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 4U));
    this->__PVT__cnt_full = ((0xfff7U & (IData)(this->__PVT__cnt_full)) 
                             | (8U & ((((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 3U)));
    this->__PVT__occupied = ((0xfff7U & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 3U));
    this->__PVT__cnt_full = ((0xfffbU & (IData)(this->__PVT__cnt_full)) 
                             | (4U & ((((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 2U)));
    this->__PVT__occupied = ((0xfffbU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 2U));
    this->__PVT__cnt_full = ((0xfffdU & (IData)(this->__PVT__cnt_full)) 
                             | (2U & ((((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 1U)));
    this->__PVT__occupied = ((0xfffdU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 1U));
    this->__PVT__cnt_full = ((0xfffeU & (IData)(this->__PVT__cnt_full)) 
                             | (1U & (((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                       >> 4U) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
    this->__PVT__occupied = ((0xfffeU & (IData)(this->__PVT__occupied)) 
                             | (0U != (0xfU & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__20(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__20\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__30(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__30\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__pop_en = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                     >> 0x16U))) ? 
                           (0xffffU & ((IData)(1U) 
                                       << (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes 
                                                   >> 3U))))
                            : 0U);
    this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((1U & (IData)(this->__PVT__push_en))
                ? (~ (IData)(this->__PVT__pop_en)) : (IData)(this->__PVT__pop_en)))) {
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ (IData)(this->__PVT__push_en)) 
                               & (IData)(this->__PVT__pop_en)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((1U & (IData)(this->__PVT__push_en))
                                ? ((1U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((1U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((1U & (IData)(this->__PVT__push_en))
                                ? ((1U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((1U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((2U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 1U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 1U)))) {
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 1U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 1U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((2U & (IData)(this->__PVT__push_en))
                                ? ((2U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((2U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((2U & (IData)(this->__PVT__push_en))
                                ? ((2U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((2U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((4U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 2U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 2U)))) {
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 2U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 2U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((4U & (IData)(this->__PVT__push_en))
                                ? ((4U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((4U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((4U & (IData)(this->__PVT__push_en))
                                ? ((4U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((4U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((8U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 3U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 3U)))) {
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 3U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 3U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((8U & (IData)(this->__PVT__push_en))
                                ? ((8U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((8U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((8U & (IData)(this->__PVT__push_en))
                                ? ((8U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((8U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x10U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 4U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 4U)))) {
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 4U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 4U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x10U & (IData)(this->__PVT__push_en))
                                ? ((0x10U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x10U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x10U & (IData)(this->__PVT__push_en))
                                ? ((0x10U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x10U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x20U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 5U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 5U)))) {
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 5U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 5U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x20U & (IData)(this->__PVT__push_en))
                                ? ((0x20U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x20U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x20U & (IData)(this->__PVT__push_en))
                                ? ((0x20U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x20U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x40U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 6U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 6U)))) {
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 6U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 6U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x40U & (IData)(this->__PVT__push_en))
                                ? ((0x40U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x40U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x40U & (IData)(this->__PVT__push_en))
                                ? ((0x40U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x40U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x80U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 7U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 7U)))) {
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 7U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 7U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x80U & (IData)(this->__PVT__push_en))
                                ? ((0x80U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x80U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x80U & (IData)(this->__PVT__push_en))
                                ? ((0x80U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x80U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x100U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 8U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 8U)))) {
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 8U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 8U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x100U & (IData)(this->__PVT__push_en))
                                ? ((0x100U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x100U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x100U & (IData)(this->__PVT__push_en))
                                ? ((0x100U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x100U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x200U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 9U)) : ((IData)(this->__PVT__pop_en) 
                                 >> 9U)))) {
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 9U)) & ((IData)(this->__PVT__pop_en) 
                                              >> 9U)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x200U & (IData)(this->__PVT__push_en))
                                ? ((0x200U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x200U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x200U & (IData)(this->__PVT__push_en))
                                ? ((0x200U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x200U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x400U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xaU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xaU)))) {
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xaU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xaU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x400U & (IData)(this->__PVT__push_en))
                                ? ((0x400U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x400U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x400U & (IData)(this->__PVT__push_en))
                                ? ((0x400U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x400U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x800U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xbU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xbU)))) {
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xbU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xbU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x800U & (IData)(this->__PVT__push_en))
                                ? ((0x800U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x800U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x800U & (IData)(this->__PVT__push_en))
                                ? ((0x800U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x800U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x1000U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xcU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xcU)))) {
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xcU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xcU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x1000U & (IData)(this->__PVT__push_en))
                                ? ((0x1000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x1000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x1000U & (IData)(this->__PVT__push_en))
                                ? ((0x1000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x1000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x2000U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xdU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xdU)))) {
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xdU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xdU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x2000U & (IData)(this->__PVT__push_en))
                                ? ((0x2000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x2000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x2000U & (IData)(this->__PVT__push_en))
                                ? ((0x2000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x2000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x4000U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xeU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xeU)))) {
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xeU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xeU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x4000U & (IData)(this->__PVT__push_en))
                                ? ((0x4000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x4000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x4000U & (IData)(this->__PVT__push_en))
                                ? ((0x4000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x4000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
    this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x8000U & (IData)(this->__PVT__push_en))
                ? (~ ((IData)(this->__PVT__pop_en) 
                      >> 0xfU)) : ((IData)(this->__PVT__pop_en) 
                                   >> 0xfU)))) {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((1U & ((~ ((IData)(this->__PVT__push_en) 
                                   >> 0xfU)) & ((IData)(this->__PVT__pop_en) 
                                                >> 0xfU)))
                         ? ((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - ((0x8000U & (IData)(this->__PVT__push_en))
                                ? ((0x8000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x8000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))
                         : ((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + ((0x8000U & (IData)(this->__PVT__push_en))
                                ? ((0x8000U & (IData)(this->__PVT__pop_en))
                                    ? 0U : 1U) : ((0x8000U 
                                                   & (IData)(this->__PVT__pop_en))
                                                   ? 1U
                                                   : 0U)))));
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__15(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__15\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__mst_select_q = this->__PVT__mst_select_q;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    } else {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
    }
    this->__Vdly__mst_select_q = ((0xfffffffcU & this->__Vdly__mst_select_q) 
                                  | ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                      ? (3U & ((1U 
                                                & (IData)(this->__PVT__push_en))
                                                ? vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                : this->__PVT__mst_select_q))
                                      : 0U));
    this->__Vdly__mst_select_q = ((0xfffffff3U & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((2U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 2U)))
                                       : 0U) << 2U));
    this->__Vdly__mst_select_q = ((0xffffffcfU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((4U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 4U)))
                                       : 0U) << 4U));
    this->__Vdly__mst_select_q = ((0xffffff3fU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((8U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 6U)))
                                       : 0U) << 6U));
    this->__Vdly__mst_select_q = ((0xfffffcffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x10U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 8U)))
                                       : 0U) << 8U));
    this->__Vdly__mst_select_q = ((0xfffff3ffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x20U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xaU)))
                                       : 0U) << 0xaU));
    this->__Vdly__mst_select_q = ((0xffffcfffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x40U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xcU)))
                                       : 0U) << 0xcU));
    this->__Vdly__mst_select_q = ((0xffff3fffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x80U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0xeU)))
                                       : 0U) << 0xeU));
    this->__Vdly__mst_select_q = ((0xfffcffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x100U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x10U)))
                                       : 0U) << 0x10U));
    this->__Vdly__mst_select_q = ((0xfff3ffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x200U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x12U)))
                                       : 0U) << 0x12U));
    this->__Vdly__mst_select_q = ((0xffcfffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x400U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x14U)))
                                       : 0U) << 0x14U));
    this->__Vdly__mst_select_q = ((0xff3fffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x800U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x16U)))
                                       : 0U) << 0x16U));
    this->__Vdly__mst_select_q = ((0xfcffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x1000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x18U)))
                                       : 0U) << 0x18U));
    this->__Vdly__mst_select_q = ((0xf3ffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x2000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1aU)))
                                       : 0U) << 0x1aU));
    this->__Vdly__mst_select_q = ((0xcfffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x4000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1cU)))
                                       : 0U) << 0x1cU));
    this->__Vdly__mst_select_q = ((0x3fffffffU & this->__Vdly__mst_select_q) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
                                       ? (3U & ((0x8000U 
                                                 & (IData)(this->__PVT__push_en))
                                                 ? 
                                                vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]
                                                 : 
                                                (this->__PVT__mst_select_q 
                                                 >> 0x1eU)))
                                       : 0U) << 0x1eU));
    this->__PVT__mst_select_q = this->__Vdly__mst_select_q;
    this->__PVT__occupied = ((0x7fffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xfU));
    this->__PVT__cnt_full = ((0x7fffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x8000U & ((((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xfU)));
    this->__PVT__occupied = ((0xbfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xeU));
    this->__PVT__cnt_full = ((0xbfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x4000U & ((((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xeU)));
    this->__PVT__occupied = ((0xdfffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xdU));
    this->__PVT__cnt_full = ((0xdfffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x2000U & ((((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xdU)));
    this->__PVT__occupied = ((0xefffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xcU));
    this->__PVT__cnt_full = ((0xefffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x1000U & ((((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                             >> 4U) 
                                            | (0xfU 
                                               == (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                           << 0xcU)));
    this->__PVT__occupied = ((0xf7ffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xbU));
    this->__PVT__cnt_full = ((0xf7ffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x800U & ((((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xbU)));
    this->__PVT__occupied = ((0xfbffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 0xaU));
    this->__PVT__cnt_full = ((0xfbffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x400U & ((((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 0xaU)));
    this->__PVT__occupied = ((0xfdffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 9U));
    this->__PVT__cnt_full = ((0xfdffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x200U & ((((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 9U)));
    this->__PVT__occupied = ((0xfeffU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 8U));
    this->__PVT__cnt_full = ((0xfeffU & (IData)(this->__PVT__cnt_full)) 
                             | (0x100U & ((((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                            >> 4U) 
                                           | (0xfU 
                                              == (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                          << 8U)));
    this->__PVT__occupied = ((0xff7fU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 7U));
    this->__PVT__cnt_full = ((0xff7fU & (IData)(this->__PVT__cnt_full)) 
                             | (0x80U & ((((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 7U)));
    this->__PVT__occupied = ((0xffbfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 6U));
    this->__PVT__cnt_full = ((0xffbfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x40U & ((((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 6U)));
    this->__PVT__occupied = ((0xffdfU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 5U));
    this->__PVT__cnt_full = ((0xffdfU & (IData)(this->__PVT__cnt_full)) 
                             | (0x20U & ((((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 5U)));
    this->__PVT__occupied = ((0xffefU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 4U));
    this->__PVT__cnt_full = ((0xffefU & (IData)(this->__PVT__cnt_full)) 
                             | (0x10U & ((((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                           >> 4U) | 
                                          (0xfU == 
                                           (0xfU & (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                         << 4U)));
    this->__PVT__occupied = ((0xfff7U & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 3U));
    this->__PVT__cnt_full = ((0xfff7U & (IData)(this->__PVT__cnt_full)) 
                             | (8U & ((((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 3U)));
    this->__PVT__occupied = ((0xfffbU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 2U));
    this->__PVT__cnt_full = ((0xfffbU & (IData)(this->__PVT__cnt_full)) 
                             | (4U & ((((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 2U)));
    this->__PVT__occupied = ((0xfffdU & (IData)(this->__PVT__occupied)) 
                             | ((IData)((0U != (0xfU 
                                                & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                << 1U));
    this->__PVT__cnt_full = ((0xfffdU & (IData)(this->__PVT__cnt_full)) 
                             | (2U & ((((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                        >> 4U) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                      << 1U)));
    this->__PVT__occupied = ((0xfffeU & (IData)(this->__PVT__occupied)) 
                             | (0U != (0xfU & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))));
    this->__PVT__cnt_full = ((0xfffeU & (IData)(this->__PVT__cnt_full)) 
                             | (1U & (((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                       >> 4U) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__21(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__21\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

VL_INLINE_OPT void Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__29(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_axi_demux_id_counters__pi5::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__29\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__push_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__ar_push)
                             ? (0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U])))
                             : 0U);
    this->__PVT__inject_en = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__atop_inject)
                               ? (0xffffU & ((IData)(1U) 
                                             << (0xfU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                                    >> 6U))))
                               : 0U);
    this->__PVT__pop_en = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                      >> 0x12U)) & 
                                  (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                   >> 1U))) ? (0xffffU 
                                               & ((IData)(1U) 
                                                  << 
                                                  (0xfU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                                       << 0x1cU) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                         >> 4U)))))
                            : 0U);
    this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en 
        = (1U & ((1U & (IData)(this->__PVT__push_en))
                  ? ((IData)(this->__PVT__inject_en) 
                     | (~ (IData)(this->__PVT__pop_en)))
                  : ((1U & (IData)(this->__PVT__inject_en))
                      ? (~ (IData)(this->__PVT__pop_en))
                      : (IData)(this->__PVT__pop_en))));
    this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = (1U & ((~ (IData)(this->__PVT__push_en)) 
                 & ((~ (IData)(this->__PVT__inject_en)) 
                    & (IData)(this->__PVT__pop_en))));
    this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = ((1U & (IData)(this->__PVT__push_en)) ? (
                                                   (1U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 0U
                                                     : 1U))
            : ((1U & (IData)(this->__PVT__inject_en))
                ? ((1U & (IData)(this->__PVT__pop_en))
                    ? 0U : 1U) : ((1U & (IData)(this->__PVT__pop_en))
                                   ? 1U : 0U)));
    this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
        = (1U & ((2U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 1U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 1U))) : ((2U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 1U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 1U))));
    this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 1U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 1U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 1U))));
    this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = ((2U & (IData)(this->__PVT__push_en)) ? (
                                                   (2U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 0U
                                                     : 1U))
            : ((2U & (IData)(this->__PVT__inject_en))
                ? ((2U & (IData)(this->__PVT__pop_en))
                    ? 0U : 1U) : ((2U & (IData)(this->__PVT__pop_en))
                                   ? 1U : 0U)));
    this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
        = (1U & ((4U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 2U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 2U))) : ((4U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 2U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 2U))));
    this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 2U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 2U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 2U))));
    this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
        = ((4U & (IData)(this->__PVT__push_en)) ? (
                                                   (4U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((4U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 0U
                                                     : 1U))
            : ((4U & (IData)(this->__PVT__inject_en))
                ? ((4U & (IData)(this->__PVT__pop_en))
                    ? 0U : 1U) : ((4U & (IData)(this->__PVT__pop_en))
                                   ? 1U : 0U)));
    this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
        = (1U & ((8U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 3U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 3U))) : ((8U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 3U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 3U))));
    this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 3U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 3U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 3U))));
    this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
        = ((8U & (IData)(this->__PVT__push_en)) ? (
                                                   (8U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   ((8U 
                                                     & (IData)(this->__PVT__pop_en))
                                                     ? 0U
                                                     : 1U))
            : ((8U & (IData)(this->__PVT__inject_en))
                ? ((8U & (IData)(this->__PVT__pop_en))
                    ? 0U : 1U) : ((8U & (IData)(this->__PVT__pop_en))
                                   ? 1U : 0U)));
    this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
        = (1U & ((0x10U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 4U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 4U))) : ((0x10U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 4U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 4U))));
    this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 4U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 4U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 4U))));
    this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
        = ((0x10U & (IData)(this->__PVT__push_en)) ? 
           ((0x10U & (IData)(this->__PVT__inject_en))
             ? ((0x10U & (IData)(this->__PVT__pop_en))
                 ? 1U : 2U) : ((0x10U & (IData)(this->__PVT__pop_en))
                                ? 0U : 1U)) : ((0x10U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (
                                                   (0x10U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (0x10U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
        = (1U & ((0x20U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 5U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 5U))) : ((0x20U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 5U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 5U))));
    this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 5U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 5U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 5U))));
    this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
        = ((0x20U & (IData)(this->__PVT__push_en)) ? 
           ((0x20U & (IData)(this->__PVT__inject_en))
             ? ((0x20U & (IData)(this->__PVT__pop_en))
                 ? 1U : 2U) : ((0x20U & (IData)(this->__PVT__pop_en))
                                ? 0U : 1U)) : ((0x20U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (0x20U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
        = (1U & ((0x40U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 6U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 6U))) : ((0x40U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 6U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 6U))));
    this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 6U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 6U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 6U))));
    this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
        = ((0x40U & (IData)(this->__PVT__push_en)) ? 
           ((0x40U & (IData)(this->__PVT__inject_en))
             ? ((0x40U & (IData)(this->__PVT__pop_en))
                 ? 1U : 2U) : ((0x40U & (IData)(this->__PVT__pop_en))
                                ? 0U : 1U)) : ((0x40U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (0x40U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
        = (1U & ((0x80U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 7U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 7U))) : ((0x80U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 7U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 7U))));
    this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 7U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 7U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 7U))));
    this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
        = ((0x80U & (IData)(this->__PVT__push_en)) ? 
           ((0x80U & (IData)(this->__PVT__inject_en))
             ? ((0x80U & (IData)(this->__PVT__pop_en))
                 ? 1U : 2U) : ((0x80U & (IData)(this->__PVT__pop_en))
                                ? 0U : 1U)) : ((0x80U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (
                                                   (0x80U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (0x80U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
        = (1U & ((0x100U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 8U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 8U))) : ((0x100U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 8U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 8U))));
    this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 8U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 8U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 8U))));
    this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
        = ((0x100U & (IData)(this->__PVT__push_en))
            ? ((0x100U & (IData)(this->__PVT__inject_en))
                ? ((0x100U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x100U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x100U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
        = (1U & ((0x200U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 9U) | (~ ((IData)(this->__PVT__pop_en) 
                                   >> 9U))) : ((0x200U 
                                                & (IData)(this->__PVT__inject_en))
                                                ? (~ 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 9U))
                                                : ((IData)(this->__PVT__pop_en) 
                                                   >> 9U))));
    this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 9U)) & ((~ ((IData)(this->__PVT__inject_en) 
                                    >> 9U)) & ((IData)(this->__PVT__pop_en) 
                                               >> 9U))));
    this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
        = ((0x200U & (IData)(this->__PVT__push_en))
            ? ((0x200U & (IData)(this->__PVT__inject_en))
                ? ((0x200U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x200U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x200U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x200U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x200U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
        = (1U & ((0x400U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xaU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xaU))) : (
                                                   (0x400U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xaU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xaU))));
    this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xaU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xaU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xaU))));
    this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
        = ((0x400U & (IData)(this->__PVT__push_en))
            ? ((0x400U & (IData)(this->__PVT__inject_en))
                ? ((0x400U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x400U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x400U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x400U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x400U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
        = (1U & ((0x800U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xbU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xbU))) : (
                                                   (0x800U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xbU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xbU))));
    this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xbU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xbU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xbU))));
    this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
        = ((0x800U & (IData)(this->__PVT__push_en))
            ? ((0x800U & (IData)(this->__PVT__inject_en))
                ? ((0x800U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x800U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x800U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x800U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x800U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
        = (1U & ((0x1000U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xcU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xcU))) : (
                                                   (0x1000U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xcU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xcU))));
    this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xcU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xcU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xcU))));
    this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
        = ((0x1000U & (IData)(this->__PVT__push_en))
            ? ((0x1000U & (IData)(this->__PVT__inject_en))
                ? ((0x1000U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x1000U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x1000U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x1000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x1000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
        = (1U & ((0x2000U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xdU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xdU))) : (
                                                   (0x2000U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xdU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xdU))));
    this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xdU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xdU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xdU))));
    this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
        = ((0x2000U & (IData)(this->__PVT__push_en))
            ? ((0x2000U & (IData)(this->__PVT__inject_en))
                ? ((0x2000U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x2000U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x2000U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x2000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x2000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
        = (1U & ((0x4000U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xeU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xeU))) : (
                                                   (0x4000U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xeU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xeU))));
    this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xeU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xeU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xeU))));
    this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
        = ((0x4000U & (IData)(this->__PVT__push_en))
            ? ((0x4000U & (IData)(this->__PVT__inject_en))
                ? ((0x4000U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x4000U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x4000U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x4000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x4000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
        = (1U & ((0x8000U & (IData)(this->__PVT__push_en))
                  ? (((IData)(this->__PVT__inject_en) 
                      >> 0xfU) | (~ ((IData)(this->__PVT__pop_en) 
                                     >> 0xfU))) : (
                                                   (0x8000U 
                                                    & (IData)(this->__PVT__inject_en))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->__PVT__pop_en) 
                                                     >> 0xfU))
                                                    : 
                                                   ((IData)(this->__PVT__pop_en) 
                                                    >> 0xfU))));
    this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_down 
        = (1U & ((~ ((IData)(this->__PVT__push_en) 
                     >> 0xfU)) & ((~ ((IData)(this->__PVT__inject_en) 
                                      >> 0xfU)) & ((IData)(this->__PVT__pop_en) 
                                                   >> 0xfU))));
    this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
        = ((0x8000U & (IData)(this->__PVT__push_en))
            ? ((0x8000U & (IData)(this->__PVT__inject_en))
                ? ((0x8000U & (IData)(this->__PVT__pop_en))
                    ? 1U : 2U) : ((0x8000U & (IData)(this->__PVT__pop_en))
                                   ? 0U : 1U)) : ((0x8000U 
                                                   & (IData)(this->__PVT__inject_en))
                                                   ? 
                                                  ((0x8000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x8000U 
                                                    & (IData)(this->__PVT__pop_en))
                                                    ? 1U
                                                    : 0U)));
    this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))));
    }
    this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en) {
        this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0x1fU & ((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_down)
                         ? ((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))
                         : ((IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(this->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))));
    }
}
