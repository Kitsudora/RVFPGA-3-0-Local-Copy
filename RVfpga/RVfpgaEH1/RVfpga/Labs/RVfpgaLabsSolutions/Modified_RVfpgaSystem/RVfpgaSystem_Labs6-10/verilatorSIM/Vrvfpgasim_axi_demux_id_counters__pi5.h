// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef _VRVFPGASIM_AXI_DEMUX_ID_COUNTERS__PI5_H_
#define _VRVFPGASIM_AXI_DEMUX_ID_COUNTERS__PI5_H_  // guard

#include "verilated_heavy.h"
#include "Vrvfpgasim__Dpi.h"

//==========

class Vrvfpgasim__Syms;

//----------

VL_MODULE(Vrvfpgasim_axi_demux_id_counters__pi5) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_ni,0,0);
    VL_IN8(__PVT__lookup_axi_id_i,3,0);
    VL_OUT8(__PVT__lookup_mst_select_o,1,0);
    VL_OUT8(__PVT__lookup_mst_select_occupied_o,0,0);
    VL_OUT8(__PVT__full_o,0,0);
    VL_IN8(__PVT__push_axi_id_i,3,0);
    VL_IN8(__PVT__push_mst_select_i,1,0);
    VL_IN8(__PVT__push_i,0,0);
    VL_IN8(__PVT__inject_axi_id_i,3,0);
    VL_IN8(__PVT__inject_i,0,0);
    VL_IN8(__PVT__pop_axi_id_i,3,0);
    VL_IN8(__PVT__pop_i,0,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        IData/*31:0*/ __PVT__mst_select_q;
        CData/*0:0*/ __PVT__gen_counters__BRA__0__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__0__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__0__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__1__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__1__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__1__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__2__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__2__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__2__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__3__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__3__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__3__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__4__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__4__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__4__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__5__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__5__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__5__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__6__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__6__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__6__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__7__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__7__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__7__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__8__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__8__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__8__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__9__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__9__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__9__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__10__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__10__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__10__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__11__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__11__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__11__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__12__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__12__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__12__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__13__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__13__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__13__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__14__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__14__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__14__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__15__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__15__KET____DOT__cnt_down;
        CData/*3:0*/ __PVT__gen_counters__BRA__15__KET____DOT__cnt_delta;
        CData/*4:0*/ __PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*4:0*/ __PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*4:0*/ __PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*4:0*/ __PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*4:0*/ __PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*4:0*/ __PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*4:0*/ __PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*4:0*/ __PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*4:0*/ __PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*4:0*/ __PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*4:0*/ __PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*4:0*/ __PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*4:0*/ __PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*4:0*/ __PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*4:0*/ __PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    };
    struct {
        CData/*4:0*/ __PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*4:0*/ __PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*4:0*/ __PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*4:0*/ __PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*4:0*/ __PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*4:0*/ __PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*4:0*/ __PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*4:0*/ __PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*4:0*/ __PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*4:0*/ __PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*4:0*/ __PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*4:0*/ __PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*4:0*/ __PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*4:0*/ __PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*4:0*/ __PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*4:0*/ __PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*4:0*/ __PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        SData/*15:0*/ __PVT__push_en;
        SData/*15:0*/ __PVT__inject_en;
        SData/*15:0*/ __PVT__pop_en;
        SData/*15:0*/ __PVT__occupied;
        SData/*15:0*/ __PVT__cnt_full;
    };
    
    // LOCAL VARIABLES
    IData/*31:0*/ __Vdly__mst_select_q;
    
    // INTERNAL VARIABLES
  private:
    Vrvfpgasim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvfpgasim_axi_demux_id_counters__pi5);  ///< Copying not allowed
  public:
    Vrvfpgasim_axi_demux_id_counters__pi5(const char* name = "TOP");
    ~Vrvfpgasim_axi_demux_id_counters__pi5();
    
    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__13(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__17(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__10(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__16(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__14(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__19(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__11(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__18(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__15(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__21(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__12(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__20(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__25(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__4(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__1(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__26(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__7(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__27(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__5(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__2(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__28(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__8(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__29(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter__6(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__3(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__30(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter__9(Vrvfpgasim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
