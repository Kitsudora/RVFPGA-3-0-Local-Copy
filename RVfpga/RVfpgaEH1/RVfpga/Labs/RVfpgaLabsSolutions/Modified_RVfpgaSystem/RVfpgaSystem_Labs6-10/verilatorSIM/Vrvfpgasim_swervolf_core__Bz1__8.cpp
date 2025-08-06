// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_swervolf_core__Bz1.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__22(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__22\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs2_d 
        = ((((- (IData)((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass))))))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i0_rs2_d) 
            | ((- (IData)((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass))))))) 
               & (((- (IData)((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x13U))))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_rddata_d) 
                  | ((- (IData)((1U & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                  >> 0x13U)))))) 
                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_immed_d)))) 
           | ((- (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_rs2_bypass_data_d));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d 
        = (((((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                         >> 0x31U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                        >> 2U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                  >> 3U))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e2)) 
              | (((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x31U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                          >> 2U) | 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                          >> 3U))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e2))) 
             | (((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x31U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                        >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e3))) 
            | (((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                         >> 0x31U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                       >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e3))) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                 >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[1U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[2U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[3U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[4U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[5U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[6U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[7U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[8U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[9U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xaU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xbU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xcU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xdU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xeU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xfU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x10U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x11U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x12U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x13U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x14U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x15U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x16U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x17U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x18U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x19U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (1U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (1U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v))) 
               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (2U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (2U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 1U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 1U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 1U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (3U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (3U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 2U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 2U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 2U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (4U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (4U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 3U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 3U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 3U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[3U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (5U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (5U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 4U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 4U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 4U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[4U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (6U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (6U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 5U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 5U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 5U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[5U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (7U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (7U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 6U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 6U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 6U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[6U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (8U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (8U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 7U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 7U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 7U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[7U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (9U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (9U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 8U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 8U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 8U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[8U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0xaU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0xaU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                              >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 9U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 9U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 9U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[9U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0xbU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0xbU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                              >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xaU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xaU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xaU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xaU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0xcU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0xcU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                              >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xbU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xbU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xbU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xbU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0xdU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0xdU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                              >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xcU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xcU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xcU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xcU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0xeU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0xeU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                              >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xdU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xdU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xdU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xdU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0xfU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0xfU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                              >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xeU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xeU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xeU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xeU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x10U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x10U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x10U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xfU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xfU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xfU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xfU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x11U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x11U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x11U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x10U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x10U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x10U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x10U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x12U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x12U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x12U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x11U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x11U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x11U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x11U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x13U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x13U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x13U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x12U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x12U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x12U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x12U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x14U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x14U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x14U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x13U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x13U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x13U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x13U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x15U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x15U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x15U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x14U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x14U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x14U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x14U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x16U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x16U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x16U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x15U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x15U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x15U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x15U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x17U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x17U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x17U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x16U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x16U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x16U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x16U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x18U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7f7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x18U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7f7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x18U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7f7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x17U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x17U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x17U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x17U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x19U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7effffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x19U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7effffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x19U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7effffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x18U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x18U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x18U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x18U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x1aU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7dffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x1aU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7dffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1aU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7dffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x19U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x19U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x19U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x19U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x1bU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7bffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x1bU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7bffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1bU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7bffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1aU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1aU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1aU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x1cU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x77ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x1cU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x77ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1cU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x77ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1bU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1bU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1bU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x1dU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x6fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x1dU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x6fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1dU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x6fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1cU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1cU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1cU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x1eU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x5fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x1eU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x5fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1eU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x5fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1dU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1dU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1dU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1fU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1eU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1eU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1eU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac_en)
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_error)
                ? (((0U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                     << 5U))) ? 0U : 
                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                     ((IData)(1U) + (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                            << 5U))))) 
                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag))] 
                      >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                   << 5U)))) : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
                                                      << 5U)))
                                                  ? 0U
                                                  : 
                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
                                                       << 5U))))) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                   (7U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
                                                       << 5U)))))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__lsu_dccm_errorff__din 
        = ((2U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac_en) 
                   << 1U) | (0xfffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_dccm_errorff__dout) 
                                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                                                   & (0xbc0U 
                                                      == 
                                                      (0xfffU 
                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                           << 0xdU) 
                                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                             >> 0x13U)))))) 
                                               << 1U))))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_single_ecc_error_dc5) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                    >> 0xbU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                  == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                             << 0x1bU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                          >> 5U))))) 
              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                 >> 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0x3ffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                              == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                         << 0x11U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                           >> 0xfU))))) 
                          << 1U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                    >> 0x12U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0x1cU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                            == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                       << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                 >> 0x19U))))) 
                        << 2U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                  >> 0x1bU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                 == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                            << 0x1dU) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                              >> 3U))))) 
                             << 3U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0x7fff0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                               == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                          << 0x13U) 
                                         | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                            >> 0xdU))))) 
                           << 4U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 0xdU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0x3e0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                             == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 9U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                  >> 0x17U))))) 
                         << 5U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                   >> 0x16U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0xffffffc0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                  == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                            >> 1U)))) 
                              << 6U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0xffff80U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                          >> 0xbU)))) 
                            << 7U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                      >> 8U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                    >> 5U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                 >> 3U))) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_detected)) 
                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                     >> 2U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                  >> 1U)))));
    if ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
               (7U & (((IData)(2U) + ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                      << 5U)) >> 5U))] 
               >> (0x1fU & ((IData)(2U) + ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                           << 5U)))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
            = ((QData)((IData)((((0U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                  << 5U)))
                                  ? 0U : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                          ((IData)(1U) 
                                           + (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                    << 5U))))) 
                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                   (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))] 
                                   >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                << 5U)))))) 
               << 0x20U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
            = (0xf0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                         >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                      << 2U))) << 4U));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
            = (QData)((IData)((((0U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                 << 5U)))
                                 ? 0U : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                         ((IData)(1U) 
                                          + (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                   << 5U))))) 
                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                  (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))] 
                                  >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                               << 5U))))));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
            = (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                       >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                    << 2U))));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en 
        = (((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                  != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)) 
                 & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))) 
                & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec))) 
               & (2U == ((0x17U >= (0x1fU & ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))
                          ? (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))))
                          : 0U))) & (2U == ((0x17U 
                                             >= (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))))
                                             ? (7U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)))))
                                             : 0U))) 
             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                   >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                  >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
           & ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                    >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                   >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                     >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                 >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffffffffff00ULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo))
                                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo
                                        : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo))
                                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo
                                            : ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo))
                                                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo
                                                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffffffff00ffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo))
                                         ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
                                            >> 8U) : 
                                        ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo))
                                          ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
                                             >> 8U)
                                          : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo))
                                              ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
                                                 >> 8U)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                                 >> 8U))))))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffffff00ffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo))
                                         ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
                                            >> 0x10U)
                                         : ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo))
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
                                                >> 0x10U)
                                             : ((4U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo))
                                                 ? 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
                                                 >> 0x10U)
                                                 : 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                                 >> 0x10U))))))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffff00ffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo))
                                         ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
                                            >> 0x18U)
                                         : ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo))
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
                                                >> 0x18U)
                                             : ((8U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo))
                                                 ? 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
                                                 >> 0x18U)
                                                 : 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                                 >> 0x18U))))))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (2U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (4U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (8U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffffffffff00ULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi))
                                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi
                                        : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi))
                                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi
                                            : ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi))
                                                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi
                                                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffffffff00ffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi))
                                         ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
                                            >> 8U) : 
                                        ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi))
                                          ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
                                             >> 8U)
                                          : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi))
                                              ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
                                                 >> 8U)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                                 >> 8U))))))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffffff00ffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi))
                                         ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
                                            >> 0x10U)
                                         : ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi))
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
                                                >> 0x10U)
                                             : ((4U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi))
                                                 ? 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
                                                 >> 0x10U)
                                                 : 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                                 >> 0x10U))))))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffff00ffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi))
                                         ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
                                            >> 0x18U)
                                         : ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi))
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
                                                >> 0x18U)
                                             : ((8U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi))
                                                 ? 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
                                                 >> 0x18U)
                                                 : 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                                 >> 0x18U))))))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (2U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (4U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (8U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr_in 
        = ((((((1U & (- (IData)(((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1))))) 
               | (2U & (- (IData)(((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)))))) 
              | (2U & (- (IData)(((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2)))))) 
             | (1U & (- (IData)(((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2)))))) 
            | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2)))))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))) 
           & (~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall 
        = (1U & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout)) 
                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__req_ff__dout) 
                     >> 1U) & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                 >> 4U) & (~ (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e3ff__dout;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in 
        = ((0x3f0ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in) 
           | (0xf0000U & ((((- (IData)((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                               >> 0x1cU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                 >> 0x1bU))))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_trigger_match_dc3)) 
                           << 0x10U) | (0xffff0000U 
                                        & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e3ff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in 
        = ((0x3ff0fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in) 
           | (0xf000U & (((~ (- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout) 
                                               >> 1U))))) 
                          << 0xcU) & ((((- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                         >> 0x1cU) 
                                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                           >> 0x1bU)))))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_trigger_match_dc3)) 
                                       << 0xcU) | (0xfffff000U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e3ff__dout)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in 
        = ((0x3fffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                    & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                         >> 0x11U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3) 
                       | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                           >> 0x10U) & (0U != (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3)))))));
    if ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2 
        = (((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                       >> 0x31U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_d)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_d))) 
           & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                      >> 0x28U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en 
        = (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
             | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
            | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           & (- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
        = (0xfffffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0x200U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0xffffff1fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (0xffffffe0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 5U)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0xffffffe0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                           & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                              == (0x1fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]))) 
                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                             >> 8U))) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                                          & ((0x1fU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                    >> 6U))) 
                                             == (0x1fU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]))) 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                            >> 8U))))
                ? (0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U])
                : ((0xfffffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
                   | (0x3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U])));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                        << 0x1bU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                     >> 5U))))) & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                   >> 9U))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0x100U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
        = (0xfff003ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0x80000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0xfffc7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (0xffff8000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 0xfU)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0xffff83ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (0xfffffc00U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 << 0xaU)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 1U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                    << 0x16U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                      >> 0xaU))))) 
                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                     >> 0x12U))) | 
                      (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                        & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                      << 0x1aU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 6U))) 
                           == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                         << 0x16U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                           >> 0xaU))))) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                          >> 0x12U)))) ? (0xfff7ffffU 
                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U])
                : ((0xfff003ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
                   | (0xffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U])));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                        << 0x11U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                     >> 0xfU))))) & 
         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
          >> 0x13U))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0x40000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
        = (0xc00fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0x20000000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0xf1ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (0xfe000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 0x19U)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0xfe0fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (0xfff00000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 << 0x14U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 2U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                    << 0xcU) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                      >> 0x14U))))) 
                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                     >> 0x1cU))) | 
                      (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                        & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                      << 0x1aU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 6U))) 
                           == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                         << 0xcU) | 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                         >> 0x14U))))) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                          >> 0x1cU)))) ? (0xdfffffffU 
                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U])
                : ((0xc00fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
                   | (0x3ff00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U])));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                        << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                  >> 0x19U))))) & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                   >> 0x1dU))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0x10000000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
        = (0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
        = (0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0x80U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xffffffc7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xfffffff8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 3U)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (0xc0000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 << 0x1eU)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xfffffff8U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0x3fffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 >> 2U)));
    } else {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                     >> 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                >> 0x1eU))) 
                                   == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                   >> 0x1eU))))) 
                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                  >> 6U))) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                                               & ((0x1fU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                       << 0x1aU) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                         >> 6U))) 
                                                  == 
                                                  (0x1fU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                         >> 0x1eU))))) 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                 >> 6U))))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
                = (0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
                = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
                   | (0xc0000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U]));
        }
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                        << 0x1dU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 3U))))) & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                   >> 7U))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0x40U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
        = (0xfffc00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    if ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0x20000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xffff1fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xffffe000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 0xdU)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xffffe0ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xffffff00U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 << 8U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 4U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                      >> 8U))))) 
                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 0x10U))) | 
                      (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                        & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                      << 0x1aU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 6U))) 
                           == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                         << 0x18U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                           >> 8U))))) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                          >> 0x10U)))) ? (0xfffdffffU 
                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U])
                : ((0xfffc00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
                   | (0x3ff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U])));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                        << 0x13U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 0xdU))))) & 
         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
          >> 0x11U))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0x10000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
        = (0xf003ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0x8000000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xfc7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xff800000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 0x17U)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xff83ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xfffc0000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 << 0x12U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 5U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                    << 0xeU) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                      >> 0x12U))))) 
                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 0x1aU))) | 
                      (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                        & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                      << 0x1aU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 6U))) 
                           == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                         >> 0x12U))))) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                          >> 0x1aU)))) ? (0xf7ffffffU 
                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U])
                : ((0xf003ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
                   | (0xffc0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U])));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                        << 9U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                  >> 0x17U))))) & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                   >> 0x1bU))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0x4000000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
        = (0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
        = (0xffc0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
    if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = (0x20U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = (0xffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = ((0xfff1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
               | (0xfffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 1U)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xf0000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 << 0x1cU)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = ((0xfffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
               | (0xfffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                >> 4U)));
    } else {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                     >> 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                >> 0x1eU))) 
                                   == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                 << 4U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                   >> 0x1cU))))) 
                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                  >> 4U))) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                                               & ((0x1fU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                       << 0x1aU) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                         >> 6U))) 
                                                  == 
                                                  (0x1fU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                       << 4U) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                         >> 0x1cU))))) 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                 >> 4U))))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
                = (0xffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
                = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
                   | (0xf0000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U]));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
                = ((0xffc0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
                   | (0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U]));
        }
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                       >> 1U)))) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                    >> 5U))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = (0x10U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
        = (0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
    if ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = (0x8000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = (0xbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = ((0xc7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
               | (0xfffff800U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 0xbU)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = ((0xf83fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
               | (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 << 6U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                   >> 6U)))) 
                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                     >> 0xeU))) | (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                                                    & ((0x1fU 
                                                        & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                            << 0x1aU) 
                                                           | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                              >> 6U))) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                           >> 6U)))) 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                      >> 0xeU))))
                ? (0x7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U])
                : ((0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
                   | (0xffc0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U])));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                       >> 0xbU)))) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                      >> 0xfU))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = (0x4000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__nmi_ff__din 
        = ((8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                  >> 2U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                              << 2U) | ((2U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_detected) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_error)) 
                                                 & (~ 
                                                    (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                                      >> 2U) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                         >> 1U))))) 
                                                << 1U) 
                                               | (0xfffffffeU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                                     & ((~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                          >> 1U)) 
                                                        << 1U))))) 
                                        | (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_detected) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_imprecise_error_store_any)) 
                                                  & (~ 
                                                     (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                                       >> 2U) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                          >> 1U))))) 
                                                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                        >> 1U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                        << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                        << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                        << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x10U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 4U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x20U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 5U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x40U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 6U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x80U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 7U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffffffff00ULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | (IData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in)
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffffff00ffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 1U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 8U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 8U)))))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffff00ffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 2U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x10U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x10U)))))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffff00ffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 3U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x18U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x18U)))))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffff00ffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 4U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x20U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x20U)))))) 
              << 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffff00ffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 5U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x28U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x28U)))))) 
              << 0x28U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xff00ffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 6U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x30U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x30U)))))) 
              << 0x30U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 7U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x38U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x38U)))))) 
              << 0x38U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
                 | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 1U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 2U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 3U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
                 | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 1U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 2U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 6U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 3U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x7ff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x7fbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | (0xfffffc00U & ((((((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                            >> 0x28U)) 
                                   & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                  << 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                              << 8U)) 
                                | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0x28U)) 
                                     & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                    << 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                << 8U))) 
                               | (((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 0x27U))) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 0x28U))) 
                                    & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                   << 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                               << 8U))) 
                              | (((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x27U))) 
                                    & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                               >> 0x28U))) 
                                   & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                  << 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                              << 8U))) 
                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)) 
                                << 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x7feffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | (0xffffff00U & ((((((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                            >> 0x28U)) 
                                   & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                  << 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                            << 6U)) 
                                | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0x28U)) 
                                     & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                    << 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                              << 6U))) 
                               | (((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 0x27U))) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 0x28U))) 
                                    & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                   << 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                             << 6U))) 
                              | (((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x27U))) 
                                    & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                               >> 0x28U))) 
                                   & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                  << 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                            << 6U))) 
                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)) 
                                << 8U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x7ff81U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | ((((0xffffffc0U & ((((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x27U))) 
                                    & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                               >> 0x28U))) 
                                   & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                  << 6U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                            << 5U)) 
                                | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0x28U)) 
                                     & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                    << 6U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                              << 5U)))) 
                | (0xffffffe0U & ((((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                  >> 0x27U))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                 >> 0x28U))) 
                                     & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                    << 5U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                              << 4U)) 
                                  | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x28U)) 
                                       & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                      << 5U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                << 4U))))) 
               & ((~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)))) 
                  << 5U)) | ((((0xfffffff0U & (((((
                                                   (~ (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 0x27U))) 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                              >> 0x28U))) 
                                                  & (3U 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                 << 4U) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                   << 3U)) 
                                               | ((((IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 0x28U)) 
                                                    & (3U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                   << 4U) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                     << 3U)))) 
                               | (0xfffffff8U & (((
                                                   (((~ (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                 >> 0x27U))) 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                >> 0x28U))) 
                                                    & (4U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                   << 3U) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                     << 2U)) 
                                                 | ((((IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 0x28U)) 
                                                      & (4U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                     << 3U) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                       << 2U))))) 
                              & ((~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)))) 
                                 << 3U)) | (((0xfffffffcU 
                                              & ((((((~ (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                 >> 0x27U))) 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                >> 0x28U))) 
                                                    & (1U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                   << 2U) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                     << 1U)) 
                                                 | ((((IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 0x28U)) 
                                                      & (1U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                     << 2U) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                       << 1U)))) 
                                             | (0xfffffffeU 
                                                & ((((((~ (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                   >> 0x27U))) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                  >> 0x28U))) 
                                                      & (2U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                     << 1U) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d)) 
                                                   | ((((IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                 >> 0x28U)) 
                                                        & (2U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                       << 1U) 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d))))) 
                                            & ((~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)))) 
                                               << 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__1__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__1__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__2__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[1U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__2__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__3__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[2U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__3__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__4__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[3U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__4__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__5__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[4U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__5__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__6__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x20U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[5U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__6__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__7__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x40U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[6U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__7__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__8__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[7U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__8__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__9__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x100U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[8U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__9__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__10__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x200U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[9U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__10__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__11__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x400U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xaU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__11__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__12__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x800U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xbU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__12__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__13__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x1000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xcU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__13__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__14__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x2000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xdU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__14__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__15__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x4000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xeU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__15__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__16__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x8000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xfU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__16__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__17__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x10U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__17__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__18__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x20000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x11U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__18__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__19__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x40000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x12U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__19__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__20__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x80000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x13U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__20__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__21__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x100000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x14U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__21__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__22__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x200000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x15U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__22__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__23__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x400000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x16U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__23__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__24__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x800000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x17U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__24__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__25__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x1000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x18U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__25__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__26__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x2000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x19U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__26__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__27__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x4000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__27__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__28__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x8000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__28__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__29__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__29__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__30__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x20000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__30__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__31__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x40000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__31__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc2 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2)) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
               >> 0xeU)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc2)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_full_hit_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc3_clken)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc2)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc3));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__23(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__23\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__rf_pop;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__msi_reset;
    CData/*7:0*/ __Vdly__uart16550_0__DOT__regs__DOT__msr;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__lsr5r;
    CData/*7:0*/ __Vdly__uart16550_0__DOT__regs__DOT__block_cnt;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__rls_int_pnd;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__thre_int_pnd;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__ms_int_pnd;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__ti_int_pnd;
    CData/*3:0*/ __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    CData/*4:0*/ __Vdly__uart16550_0__DOT__regs__DOT__rf_count;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    CData/*3:0*/ __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    CData/*2:0*/ __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    CData/*3:0*/ __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    CData/*3:0*/ __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    CData/*2:0*/ __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19;
    CData/*0:0*/ __Vdly__wb_s2m_gpio_err;
    CData/*0:0*/ __Vdly__wb_s2m_gpio2_err;
    SData/*9:0*/ __Vdly__uart16550_0__DOT__regs__DOT__counter_t;
    // Body
    __Vdly__uart16550_0__DOT__regs__DOT__msi_reset 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__msi_reset;
    __Vdly__wb_s2m_gpio2_err = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio2_err;
    __Vdly__wb_s2m_gpio_err = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_err;
    __Vdly__uart16550_0__DOT__regs__DOT__lsr5r = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5r;
    __Vdly__uart16550_0__DOT__regs__DOT__msr = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__msr;
    __Vdly__uart16550_0__DOT__regs__DOT__rf_pop = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc4__DOT__rptc_ctrl 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc3__DOT__rptc_ctrl 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc2__DOT__rptc_ctrl 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc__DOT__rptc_ctrl 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio2_module__DOT__rgpio_ctrl 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ctrl;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio_module__DOT__rgpio_ctrl 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ctrl;
    __Vdly__uart16550_0__DOT__regs__DOT__ms_int_pnd 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd;
    __Vdly__uart16550_0__DOT__regs__DOT__ti_int_pnd 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd;
    __Vdly__uart16550_0__DOT__regs__DOT__rls_int_pnd 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd;
    __Vdly__uart16550_0__DOT__regs__DOT__thre_int_pnd 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b;
    __Vdly__uart16550_0__DOT__regs__DOT__counter_t 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__counter_t;
    __Vdly__uart16550_0__DOT__regs__DOT__block_cnt 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__block_cnt;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rstate;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tstate 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tstate;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__dlc 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dlc;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio2_module__DOT__rgpio_ints 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ints;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio_module__DOT__rgpio_ints 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ints;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__uart16550_0__DOT__regs__DOT__rf_count = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__tf_count 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__tf_count;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0U;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0U;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0U;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__msi_reset) {
            __Vdly__uart16550_0__DOT__regs__DOT__msi_reset = 0U;
        } else {
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__msr_read) {
                __Vdly__uart16550_0__DOT__regs__DOT__msi_reset = 1U;
            }
        }
    } else {
        __Vdly__uart16550_0__DOT__regs__DOT__msi_reset = 1U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__srx_pad 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_condition));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__pextc_sampled 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__extc_in;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__pextc_sampled 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__extc_in;
        __Vdly__wb_s2m_gpio2_err = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__wb_err) 
                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio2_err))) 
                                    & 1U);
        __Vdly__wb_s2m_gpio_err = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_err) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_err))) 
                                   & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart_irq 
            = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd)
                 ? (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask))
                 : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd)
                        ? (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_read))
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd)
                            ? (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_write) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir_read)))
                            : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd) 
                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__msr_read))))))) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__pextc_sampled = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__pextc_sampled = 0U;
        __Vdly__wb_s2m_gpio2_err = 0U;
        __Vdly__wb_s2m_gpio_err = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart_irq = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio2_dat 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__wb_dat;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_dat 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_d;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__ext_pad_s 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__sync;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__ext_pad_s 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__sync;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio2_dat = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_dat = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__ext_pad_s = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__ext_pad_s = 0U;
    }
    __Vdly__uart16550_0__DOT__regs__DOT__lsr5r = (1U 
                                                  & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)) 
                                                     | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_write)) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5r) 
                                                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5) 
                                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5_d)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7r 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7r) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7_d))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6r 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)) 
                 | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_write)) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6r) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6_d)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr4r 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr4r) 
                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                     >> 2U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr4_d))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr3r 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr3r) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr3_d))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr2r 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr2r) 
                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                     >> 1U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr2_d))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__clk_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__clk_s));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__clk_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__clk_s));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q = 0ULL;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q = 0ULL;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q = 0ULL;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__dffs__din) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio2_ack 
            = (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                    >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio2_err))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio2_ack))) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__wb_err))) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_ack 
            = (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                    >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_err))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_ack))) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_err))) 
               & 1U);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio2_ack = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_ack = 0U;
    }
    __Vtableidx1 = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is) 
                     << 4U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is) 
                                << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wbstate) 
                                           << 1U) | 
                                          (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_uart_ack 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vtable1___PVT__wb_s2m_uart_ack
        [__Vtableidx1];
    if ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__Vtablechg1
         [__Vtableidx1])) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wbstate 
            = vlSymsp->TOP__rvfpgasim__swervolf.__Vtable1___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate
            [__Vtableidx1];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wre 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vtable1___PVT__uart16550_0__DOT__wb_interface__DOT__wre
        [__Vtableidx1];
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__we_o) 
             & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fcr 
                = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is) 
                         >> 6U));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fcr = 3U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        __Vdly__uart16550_0__DOT__regs__DOT__msr = 
            ((0xf0U & (IData)(__Vdly__uart16550_0__DOT__regs__DOT__msr)) 
             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__msi_reset)
                 ? 0U : (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__msr) 
                                 | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__delayed_modem_signals))))));
        __Vdly__uart16550_0__DOT__regs__DOT__msr = 
            ((0xfU & (IData)(__Vdly__uart16550_0__DOT__regs__DOT__msr)) 
             | ((((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr))
                   ? (1U & ((0xcU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                    >> 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                      >> 3U)))))
                   : 0U) << 7U) | ((0x40U & (((0x10U 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr))
                                               ? ((0xcU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                         >> 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                           >> 3U))))
                                               : 0U) 
                                             << 5U)) 
                                   | ((0x20U & (((0x10U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr))
                                                  ? 
                                                 ((0xcU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                         >> 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                           >> 3U))))
                                                  : 0U) 
                                                << 3U)) 
                                      | (0x10U & ((
                                                   (0x10U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr))
                                                    ? 
                                                   ((0xcU 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                           >> 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                             >> 3U))))
                                                    : 0U) 
                                                  << 1U))))));
    } else {
        __Vdly__uart16550_0__DOT__regs__DOT__msr = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0r 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((~ ((((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop)) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rx_reset))) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0r) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0_d))))));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop) {
            __Vdly__uart16550_0__DOT__regs__DOT__rf_pop = 0U;
        } else {
            if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__re_o) 
                  & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                       >> 7U)))) {
                __Vdly__uart16550_0__DOT__regs__DOT__rf_pop = 1U;
            }
        }
    } else {
        __Vdly__uart16550_0__DOT__regs__DOT__rf_pop = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (5U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_aux 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_aux) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_aux 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_aux) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_aux 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_aux) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_aux 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_aux) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_aux = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (2U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_oe 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_oe) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_oe 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_oe) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_oe 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_oe) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_oe 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_oe) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_oe = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (1U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_out 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_out) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_out 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_out) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_out 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_out) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_out 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_out) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_out = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (2U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_oe 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_oe) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_oe 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_oe) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_oe 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_oe) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_oe 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_oe) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_oe = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (8U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_eclk 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_eclk) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_eclk 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_eclk) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_eclk 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_eclk) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_eclk 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_eclk) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_eclk = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (8U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_eclk 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_eclk) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_eclk 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_eclk) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_eclk 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_eclk) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_eclk 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_eclk) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_eclk = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (9U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_nec 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_nec) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_nec 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_nec) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_nec 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_nec) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_nec 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_nec) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_nec = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (9U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_nec 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_nec) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_nec 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_nec) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_nec 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_nec) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_nec 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_nec) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_nec = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc4__DOT__rptc_ctrl 
                = (0x1ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
        } else {
            if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc4__DOT__rptc_ctrl 
                    = ((0x1bfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc4__DOT__rptc_ctrl)) 
                       | (0x40U & ((0xffffffc0U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl)) 
                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__int_ptc) 
                                      << 6U))));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc4__DOT__rptc_ctrl = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 4U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc3__DOT__rptc_ctrl 
                = (0x1ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
        } else {
            if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc3__DOT__rptc_ctrl 
                    = ((0x1bfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc3__DOT__rptc_ctrl)) 
                       | (0x40U & ((0xffffffc0U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl)) 
                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__int_ptc) 
                                      << 6U))));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc3__DOT__rptc_ctrl = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 5U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc2__DOT__rptc_ctrl 
                = (0x1ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
        } else {
            if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc2__DOT__rptc_ctrl 
                    = ((0x1bfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc2__DOT__rptc_ctrl)) 
                       | (0x40U & ((0xffffffc0U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl)) 
                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__int_ptc) 
                                      << 6U))));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc2__DOT__rptc_ctrl = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 6U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc__DOT__rptc_ctrl 
                = (0x1ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
        } else {
            if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc__DOT__rptc_ctrl 
                    = ((0x1bfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc__DOT__rptc_ctrl)) 
                       | (0x40U & ((0xffffffc0U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl)) 
                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__int_ptc) 
                                      << 6U))));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__timer_ptc__DOT__rptc_ctrl = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (6U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio2_module__DOT__rgpio_ctrl 
                = (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio2_module__DOT__rgpio_ctrl 
                    = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio2_module__DOT__rgpio_ctrl)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ctrl)) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_irq) 
                                   << 1U))));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio2_module__DOT__rgpio_ctrl = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (6U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio_module__DOT__rgpio_ctrl 
                = (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio_module__DOT__rgpio_ctrl 
                    = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio_module__DOT__rgpio_ctrl)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ctrl)) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_irq) 
                                   << 1U))));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio_module__DOT__rgpio_ctrl = 0U;
    }
    __Vdly__uart16550_0__DOT__regs__DOT__ms_int_pnd 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__msr_read)) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_d))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
                       >> 3U)))));
    __Vdly__uart16550_0__DOT__regs__DOT__ti_int_pnd 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_read)) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_d))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ier)))));
    __Vdly__uart16550_0__DOT__regs__DOT__rls_int_pnd 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_d))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
                       >> 2U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((~ (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count) 
                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__trigger_level)) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_read))) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int_d))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ier)))));
    __Vdly__uart16550_0__DOT__regs__DOT__thre_int_pnd 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_write) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir_read) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir))) 
                     & (1U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir) 
                                     >> 1U)))))) & 
              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_d))) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd) 
                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
                     >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr1r 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr1r) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_overrun) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr1_d))))));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__serial_in) {
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else {
            if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__enable) 
                 & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b 
                    = (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b) 
                                - (IData)(1U)));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b = 0x9fU;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop)) 
             | (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count)))) {
            __Vdly__uart16550_0__DOT__regs__DOT__counter_t 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value;
        } else {
            if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__enable) 
                 & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__counter_t)))) {
                __Vdly__uart16550_0__DOT__regs__DOT__counter_t 
                    = (0x3ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__counter_t) 
                                 - (IData)(1U)));
            }
        }
    } else {
        __Vdly__uart16550_0__DOT__regs__DOT__counter_t = 0x27fU;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5r) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_write))) {
            __Vdly__uart16550_0__DOT__regs__DOT__block_cnt 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__block_value;
        } else {
            if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__enable) 
                 & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__block_cnt)))) {
                __Vdly__uart16550_0__DOT__regs__DOT__block_cnt 
                    = (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__block_cnt) 
                                - (IData)(1U)));
            }
        }
    } else {
        __Vdly__uart16550_0__DOT__regs__DOT__block_cnt = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__dlc 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
            ? (0xffffU & ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dlc))))))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dlc) 
                                                - (IData)(1U))))
            : 0U);
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (7U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio2_module__DOT__rgpio_ints 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio2_module__DOT__rgpio_ints 
                    = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ints 
                       | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__in_muxed 
                            ^ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_in) 
                           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__in_muxed 
                                 ^ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ptrig))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_inte));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio2_module__DOT__rgpio_ints = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (7U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio_module__DOT__rgpio_ints 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio_module__DOT__rgpio_ints 
                    = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ints 
                       | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__in_muxed 
                            ^ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_in) 
                           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__in_muxed 
                                 ^ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ptrig))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_inte));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio_module__DOT__rgpio_ints = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart_rdt 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
            ? (0xffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                         ? ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                             ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                 ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__scratch)
                                 : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__msr))
                             : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                 ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr)
                                 : 0U)) : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                            ? ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr)
                                                : (0xc0U 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir)))
                                            : ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                ? (
                                                   (0x80U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dl) 
                                                    >> 8U)
                                                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ier))
                                                : (
                                                   (0x80U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__dl)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                                                    >> 3U))))))
            : 0U);
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rx_reset) {
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__uart16550_0__DOT__regs__DOT__rf_count = 0U;
            __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        } else {
            if ((2U == (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) 
                         << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop)))) {
                if ((0x10U > (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count))) {
                    __Vdly__uart16550_0__DOT__regs__DOT__rf_count 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count)));
                    __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                        = (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in));
                    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
                    __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
                    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
                }
            } else {
                if ((1U == (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) 
                             << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop)))) {
                    if ((0U < (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count))) {
                        __Vdly__uart16550_0__DOT__regs__DOT__rf_count 
                            = (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count) 
                                        - (IData)(1U)));
                        __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 1U;
                        __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 
                            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                        __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
                    }
                } else {
                    if ((3U == (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) 
                                 << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop)))) {
                        __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
                        __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                            = (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in));
                        __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 1U;
                        __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__uart16550_0__DOT__regs__DOT__rf_count = 0U;
        __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 1U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio2_err 
        = __Vdly__wb_s2m_gpio2_err;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_err 
        = __Vdly__wb_s2m_gpio_err;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__msi_reset 
        = __Vdly__uart16550_0__DOT__regs__DOT__msi_reset;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__counter_t 
        = __Vdly__uart16550_0__DOT__regs__DOT__counter_t;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__block_cnt 
        = __Vdly__uart16550_0__DOT__regs__DOT__block_cnt;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5r 
        = __Vdly__uart16550_0__DOT__regs__DOT__lsr5r;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__msr 
        = __Vdly__uart16550_0__DOT__regs__DOT__msr;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16] 
            = __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17] = 0U;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18] 
            = __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0 = 1U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_d 
        = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__sync 
            = vlTOPp->i_pb;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__sync 
            = ((IData)(vlTOPp->i_sw) << 0x10U);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__sync = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__sync = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5_d 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6_d 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr4_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
              >> 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr3_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr2_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
              >> 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__clk_s 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__sync_clk));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__clk_s 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__sync_clk));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xf01ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xf0fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xf000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q) 
                          >> (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q) 
                                    << 2U))) << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xc00U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x10000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xf01ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xf0fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xf000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q) 
                          >> (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q) 
                                    << 2U))) << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xc00U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x10000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xf01ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xf0fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xf000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q) 
                          >> (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q) 
                                    << 2U))) << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xc00U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x10000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffc0000U & (((4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                              << 0x13U) | ((4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                           << 0x12U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffc0000U & (((4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                              << 0x13U) | ((4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                           << 0x12U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffc0000U & (((4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                              << 0x13U) | ((4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                           << 0x12U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__trigger_level 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fcr))
            ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fcr))
                ? 0xeU : 8U) : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fcr))
                                 ? 4U : 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__delayed_modem_signals 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
            ? 0xfU : 0U);
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__we_o) 
             & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr 
                = (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__mcr = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__int_ptc 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__lrc_match) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__hrc_match)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl) 
                 >> 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__int_ptc 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__lrc_match) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__hrc_match)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl) 
                 >> 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__int_ptc 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__lrc_match) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__hrc_match)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl) 
                 >> 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__int_ptc 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__lrc_match) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__hrc_match)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                 >> 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr1_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_overrun));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7r) 
            << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6r) 
                       << 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5r) 
                                  << 5U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr4r) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr3r) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr2r) 
                                                   << 2U) 
                                                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr1r) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0r))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__start_dlc 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__we_o) 
               & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__in_muxed
            : 0U);
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (4U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ptrig 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ptrig) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ptrig 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ptrig) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ptrig 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ptrig) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ptrig 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ptrig) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_ptrig = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (3U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_inte 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_inte) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_inte 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_inte) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_inte 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_inte) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_inte 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_inte) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_inte = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__in_muxed
            : 0U);
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (4U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ptrig 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ptrig) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ptrig 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ptrig) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ptrig 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ptrig) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ptrig 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ptrig) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ptrig = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                    & (3U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_inte 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_inte) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_inte 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_inte) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_inte 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_inte) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_inte 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_inte) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_inte = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                = (6U | (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir)));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
        } else {
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                    = (4U | (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                    = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
            } else {
                if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                        = (0xcU | (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir)));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                        = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
                } else {
                    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd) {
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                            = (2U | (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir)));
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                            = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
                    } else {
                        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                                = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                                = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
                        } else {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                                = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                                = (1U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir = 1U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__we_o) 
             & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__scratch 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__scratch = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__we_o) 
             & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ier 
                    = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ier = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xfff0fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xf0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o) 
                       >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xadcab1e0U | (0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0xa11ab1ebU;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xcU | (0xffff0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xcU | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | (0xfffffffeU & ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                                 << 1U)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xfff0fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xf0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o) 
                       >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xadcab1e0U | (0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0xa11ab1ebU;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xcU | (0xffff0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xcU | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | (0xfffffffeU & ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                                 << 1U)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xfff0fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xf0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o) 
                       >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xadcab1e0U | (0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0xa11ab1ebU;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xcU | (0xffff0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xcU | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | (0xfffffffeU & ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                                 << 1U)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__in_muxed 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_eclk 
            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__pextc_sampled) 
           | ((~ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_eclk) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__ext_pad_s));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__in_muxed 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_eclk 
            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__pextc_sampled) 
           | ((~ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_eclk) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__ext_pad_s));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd 
        = __Vdly__uart16550_0__DOT__regs__DOT__rls_int_pnd;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd 
        = __Vdly__uart16550_0__DOT__regs__DOT__ti_int_pnd;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd 
        = __Vdly__uart16550_0__DOT__regs__DOT__thre_int_pnd;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd 
        = __Vdly__uart16550_0__DOT__regs__DOT__ms_int_pnd;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__in_lach 
        = (((~ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_nec) 
            & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__clk_s) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__clk_r)))))) 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__rgpio_nec 
              & (- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__clk_s)) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__clk_r))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__sync_clk 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__clk_pad_i));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__in_lach 
        = (((~ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_nec) 
            & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__clk_s) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__clk_r)))))) 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_nec 
              & (- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__clk_s)) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__clk_r))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__sync_clk 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__clk_pad_i));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__re_o 
        = ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wre));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rx_reset) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_overrun = 0U;
        } else {
            if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop))) 
                 & (0x10U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_overrun = 1U;
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_overrun = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
                  >> 2U) & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr) 
                               >> 1U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr) 
                                         >> 2U)) | 
                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr) 
                              >> 3U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr) 
                                         >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
                  >> 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr) 
                            >> 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__msr))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__extc_in 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__in_lach 
            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__ext_pad_s) 
           | ((~ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__in_lach) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_module__DOT__pextc_sampled));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__extc_in 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__in_lach 
            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__ext_pad_s) 
           | ((~ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__in_lach) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__pextc_sampled));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop 
        = __Vdly__uart16550_0__DOT__regs__DOT__rf_pop;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count 
        = __Vdly__uart16550_0__DOT__regs__DOT__rf_count;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7 
        = ((0U != (((((((((((((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U] | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]) | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [2U]) | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]) | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]) | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [5U]) | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                            [6U]) | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [7U]) | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                          [8U]) | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                         [9U]) | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                        [0xaU]) | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                       [0xbU]) | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                      [0xcU]) | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                     [0xdU]) | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                    [0xeU]) | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0xfU])) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_overrun));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count) 
              >= (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__trigger_level)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__counter_t))) 
           & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rx_reset 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__we_o) 
               & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is) 
                 >> 1U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__24(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__24\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__dmi_reg_rdata 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_rddata_reg__DOT____Vcellinp__dffs__din;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset_reg__DOT__din_new) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_reg__DOT____Vcellinp__dffs__din) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbdata1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbdata0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_reg__DOT____Vcellinp__dffs__din;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_error_reg__DOT____Vcellinp__dffs__din;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__dffs__din;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__dffs__din) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_reg__DOT____Vcellinp__dffs__din) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusyerror_reg__DOT____Vcellinp__dffs__din) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_data1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_error_din;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmabstractcs_busy_reg__DOT____Vcellinp__dffs__din) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_doneff__DOT____Vcellinp__dffs__din) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_doneff__DOT____Vcellinp__dffs__din) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command 
            = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren) 
                | (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                    & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                          >> 0xcU))) & (((4U == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))) 
                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg)) 
                                        | ((5U == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg) 
                                              >> 1U))))) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_regno_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_data0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__dffs__din;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted 
            = (((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                 >> 0x11U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))) 
               & 1U);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__dmi_reg_rdata = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
        = ((0x3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg) 
           | (0xc0000U & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset))) 
                          << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
        = ((0xfffcffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg) 
           | (0x30000U & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack))) 
                          << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
        = ((0xffff8fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
        = ((0xfff07fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg) 
           | ((0x80000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                           << 0xfU)) | ((0x40000U & 
                                         ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                              >> 3U)) 
                                          << 0x12U)) 
                                        | (0x38000U 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                                              << 0xfU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
        = ((0xff8fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout) 
               << 0x16U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout) 
                             << 0x15U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout) 
                                          << 0x14U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abmem_addr_core_local 
        = ((0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg 
                             >> 0x1cU))) | (0xfU == 
                                            (0xfU & 
                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg 
                                              >> 0x1cU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
        = ((0xfffff8ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__dffs__din)
            : 0U);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
            << 0x10U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg) 
           | (0xc0000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg) 
           | (0x10000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                             << 0x1bU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__haltsum0_reg 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 
                        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                            >> 0x10U) & (0U == (7U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                   >> 0xcU))));
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned 
        = ((((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                           >> 0x11U))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg) 
            | ((2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                             >> 0x11U))) & (0U != (3U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg)))) 
           | ((3U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                            >> 0x11U))) & (0U != (7U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr 
        = (((2U == (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                             >> 0x18U))) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg
             : (0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg)) 
           + ((2U == (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                               >> 0x18U))) ? (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                     >> 0x14U))))
               : 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata 
        = ((((- (IData)((0U == (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                      >> 0x14U))))) 
             & ((0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                << 0x18U)) | ((0xff0000U 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg))))) 
            | ((- (IData)((1U == (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                        >> 0x14U))))) 
               & ((0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                  << 0x10U)) | (0xffffU 
                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg)))) 
           | ((- (IData)((2U == (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                       >> 0x14U))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg));
    if ((2U == (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                         >> 0x18U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type = 2U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type 
            = (0U == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                              >> 0xcU)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
            = (0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg);
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__25(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__25\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__wb_s2m_sys_ack;
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq4;
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq3;
    CData/*0:0*/ __Vdly__syscon__DOT__irq_timer_en;
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq4_edge;
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq4_pol;
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq4_timer;
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq3_edge;
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq3_pol;
    CData/*0:0*/ __Vdly__syscon__DOT__sw_irq3_timer;
    CData/*0:0*/ __Vdly__syscon__DOT__irq_gpio_enable;
    CData/*0:0*/ __Vdly__syscon__DOT__irq_ptc_enable;
    CData/*1:0*/ __Vdlyvdim0__spi__DOT__rfifo__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__spi__DOT__rfifo__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__spi__DOT__rfifo__DOT__mem__v0;
    CData/*3:0*/ __Vdlyvdim0__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    CData/*3:0*/ __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    CData/*1:0*/ __Vdlyvdim0__spi2__DOT__rfifo__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__spi2__DOT__rfifo__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__spi2__DOT__rfifo__DOT__mem__v0;
    IData/*31:0*/ __Vdly__syscon__DOT__irq_timer_cnt;
    IData/*31:0*/ __Vdly__nmi_vec;
    QData/*63:0*/ __Vdly__syscon__DOT__mtimecmp;
    QData/*63:0*/ __Vdly__syscon__DOT__mtime;
    // Body
    __Vdly__wb_s2m_sys_ack = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_ack;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__arbiter 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__arbiter;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__clkcnt 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__clkcnt;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__clkcnt 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__clkcnt;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdlyvset__spi2__DOT__wfifo__DOT__mem__v0 = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdlyvset__spi__DOT__wfifo__DOT__mem__v0 = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_accel_sclk 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_accel_sclk;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__wfre 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfre;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__treg 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__treg;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__bcnt 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__bcnt;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__state 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__state;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__o_flash_sclk 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_flash_sclk;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__wfre 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfre;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__treg 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__treg;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__bcnt 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__bcnt;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__state 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__state;
    __Vdlyvset__spi2__DOT__rfifo__DOT__mem__v0 = 0U;
    __Vdlyvset__spi__DOT__rfifo__DOT__mem__v0 = 0U;
    __Vdly__syscon__DOT__mtime = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__mtime;
    __Vdly__syscon__DOT__mtimecmp = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__mtimecmp;
    __Vdly__syscon__DOT__irq_ptc_enable = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_ptc_enable;
    __Vdly__syscon__DOT__irq_gpio_enable = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_gpio_enable;
    __Vdly__syscon__DOT__sw_irq3_timer = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_timer;
    __Vdly__syscon__DOT__sw_irq3_edge = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_edge;
    __Vdly__syscon__DOT__sw_irq4_timer = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_timer;
    __Vdly__syscon__DOT__sw_irq4_edge = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_edge;
    __Vdly__syscon__DOT__irq_timer_en = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_timer_en;
    __Vdly__syscon__DOT__irq_timer_cnt = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_timer_cnt;
    __Vdly__syscon__DOT__sw_irq3_pol = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_pol;
    __Vdly__syscon__DOT__sw_irq4_pol = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_pol;
    __Vdly__syscon__DOT__sw_irq3 = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3;
    __Vdly__syscon__DOT__sw_irq4 = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4;
    __Vdly__nmi_vec = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__nmi_vec;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_accel_ack 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_acc) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_accel_ack))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_flash_ack 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_acc) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_flash_ack))));
    __Vdly__wb_s2m_sys_ack = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 9U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_ack))));
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)))) {
        __Vdly__wb_s2m_sys_ack = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__clkcnt 
        = (0xfffU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                       >> 6U) & ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__clkcnt)) 
                                 & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__state))))
                      ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__clkcnt) 
                         - (IData)(1U)) : ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr))
                                            ? ((4U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr))
                                                ? 0xfffU
                                                : (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr))
                                                     ? 0x7ffU
                                                     : 0x3ffU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr))
                                                     ? 0x1ffU
                                                     : 0xffU)))
                                            : ((4U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr))
                                                     ? 0x7fU
                                                     : 0x3fU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr))
                                                     ? 7U
                                                     : 0x1fU))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr))
                                                     ? 0xfU
                                                     : 3U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr))
                                                     ? 1U
                                                     : 0U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__clkcnt 
        = (0xfffU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                       >> 6U) & ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__clkcnt)) 
                                 & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__state))))
                      ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__clkcnt) 
                         - (IData)(1U)) : ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr))
                                            ? ((4U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr))
                                                ? 0xfffU
                                                : (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr))
                                                     ? 0x7ffU
                                                     : 0x3ffU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr))
                                                     ? 0x1ffU
                                                     : 0xffU)))
                                            : ((4U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr))
                                                     ? 0x7fU
                                                     : 0x3fU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr))
                                                     ? 7U
                                                     : 0x1fU))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr))
                                                     ? 0xfU
                                                     : 3U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr))
                                                     ? 1U
                                                     : 0U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi0_irq 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spif) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
              >> 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__wbm_err 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc) 
           & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)))));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
              >> 0x12U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_awready))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bid 
                = (0x3fU & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[7U] 
                             << 9U) | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                                       >> 0x17U)));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bid = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U] 
              >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_arready))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rid 
                = (0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U]);
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rid = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wcol 
        = ((~ ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                   >> 6U)) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)))) 
           & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfwe) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wffull)) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wcol)) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wr_spsr) 
                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                       >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wcol 
        = ((~ ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                   >> 6U)) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)))) 
           & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfwe) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wffull)) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wcol)) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wr_spsr) 
                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                       >> 6U)))));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfwe) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdlyvval__spi2__DOT__wfifo__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdlyvset__spi2__DOT__wfifo__DOT__mem__v0 = 1U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdlyvdim0__spi2__DOT__wfifo__DOT__mem__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__wp;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfwe) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdlyvval__spi__DOT__wfifo__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdlyvset__spi__DOT__wfifo__DOT__mem__v0 = 1U;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdlyvdim0__spi__DOT__wfifo__DOT__mem__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__wp;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr))) {
            if ((((3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__wp))) 
                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfwe))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__gb = 1U;
            } else {
                if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfre) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__gb = 0U;
                }
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__gb = 0U;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__gb = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr))) {
            if ((((3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__wp))) 
                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfwe))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__gb = 1U;
            } else {
                if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfre) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__gb = 0U;
                }
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__gb = 0U;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__gb = 0U;
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2_rdt 
            = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))
                ? 0U : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))
                         ? 0U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__ss_r)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi_rdt 
            = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))
                ? 0U : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))
                         ? 0U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__ss_r)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2_rdt 
            = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))
                ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__sper)
                    : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__mem
                   [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__rp])
                : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spsr)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi_rdt 
            = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))
                ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__sper)
                    : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__mem
                   [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__rp])
                : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spsr)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spif 
        = ((~ ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                   >> 6U)) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)))) 
           & ((((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__tcnt)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfwe)) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spif)) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wr_spsr) 
                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                       >> 7U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spif 
        = ((~ ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                   >> 6U)) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)))) 
           & ((((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__tcnt)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfwe)) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spif)) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wr_spsr) 
                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                       >> 7U)))));
    if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr))) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfwe) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__tcnt 
                = (3U & ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__tcnt))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__tcnt) 
                             - (IData)(1U)) : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__sper) 
                                               >> 6U)));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__tcnt 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__sper) 
                     >> 6U));
    }
    if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr))) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfwe) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__tcnt 
                = (3U & ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__tcnt))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__tcnt) 
                             - (IData)(1U)) : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__sper) 
                                               >> 6U)));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__tcnt 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__sper) 
                     >> 6U));
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfwe) {
        __Vdlyvval__spi2__DOT__rfifo__DOT__mem__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__treg;
        __Vdlyvset__spi2__DOT__rfifo__DOT__mem__v0 = 1U;
        __Vdlyvdim0__spi2__DOT__rfifo__DOT__mem__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__wp;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfwe) {
        __Vdlyvval__spi__DOT__rfifo__DOT__mem__v0 = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__treg;
        __Vdlyvset__spi__DOT__rfifo__DOT__mem__v0 = 1U;
        __Vdlyvdim0__spi__DOT__rfifo__DOT__mem__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__wp;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__nmi_int_r 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__nmi_int;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr))) {
            if ((((3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__wp))) 
                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__rp)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfwe))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__gb = 1U;
            } else {
                if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfre) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__gb = 0U;
                }
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__gb = 0U;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__gb = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr))) {
            if ((((3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__wp))) 
                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__rp)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfwe))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__gb = 1U;
            } else {
                if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfre) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__gb = 0U;
                }
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__gb = 0U;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__gb = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) {
        __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                        >> 3U));
        __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__tf_push) {
        __Vdlyvval__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is;
        __Vdlyvset__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    }
    if (__Vdlyvset__spi2__DOT__rfifo__DOT__mem__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__mem[__Vdlyvdim0__spi2__DOT__rfifo__DOT__mem__v0] 
            = __Vdlyvval__spi2__DOT__rfifo__DOT__mem__v0;
    }
    if (__Vdlyvset__spi__DOT__rfifo__DOT__mem__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__mem[__Vdlyvdim0__spi__DOT__rfifo__DOT__mem__v0] 
            = __Vdlyvval__spi__DOT__rfifo__DOT__mem__v0;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vdlyvdim0__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = __Vdlyvval__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xfff00fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xfffff000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bid) 
                             << 0xeU)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_wr) {
            if ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__ss_r 
                    = (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__ss_r = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_wr) {
            if ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__ss_r 
                    = (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__ss_r = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_wr) {
            if ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__sper 
                    = (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__sper = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_wr) {
            if ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__sper 
                    = (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__sper = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__nmi_int = 0U;
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_gpio_enable) 
         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_irq) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio2_irq)))) {
        __Vdly__syscon__DOT__sw_irq4 = 1U;
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_ptc_enable) 
         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
            >> 6U))) {
        __Vdly__syscon__DOT__sw_irq3 = 1U;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_gpio_enable)) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_ptc_enable))))) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_edge) {
            __Vdly__syscon__DOT__sw_irq3 = 0U;
        }
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_edge) {
            __Vdly__syscon__DOT__sw_irq4 = 0U;
        }
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_timer_en) {
            __Vdly__syscon__DOT__irq_timer_cnt = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_timer_cnt 
                                                  - (IData)(1U));
        }
        if ((1U == vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_timer_cnt)) {
            __Vdly__syscon__DOT__irq_timer_en = 0U;
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_timer) {
                __Vdly__syscon__DOT__sw_irq3 = 1U;
            }
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_timer) {
                __Vdly__syscon__DOT__sw_irq4 = 1U;
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_timer) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_timer))))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__nmi_int = 1U;
            }
        }
    }
    if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
            >> 9U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)) 
         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_ack)))) {
        if (((((((((2U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))) 
                   | (3U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                  | (6U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                 | (0xaU == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
                | (0xbU == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
               | (0xcU == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
              | (0xdU == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             | (0xeU == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))) {
            if ((2U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
                if (VL_UNLIKELY((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)))) {
                    if (VL_UNLIKELY((0U != vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__f))) {
                        VL_FWRITEF(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__f,"%c",
                                   8,(0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
                    }
                    VL_WRITEF("%c",8,(0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
                }
                if (VL_UNLIKELY((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)))) {
                    VL_WRITEF("\nFinito\n");
                    VL_FINISH_MT("../src/SweRVolfSoC/Peripherals/SystemController/swervolf_syscon.v", 196, "");
                }
                if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                    __Vdly__syscon__DOT__sw_irq4 = 
                        (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                               >> 0x1fU));
                    __Vdly__syscon__DOT__sw_irq4_edge 
                        = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                 >> 0x1eU));
                    __Vdly__syscon__DOT__sw_irq4_pol 
                        = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                 >> 0x1dU));
                    __Vdly__syscon__DOT__sw_irq4_timer 
                        = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                 >> 0x1cU));
                    __Vdly__syscon__DOT__sw_irq3 = 
                        (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                               >> 0x1bU));
                    __Vdly__syscon__DOT__sw_irq3_edge 
                        = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                 >> 0x1aU));
                    __Vdly__syscon__DOT__sw_irq3_pol 
                        = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                 >> 0x19U));
                    __Vdly__syscon__DOT__sw_irq3_timer 
                        = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                 >> 0x18U));
                }
            } else {
                if ((3U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                        __Vdly__nmi_vec = ((0xffffff00U 
                                            & __Vdly__nmi_vec) 
                                           | (0xffU 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
                    }
                    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                        __Vdly__nmi_vec = ((0xffff00ffU 
                                            & __Vdly__nmi_vec) 
                                           | (0xff00U 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
                    }
                    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                        __Vdly__nmi_vec = ((0xff00ffffU 
                                            & __Vdly__nmi_vec) 
                                           | (0xff0000U 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
                    }
                    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                        __Vdly__nmi_vec = ((0xffffffU 
                                            & __Vdly__nmi_vec) 
                                           | (0xff000000U 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
                    }
                } else {
                    if ((6U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
                        if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                            __Vdly__syscon__DOT__irq_gpio_enable 
                                = (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
                        }
                        __Vdly__syscon__DOT__irq_ptc_enable 
                            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                     >> 1U));
                    } else {
                        if ((0xaU == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
                            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                __Vdly__syscon__DOT__mtimecmp 
                                    = ((0xffffffffffffff00ULL 
                                        & __Vdly__syscon__DOT__mtimecmp) 
                                       | (IData)((IData)(
                                                         (0xffU 
                                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat))));
                            }
                            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                __Vdly__syscon__DOT__mtimecmp 
                                    = ((0xffffffffffff00ffULL 
                                        & __Vdly__syscon__DOT__mtimecmp) 
                                       | ((QData)((IData)(
                                                          (0xffU 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                                              >> 8U)))) 
                                          << 8U));
                            }
                            if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                __Vdly__syscon__DOT__mtimecmp 
                                    = ((0xffffffffff00ffffULL 
                                        & __Vdly__syscon__DOT__mtimecmp) 
                                       | ((QData)((IData)(
                                                          (0xffU 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                                              >> 0x10U)))) 
                                          << 0x10U));
                            }
                            if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                __Vdly__syscon__DOT__mtimecmp 
                                    = ((0xffffffff00ffffffULL 
                                        & __Vdly__syscon__DOT__mtimecmp) 
                                       | ((QData)((IData)(
                                                          (0xffU 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                                              >> 0x18U)))) 
                                          << 0x18U));
                            }
                        } else {
                            if ((0xbU == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
                                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                    __Vdly__syscon__DOT__mtimecmp 
                                        = ((0xffffff00ffffffffULL 
                                            & __Vdly__syscon__DOT__mtimecmp) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat))) 
                                              << 0x20U));
                                }
                                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                    __Vdly__syscon__DOT__mtimecmp 
                                        = ((0xffff00ffffffffffULL 
                                            & __Vdly__syscon__DOT__mtimecmp) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                                                  >> 8U)))) 
                                              << 0x28U));
                                }
                                if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                    __Vdly__syscon__DOT__mtimecmp 
                                        = ((0xff00ffffffffffffULL 
                                            & __Vdly__syscon__DOT__mtimecmp) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                                                  >> 0x10U)))) 
                                              << 0x30U));
                                }
                                if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                    __Vdly__syscon__DOT__mtimecmp 
                                        = ((0xffffffffffffffULL 
                                            & __Vdly__syscon__DOT__mtimecmp) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                                                  >> 0x18U)))) 
                                              << 0x38U));
                                }
                            } else {
                                if ((0xcU == (0xfU 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
                                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                        __Vdly__syscon__DOT__irq_timer_cnt 
                                            = ((0xffffff00U 
                                                & __Vdly__syscon__DOT__irq_timer_cnt) 
                                               | (0xffU 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
                                    }
                                    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                        __Vdly__syscon__DOT__irq_timer_cnt 
                                            = ((0xffff00ffU 
                                                & __Vdly__syscon__DOT__irq_timer_cnt) 
                                               | (0xff00U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
                                    }
                                    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                        __Vdly__syscon__DOT__irq_timer_cnt 
                                            = ((0xff00ffffU 
                                                & __Vdly__syscon__DOT__irq_timer_cnt) 
                                               | (0xff0000U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
                                    }
                                    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                        __Vdly__syscon__DOT__irq_timer_cnt 
                                            = ((0xffffffU 
                                                & __Vdly__syscon__DOT__irq_timer_cnt) 
                                               | (0xff000000U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
                                    }
                                } else {
                                    if ((0xdU == (0xfU 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
                                        if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                            __Vdly__syscon__DOT__irq_timer_en 
                                                = (1U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
                                        }
                                    } else {
                                        if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit0 
                                                = (0x7fU 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
                                        }
                                        if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit1 
                                                = (0x7fU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                                      >> 8U));
                                        }
                                        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit2 
                                                = (0x7fU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                                      >> 0x10U));
                                        }
                                        if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit3 
                                                = (0x7fU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                                      >> 0x18U));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0xfU == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit4 
                        = (0x7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
                }
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit5 
                        = (0x7fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                    >> 8U));
                }
                if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit6 
                        = (0x7fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                    >> 0x10U));
                }
                if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit7 
                        = (0x7fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                    >> 0x18U));
                }
            }
        }
    }
    if (((((((((0U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))) 
               | (1U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
              | (2U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             | (3U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
            | (6U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
           | (8U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
          | (9U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
         | (0xaU == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))) {
        if ((0U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__version;
        } else {
            if ((1U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat = 0x8946d48dU;
            } else {
                if ((2U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat 
                        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat) 
                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4) 
                               << 0x1fU) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_edge) 
                                             << 0x1eU) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_pol) 
                                                << 0x1dU) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_timer) 
                                                  << 0x1cU)))));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat 
                        = ((0xf0ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat) 
                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3) 
                               << 0x1bU) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_edge) 
                                             << 0x1aU) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_pol) 
                                                << 0x19U) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_timer) 
                                                  << 0x18U)))));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat 
                        = (0xff03ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat);
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat 
                        = (0x10000U | (0xfffcffffU 
                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat 
                        = (0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat);
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat 
                        = ((3U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__nmi_vec
                            : ((6U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                                ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_ptc_enable) 
                                    << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_gpio_enable))
                                : ((8U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__mtime)
                                    : ((9U == (0xfU 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                                        ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__mtime 
                                                   >> 0x20U))
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__mtimecmp)))));
                }
            }
        }
    } else {
        if ((0xbU == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat 
                = (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__mtimecmp 
                           >> 0x20U));
        } else {
            if ((0xcU == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_timer_cnt;
            } else {
                if ((0xdU == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat 
                        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_timer_en;
                } else {
                    if ((0xfU == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) {
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat = 0U;
                    }
                }
            }
        }
    }
    __Vdly__syscon__DOT__mtime = (1ULL + vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__mtime);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_irq 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__mtime 
           >= vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__mtimecmp);
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)))) {
        __Vdly__syscon__DOT__mtime = 0ULL;
        __Vdly__syscon__DOT__mtimecmp = 0ULL;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_timer_cnt 
        = __Vdly__syscon__DOT__irq_timer_cnt;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_timer_en 
        = __Vdly__syscon__DOT__irq_timer_en;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_edge 
        = __Vdly__syscon__DOT__sw_irq4_edge;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_timer 
        = __Vdly__syscon__DOT__sw_irq4_timer;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_edge 
        = __Vdly__syscon__DOT__sw_irq3_edge;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_timer 
        = __Vdly__syscon__DOT__sw_irq3_timer;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_gpio_enable 
        = __Vdly__syscon__DOT__irq_gpio_enable;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_ptc_enable 
        = __Vdly__syscon__DOT__irq_ptc_enable;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__mtimecmp 
        = __Vdly__syscon__DOT__mtimecmp;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__mtime 
        = __Vdly__syscon__DOT__mtime;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4 
        = __Vdly__syscon__DOT__sw_irq4;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3 
        = __Vdly__syscon__DOT__sw_irq3;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_pol 
        = __Vdly__syscon__DOT__sw_irq4_pol;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_pol 
        = __Vdly__syscon__DOT__sw_irq3_pol;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_ack 
        = __Vdly__wb_s2m_sys_ack;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__nmi_vec 
        = __Vdly__nmi_vec;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat 
        = ((0xffffffffffff80ULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat) 
           | (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit0)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat 
        = ((0xffffffffffc07fULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat) 
           | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit1)) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat 
        = ((0xffffffffe03fffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat) 
           | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit2)) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat 
        = ((0xfffffff01fffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat) 
           | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit3)) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat 
        = ((0xfffff80fffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat) 
           | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit4)) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat 
        = ((0xfffc07ffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat) 
           | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit5)) 
              << 0x23U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat 
        = ((0xfe03ffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat) 
           | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit6)) 
              << 0x2aU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat 
        = ((0x1ffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat) 
           | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Segments_Digit7)) 
              << 0x31U));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__26(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__26\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
        = ((0xf00fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U]) 
           | (0xfffffff0U & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bid) 
                             << 6U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__27(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__27\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
        = ((0xfffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U]) 
           | (0xfffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid) 
                             << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
        = ((0xefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U]) 
           | (0xfffff000U & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid) 
                             << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xfe000000U & (0x2000000U | (0xf0000000U 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata) 
                                              << 0x1cU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
        = ((0x1ffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata) 
                          >> 4U)) | (0xfe000000U & 
                                     ((0xe000000U & 
                                       ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata) 
                                        >> 4U)) | (0xf0000000U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata 
                                                               >> 0x20U)) 
                                                      << 0x1cU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
        = ((0x1ffffffU & ((IData)((vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata 
                                   >> 0x20U)) >> 4U)) 
           | (0xfe000000U & ((0xf0000000U & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rid) 
                                             << 0x1cU)) 
                             | (0xe000000U & ((IData)(
                                                      (vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata 
                                                       >> 0x20U)) 
                                              >> 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
        = ((0xfffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U]) 
           | (0x1ffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rid) 
                            >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
        = ((0x1fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U]) 
           | (0xffffe000U & (((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_awready) 
                              << 0xfU) | (((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_arready) 
                                           << 0xeU) 
                                          | ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_wready) 
                                             << 0xdU)))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__28(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__28\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_reg__DOT____Vcellinp__dffs__din)
            : 0U);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din = 0U;
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in = 0U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 0U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_pending 
        = (((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            | (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           | (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_settle__TOP__rvfpgasim__swervolf__31(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_settle__TOP__rvfpgasim__swervolf__31\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
        = ((0xfff00000U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U]) 
           | vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]);
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
        = ((0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U]) 
           | (0xfff00000U & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                             << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
        = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                      << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
        = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                      << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U]) 
           | (0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                          >> 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
        = ((0xffU & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U]) 
           | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                     >> 0x18U)) | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                                  << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                     >> 0x18U)) | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                  << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10000000U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U])
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U])) 
                << 0x28U) | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U])) 
                              << 8U) | ((QData)((IData)(
                                                        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U])) 
                                        >> 0x18U)))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff_in 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_req_hold)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2)) 
           & (~ ((((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count)) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2)) 
                  & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                     >> 0x12U)) & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
            ? ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                ? 0U : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                         ? 0U : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                  ? 0U : 9U))) : ((4U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 9U
                                                     : 8U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 8U
                                                     : 
                                                    ((1U 
                                                      & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                                          >> 0x1bU) 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                                            >> 0x19U)))
                                                      ? 8U
                                                      : 
                                                     ((0x8000000U 
                                                       & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])
                                                       ? 6U
                                                       : 5U))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 7U
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                                                         | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                            >> 0x13U)))
                                                      ? 9U
                                                      : 4U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                                                         | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                            >> 0x13U)))
                                                      ? 9U
                                                      : 3U)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0)
                                                      ? 2U
                                                      : 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_cmd_beat_cnt 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
               >> 0x12U)) & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_sent 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
               >> 0x12U)) & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata 
        = ((((0xffULL & ((- (QData)((IData)((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                         & ((0x3fU >= (0x38U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                << 3U)))
                             ? ((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                  << 0x34U) | (((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                                << 0x14U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                                  >> 0xcU))) 
                                >> (0x38U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                             << 3U)))
                             : 0ULL))) | (0xffffULL 
                                          & ((- (QData)((IData)(
                                                                (1U 
                                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                             & ((0x3fU 
                                                 >= 
                                                 (0x30U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                     << 3U)))
                                                 ? 
                                                ((((QData)((IData)(
                                                                   vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(
                                                                      vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                                        >> 0xcU))) 
                                                 >> 
                                                 (0x30U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                     << 3U)))
                                                 : 0ULL)))) 
            | (0xffffffffULL & ((- (QData)((IData)(
                                                   (2U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                & ((0x3fU >= (0x20U 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                 << 3U)))
                                    ? ((((QData)((IData)(
                                                         vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                            << 0x14U) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                              >> 0xcU))) 
                                       >> (0x20U & 
                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                            << 3U)))
                                    : 0ULL)))) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                                      << 0x34U) 
                                                     | (((QData)((IData)(
                                                                         vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                                           >> 0xcU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__lsu_awvalid) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
              >> 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__lsu_wvalid) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
              >> 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en = 1U;
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 1U;
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                 >> 0x18U));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                              >> 0x13U));
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                 >> 0x10U));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                              >> 0xbU));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__sb_wvalid) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                              >> 0x19U));
                }
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                    = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__sb_awvalid) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                              >> 0x1bU)) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__sb_awvalid) 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                                >> 0x1bU)) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__sb_wvalid) 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                                  >> 0x19U))));
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__sb_arvalid) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                              >> 0x1aU));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)) 
                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)) 
                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0) 
                             | ((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))) 
                                 & (0x3cU == (0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x22U))))) 
                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                   >> 0xfU))) | ((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                                  & (0x39U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                 >> 0x22U))))) 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                    >> 0x14U))) 
                           & (~ (IData)((0U != (7U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                   >> 0xcU))))));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren 
                        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en;
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren) 
                           & (0U != (7U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                   >> 0xeU)))));
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5)) 
               | ((((2U == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))
                             ? (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                      >> (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))))
                             : 0U)) & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))) 
                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                         >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
                  & ((((~ ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                            >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)) 
                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                 >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
                       | (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec))) 
                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge) 
                         >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en)))) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)
                   ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done))
                       ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done)
                           ? (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                              >> 5U) : (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                        >> 7U)) : (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                    >> 7U) 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                      >> 5U)))
                   : (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                      >> 6U)) | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)))) 
             & (~ ((((((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any)) 
                       & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any))) 
                      & (7U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer))) 
                     & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                           >> 2U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge) 
                                          >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en))))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2 = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req = 0U;
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                  >> 0x11U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                               >> 1U)));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                            ? 0U : 2U);
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 1U;
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 1U;
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en = 1U;
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                  >> 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                               >> 0x18U)));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                            ? 0U : 8U);
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error 
                        = (1U & (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                   >> 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                >> 0xbU)) 
                                 | ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                     >> 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                                  >> 0x13U))));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2 
                        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                            & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                  >> 0x10U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error)));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en 
                        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__sb_awvalid) 
                            & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                               >> 0x1bU)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__sb_arvalid) 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                                >> 0x1aU)));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en 
                        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__sb_wvalid) 
                            & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                               >> 0x19U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__sb_arvalid) 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                                >> 0x1aU)));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                            ? 0U : 7U);
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en)) 
                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en)));
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                            ? 0U : ((0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                  >> 8U)))
                                     ? 8U : 6U));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & (((~ ((((((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                          | (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                         | (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                        | (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                       | (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                      | (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) 
                                  | (0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                  >> 8U)))) 
                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                    >> 1U)));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                            ? 0U : 8U);
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__core_dbg_cmd_done) 
                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                    >> 1U)));
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                            ? 0U : (((0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                   >> 8U))) 
                                     | ((0U == (0xffU 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                   >> 0x18U))) 
                                        & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                              >> 0x11U))))
                                     ? 8U : 4U));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                   | (0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                   >> 8U)))) 
                                  | ((0U == (0xffU 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                >> 0x18U))) 
                                     & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                           >> 0x11U)))) 
                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                    >> 1U)));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                   >> 9U) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                                >> 1U))))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq)
                                ? 9U : (((2U == (0xffU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                    >> 0x18U))) 
                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abmem_addr_core_local)))
                                         ? 5U : 3U))
                            : ((0x80000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                                ? 1U : 0U));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & (((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                     >> 9U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq)) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command)) 
                                  | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                     >> 1U)) | (~ (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                                    >> 9U) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                           & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)) 
                              | (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate))));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                           & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)));
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                            ? 0U : 2U);
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                  >> 9U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                            >> 1U)));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                   >> 9U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))
                            ? 2U : 1U);
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & (((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                     >> 0x1fU) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 3U))) 
                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                      >> 9U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)) 
                                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                       >> 1U))));
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_new_cmd_beat_count 
        = (7U & (((6U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in))))) 
                  | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_cmd_beat_cnt))) 
                     & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count)))) 
                 | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_cmd_beat_cnt)) 
                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2)))))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_req_in 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_req_hold)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_sent)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_new_rd_addr_count 
        = (7U & ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_sent)
                      ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count))
                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count))
                  : (6U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                           >> 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_error_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1 
        = (((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren)));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer_in = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_mergeff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                      ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xdU) : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                     >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)
                      : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                         >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT____Vcellinp__dffs__din 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                      ? ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                >> 0xfU)) | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                                   >> 0x11U)))
                      : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz) 
                         >> (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                     << 1U)))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5
                : (((0U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                     << 5U))) ? 0U : 
                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                     ((IData)(1U) + (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                            << 5U))))) 
                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))] 
                      >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                   << 5U)))));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer_in 
            = (7U & (((0U < (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any)) 
                      & (7U > (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer)))
                      ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer))
                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_mergeff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT____Vcellinp__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent)) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done) 
                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent))) 
            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__lsu_arvalid) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                  >> 6U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmabstractcs_busy_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_doneff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_doneff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_data0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2))
            ? ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0))) 
                 & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                            >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1))) 
                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_done)
                                            ? (((0xffU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                    & ((0x1fU 
                                                        >= 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                         << 3U))
                                                        ? 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                        >> 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                         << 3U))
                                                        : 0U))) 
                                                | (0xffffU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                      & ((0x1fU 
                                                          >= 
                                                          (0x10U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                              << 3U)))
                                                          ? 
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                          >> 
                                                          (0x10U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                              << 3U)))
                                                          : 0U)))) 
                                               | ((- (IData)(
                                                             (2U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata))
                                            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb))) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2))) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata)))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_error_din 
        = (((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
               >> 0xcU) & (~ (IData)((0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                   >> 8U)))))) 
             & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
            & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                  & ((0x16U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 0x22U)))) 
                     | (0x17U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                   >> 0x22U)))))) 
                 | (0x18U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                               >> 0x22U))))) 
                | (4U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                           >> 0x22U))))) 
               | (5U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                          >> 0x22U))))))
            ? 1U : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                      & (~ (IData)((0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                 >> 8U)))))) 
                     & ((((~ ((0U == (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                               >> 0x18U))) 
                              | (2U == (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                 >> 0x18U))))) 
                          | (((3U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                            >> 0x14U))) 
                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                 >> 0x16U)) & (2U == 
                                               (0xffU 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                   >> 0x18U))))) 
                         | ((2U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                          >> 0x14U))) 
                            & ((0U == (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                >> 0x18U))) 
                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                  >> 0x11U)))) | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                       >> 0x18U))) 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                     >> 0x12U))))
                     ? 2U : (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__core_dbg_cmd_done) 
                                & ((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                     << 1U))))) 
                                   | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                       >> 5U) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                 >> 0xfU)))) 
                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                   & (0U == (0xffU 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                >> 0x18U)))) 
                                  & (((1U == (0xfU 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                 >> 0xcU))) 
                                      & (0U != (0x7fU 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                   >> 5U)))) 
                                     | (0U != (7U & 
                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                >> 0xdU)))))) 
                              & (~ (IData)((0U != (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                      >> 8U))))))
                              ? 3U : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                        & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                         >> 8U))))))
                                       ? 4U : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (7U 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                                  >> 8U))))))
                                                ? 5U
                                                : (
                                                   ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                                      & (2U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                             >> 0x18U)))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (7U 
                                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                                       >> 8U)))))) 
                                                    & (((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                             >> 0x14U))) 
                                                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg) 
                                                       | ((2U 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                               >> 0x14U))) 
                                                          & (0U 
                                                             != 
                                                             (3U 
                                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg)))))
                                                    ? 7U
                                                    : 
                                                   (7U 
                                                    & ((((0x16U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                      >> 0x22U)))) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))
                                                        ? 
                                                       ((~ (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                    >> 0xaU))) 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                           >> 8U))
                                                        : 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                        >> 8U)))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req)) 
                 & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 3U) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 3U) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req) 
                               | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 0xbU)) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                               >> 0xcU)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                >> 7U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_resume_req))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbdata0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata)))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbdata1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata 
                                                  >> 0x20U))))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))
                  ? (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done_in 
        = ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done_in 
        = ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din 
        = ((0x400U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                      << 9U)) | ((0x200U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                            << 9U)) 
                                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns) 
                                     << 8U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                                << 7U) 
                                               | (((((0x7fffffc0U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                         >> 1U)) 
                                                     | (0x3ffffc0U 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                           >> 6U))) 
                                                    | (0xffffffc0U 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))) 
                                                   & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                                                       & (~ 
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                           >> 1U))) 
                                                      << 6U)) 
                                                  | ((0x1fffffe0U 
                                                      & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                            >> 3U) 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                              << 2U)) 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                             << 4U)) 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty) 
                                                            << 5U))) 
                                                     | ((0x10U 
                                                         & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns))) 
                                                              & (~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                  >> 1U))) 
                                                             << 4U) 
                                                            | (0xfffffff0U 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                     << 4U))))) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns) 
                                                            << 3U) 
                                                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                               << 2U) 
                                                              | ((2U 
                                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                     >> 2U)) 
                                                                 | (1U 
                                                                    & ((~ 
                                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                         >> 3U)) 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                          >> 8U)))))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken) 
            << 0x15U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt) 
                          << 0x14U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_halt_idle_any) 
                                        << 0x13U) | 
                                       (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                         << 0x12U) 
                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
                                            << 0x11U) 
                                           | ((0x7fff0000U 
                                               & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                                    << 0x10U) 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                      >> 1U)) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                     << 0x10U))) 
                                              | ((0x3fff8000U 
                                                  & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                                                      << 0xfU) 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                        >> 2U))) 
                                                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                                                     << 0xeU) 
                                                    | ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                                                         & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns))) 
                                                            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns))))) 
                                                        << 0xdU) 
                                                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4) 
                                                           << 0xcU) 
                                                          | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                     >> 0x11U))) 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                                 << 0xaU) 
                                                                | (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))) 
                                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4)) 
                                                                     | ((- (IData)(
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))))) 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_chain_masked_e4))) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state) 
                                                                          << 4U) 
                                                                         | ((8U 
                                                                             & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4) 
                                                                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4)) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                                >> 2U)) 
                                                                                << 3U))))) 
                                                                            | ((4U 
                                                                                & (((0x7ffffffcU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                                >> 1U)) 
                                                                                | (0xfffffffcU 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                                >> 0x11U)) 
                                                                                << 2U))) 
                                                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                                >> 1U))))))))))))))))))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__32(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__32\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 5U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_hrc 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        } else {
            if ((0x100U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_hrc 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_cntr;
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_hrc = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__33(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__33\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 5U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_lrc 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        } else {
            if ((0x100U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_lrc 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_cntr;
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_lrc = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__34(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__34\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 4U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_hrc 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        } else {
            if ((0x100U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_hrc 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_cntr;
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_hrc = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__35(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__35\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 4U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_lrc 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        } else {
            if ((0x100U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_lrc 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_cntr;
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_lrc = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__36(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__36\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_hrc 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        } else {
            if ((0x100U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_hrc 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_cntr;
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_hrc = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__37(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__37\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_lrc 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        } else {
            if ((0x100U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_lrc 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_cntr;
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_lrc = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__38(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__38\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 6U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_hrc 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        } else {
            if ((0x100U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_hrc 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_cntr;
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_hrc = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__39(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__39\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 6U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_lrc 
                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        } else {
            if ((0x100U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_lrc 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_cntr;
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_lrc = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__40(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__40\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vdly__timer_ptc2__DOT__rptc_cntr;
    // Body
    __Vdly__timer_ptc2__DOT__rptc_cntr = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_cntr;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 5U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            __Vdly__timer_ptc2__DOT__rptc_cntr = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        } else {
            if ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__lrc_match) 
                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl) 
                              >> 4U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl) 
                                          >> 7U)))) {
                __Vdly__timer_ptc2__DOT__rptc_cntr = 0U;
            } else {
                if ((1U & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__lrc_match) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl) 
                                   >> 4U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl)) 
                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__eclk_gate) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_ctrl) 
                                       >> 1U))))))) {
                    __Vdly__timer_ptc2__DOT__rptc_cntr 
                        = ((IData)(1U) + vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_cntr);
                }
            }
        }
    } else {
        __Vdly__timer_ptc2__DOT__rptc_cntr = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc2__DOT__rptc_cntr 
        = __Vdly__timer_ptc2__DOT__rptc_cntr;
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__41(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__41\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vdly__timer_ptc3__DOT__rptc_cntr;
    // Body
    __Vdly__timer_ptc3__DOT__rptc_cntr = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_cntr;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 4U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            __Vdly__timer_ptc3__DOT__rptc_cntr = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        } else {
            if ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__lrc_match) 
                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl) 
                              >> 4U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl) 
                                          >> 7U)))) {
                __Vdly__timer_ptc3__DOT__rptc_cntr = 0U;
            } else {
                if ((1U & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__lrc_match) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl) 
                                   >> 4U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl)) 
                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__eclk_gate) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_ctrl) 
                                       >> 1U))))))) {
                    __Vdly__timer_ptc3__DOT__rptc_cntr 
                        = ((IData)(1U) + vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_cntr);
                }
            }
        }
    } else {
        __Vdly__timer_ptc3__DOT__rptc_cntr = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc3__DOT__rptc_cntr 
        = __Vdly__timer_ptc3__DOT__rptc_cntr;
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__42(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__42\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vdly__timer_ptc4__DOT__rptc_cntr;
    // Body
    __Vdly__timer_ptc4__DOT__rptc_cntr = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_cntr;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            __Vdly__timer_ptc4__DOT__rptc_cntr = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        } else {
            if ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__lrc_match) 
                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl) 
                              >> 4U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl) 
                                          >> 7U)))) {
                __Vdly__timer_ptc4__DOT__rptc_cntr = 0U;
            } else {
                if ((1U & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__lrc_match) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl) 
                                   >> 4U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl)) 
                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__eclk_gate) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_ctrl) 
                                       >> 1U))))))) {
                    __Vdly__timer_ptc4__DOT__rptc_cntr 
                        = ((IData)(1U) + vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_cntr);
                }
            }
        }
    } else {
        __Vdly__timer_ptc4__DOT__rptc_cntr = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc4__DOT__rptc_cntr 
        = __Vdly__timer_ptc4__DOT__rptc_cntr;
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__43(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__43\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vdly__timer_ptc__DOT__rptc_cntr;
    // Body
    __Vdly__timer_ptc__DOT__rptc_cntr = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_cntr;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 6U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
              & (0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))) {
            __Vdly__timer_ptc__DOT__rptc_cntr = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        } else {
            if ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__lrc_match) 
                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                              >> 4U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                          >> 7U)))) {
                __Vdly__timer_ptc__DOT__rptc_cntr = 0U;
            } else {
                if ((1U & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__lrc_match) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                   >> 4U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl)) 
                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__eclk_gate) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                       >> 1U))))))) {
                    __Vdly__timer_ptc__DOT__rptc_cntr 
                        = ((IData)(1U) + vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_cntr);
                }
            }
        }
    } else {
        __Vdly__timer_ptc__DOT__rptc_cntr = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_cntr 
        = __Vdly__timer_ptc__DOT__rptc_cntr;
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__44(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__44\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0;
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__dccm_bank__Q 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core
           [(0x7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U])]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[0U] 
        = (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__dccm_bank__Q);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[1U] 
        = ((0xffffff80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[1U]) 
           | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__dccm_bank__Q 
                      >> 0x20U)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__45(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__45\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0;
    SData/*10:0*/ __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0;
    QData/*38:0*/ __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0;
    // Body
    __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0 = 0U;
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))) {
        __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_wr_data;
        __Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0 = 1U;
        __Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0 
            = (0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                          << 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U] 
                                       >> 0xbU)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
            ? 0ULL : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core
           [(0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[1U] 
                        << 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank[0U] 
                                     >> 0xbU)))]);
    if (__Vdlyvset__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core[__Vdlyvdim0__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0] 
            = __Vdlyvval__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__dccm_bank__DOT__ram_core__v0;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[1U] 
        = ((0x7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[1U]) 
           | (0xffffff80U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q) 
                             << 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[2U] 
        = ((0xffffc000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[2U]) 
           | ((0x7fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q) 
                        >> 0x19U)) | (0xffffff80U & 
                                      ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__dccm_bank__Q 
                                                >> 0x20U)) 
                                       << 7U))));
}
