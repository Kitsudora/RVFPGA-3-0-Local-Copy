// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef _VRVFPGASIM_AXI_MUX__PI4_H_
#define _VRVFPGASIM_AXI_MUX__PI4_H_  // guard

#include "verilated_heavy.h"
#include "Vrvfpgasim__Dpi.h"

//==========

class Vrvfpgasim__Syms;

//----------

VL_MODULE(Vrvfpgasim_axi_mux__pi4) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_ni,0,0);
    VL_IN8(__PVT__test_i,0,0);
    VL_INW(__PVT__slv_reqs_i,650,0,21);
    VL_OUTW(__PVT__slv_resps_o,251,0,8);
    VL_OUTW(__PVT__mst_req_o,220,0,7);
    VL_INW(__PVT__mst_resp_i,87,0,3);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*2:0*/ __PVT__gen_mux__DOT__slv_aw_valids;
        CData/*2:0*/ __PVT__gen_mux__DOT__slv_aw_readies;
        CData/*2:0*/ __PVT__gen_mux__DOT__slv_w_valids;
        CData/*2:0*/ __PVT__gen_mux__DOT__slv_w_readies;
        CData/*2:0*/ __PVT__gen_mux__DOT__slv_b_valids;
        CData/*2:0*/ __PVT__gen_mux__DOT__slv_b_readies;
        CData/*2:0*/ __PVT__gen_mux__DOT__slv_ar_valids;
        CData/*2:0*/ __PVT__gen_mux__DOT__slv_ar_readies;
        CData/*2:0*/ __PVT__gen_mux__DOT__slv_r_valids;
        CData/*2:0*/ __PVT__gen_mux__DOT__slv_r_readies;
        CData/*0:0*/ __PVT__gen_mux__DOT__mst_aw_valid;
        CData/*0:0*/ __PVT__gen_mux__DOT__mst_aw_ready;
        CData/*0:0*/ __PVT__gen_mux__DOT__aw_ready;
        CData/*0:0*/ __PVT__gen_mux__DOT__lock_aw_valid_d;
        CData/*0:0*/ __PVT__gen_mux__DOT__lock_aw_valid_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__load_aw_lock;
        CData/*0:0*/ __PVT__gen_mux__DOT__w_fifo_push;
        CData/*0:0*/ __PVT__gen_mux__DOT__w_fifo_pop;
        CData/*0:0*/ __PVT__gen_mux__DOT__mst_w_valid;
        CData/*0:0*/ __PVT__gen_mux__DOT__ar_ready;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*5:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        CData/*5:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
        SData/*11:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n;
        SData/*11:0*/ __PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d;
        CData/*1:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    };
    struct {
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*5:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        CData/*5:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut;
        CData/*3:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        CData/*0:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain;
        WData/*221:0*/ __PVT__gen_mux__DOT__slv_aw_chans[7];
        WData/*221:0*/ __PVT__gen_mux__DOT__slv_w_chans[7];
        WData/*203:0*/ __PVT__gen_mux__DOT__slv_ar_chans[7];
        WData/*73:0*/ __PVT__gen_mux__DOT__mst_w_chan[3];
        WData/*221:0*/ __PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*73:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[3];
        WData/*73:0*/ __PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[3];
        WData/*203:0*/ __PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*67:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[3];
        WData/*67:0*/ __PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[3];
    };
    
    // LOCAL VARIABLES
    CData/*1:0*/ __Vcellout__gen_mux__DOT__i_w_fifo__data_o;
    CData/*0:0*/ __Vlvbound1;
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1;
    CData/*0:0*/ gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1;
    CData/*1:0*/ gen_mux__DOT__i_w_fifo__DOT____Vlvbound1;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1;
    CData/*0:0*/ gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1;
    WData/*67:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[3];
    WData/*73:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[3];
    WData/*67:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[3];
    WData/*73:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[3];
    WData/*67:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[3];
    WData/*73:0*/ __Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[3];
    
    // INTERNAL VARIABLES
  private:
    Vrvfpgasim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvfpgasim_axi_mux__pi4);  ///< Copying not allowed
  public:
    Vrvfpgasim_axi_mux__pi4(const char* name = "TOP");
    ~Vrvfpgasim_axi_mux__pi4();
    
    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__13(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__3(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__9(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__14(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__4(Vrvfpgasim__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__11(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__15(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__12(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__16(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__7(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__2(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__8(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
