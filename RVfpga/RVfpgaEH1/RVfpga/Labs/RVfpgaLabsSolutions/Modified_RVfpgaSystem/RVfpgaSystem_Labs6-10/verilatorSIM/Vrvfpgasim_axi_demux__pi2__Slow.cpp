// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_axi_demux__pi2.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vrvfpgasim_axi_demux__pi2) {
    VL_CELL(__PVT__gen_demux__DOT__i_aw_id_counter, Vrvfpgasim_axi_demux_id_counters__pi5);
    VL_CELL(__PVT__gen_demux__DOT__i_ar_id_counter, Vrvfpgasim_axi_demux_id_counters__pi5);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vrvfpgasim_axi_demux__pi2::__Vconfigure(Vrvfpgasim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vrvfpgasim_axi_demux__pi2::~Vrvfpgasim_axi_demux__pi2() {
}

void Vrvfpgasim_axi_demux__pi2::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (4U | (0x33U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (0x20U | (0xfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (4U | (0x33U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (0x20U | (0xfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (4U | (0x33U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (0x20U | (0xfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (4U | (0x33U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (0x20U | (0xfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (6U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (6U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o 
        = ((0x13U >= (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                               << 1U))) ? (3U & (this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                                                     << 1U))))
            : 0U);
    this->__PVT__gen_demux__DOT__slv_ar_valid = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    this->__PVT__gen_demux__DOT__slv_aw_valid = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    if (this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    if (this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                    >> 4U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U]));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[0U] 
        = ((0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                            << 0x11U) | (0x1fffcU & 
                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                          >> 0xfU)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[1U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                  >> 0xfU)) | (0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                               << 0x11U) 
                                              | (0x1fffcU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                                                    >> 0xfU)))));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[2U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                  >> 0xfU)) | (0x3fcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                                          << 0x11U) 
                                         | (0x1fffcU 
                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                               >> 0xfU)))));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[0U] 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[1U] 
        = ((3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[1U]) 
           | (0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[1U]));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[2U] 
        = ((3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U]) 
           | (0xcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U]));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__slv_resp_o[2U] = ((0x7ffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfff80000U & 
                                      ((IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o) 
                                       << 0x13U)));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
            >> 0x10U) & (IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    this->__PVT__slv_resp_o[2U] = ((0xbffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfffc0000U & 
                                      ((IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o) 
                                       << 0x12U)));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U] 
            >> 1U) & (IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
    this->__PVT__gen_demux__DOT__mst_b_readies = ((3U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies)) 
                                                  | (4U 
                                                     & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)));
    this->__PVT__gen_demux__DOT__mst_r_readies = ((3U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies)) 
                                                  | (4U 
                                                     & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)));
}

void Vrvfpgasim_axi_demux__pi2::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__2(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__2\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (4U | (0x33U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (0x20U | (0xfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (4U | (0x33U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (0x20U | (0xfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (4U | (0x33U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (0x20U | (0xfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (4U | (0x33U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (0x20U | (0xfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (6U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (6U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o 
        = ((0x13U >= (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                               << 1U))) ? (3U & (this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                                                     << 1U))))
            : 0U);
    this->__PVT__gen_demux__DOT__slv_ar_valid = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    this->__PVT__gen_demux__DOT__slv_aw_valid = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    if (this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    if (this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                    >> 0x1dU)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                    >> 0x19U)));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[0U] 
        = ((0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                            << 0x18U) | (0xfffffcU 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                            >> 8U)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[1U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                  >> 8U)) | (0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                             << 0x18U) 
                                            | (0xfffffcU 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                                  >> 8U)))));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[2U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                  >> 8U)) | (0x3fcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                        << 0x18U) | 
                                       (0xfffffcU & 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                         >> 8U)))));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[0U] 
        = ((0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                            << 7U) | (0x7cU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                               >> 0x19U)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[1U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                  >> 0x19U)) | (0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                                                     >> 0x19U)))));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[2U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                  >> 0x19U)) | (0xcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                         << 7U) | (0x7cU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                      >> 0x19U)))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__slv_resp_o[2U] = ((0x7ffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfff80000U & 
                                      ((IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o) 
                                       << 0x13U)));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
            >> 9U) & (IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    this->__PVT__slv_resp_o[2U] = ((0xbffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfffc0000U & 
                                      ((IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o) 
                                       << 0x12U)));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
            >> 0x1aU) & (IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
    this->__PVT__gen_demux__DOT__mst_b_readies = ((3U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies)) 
                                                  | (4U 
                                                     & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)));
    this->__PVT__gen_demux__DOT__mst_r_readies = ((3U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies)) 
                                                  | (4U 
                                                     & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)));
}

