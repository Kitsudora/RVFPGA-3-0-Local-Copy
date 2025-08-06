// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRVFPGASIM_H_
#define _VRVFPGASIM_H_  // guard

#include "verilated_heavy.h"
#include "Vrvfpgasim__Dpi.h"

//==========

class Vrvfpgasim__Syms;
class Vrvfpgasim_rvfpgasim;


//----------

VL_MODULE(Vrvfpgasim) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vrvfpgasim_rvfpgasim* rvfpgasim;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(i_jtag_tck,0,0);
    VL_IN8(i_jtag_trst_n,0,0);
    VL_IN8(i_pb,4,0);
    VL_OUT8(AN,7,0);
    VL_OUT8(CA,0,0);
    VL_OUT8(CB,0,0);
    VL_OUT8(CC,0,0);
    VL_OUT8(CD,0,0);
    VL_OUT8(CE,0,0);
    VL_OUT8(CF,0,0);
    VL_OUT8(CG,0,0);
    VL_OUT8(Enables_Reg,7,0);
    VL_IN8(rst,0,0);
    VL_IN8(i_jtag_tms,0,0);
    VL_IN8(i_jtag_tdi,0,0);
    VL_OUT8(o_jtag_tdo,0,0);
    VL_OUT8(o_uart_tx,0,0);
    VL_OUT8(tf_push,0,0);
    VL_OUT8(wb_m2s_uart_dat_output,7,0);
    VL_OUT8(o_gpio,0,0);
    VL_IN16(i_sw,15,0);
    VL_OUT16(o_led,15,0);
    VL_OUT(Digits_Reg,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __VinpClk__TOP__rvfpgasim__swervolf____PVT__swerv_eh1__DOT__core_rst_l;
        CData/*0:0*/ __VinpClk__TOP__rvfpgasim____Vcellinp__dmi_wrapper__core_rst_n;
        CData/*0:0*/ __VinpClk__TOP__rvfpgasim__swervolf____PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l;
        CData/*0:0*/ __VinpClk__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__rvfpgasim__swervolf____PVT__swerv_eh1__DOT__core_rst_l;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__rvfpgasim____Vcellinp__dmi_wrapper__core_rst_n;
        CData/*0:0*/ __Vclklast__TOP__i_jtag_tck;
        CData/*0:0*/ __Vclklast__TOP__i_jtag_trst_n;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__rvfpgasim__swervolf____PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc2__DOT__hrc_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc2__DOT__lrc_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc3__DOT__hrc_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc3__DOT__lrc_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc4__DOT__hrc_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc4__DOT__lrc_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc__DOT__hrc_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc__DOT__lrc_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc2__DOT__cntr_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc3__DOT__cntr_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc4__DOT__cntr_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc__DOT__cntr_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__0__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__1__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__2__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__3__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__4__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__5__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__6__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__7__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim____Vcellinp__dmi_wrapper__core_rst_n;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim__swervolf__timer_ptc__DOT__eclk_gate;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim__swervolf__timer_ptc2__DOT__eclk_gate;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim__swervolf__timer_ptc3__DOT__eclk_gate;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim__swervolf__timer_ptc4__DOT__eclk_gate;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__core_rst_l;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority;
    };
    struct {
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id;
        IData/*20:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        IData/*20:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        IData/*20:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes;
    };
    struct {
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        SData/*8:0*/ __Vchglast__TOP__rvfpgasim__swervolf__timer_ptc__DOT__rptc_ctrl;
        SData/*8:0*/ __Vchglast__TOP__rvfpgasim__swervolf__timer_ptc2__DOT__rptc_ctrl;
        SData/*8:0*/ __Vchglast__TOP__rvfpgasim__swervolf__timer_ptc3__DOT__rptc_ctrl;
        SData/*8:0*/ __Vchglast__TOP__rvfpgasim__swervolf__timer_ptc4__DOT__rptc_ctrl;
        WData/*650:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_reqs_o[21];
        WData/*215:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*650:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[21];
        WData/*215:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*650:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[21];
        WData/*215:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*221:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*203:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*221:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*203:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[7];
    };
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vrvfpgasim__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvfpgasim);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vrvfpgasim(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vrvfpgasim();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Vrvfpgasim__Syms* __restrict vlSymsp);
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
  private:
    static QData _change_request(Vrvfpgasim__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vrvfpgasim__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