void Vrvfpgasim_axi_demux__pi2::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__3(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__3\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (4U | (0x33U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (0x20U | (0xfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (4U | (0x33U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (0x20U | (0xfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (4U | (0x33U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut 
        = (0x20U | (0xfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (4U | (0x33U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut 
        = (0x20U | (0xfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (6U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (6U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o 
        = ((0x13U >= (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                               << 1U))) ? (3U & (this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                                                     << 1U))))
            : 0U);
    this->__PVT__gen_demux__DOT__slv_ar_valid = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    this->__PVT__gen_demux__DOT__slv_aw_valid = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    if (this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
            = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    if (this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) {
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U];
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U];
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U];
    } else {
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
        this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
            = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
    }
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                    >> 0x16U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                    >> 0x12U)));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[0U] 
        = ((0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                            << 0x1fU) | (0x7ffffffcU 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                            >> 1U)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[1U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                  >> 1U)) | (0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                                             << 0x1fU) 
                                            | (0x7ffffffcU 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                                  >> 1U)))));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[2U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                  >> 1U)) | (0x3fcU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                                       >> 1U)));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[0U] 
        = ((0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                            << 0xeU) | (0x3ffcU & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                                   >> 0x12U)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[1U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                  >> 0x12U)) | (0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                << 0xeU) 
                                               | (0x3ffcU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                                     >> 0x12U)))));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[2U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                  >> 0x12U)) | (0xcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                         << 0xeU) | 
                                        (0x3ffcU & 
                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                          >> 0x12U)))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xcfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0x30U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)));
    this->__PVT__slv_resp_o[2U] = ((0x7ffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfff80000U & 
                                      ((IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o) 
                                       << 0x13U)));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
            >> 2U) & (IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    this->__PVT__slv_resp_o[2U] = ((0xbffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfffc0000U & 
                                      ((IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o) 
                                       << 0x12U)));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
            >> 0x13U) & (IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
    this->__PVT__gen_demux__DOT__mst_b_readies = ((3U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies)) 
                                                  | (4U 
                                                     & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes)));
    this->__PVT__gen_demux__DOT__mst_r_readies = ((3U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies)) 
                                                  | (4U 
                                                     & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes)));
}

void Vrvfpgasim_axi_demux__pi2::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi2::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_ni = VL_RAND_RESET_I(1);
    __PVT__test_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(217, __PVT__slv_req_i);
    __PVT__slv_aw_select_i = VL_RAND_RESET_I(2);
    __PVT__slv_ar_select_i = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(84, __PVT__slv_resp_o);
    VL_RAND_RESET_W(651, __PVT__mst_reqs_o);
    VL_RAND_RESET_W(252, __PVT__mst_resps_i);
    __PVT__gen_demux__DOT__slv_aw_valid = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__slv_aw_ready = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__aw_push = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__atop_inject = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__w_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__lock_aw_valid_d = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__lock_aw_valid_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__load_aw_lock = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__aw_valid = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__aw_ready = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__slv_w_ready = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__mst_b_chans = VL_RAND_RESET_I(21);
    __PVT__gen_demux__DOT__mst_b_valids = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__mst_b_readies = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__slv_ar_valid = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__slv_ar_ready = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__ar_push = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__lock_ar_valid_d = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__lock_ar_valid_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__load_ar_lock = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__ar_valid = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__ar_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(216, __PVT__gen_demux__DOT__mst_r_chans);
    __PVT__gen_demux__DOT__mst_r_valids = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__mst_r_readies = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(74, __PVT__gen_demux__DOT__slv_aw_chan_select_in);
    VL_RAND_RESET_W(74, __Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o);
    __Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_demux__DOT__i_w_fifo__data_o = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(68, __PVT__gen_demux__DOT__slv_ar_chan_select_in);
    VL_RAND_RESET_W(68, __Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o);
    __Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, __Vlvbound1);
    VL_RAND_RESET_W(74, __Vlvbound4);
    __Vlvbound6 = VL_RAND_RESET_I(1);
    __Vlvbound7 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, __Vlvbound8);
    __Vlvbound11 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q);
    __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q);
    __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(4);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(4);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(4);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(4);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(5);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(5);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n = VL_RAND_RESET_I(20);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q = VL_RAND_RESET_I(20);
    gen_demux__DOT__i_w_fifo__DOT____Vlvbound1 = VL_RAND_RESET_I(2);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes = VL_RAND_RESET_I(21);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(2);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(2);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut = VL_RAND_RESET_I(6);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(3);
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut = VL_RAND_RESET_I(6);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    __PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(3);
    gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q);
    __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q);
    __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(216, __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(2);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(2);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut = VL_RAND_RESET_I(6);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(3);
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut = VL_RAND_RESET_I(6);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    __PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(3);
    gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
}
