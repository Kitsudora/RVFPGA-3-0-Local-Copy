// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_swervolf_core__Bz1.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__18(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__18\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp1160;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                  >> 2U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb 
        = (1U & (((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                   >> 0x19U) & (~ (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_load_kill_wen))) 
                                     & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                        >> 0x19U)) 
                                    & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                       >> 2U)) & ((0x1fU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                         >> 0x1eU))) 
                                                  == 
                                                  (0x1fU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                       << 0x1aU) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                         >> 6U))))))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                       >> 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_err_wb 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                             >> 0xaU) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                         >> 9U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                  >> 3U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               >> 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
        = ((0xffff8001U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U]) 
           | (0xfffffffeU & ((0x7fc0U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U]) 
                             | (((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout)) 
                                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                              >> 2U))))
                                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1)
                                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4)) 
                                << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc3 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3) 
                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout) 
                     >> 1U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff 
        = (((((0x300U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                     << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U] 
                                                 >> 0x13U)))) 
              | (0x304U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                       << 0xdU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U] 
                                                   >> 0x13U))))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U]) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 0x18U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                  >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               >> 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod 
        = (1U & (((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                   & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                      >> 0x18U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                       >> 1U))) & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                    >> 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__smallnum_case) 
             | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout))
                 ? (0x21U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__count))
                 : (0x20U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__count)))) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__flush_lower_ff)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc2_up 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout) 
                     >> 1U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc5 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 1U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc5)))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__byp_data_first_half__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_first_data)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__byp_data_second_half__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_second_data)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_vmask_raw_f2)) 
           | ((0x80U & (((((((((((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                     >> 2U)) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                   >> 1U))) 
                                & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                     >> 6U))) & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                  >> 5U))) 
                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                   >> 4U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                  >> 3U))) 
                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                 >> 2U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                >> 1U))) 
                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2))) 
                        << 7U)) | ((0x40U & (((((((
                                                   ((((~ 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                        >> 2U)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                          >> 1U))) 
                                                     & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                        >> 6U))) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                       >> 5U))) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                      >> 4U))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                     >> 3U))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                   >> 1U))) 
                                              << 6U) 
                                             | (0xffffffc0U 
                                                & (((((((((((~ 
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                              >> 2U)) 
                                                            & (~ 
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                >> 1U))) 
                                                           & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                                                          << 6U) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                        & ((~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                             >> 5U)) 
                                                           << 6U)) 
                                                       & ((~ 
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                            >> 4U)) 
                                                          << 6U)) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                           >> 3U)) 
                                                         << 6U)) 
                                                     & ((~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                          >> 2U)) 
                                                        << 6U)) 
                                                    & ((~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                         >> 1U)) 
                                                       << 6U)) 
                                                   & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                      << 6U))))) 
                                   | ((0x20U & ((((0x7fffffe0U 
                                                   & ((((((((((~ 
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                >> 2U)) 
                                                              & (~ 
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                  >> 1U))) 
                                                             & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                            << 5U) 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                              >> 1U)) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                               >> 5U)) 
                                                             << 5U)) 
                                                         & ((~ 
                                                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                              >> 4U)) 
                                                            << 5U)) 
                                                        & ((~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                             >> 3U)) 
                                                           << 5U)) 
                                                       & ((~ 
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                            >> 2U)) 
                                                          << 5U)) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                           >> 1U)) 
                                                         << 5U))) 
                                                  | ((((((((((~ 
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                               >> 2U)) 
                                                             & (~ 
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                 >> 1U))) 
                                                            & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                           & (~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                               >> 6U))) 
                                                          & (~ 
                                                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                              >> 5U))) 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                             >> 4U))) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                            >> 3U))) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                           >> 2U))) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                          >> 1U))) 
                                                     << 5U)) 
                                                 | (0xffffffe0U 
                                                    & (((((((((~ 
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                >> 2U)) 
                                                              << 5U) 
                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                << 4U)) 
                                                            & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                               << 5U)) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 6U)) 
                                                              << 5U)) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                               >> 5U)) 
                                                             << 5U)) 
                                                         & ((~ 
                                                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                              >> 4U)) 
                                                            << 5U)) 
                                                        & ((~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                             >> 3U)) 
                                                           << 5U)) 
                                                       & ((~ 
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                            >> 2U)) 
                                                          << 5U)))) 
                                                | (0xffffffe0U 
                                                   & ((((((((((~ 
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                >> 2U)) 
                                                              & (~ 
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                  >> 1U))) 
                                                             & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                                                            << 5U) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                               >> 4U)) 
                                                             << 5U)) 
                                                         & ((~ 
                                                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                              >> 3U)) 
                                                            << 5U)) 
                                                        & ((~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                             >> 2U)) 
                                                           << 5U)) 
                                                       & ((~ 
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                            >> 1U)) 
                                                          << 5U)) 
                                                      & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                         << 5U))))) 
                                      | ((0x10U & (
                                                   (((0xfffffff0U 
                                                      & ((((((((~ 
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                 >> 2U)) 
                                                               << 4U) 
                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                 << 3U)) 
                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                << 4U)) 
                                                            & ((~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                 >> 6U)) 
                                                               << 4U)) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 5U)) 
                                                              << 4U)) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                               >> 4U)) 
                                                             << 4U)) 
                                                         & ((~ 
                                                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                              >> 3U)) 
                                                            << 4U))) 
                                                     | (0xfffffff0U 
                                                        & (((((((((~ 
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                    >> 2U)) 
                                                                  & (~ 
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                      >> 1U))) 
                                                                 & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                                                                << 4U) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                              & ((~ 
                                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                   >> 3U)) 
                                                                 << 4U)) 
                                                             & ((~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                  >> 2U)) 
                                                                << 4U)) 
                                                            & ((~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                 >> 1U)) 
                                                               << 4U)) 
                                                           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                              << 4U)))) 
                                                    | (0x3ffffff0U 
                                                       & (((((((((~ 
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                   >> 2U)) 
                                                                 << 4U) 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                   << 3U)) 
                                                               & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                                  << 4U)) 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                 >> 2U)) 
                                                             & ((~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                  >> 5U)) 
                                                                << 4U)) 
                                                            & ((~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                 >> 4U)) 
                                                               << 4U)) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 3U)) 
                                                              << 4U)) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                               >> 2U)) 
                                                             << 4U)))) 
                                                   | (0x7ffffff0U 
                                                      & (((((((((~ 
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                  >> 2U)) 
                                                                & (~ 
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                    >> 1U))) 
                                                               & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                              << 4U) 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 1U)) 
                                                            & ((~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                 >> 4U)) 
                                                               << 4U)) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 3U)) 
                                                              << 4U)) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                               >> 2U)) 
                                                             << 4U)) 
                                                         & ((~ 
                                                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                              >> 1U)) 
                                                            << 4U))))) 
                                         | ((8U & (
                                                   ((((0xfffffff8U 
                                                       & ((((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                               << 1U) 
                                                              & ((~ 
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                   >> 1U)) 
                                                                 << 3U)) 
                                                             & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                                << 3U)) 
                                                            & ((~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                 >> 6U)) 
                                                               << 3U)) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 5U)) 
                                                              << 3U)) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                               >> 4U)) 
                                                             << 3U))) 
                                                      | (0xfffffff8U 
                                                         & ((((((((~ 
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                    >> 2U)) 
                                                                  & (~ 
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                      >> 1U))) 
                                                                 & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                                                                << 3U) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                              & ((~ 
                                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                   >> 2U)) 
                                                                 << 3U)) 
                                                             & ((~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                  >> 1U)) 
                                                                << 3U)) 
                                                            & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                               << 3U)))) 
                                                     | (0x1ffffff8U 
                                                        & ((((((((~ 
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                   >> 2U)) 
                                                                 << 3U) 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                   << 2U)) 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                  << 3U)) 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                 >> 3U)) 
                                                             & ((~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                  >> 5U)) 
                                                                << 3U)) 
                                                            & ((~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                 >> 4U)) 
                                                               << 3U)) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 3U)) 
                                                              << 3U)))) 
                                                    | (0x3ffffff8U 
                                                       & ((((((((~ 
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                  >> 2U)) 
                                                                << 3U) 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                  << 2U)) 
                                                              & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                                 << 3U)) 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 2U)) 
                                                            & ((~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                 >> 4U)) 
                                                               << 3U)) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 3U)) 
                                                              << 3U)) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                               >> 2U)) 
                                                             << 3U)))) 
                                                   | (0x7ffffff8U 
                                                      & ((((((((~ 
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                 >> 2U)) 
                                                               & (~ 
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                   >> 1U))) 
                                                              & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                             << 3U) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                               >> 1U)) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 3U)) 
                                                              << 3U)) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                               >> 2U)) 
                                                             << 3U)) 
                                                         & ((~ 
                                                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                              >> 1U)) 
                                                            << 3U))))) 
                                            | ((4U 
                                                & ((((((0xfffffffcU 
                                                        & ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                              & ((~ 
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                   >> 1U)) 
                                                                 << 2U)) 
                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                << 2U)) 
                                                            & ((~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                 >> 6U)) 
                                                               << 2U)) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 5U)) 
                                                              << 2U))) 
                                                       | (0xffffffcU 
                                                          & (((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                 & ((~ 
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                      >> 1U)) 
                                                                    << 2U)) 
                                                                & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                                   << 2U)) 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                  >> 4U)) 
                                                              & ((~ 
                                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                   >> 5U)) 
                                                                 << 2U)) 
                                                             & ((~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                  >> 4U)) 
                                                                << 2U)))) 
                                                      | (0xfffffffcU 
                                                         & (((((((~ 
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                   >> 2U)) 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                     >> 1U))) 
                                                                & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                                                               << 2U) 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                             & ((~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                  >> 1U)) 
                                                                << 2U)) 
                                                            & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                               << 2U)))) 
                                                     | (0x1ffffffcU 
                                                        & (((((((~ 
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                  >> 2U)) 
                                                                << 2U) 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                  << 1U)) 
                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                 << 2U)) 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 3U)) 
                                                            & ((~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                 >> 4U)) 
                                                               << 2U)) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 3U)) 
                                                              << 2U)))) 
                                                    | (0x7ffffffcU 
                                                       & (((((((~ 
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                 >> 2U)) 
                                                               & (~ 
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                   >> 1U))) 
                                                              & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                             << 2U) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                               >> 1U)) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 2U)) 
                                                              << 2U)) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                               >> 1U)) 
                                                             << 2U)))) 
                                                   | (0x3ffffffcU 
                                                      & (((((((~ 
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                >> 2U)) 
                                                              << 2U) 
                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                << 1U)) 
                                                            & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                               << 2U)) 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                              >> 2U)) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                               >> 3U)) 
                                                             << 2U)) 
                                                         & ((~ 
                                                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                              >> 2U)) 
                                                            << 2U))))) 
                                               | (2U 
                                                  & (((((((0x7ffffffeU 
                                                           & ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                 >> 1U) 
                                                                & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                               & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                                  << 1U)) 
                                                              & ((~ 
                                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                   >> 6U)) 
                                                                 << 1U))) 
                                                          | (0x7fffffeU 
                                                             & (((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                    >> 1U) 
                                                                   & ((~ 
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                        >> 1U)) 
                                                                      << 1U)) 
                                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                     << 1U)) 
                                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                    >> 5U)) 
                                                                & ((~ 
                                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                     >> 5U)) 
                                                                   << 1U)))) 
                                                         | (0xffffffeU 
                                                            & (((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                   >> 1U) 
                                                                  & ((~ 
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                       >> 1U)) 
                                                                     << 1U)) 
                                                                 & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                                    << 1U)) 
                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                   >> 4U)) 
                                                               & ((~ 
                                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                    >> 4U)) 
                                                                  << 1U)))) 
                                                        | (0xfffffffeU 
                                                           & ((((((~ 
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                    >> 2U)) 
                                                                  & (~ 
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                      >> 1U))) 
                                                                 & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                                                                << 1U) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                              & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                                 << 1U)))) 
                                                       | (0x1ffffffeU 
                                                          & ((((((~ 
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                   >> 2U)) 
                                                                 << 1U) 
                                                                & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                  << 1U)) 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                 >> 3U)) 
                                                             & ((~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                  >> 3U)) 
                                                                << 1U)))) 
                                                      | (0x3ffffffeU 
                                                         & ((((((~ 
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                  >> 2U)) 
                                                                << 1U) 
                                                               & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                              & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                                 << 1U)) 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 2U)) 
                                                            & ((~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                 >> 2U)) 
                                                               << 1U)))) 
                                                     | (0x7ffffffeU 
                                                        & ((((((~ 
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                 >> 2U)) 
                                                               & (~ 
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                                   >> 1U))) 
                                                              & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                             << 1U) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                               >> 1U)) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                                >> 1U)) 
                                                              << 1U))))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2 
        = ((0x80U & ((((((((((((((((((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                         >> 2U)) & 
                                     (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                         >> 1U))) & 
                                    (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                         >> 6U))) & 
                                  (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                      >> 5U))) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                   >> 4U))) 
                                & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                      >> 3U))) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                   >> 2U))) 
                              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                    >> 1U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2))) 
                            | (((((((((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                          >> 2U)) & 
                                      (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                          >> 1U))) 
                                     & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                    & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                          >> 6U))) 
                                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                         >> 5U))) & 
                                  (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                      >> 4U))) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                   >> 3U))) 
                                & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                      >> 2U))) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                   >> 1U)))) 
                           << 7U) | (0xffffff80U & 
                                     (((((((((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                 >> 2U)) 
                                             << 7U) 
                                            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                               << 6U)) 
                                           & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                              << 7U)) 
                                          & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                 >> 6U)) 
                                             << 7U)) 
                                         & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                >> 5U)) 
                                            << 7U)) 
                                        & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                               >> 4U)) 
                                           << 7U)) 
                                       & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                              >> 3U)) 
                                          << 7U)) & 
                                      ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                           >> 2U)) 
                                       << 7U)))) | 
                         (0xffffff80U & ((((((((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                   >> 2U)) 
                                               << 7U) 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                 << 6U)) 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                << 7U)) 
                                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                   >> 6U)) 
                                               << 7U)) 
                                           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                  >> 5U)) 
                                              << 7U)) 
                                          & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                 >> 4U)) 
                                             << 7U)) 
                                         & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                >> 3U)) 
                                            << 7U)))) 
                        | (0xffffff80U & ((((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                               << 5U) 
                                              & ((~ 
                                                  (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                   >> 1U)) 
                                                 << 7U)) 
                                             & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                << 7U)) 
                                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                   >> 6U)) 
                                               << 7U)) 
                                           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                  >> 5U)) 
                                              << 7U)) 
                                          & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                 >> 4U)) 
                                             << 7U)))) 
                       | (0xffffff80U & (((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                             << 5U) 
                                            & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                   >> 1U)) 
                                               << 7U)) 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                              << 7U)) 
                                          & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                 >> 6U)) 
                                             << 7U)) 
                                         & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                >> 5U)) 
                                            << 7U)))) 
                      | (0xffffff80U & ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                           << 5U) & 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                           << 6U)) 
                                         & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                            << 7U)) 
                                        & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                               >> 6U)) 
                                           << 7U)))) 
                     | (0xffffff80U & (((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                         << 5U) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                   << 6U)) 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                          << 7U))))) 
           | ((0x40U & ((((((0xffffffc0U & ((((((((
                                                   (((~ 
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                       >> 2U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                         >> 1U))) 
                                                    & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                   << 6U) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                      >> 5U)) 
                                                    << 6U)) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                     >> 4U)) 
                                                   << 6U)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                    >> 3U)) 
                                                  << 6U)) 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                   >> 2U)) 
                                                 << 6U)) 
                                             & ((~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                  >> 1U)) 
                                                << 6U)) 
                                            | (((((((((((~ 
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                          >> 2U)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                            >> 1U))) 
                                                       & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                                                      << 6U) 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                    & ((~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                         >> 5U)) 
                                                       << 6U)) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                        >> 4U)) 
                                                      << 6U)) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                       >> 3U)) 
                                                     << 6U)) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                      >> 2U)) 
                                                    << 6U)) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                     >> 1U)) 
                                                   << 6U)) 
                                               & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                  << 6U)))) 
                            | (0xffffffc0U & ((((((
                                                   (((~ 
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                       >> 2U)) 
                                                     << 6U) 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                       << 5U)) 
                                                   & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                      << 6U)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                      >> 5U)) 
                                                    << 6U)) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                     >> 4U)) 
                                                   << 6U)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                    >> 3U)) 
                                                  << 6U)) 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                   >> 2U)) 
                                                 << 6U)))) 
                           | (0xffffffc0U & (((((((
                                                   (~ 
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                     >> 2U)) 
                                                   << 6U) 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                     << 5U)) 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                    << 6U)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                    >> 5U)) 
                                                  << 6U)) 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                   >> 4U)) 
                                                 << 6U)) 
                                             & ((~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                  >> 3U)) 
                                                << 6U)))) 
                          | (0xffffffc0U & ((((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                 << 4U) 
                                                & ((~ 
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                     >> 1U)) 
                                                   << 6U)) 
                                               & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                  << 6U)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                             & ((~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                  >> 5U)) 
                                                << 6U)) 
                                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                   >> 4U)) 
                                               << 6U)))) 
                         | (0xffffffc0U & (((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                               << 4U) 
                                              & ((~ 
                                                  (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                   >> 1U)) 
                                                 << 6U)) 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                << 6U)) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                  >> 5U)) 
                                              << 6U)))) 
                        | (0xffffffc0U & ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                             << 4U) 
                                            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                               << 5U)) 
                                           & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                              << 6U)) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2))))) 
              | ((0x20U & (((((0xffffffe0U & ((((((
                                                   (((((~ 
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                         >> 2U)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                           >> 1U))) 
                                                      & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                                                     << 5U) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                        >> 4U)) 
                                                      << 5U)) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                       >> 3U)) 
                                                     << 5U)) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                      >> 2U)) 
                                                    << 5U)) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                     >> 1U)) 
                                                   << 5U)) 
                                               & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                  << 5U)) 
                                              | (((((((((~ 
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                          >> 2U)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                            >> 1U))) 
                                                       & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                      << 5U) 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                    & ((~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                         >> 4U)) 
                                                       << 5U)) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                        >> 3U)) 
                                                      << 5U)) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                       >> 2U)) 
                                                     << 5U)) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                      >> 1U)) 
                                                    << 5U)))) 
                              | (0xffffffe0U & ((((
                                                   ((((~ 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                        >> 2U)) 
                                                      << 5U) 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                        << 4U)) 
                                                    & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                       << 5U)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                       >> 4U)) 
                                                     << 5U)) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                      >> 3U)) 
                                                    << 5U)) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                     >> 2U)) 
                                                   << 5U)))) 
                             | (0xffffffe0U & (((((
                                                   ((~ 
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                      >> 2U)) 
                                                    << 5U) 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                      << 4U)) 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                     << 5U)) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                     >> 4U)) 
                                                   << 5U)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                    >> 3U)) 
                                                  << 5U)))) 
                            | (0xffffffe0U & (((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                  << 3U) 
                                                 & ((~ 
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                      >> 1U)) 
                                                    << 5U)) 
                                                & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                   << 5U)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                   >> 4U)) 
                                                 << 5U)))) 
                           | (0xffffffe0U & ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                << 3U) 
                                               & ((~ 
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                    >> 1U)) 
                                                  << 5U)) 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                 << 5U)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2))))) 
                 | ((0x10U & ((((0xfffffff0U & ((((
                                                   ((((((~ 
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                          >> 2U)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                            >> 1U))) 
                                                       & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                                                      << 4U) 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                    & ((~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                         >> 3U)) 
                                                       << 4U)) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                        >> 2U)) 
                                                      << 4U)) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                       >> 1U)) 
                                                     << 4U)) 
                                                 & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                    << 4U)) 
                                                | ((((((((~ 
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                           >> 2U)) 
                                                         & (~ 
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                             >> 1U))) 
                                                        & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                       << 4U) 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                     & ((~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                          >> 3U)) 
                                                        << 4U)) 
                                                    & ((~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                         >> 2U)) 
                                                       << 4U)) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                        >> 1U)) 
                                                      << 4U)))) 
                                | (0xfffffff0U & ((
                                                   (((((~ 
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                         >> 2U)) 
                                                       << 4U) 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                         << 3U)) 
                                                     & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                        << 4U)) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                        >> 3U)) 
                                                      << 4U)) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                       >> 2U)) 
                                                     << 4U)))) 
                               | (0xfffffff0U & (((
                                                   (((~ 
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                       >> 2U)) 
                                                     << 4U) 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                       << 3U)) 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                      << 4U)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                      >> 3U)) 
                                                    << 4U)))) 
                              | (0xfffffff0U & ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                   << 2U) 
                                                  & ((~ 
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                       >> 1U)) 
                                                     << 4U)) 
                                                 & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                    << 4U)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2))))) 
                    | ((8U & (((0xfffffff8U & (((((
                                                   ((((~ 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                        >> 2U)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                          >> 1U))) 
                                                     & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                                                    << 3U) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                       >> 2U)) 
                                                     << 3U)) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                      >> 1U)) 
                                                    << 3U)) 
                                                & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                   << 3U)) 
                                               | (((((((~ 
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                         >> 2U)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                           >> 1U))) 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                     << 3U) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                        >> 2U)) 
                                                      << 3U)) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                       >> 1U)) 
                                                     << 3U)))) 
                               | (0xfffffff8U & (((
                                                   (((~ 
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                       >> 2U)) 
                                                     << 3U) 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                       << 2U)) 
                                                   & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                      << 3U)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                      >> 2U)) 
                                                    << 3U)))) 
                              | (0xfffffff8U & ((((
                                                   (~ 
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                     >> 2U)) 
                                                   << 3U) 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                     << 2U)) 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                    << 3U)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2))))) 
                       | ((4U & ((0xfffffffcU & (((
                                                   (((((~ 
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                         >> 2U)) 
                                                       & (~ 
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                           >> 1U))) 
                                                      & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                                                     << 2U) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                        >> 1U)) 
                                                      << 2U)) 
                                                  & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                     << 2U)) 
                                                 | ((((((~ 
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                          >> 2U)) 
                                                        & (~ 
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                            >> 1U))) 
                                                       & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                      << 2U) 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                                    & ((~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2) 
                                                         >> 1U)) 
                                                       << 2U)))) 
                                 | (0xfffffffcU & (
                                                   ((((~ 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                        >> 2U)) 
                                                      << 2U) 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                        << 1U)) 
                                                    & ((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                       << 2U)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2))))) 
                          | ((2U & (((((((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                             >> 2U)) 
                                         & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                               >> 1U))) 
                                        & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                                       << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                     & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)) 
                                        << 1U)) | (
                                                   ((((~ 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                        >> 2U)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                                          >> 1U))) 
                                                     & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                                    << 1U) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)))) 
                             | (1U & ((((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                            >> 2U)) 
                                        & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                                              >> 1U))) 
                                       & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_br_start_error 
        = (((((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
              & (3U == (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                      >> 0x10U))))) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval) 
                >> 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                           >> 1U)) | ((((3U == (3U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                        & (3U == (3U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0x20U))))) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval) 
                                          >> 3U)) & 
                                      ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                       >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U] 
        = ((7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U]) 
           | (0xfffffff8U & ((0xfffffff8U & (((((((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                  & (3U 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x20U))))) 
                                                 << 3U) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                                   << 1U)) 
                                               | ((((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                    & (3U 
                                                       == 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x20U))))) 
                                                   << 3U) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend))) 
                                              | ((((3U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                   & (3U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x10U))))) 
                                                  << 3U) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                                    << 2U))) 
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
                                                 << 3U) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                                   << 1U)))) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_br_start_error) 
                                << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_brp_pc4 
        = ((((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
               & (3U != (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                       >> 0x20U))))) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignpc4) 
                 >> 2U)) | (((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                             & (3U == (3U & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                     >> 0x20U))))) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignpc4) 
                               >> 3U))) | (((3U != 
                                             (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                            & (3U != 
                                               (3U 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0x10U))))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignpc4) 
                                              >> 1U))) 
           | (((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
               & (3U == (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                       >> 0x10U))))) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignpc4) 
                 >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U] 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U]) 
           | (0xfffffe00U & (((((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                  & (3U != (3U & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                          >> 0x20U))))) 
                                 << 9U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignret) 
                                           << 7U)) 
                               | ((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                    & (3U == (3U & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                            >> 0x20U))))) 
                                   << 9U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignret) 
                                             << 6U))) 
                              | ((((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                   & (3U != (3U & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0x10U))))) 
                                  << 9U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignret) 
                                            << 8U))) 
                             | ((((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                  & (3U == (3U & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                          >> 0x10U))))) 
                                 << 9U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignret) 
                                           << 7U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U] 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U]) 
           | (0xfffffc00U & ((((((0xfffffc00U & (((
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                   & (3U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x20U))))) 
                                                  << 0xaU) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignway) 
                                                    << 8U))) 
                                 | (0xfffffc00U & (
                                                   ((((3U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                      & (3U 
                                                         == 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x20U))))) 
                                                     << 0xaU) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                                       << 8U)) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignway) 
                                                      << 8U)))) 
                                | (0xfffffc00U & ((
                                                   (((3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                     & (3U 
                                                        == 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0x20U))))) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                                        >> 2U))) 
                                                   << 0xaU) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignway) 
                                                     << 7U)))) 
                               | (0xfffffc00U & (((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                   & (3U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x10U))))) 
                                                  << 0xaU) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignway) 
                                                    << 9U)))) 
                              | (0xfffffc00U & ((((
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                   & (3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x10U))))) 
                                                  << 0xaU) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                                    << 9U)) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignway) 
                                                   << 9U)))) 
                             | (0xfffffc00U & (((((3U 
                                                   != 
                                                   (3U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                  & (3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x10U))))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                                     >> 1U))) 
                                                << 0xaU) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignway) 
                                                  << 8U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U] 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U]) 
           | (0xffc00000U & (((((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                  & (3U != (3U & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                          >> 0x20U))))) 
                                 << 0x16U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist1) 
                                              << 0x14U)) 
                               | ((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                    & (3U == (3U & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                            >> 0x20U))))) 
                                   << 0x16U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist1) 
                                                << 0x13U))) 
                              | ((((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                   & (3U != (3U & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0x10U))))) 
                                  << 0x16U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist1) 
                                               << 0x15U))) 
                             | ((((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                  & (3U == (3U & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                          >> 0x10U))))) 
                                 << 0x16U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist1) 
                                              << 0x14U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U] 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U]) 
           | (0xffe00000U & (((((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                  & (3U != (3U & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                          >> 0x20U))))) 
                                 << 0x15U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist0) 
                                              << 0x13U)) 
                               | ((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                    & (3U == (3U & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                            >> 0x20U))))) 
                                   << 0x15U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist0) 
                                                << 0x12U))) 
                              | ((((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                   & (3U != (3U & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0x10U))))) 
                                  << 0x15U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist0) 
                                               << 0x14U))) 
                             | ((((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                  & (3U == (3U & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                          >> 0x10U))))) 
                                 << 0x15U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist0) 
                                              << 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_ends_f1 
        = ((((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
               & (3U != (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                       >> 0x20U))))) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfromf1) 
                 >> 1U)) | (((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                             & (3U == (3U & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                     >> 0x20U))))) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfromf1) 
                               >> 2U))) | (((3U != 
                                             (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                            & (3U != 
                                               (3U 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0x10U))))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfromf1))) 
           | (((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
               & (3U == (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                       >> 0x10U))))) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfromf1) 
                 >> 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U] 
        = ((0x7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U]) 
           | (0xff800000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_ends_f1)
                               ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                          >> 5U)) : (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                             >> 5U))) 
                             << 0x17U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U] 
        = ((8U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U]) 
           | (7U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_ends_f1)
                      ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                 >> 5U)) : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                    >> 5U))) 
                    >> 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U] 
        = ((0xffff07ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U]) 
           | (0xf800U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_ends_f1)
                           ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff)
                           : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff)) 
                         << 0xbU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U]) 
           | (0xffff0000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_ends_f1)
                               ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                          >> 0x11U))
                               : (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                          >> 0x11U))) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U] 
        = ((0xffff8000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U]) 
           | (0x7fffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_ends_f1)
                           ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                      >> 0x11U)) : (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                            >> 0x11U))) 
                         >> 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U] 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U]) 
           | (0xfff80000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_br_start_error) 
                             << 0x13U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U] 
        = ((0xfff9ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U]) 
           | (0x60000U & ((((((((- (IData)(((3U == 
                                             (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                            & (3U != 
                                               (3U 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0x20U))))))) 
                                | (- (IData)((((3U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                               & (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x20U))))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                                 >> 2U))))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc_hash)) 
                              << 0x11U) | (((- (IData)(
                                                       (((3U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                         & (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                        >> 0x20U))))) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                                            >> 2U))))) 
                                            << 0x11U) 
                                           & (((0xfffe0000U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fourthpc 
                                                   << 0xeU)) 
                                               ^ (0xfffe0000U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fourthpc 
                                                     << 0xcU))) 
                                              ^ (0xfffe0000U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fourthpc 
                                                    << 0xaU))))) 
                            | (((- (IData)(((3U != 
                                             (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                            & (3U != 
                                               (3U 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0x10U))))))) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc_hash)) 
                               << 0x11U)) | (((- (IData)(
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
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                                             >> 1U)))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc_hash)) 
                                             << 0x11U)) 
                          | (((- (IData)((((3U != (3U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                           & (3U == 
                                              (3U & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0x10U))))) 
                                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                                >> 1U))))) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc_hash)) 
                             << 0x11U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U] 
        = ((0xfffffe00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U]) 
           | (0x1ffU & (((((((- (IData)(((3U == (3U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                         & (3U != (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x20U))))))) 
                             | (- (IData)((((3U == 
                                             (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                            & (3U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0x20U))))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                              >> 2U))))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdbrtag_hash)) 
                           | ((- (IData)((((3U == (3U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                           & (3U == 
                                              (3U & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0x20U))))) 
                                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                                >> 2U))))) 
                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fourthpc 
                                  >> 0xeU) ^ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fourthpc 
                                              >> 5U)))) 
                          | ((- (IData)(((3U != (3U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                         & (3U != (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x10U))))))) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondbrtag_hash))) 
                         | ((- (IData)((((3U != (3U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                         & (3U == (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x10U))))) 
                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                           >> 1U)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondbrtag_hash))) 
                        | ((- (IData)((((3U != (3U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                        & (3U == (3U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0x10U))))) 
                                       & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                             >> 1U))))) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdbrtag_hash)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U] 
        = ((0xfffe7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U]) 
           | (0x18000U & ((((((((- (IData)(((3U == 
                                             (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                            & (3U != 
                                               (3U 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0x20U))))))) 
                                << 0xfU) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc 
                                            << 0xeU)) 
                              | (((- (IData)((((3U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                               & (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x20U))))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                                 >> 2U)))) 
                                  << 0xfU) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc 
                                              << 0xeU))) 
                             | (((- (IData)((((3U == 
                                               (3U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                              & (3U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0x20U))))) 
                                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                                   >> 2U))))) 
                                 << 0xfU) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fourthpc 
                                             << 0xeU))) 
                            | (((- (IData)(((3U != 
                                             (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                            & (3U != 
                                               (3U 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0x10U))))))) 
                                << 0xfU) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
                                            << 0xeU))) 
                           | (((- (IData)((((3U != 
                                             (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                            & (3U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0x10U))))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                              >> 1U)))) 
                               << 0xfU) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
                                           << 0xeU))) 
                          | (((- (IData)((((3U != (3U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                           & (3U == 
                                              (3U & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0x10U))))) 
                                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                                >> 1U))))) 
                              << 0xfU) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc 
                                          << 0xeU)))));
    __Vtemp1160 = (((((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U] 
                         >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_brp_pc4)) 
                       & (3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))) 
                      & (3U != (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                              >> 0x20U))))) 
                     | ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U] 
                           >> 3U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_brp_pc4))) 
                         & (3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))) 
                        & (3U == (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                >> 0x20U)))))) 
                    | ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U] 
                          >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_brp_pc4)) 
                        & (3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))) 
                       & (3U != (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                               >> 0x10U)))))) 
                   | ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U] 
                         >> 3U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i1_brp_pc4))) 
                       & (3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))) 
                      & (3U == (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                              >> 0x10U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U] 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U]) 
           | (0xfff00000U & (__Vtemp1160 << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_br_start_error 
        = (((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval) 
               >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U] 
        = ((7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U]) 
           | (0xfffffff8U & (((((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend)) 
                               << 3U) | (0xfffffff8U 
                                         & (((3U == 
                                              (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                             << 3U) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                               << 2U)))) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_br_start_error) 
                                << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_brp_pc4 
        = (((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignpc4)) 
           | ((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignpc4) 
                 >> 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U] 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
           | (0xfffffe00U & ((((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignret)) 
                              << 9U) | (0xfffffe00U 
                                        & (((3U == 
                                             (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                            << 9U) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignret) 
                                              << 8U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U] 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
           | (0x400U & (((1U & ((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend)))
                          ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignway)
                          : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignway) 
                             >> 1U)) << 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U] 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
           | (0xffc00000U & ((((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist1)) 
                              << 0x16U) | (0xffc00000U 
                                           & (((3U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                               << 0x16U) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist1) 
                                                 << 0x15U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U] 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
           | (0xffe00000U & ((((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist0)) 
                              << 0x15U) | (0xffe00000U 
                                           & (((3U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                               << 0x15U) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist0) 
                                                 << 0x14U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_ends_f1 
        = ((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfromf1));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U] 
        = ((0x7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
           | (0xff800000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_ends_f1)
                               ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                          >> 5U)) : (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                             >> 5U))) 
                             << 0x17U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U] 
        = ((8U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U]) 
           | (7U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_ends_f1)
                      ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                 >> 5U)) : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                    >> 5U))) 
                    >> 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U] 
        = ((0xffff07ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
           | (0xf800U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_ends_f1)
                           ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff)
                           : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff)) 
                         << 0xbU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
           | (0xffff0000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_ends_f1)
                               ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                          >> 0x11U))
                               : (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                          >> 0x11U))) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U] 
        = ((0xffff8000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
           | (0x7fffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_ends_f1)
                           ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                      >> 0x11U)) : (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                            >> 0x11U))) 
                         >> 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U] 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
           | (0xfff80000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_br_start_error) 
                             << 0x13U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U] 
        = ((0xfff9ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
           | (0x60000U & (((1U & ((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend)))
                            ? (((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout 
                                 >> 3U) ^ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout 
                                           >> 5U)) 
                               ^ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout 
                                  >> 7U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc_hash)) 
                          << 0x11U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U] 
        = ((0xfffffe00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
           | (0x1ffU & ((1U & ((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend)))
                         ? ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout 
                             >> 0xeU) ^ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout 
                                         >> 5U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondbrtag_hash))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U] 
        = ((0xfffe7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
           | (0x18000U & (((1U & ((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend)))
                            ? (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout 
                               >> 1U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
                                         >> 1U)) << 0xfU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U] 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
           | (0xfff00000U & ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U] 
                                << 0x11U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_brp_pc4) 
                                             << 0x14U)) 
                              & ((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                 << 0x14U)) | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U] 
                                                 << 0x11U) 
                                                & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_brp_pc4)) 
                                                   << 0x14U)) 
                                               & ((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                  << 0x14U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfinalperr 
        = (0xfU & (((((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                          >> 3U)))) 
                        & (- (IData)((1U & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                    >> 0x30U)))))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                             >> 2U) 
                                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                  >> 3U)))))) 
                          & ((8U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                             >> 0x30U)) 
                                    << 3U)) | (7U & 
                                               (- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                                      >> 0x30U))))))))) 
                      | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                            >> 1U) 
                                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                 >> 2U)))))) 
                         & ((0xcU & ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                                            >> 0x30U))))) 
                                     << 2U)) | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                                         >> 0x30U))))))))) 
                     | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                >> 1U)))))) 
                        & ((0xeU & ((- (IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                                           >> 0x30U))))) 
                                    << 1U)) | (1U & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                             >> 0x30U)))))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndataperr)) 
                   & (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                           >> 3U)))) 
                         & (- (IData)((1U & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                     >> 0x31U)))))) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                              >> 2U) 
                                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                   >> 3U)))))) 
                           & ((8U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                              >> 0x31U)) 
                                     << 3U)) | (7U 
                                                & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                                         >> 0x31U))))))))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                             >> 1U) 
                                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                  >> 2U)))))) 
                          & ((0xcU & ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                                             >> 0x31U))))) 
                                      << 2U)) | (3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                                          >> 0x31U))))))))) 
                      | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                 >> 1U)))))) 
                         & ((0xeU & ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                                            >> 0x31U))))) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                           >> 0x31U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l1 
        = ((0xffffff80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l1) 
           | (0x7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__o));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l1 
        = ((0xffff8fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l1) 
           | (0x7000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__o));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l1 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l1) 
           | (0xfe000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__o));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l1 
        = ((0xfe0fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l1) 
           | (0x1f00000U & (((0xfff00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__o) 
                             | (((- (IData)((1U & (
                                                   (((((((IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x1fU)) 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0x16U))) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x11U))) 
                                                       | (((IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0x1fU)) 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                      >> 0x15U))) 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x11U)))) 
                                                      | (((IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x1fU)) 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x14U))) 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0x11U)))) 
                                                     | (((IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x1fU)) 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0x13U))) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x11U)))) 
                                                    | (((IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x1fU)) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x12U))) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x11U)))) 
                                                   | (((IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                >> 0x1fU)) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x1eU))) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x11U))))))) 
                                 & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                            >> 0x12U))) 
                                << 0x14U)) | (((- (IData)(
                                                          (1U 
                                                           & (((((((IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                            >> 0x1fU)) 
                                                                   & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x1eU)))) 
                                                                  & (~ (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x1dU)))) 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                            >> 0x1bU))) 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                           >> 0x1aU))) 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 0x10U))) 
                                                              | (((IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                           >> 0x1fU)) 
                                                                  & (~ (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x11U)))) 
                                                                 & (~ (IData)(
                                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                               >> 0x10U)))))))) 
                                               << 0x14U) 
                                              & (0x800000U 
                                                 | (0x700000U 
                                                    & ((IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                >> 0x12U)) 
                                                       << 0x14U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l1 
        = ((0xfff07fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l1) 
           | (0xf8000U & ((((0xffff8000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__o) 
                            | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__rdrs1))) 
                                & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                           >> 0x17U))) 
                               << 0xfU)) | (((- (IData)(
                                                        (1U 
                                                         & (((((IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                        >> 0x1fU)) 
                                                               & (~ (IData)(
                                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                             >> 0x1dU)))) 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                         >> 0x10U))) 
                                                             | (((IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 0x1fU)) 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                            >> 0x1eU))) 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                           >> 0x10U)))) 
                                                            | (((IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                         >> 0x1eU)) 
                                                                & (~ (IData)(
                                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                              >> 0x11U)))) 
                                                               & (~ (IData)(
                                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                             >> 0x10U)))))))) 
                                             << 0xfU) 
                                            & (0x40000U 
                                               | (0x38000U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x17U)) 
                                                     << 0xfU))))) 
                          | (0x10000U & ((- (IData)(
                                                    (1U 
                                                     & ((((((((((~ (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                            >> 0x1fU))) 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                           >> 0x1eU))) 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 0x1dU))) 
                                                              & (~ (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                            >> 0x1bU)))) 
                                                             & (~ (IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                           >> 0x1aU)))) 
                                                            & (~ (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 0x19U)))) 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                      >> 0x18U))) 
                                                          & (~ (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                        >> 0x17U)))) 
                                                         | ((IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x1eU)) 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                       >> 0x11U)))) 
                                                        | (((~ (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                        >> 0x1eU))) 
                                                            & (~ (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 0x11U)))) 
                                                           & (~ (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                         >> 0x10U)))))))) 
                                         << 0xfU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l1 
        = ((0xfffff07fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l1) 
           | (0xf80U & ((((((0xffffff80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__o) 
                            | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__rdrd))) 
                                & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                           >> 0x17U))) 
                               << 7U)) | (((- (IData)(
                                                      (1U 
                                                       & ((((IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x1fU)) 
                                                            & (~ (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 0x1eU)))) 
                                                           & (~ (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                         >> 0x1dU)))) 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x10U)))))) 
                                           << 7U) & 
                                          (0x400U | 
                                           (0x380U 
                                            & ((IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                        >> 0x17U)) 
                                               << 7U))))) 
                          | (((- (IData)((1U & (((~ (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0x1fU))) 
                                                 & (~ (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x11U)))) 
                                                & (~ (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x10U))))))) 
                              << 7U) & (0x400U | (0x380U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x12U)) 
                                                     << 7U))))) 
                         | (0x80U & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__rdeq1))) 
                                     << 7U))) | (0x100U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((((((((~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x1fU))) 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x1eU))) 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x1dU))) 
                                                                       & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x1bU)))) 
                                                                      & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x1aU)))) 
                                                                     & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x19U)))) 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                               >> 0x18U))) 
                                                                   & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x17U))))))) 
                                                    << 7U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l1 
        = ((0xffffff80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l1) 
           | (0x7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__o));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l1 
        = ((0xffff8fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l1) 
           | (0x7000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__o));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l1 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l1) 
           | (0xfe000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__o));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l1 
        = ((0xfe0fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l1) 
           | (0x1f00000U & (((0xfff00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__o) 
                             | (((- (IData)((1U & (
                                                   (((((((IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x2fU)) 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0x26U))) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x21U))) 
                                                       | (((IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0x2fU)) 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                      >> 0x25U))) 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x21U)))) 
                                                      | (((IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x2fU)) 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x24U))) 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0x21U)))) 
                                                     | (((IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x2fU)) 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0x23U))) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x21U)))) 
                                                    | (((IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x2fU)) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x22U))) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x21U)))) 
                                                   | (((IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                >> 0x2fU)) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x2eU))) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x21U))))))) 
                                 & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                            >> 0x22U))) 
                                << 0x14U)) | (((- (IData)(
                                                          (1U 
                                                           & (((((((IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                            >> 0x2fU)) 
                                                                   & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x2eU)))) 
                                                                  & (~ (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x2dU)))) 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                            >> 0x2bU))) 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                           >> 0x2aU))) 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 0x20U))) 
                                                              | (((IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                           >> 0x2fU)) 
                                                                  & (~ (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x21U)))) 
                                                                 & (~ (IData)(
                                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                               >> 0x20U)))))))) 
                                               << 0x14U) 
                                              & (0x800000U 
                                                 | (0x700000U 
                                                    & ((IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                >> 0x22U)) 
                                                       << 0x14U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l1 
        = ((0xfff07fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l1) 
           | (0xf8000U & ((((0xffff8000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__o) 
                            | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__rdrs1))) 
                                & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                           >> 0x27U))) 
                               << 0xfU)) | (((- (IData)(
                                                        (1U 
                                                         & (((((IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                        >> 0x2fU)) 
                                                               & (~ (IData)(
                                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                             >> 0x2dU)))) 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                         >> 0x20U))) 
                                                             | (((IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 0x2fU)) 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                            >> 0x2eU))) 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                           >> 0x20U)))) 
                                                            | (((IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                         >> 0x2eU)) 
                                                                & (~ (IData)(
                                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                              >> 0x21U)))) 
                                                               & (~ (IData)(
                                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                             >> 0x20U)))))))) 
                                             << 0xfU) 
                                            & (0x40000U 
                                               | (0x38000U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x27U)) 
                                                     << 0xfU))))) 
                          | (0x10000U & ((- (IData)(
                                                    (1U 
                                                     & ((((((((((~ (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                            >> 0x2fU))) 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                           >> 0x2eU))) 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 0x2dU))) 
                                                              & (~ (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                            >> 0x2bU)))) 
                                                             & (~ (IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                           >> 0x2aU)))) 
                                                            & (~ (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 0x29U)))) 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                      >> 0x28U))) 
                                                          & (~ (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                        >> 0x27U)))) 
                                                         | ((IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x2eU)) 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                       >> 0x21U)))) 
                                                        | (((~ (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                        >> 0x2eU))) 
                                                            & (~ (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 0x21U)))) 
                                                           & (~ (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                         >> 0x20U)))))))) 
                                         << 0xfU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l1 
        = ((0xfffff07fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l1) 
           | (0xf80U & ((((((0xffffff80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__o) 
                            | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__rdrd))) 
                                & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                           >> 0x27U))) 
                               << 7U)) | (((- (IData)(
                                                      (1U 
                                                       & ((((IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x2fU)) 
                                                            & (~ (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 0x2eU)))) 
                                                           & (~ (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                         >> 0x2dU)))) 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x20U)))))) 
                                           << 7U) & 
                                          (0x400U | 
                                           (0x380U 
                                            & ((IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                        >> 0x27U)) 
                                               << 7U))))) 
                          | (((- (IData)((1U & (((~ (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0x2fU))) 
                                                 & (~ (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x21U)))) 
                                                & (~ (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x20U))))))) 
                              << 7U) & (0x400U | (0x380U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x22U)) 
                                                     << 7U))))) 
                         | (0x80U & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__rdeq1))) 
                                     << 7U))) | (0x100U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((((((((~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x2fU))) 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x2eU))) 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x2dU))) 
                                                                       & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x2bU)))) 
                                                                      & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x2aU)))) 
                                                                     & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x29U)))) 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                               >> 0x28U))) 
                                                                   & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x27U))))))) 
                                                    << 7U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1 
        = ((0xffffff80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1) 
           | (0x7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__o));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1 
        = ((0xffff8fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1) 
           | (0x7000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__o));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1) 
           | (0xfe000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__o));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1 
        = ((0xfe0fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1) 
           | (0x1f00000U & (((0xfff00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__o) 
                             | (((- (IData)((1U & (
                                                   (((((((IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0xfU)) 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 6U))) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 1U))) 
                                                       | (((IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0xfU)) 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                      >> 5U))) 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 1U)))) 
                                                      | (((IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0xfU)) 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 4U))) 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 1U)))) 
                                                     | (((IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0xfU)) 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 3U))) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 1U)))) 
                                                    | (((IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0xfU)) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 2U))) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 1U)))) 
                                                   | (((IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                >> 0xfU)) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0xeU))) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 1U))))))) 
                                 & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                            >> 2U))) 
                                << 0x14U)) | (((- (IData)(
                                                          (1U 
                                                           & (((((((IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                            >> 0xfU)) 
                                                                   & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0xeU)))) 
                                                                  & (~ (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0xdU)))) 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                            >> 0xbU))) 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                           >> 0xaU))) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                                              | (((IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                           >> 0xfU)) 
                                                                  & (~ (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 1U)))) 
                                                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))))) 
                                               << 0x14U) 
                                              & (0x800000U 
                                                 | (0x700000U 
                                                    & ((IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                >> 2U)) 
                                                       << 0x14U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1 
        = ((0xfff07fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1) 
           | (0xf8000U & ((((0xffff8000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__o) 
                            | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__rdrs1))) 
                                & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                           >> 7U))) 
                               << 0xfU)) | (((- (IData)(
                                                        (1U 
                                                         & (((((IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                        >> 0xfU)) 
                                                               & (~ (IData)(
                                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                             >> 0xdU)))) 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                                             | (((IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 0xfU)) 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                            >> 0xeU))) 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                            | (((IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                         >> 0xeU)) 
                                                                & (~ (IData)(
                                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                              >> 1U)))) 
                                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))))) 
                                             << 0xfU) 
                                            & (0x40000U 
                                               | (0x38000U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 7U)) 
                                                     << 0xfU))))) 
                          | (0x10000U & ((- (IData)(
                                                    (1U 
                                                     & ((((((((((~ (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                            >> 0xfU))) 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                           >> 0xeU))) 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 0xdU))) 
                                                              & (~ (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                            >> 0xbU)))) 
                                                             & (~ (IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                           >> 0xaU)))) 
                                                            & (~ (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 9U)))) 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                      >> 8U))) 
                                                          & (~ (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                        >> 7U)))) 
                                                         | ((IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0xeU)) 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                       >> 1U)))) 
                                                        | (((~ (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                        >> 0xeU))) 
                                                            & (~ (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 1U)))) 
                                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))))) 
                                         << 0xfU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1 
        = ((0xfffff07fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1) 
           | (0xf80U & ((((((0xffffff80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__o) 
                            | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__rdrd))) 
                                & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                           >> 7U))) 
                               << 7U)) | (((- (IData)(
                                                      (1U 
                                                       & ((((IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0xfU)) 
                                                            & (~ (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                          >> 0xeU)))) 
                                                           & (~ (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                         >> 0xdU)))) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))) 
                                           << 7U) & 
                                          (0x400U | 
                                           (0x380U 
                                            & ((IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                        >> 7U)) 
                                               << 7U))))) 
                          | (((- (IData)((1U & (((~ (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0xfU))) 
                                                 & (~ (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 1U)))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))))) 
                              << 7U) & (0x400U | (0x380U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 2U)) 
                                                     << 7U))))) 
                         | (0x80U & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__rdeq1))) 
                                     << 7U))) | (0x100U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((((((((~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0xfU))) 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0xeU))) 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0xdU))) 
                                                                       & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0xbU)))) 
                                                                      & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0xaU)))) 
                                                                     & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 9U)))) 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                               >> 8U))) 
                                                                   & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 7U))))))) 
                                                    << 7U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_lower_e4 
        = (((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
               >> 4U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__cond_mispredict)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__target_mispredict)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__valid_ff)) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
        = ((0x1ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U]) 
           | (0x200U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__valid_ff)
                          ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__cond_mispredict) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__target_mispredict)) 
                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 2U))) : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[2U] 
                                               >> 9U)) 
                        << 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
        = ((0x2ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U]) 
           | (0x100U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__valid_ff)
                          ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__actual_taken)
                          : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[2U] 
                             >> 8U)) << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
        = ((0x3dfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U]) 
           | (0x20U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__valid_ff)
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__newhist) 
                            >> 1U) : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[2U] 
                                      >> 5U)) << 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
        = ((0x3efU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U]) 
           | (0x10U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__valid_ff)
                         ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__newhist)
                         : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[2U] 
                            >> 4U)) << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[1U] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[1U]) 
           | (0xff000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_br_offset) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[2U] 
        = ((0x3f0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[2U]) 
           | (0xffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_br_offset) 
                           >> 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_br_error 
        = (1U & ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                    >> 0x14U) | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U] 
                                  >> 3U) & (~ ((((IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp_raw 
                                                          >> 0x1cU)) 
                                                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall_raw)) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pja_raw)) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret_raw))))) 
                  | ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U] 
                        >> 3U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                  >> 0x16U)) & ((0xfffU 
                                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U] 
                                                     << 9U) 
                                                    | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                                       >> 0x17U))) 
                                                != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_br_offset))) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret_raw)))) 
                 | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U] 
                      >> 3U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[0U] 
                                >> 9U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret_raw)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_lo_dc3 
        = ((0xfc000000U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__dout_plus_parity 
                                    >> 0x20U)) << 0x1aU)) 
           | ((0x3fff800U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__dout_plus_parity 
                                      >> 0x10U)) << 0xbU)) 
              | ((0x7f0U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__dout_plus_parity 
                                     >> 8U)) << 4U)) 
                 | ((0xeU & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__dout_plus_parity 
                                      >> 4U)) << 1U)) 
                    | (1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__dout_plus_parity 
                                     >> 2U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_raw 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw 
                    >> 0x17U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_case));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_raw 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw 
                    >> 0x17U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_case));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_lower_e4 
        = (((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
               >> 4U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__cond_mispredict)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__target_mispredict)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__valid_ff)) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
        = ((0x1ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U]) 
           | (0x200U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__valid_ff)
                          ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__cond_mispredict) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__target_mispredict)) 
                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 2U))) : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[2U] 
                                               >> 9U)) 
                        << 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
        = ((0x2ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U]) 
           | (0x100U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__valid_ff)
                          ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__actual_taken)
                          : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[2U] 
                             >> 8U)) << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
        = ((0x3dfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U]) 
           | (0x20U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__valid_ff)
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__newhist) 
                            >> 1U) : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[2U] 
                                      >> 5U)) << 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
        = ((0x3efU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U]) 
           | (0x10U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__valid_ff)
                         ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__newhist)
                         : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[2U] 
                            >> 4U)) << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__is_ldst_hi_dc3) 
             & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check) 
                  >> 6U))) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__is_ldst_lo_dc3) 
                               & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check) 
                                    >> 6U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_hi_dc3 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__is_ldst_hi_dc3) 
            & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check) 
              >> 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_result_dc3 
        = (((((0xffU & ((- (IData)((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                           >> 0xcU) 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                             >> 0x12U))))) 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_dc3)) 
              | (0xffffU & ((- (IData)((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                               >> 0xcU) 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                 >> 0x11U))))) 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_dc3))) 
             | ((- (IData)((1U & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                      >> 0xcU)) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                   >> 0x12U))))) 
                & ((0xffffff00U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_dc3 
                                                >> 7U)))) 
                                   << 8U)) | (0xffU 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_dc3)))) 
            | ((- (IData)((1U & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                     >> 0xcU)) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                  >> 0x11U))))) 
               & ((0xffff0000U & ((- (IData)((1U & 
                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_dc3 
                                               >> 0xfU)))) 
                                  << 0x10U)) | (0xffffU 
                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_dc3)))) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                >> 0x10U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_dc3));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_FreezePtrff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_load_kill_wen)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
                 & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                    >> 0x1cU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall 
        = (1U & ((((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)) 
                   | (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_err_wb) 
                     & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__ran_ff__dout) 
                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_addr 
        = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_wb)
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_error_addr_wb)
                  : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                      << 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                  >> 0x16U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in 
        = (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                  << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                              >> 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in) 
                     << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in) 
                               << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in) 
                     << 1U) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in)) 
                               << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout)) 
           | (2U & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in) 
                         >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in)) 
                    << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout)) 
           | (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in) 
                        >> 1U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_bank_decoded 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__2__Vfuncout;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (3U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                     & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                        >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                     & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                        >> 0xdU) : 
                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                     >> 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0xfffffff3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (0xcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                        & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                           >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                        & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                           >> 0xdU)
                                        : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                           >> 4U))) 
                      << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0xffffffcfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (0x30U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                         & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                         & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0xffffff3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (0xc0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                         & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                         & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0xfffffcffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (0x300U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0xfffff3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (0xc00U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0xffffcfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (0x3000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0xffff3fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (0xc000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xeU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0xfffcffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (0x30000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0xfff3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (0xc0000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0xffcfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (0x300000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             & (0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             & (0xaU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0xff3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (0xc00000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             & (0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             & (0xbU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x16U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0xfcffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (0x3000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              & (0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              & (0xcU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0xf3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (0xc000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              & (0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              & (0xdU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x1aU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0xcfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (0x30000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               & (0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               & (0xeU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U] 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[0U]) 
           | (0xc0000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               & (0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               & (0xfU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1eU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (3U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                      >> 1U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                        >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                      >> 1U) & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                        >> 0xdU) : 
                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                     >> 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0xfffffff3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (0xcU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                         >> 1U) & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                           >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                         >> 1U) & (1U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                           >> 0xdU)
                                        : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                           >> 4U))) 
                      << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0xffffffcfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (0x30U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          >> 1U) & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          >> 1U) & 
                                         (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0xffffff3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (0xc0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          >> 1U) & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          >> 1U) & 
                                         (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0xfffffcffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (0x300U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           >> 1U) & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           >> 1U) & 
                                          (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0xfffff3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (0xc00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           >> 1U) & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           >> 1U) & 
                                          (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0xffffcfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (0x3000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            >> 1U) & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            >> 1U) 
                                           & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0xffff3fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (0xc000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            >> 1U) & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            >> 1U) 
                                           & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xeU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0xfffcffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (0x30000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             >> 1U) & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             >> 1U) 
                                            & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0xfff3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (0xc0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             >> 1U) & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             >> 1U) 
                                            & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0xffcfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (0x300000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 1U) & (0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              >> 1U) 
                                             & (0xaU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0xff3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (0xc00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 1U) & (0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              >> 1U) 
                                             & (0xbU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x16U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0xfcffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (0x3000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               >> 1U) & (0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               >> 1U) 
                                              & (0xcU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0xf3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (0xc000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               >> 1U) & (0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               >> 1U) 
                                              & (0xdU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x1aU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0xcfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (0x30000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                >> 1U) & (0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                                >> 1U) 
                                               & (0xeU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U] 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[1U]) 
           | (0xc0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                >> 1U) & (0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                                >> 1U) 
                                               & (0xfU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1eU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (3U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                      >> 2U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                        >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                      >> 2U) & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                        >> 0xdU) : 
                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                     >> 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0xfffffff3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (0xcU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                         >> 2U) & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                           >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                         >> 2U) & (1U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                           >> 0xdU)
                                        : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                           >> 4U))) 
                      << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0xffffffcfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (0x30U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          >> 2U) & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          >> 2U) & 
                                         (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0xffffff3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (0xc0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          >> 2U) & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          >> 2U) & 
                                         (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0xfffffcffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (0x300U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           >> 2U) & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           >> 2U) & 
                                          (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0xfffff3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (0xc00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           >> 2U) & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           >> 2U) & 
                                          (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0xffffcfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (0x3000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            >> 2U) & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            >> 2U) 
                                           & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0xffff3fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (0xc000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            >> 2U) & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            >> 2U) 
                                           & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xeU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0xfffcffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (0x30000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             >> 2U) & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             >> 2U) 
                                            & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0xfff3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (0xc0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             >> 2U) & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             >> 2U) 
                                            & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0xffcfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (0x300000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 2U) & (0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              >> 2U) 
                                             & (0xaU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0xff3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (0xc00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 2U) & (0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              >> 2U) 
                                             & (0xbU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x16U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0xfcffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (0x3000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               >> 2U) & (0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               >> 2U) 
                                              & (0xcU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0xf3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (0xc000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               >> 2U) & (0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               >> 2U) 
                                              & (0xdU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x1aU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0xcfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (0x30000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                >> 2U) & (0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                                >> 2U) 
                                               & (0xeU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U] 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[2U]) 
           | (0xc0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                >> 2U) & (0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                                >> 2U) 
                                               & (0xfU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1eU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (3U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                      >> 3U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                        >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                      >> 3U) & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                        >> 0xdU) : 
                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                     >> 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0xfffffff3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (0xcU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                         >> 3U) & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                           >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                         >> 3U) & (1U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                           >> 0xdU)
                                        : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                           >> 4U))) 
                      << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0xffffffcfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (0x30U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          >> 3U) & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          >> 3U) & 
                                         (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0xffffff3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (0xc0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          >> 3U) & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          >> 3U) & 
                                         (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0xfffffcffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (0x300U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           >> 3U) & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           >> 3U) & 
                                          (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0xfffff3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (0xc00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           >> 3U) & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           >> 3U) & 
                                          (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0xffffcfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (0x3000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            >> 3U) & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            >> 3U) 
                                           & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0xffff3fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (0xc000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            >> 3U) & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            >> 3U) 
                                           & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xeU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0xfffcffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (0x30000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             >> 3U) & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             >> 3U) 
                                            & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0xfff3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (0xc0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             >> 3U) & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             >> 3U) 
                                            & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0xffcfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (0x300000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 3U) & (0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              >> 3U) 
                                             & (0xaU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0xff3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (0xc00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 3U) & (0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              >> 3U) 
                                             & (0xbU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x16U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0xfcffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (0x3000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               >> 3U) & (0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               >> 3U) 
                                              & (0xcU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0xf3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (0xc000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               >> 3U) & (0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               >> 3U) 
                                              & (0xdU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x1aU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0xcfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (0x30000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                >> 3U) & (0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                                >> 3U) 
                                               & (0xeU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U] 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[3U]) 
           | (0xc0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                >> 3U) & (0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                                >> 3U) 
                                               & (0xfU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1eU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (3U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                      >> 4U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                        >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                      >> 4U) & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                        >> 0xdU) : 
                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                     >> 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0xfffffff3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (0xcU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                         >> 4U) & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                           >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                         >> 4U) & (1U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                           >> 0xdU)
                                        : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                           >> 4U))) 
                      << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0xffffffcfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (0x30U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          >> 4U) & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          >> 4U) & 
                                         (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0xffffff3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (0xc0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          >> 4U) & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          >> 4U) & 
                                         (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0xfffffcffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (0x300U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           >> 4U) & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           >> 4U) & 
                                          (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0xfffff3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (0xc00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           >> 4U) & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           >> 4U) & 
                                          (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0xffffcfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (0x3000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            >> 4U) & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            >> 4U) 
                                           & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0xffff3fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (0xc000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            >> 4U) & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            >> 4U) 
                                           & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xeU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0xfffcffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (0x30000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             >> 4U) & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             >> 4U) 
                                            & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0xfff3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (0xc0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             >> 4U) & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             >> 4U) 
                                            & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0xffcfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (0x300000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 4U) & (0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              >> 4U) 
                                             & (0xaU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0xff3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (0xc00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 4U) & (0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              >> 4U) 
                                             & (0xbU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x16U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0xfcffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (0x3000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               >> 4U) & (0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               >> 4U) 
                                              & (0xcU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0xf3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (0xc000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               >> 4U) & (0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               >> 4U) 
                                              & (0xdU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x1aU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0xcfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (0x30000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                >> 4U) & (0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                                >> 4U) 
                                               & (0xeU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U] 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[4U]) 
           | (0xc0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                >> 4U) & (0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                                >> 4U) 
                                               & (0xfU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1eU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (3U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                      >> 5U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                        >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                      >> 5U) & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                        >> 0xdU) : 
                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                     >> 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0xfffffff3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (0xcU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                         >> 5U) & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                           >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                         >> 5U) & (1U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                           >> 0xdU)
                                        : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                           >> 4U))) 
                      << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0xffffffcfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (0x30U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          >> 5U) & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          >> 5U) & 
                                         (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0xffffff3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (0xc0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          >> 5U) & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          >> 5U) & 
                                         (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0xfffffcffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (0x300U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           >> 5U) & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           >> 5U) & 
                                          (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0xfffff3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (0xc00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           >> 5U) & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           >> 5U) & 
                                          (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0xffffcfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (0x3000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            >> 5U) & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            >> 5U) 
                                           & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0xffff3fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (0xc000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            >> 5U) & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            >> 5U) 
                                           & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xeU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0xfffcffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (0x30000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             >> 5U) & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             >> 5U) 
                                            & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0xfff3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (0xc0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             >> 5U) & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             >> 5U) 
                                            & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0xffcfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (0x300000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 5U) & (0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              >> 5U) 
                                             & (0xaU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0xff3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (0xc00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 5U) & (0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              >> 5U) 
                                             & (0xbU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x16U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0xfcffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (0x3000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               >> 5U) & (0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               >> 5U) 
                                              & (0xcU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0xf3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (0xc000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               >> 5U) & (0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               >> 5U) 
                                              & (0xdU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x1aU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0xcfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (0x30000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                >> 5U) & (0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                                >> 5U) 
                                               & (0xeU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U] 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[5U]) 
           | (0xc0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                >> 5U) & (0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                                >> 5U) 
                                               & (0xfU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1eU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (3U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                      >> 6U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                        >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                      >> 6U) & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                        >> 0xdU) : 
                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                     >> 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0xfffffff3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (0xcU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                         >> 6U) & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                           >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                         >> 6U) & (1U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                           >> 0xdU)
                                        : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                           >> 4U))) 
                      << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0xffffffcfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (0x30U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          >> 6U) & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          >> 6U) & 
                                         (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0xffffff3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (0xc0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          >> 6U) & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          >> 6U) & 
                                         (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0xfffffcffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (0x300U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           >> 6U) & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           >> 6U) & 
                                          (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0xfffff3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (0xc00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           >> 6U) & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           >> 6U) & 
                                          (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0xffffcfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (0x3000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            >> 6U) & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            >> 6U) 
                                           & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0xffff3fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (0xc000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            >> 6U) & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            >> 6U) 
                                           & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xeU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0xfffcffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (0x30000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             >> 6U) & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             >> 6U) 
                                            & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0xfff3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (0xc0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             >> 6U) & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             >> 6U) 
                                            & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0xffcfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (0x300000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 6U) & (0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              >> 6U) 
                                             & (0xaU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0xff3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (0xc00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 6U) & (0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              >> 6U) 
                                             & (0xbU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x16U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0xfcffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (0x3000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               >> 6U) & (0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               >> 6U) 
                                              & (0xcU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0xf3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (0xc000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               >> 6U) & (0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               >> 6U) 
                                              & (0xdU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x1aU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0xcfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (0x30000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                >> 6U) & (0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                                >> 6U) 
                                               & (0xeU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U] 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[6U]) 
           | (0xc0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                >> 6U) & (0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                                >> 6U) 
                                               & (0xfU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1eU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (3U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                      >> 7U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                        >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                      >> 7U) & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                        >> 0xdU) : 
                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                     >> 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0xfffffff3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (0xcU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                         >> 7U) & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                           >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                         >> 7U) & (1U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                           >> 0xdU)
                                        : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                           >> 4U))) 
                      << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0xffffffcfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (0x30U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          >> 7U) & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          >> 7U) & 
                                         (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0xffffff3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (0xc0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                          >> 7U) & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                            >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                          >> 7U) & 
                                         (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                            >> 0xdU)
                                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 4U))) 
                       << 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0xfffffcffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (0x300U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           >> 7U) & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           >> 7U) & 
                                          (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0xfffff3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (0xc00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                           >> 7U) & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                           >> 7U) & 
                                          (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                             >> 0xdU)
                                          : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                             >> 4U))) 
                        << 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0xffffcfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (0x3000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            >> 7U) & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            >> 7U) 
                                           & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0xffff3fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (0xc000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                            >> 7U) & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                              >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                            >> 7U) 
                                           & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                           ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                              >> 0xdU)
                                           : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                              >> 4U))) 
                         << 0xeU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0xfffcffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (0x30000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             >> 7U) & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             >> 7U) 
                                            & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0xfff3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (0xc0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                             >> 7U) & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             >> 7U) 
                                            & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xdU)
                                            : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U))) 
                          << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0xffcfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (0x300000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 7U) & (0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              >> 7U) 
                                             & (0xaU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0xff3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (0xc00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                              >> 7U) & (0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                              >> 7U) 
                                             & (0xbU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 0xdU)
                                             : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                >> 4U))) 
                           << 0x16U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0xfcffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (0x3000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               >> 7U) & (0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               >> 7U) 
                                              & (0xcU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0xf3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (0xc000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                               >> 7U) & (0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                 >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                               >> 7U) 
                                              & (0xdU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                 >> 0xdU)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                 >> 4U))) 
                            << 0x1aU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0xcfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (0x30000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                >> 7U) & (0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                                >> 7U) 
                                               & (0xeU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U] 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_wr_data[7U]) 
           | (0xc0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                >> 7U) & (0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xdU) : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                                >> 7U) 
                                               & (0xfU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))
                                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                  >> 0xdU)
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  >> 4U))) 
                             << 0x1eU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed 
        = ((0xcU & (((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[1U] 
                      << 0x1fU) | (0x7ffffffcU & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U] 
                                                  >> 1U))) 
                    ^ (8U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U] 
                             >> 2U)))) | (3U & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                                    >> 0x16U)) 
                                                ^ (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U] 
                                                      >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                  >> 9U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                               >> 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meicurpl_ns 
        = (0xfU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                    & (0xbccU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                             << 0xdU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                               >> 0x13U)))))
                    ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meicurpl)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meipt_ns 
        = (0xfU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                    & (0xbc9U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                             << 0xdU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                               >> 0x13U)))))
                    ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meipt)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel_ns 
        = (3U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                  & (0x7a0U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           << 0xdU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                             >> 0x13U)))))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns 
        = (7U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                  & (0x7d4U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           << 0xdU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                             >> 0x13U)))))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns 
        = (7U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                  & (0x7d7U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           << 0xdU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                             >> 0x13U)))))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
            & (0x7d3U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                 >> 0x13U)))))
            ? (~ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb)
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_b);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
            & (0x7d6U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                 >> 0x13U)))))
            ? (~ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb)
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_b);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
            & (0x305U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                 >> 0x13U)))))
            ? ((0x7ffffffeU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                               >> 1U)) | (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mscratch_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
            & (0x340U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                 >> 0x13U)))))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mscratch);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x1ffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                      & (0x7f8U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               << 0xdU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                 >> 0x13U)))))
                      ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
            & (0x7f9U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                 >> 0x13U)))))
            ? ((0x3800U & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                               >> 0x10U)) << 0xbU)) 
               | ((0x780U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb) 
                  | ((0x40U & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                   >> 6U)) << 6U)) 
                     | (0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb))))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
            & (0x7c0U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                 >> 0x13U)))))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meivt_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x3fffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                         & (0xbc8U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                  << 0xdU) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                    >> 0x13U)))))
                         ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                            >> 0xaU) : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__meivt_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3_ff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
            & (0x323U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                 >> 0x13U)))))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__event_saturate_wb)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4_ff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
            & (0x324U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                 >> 0x13U)))))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__event_saturate_wb)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5_ff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
            & (0x325U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                 >> 0x13U)))))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__event_saturate_wb)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6_ff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
            & (0x326U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                 >> 0x13U)))))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__event_saturate_wb)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_ff__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                  & (0x7d0U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           << 0xdU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                             >> 0x13U)))))
                  ? (~ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb)
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcyclel_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0xb00U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcycleh_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0xb80U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstreth_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0xb82U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcause_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x342U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_micect_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x7f0U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_miccmect_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x7f1U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mdccmect_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x7f2U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0xb03U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0xb83U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0xb04U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0xb84U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0xb05U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0xb85U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0xb06U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0xb86U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstretl_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0xb02U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x7d2U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x7d5U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtval_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x343U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_meicpct_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0xbcaU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x341U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
            & (0x7c2U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                 >> 0x13U))))) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                 >> 0xeU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
            & (0x304U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                     << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                 >> 0x13U)))))
            ? ((0x38U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                         >> 0x19U)) | ((4U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                              >> 9U)) 
                                       | ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                   >> 3U)))))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mstatus_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x300U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mpmc_wb 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
           & (0x7c6U == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                    << 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                >> 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__count_in 
        = (0x3fU & ((- (IData)(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish))) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__flush_lower_ff))) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__shortq_enable))))) 
                    & ((IData)(1U) + ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__count) 
                                      + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__shortq_shift_ff)))));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[0U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[2U] = 0U;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U] 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U]) 
           | (0xc0000000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish)
                               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_waddr_wb)
                               : ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U] 
                                   << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                             >> 0x1eU))) 
                             << 0x1eU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[2U] 
        = (7U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish)
                   ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_waddr_wb)
                   : ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U] 
                       << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                 >> 0x1eU))) >> 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U] 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U]) 
           | (0x2000000U & ((0xfe000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                             & ((~ 
                                                 (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                                  >> 0x1aU)) 
                                                << 0x19U)) 
                                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 2U)) 
                                               << 0x19U))) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish) 
                                & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_waddr_wb))) 
                               << 0x19U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U] 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U]) 
           | (0x1000000U & ((0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 2U)) 
                                               << 0x18U))) 
                            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish) 
                               << 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U] 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U]) 
           | (0x800000U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 2U)) << 0x17U)) 
                           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish)) 
                              << 0x17U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U] 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U]) 
           | (0x10000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                     >> 2U)) << 0x1cU)) 
                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish)) 
                                << 0x1cU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U] 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U]) 
           | (0x8000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                             & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                    >> 2U)) << 0x1bU)) 
                            & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish)) 
                               << 0x1bU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U] 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U]) 
           | (4U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                    & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                           >> 2U)) << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U] 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U]) 
           | (2U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                    & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                           >> 2U)) << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[0U] 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[0U]) 
           | (0x40000U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                          & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                 >> 2U)) << 0x12U))));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_pc_e4 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__divpcff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 = 0U;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_pc_e4 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e4pcff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e4ff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4) 
           | (0x2000000U & ((0xfe000000U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e4ff__dout) 
                            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish) 
                               << 0x19U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
        = ((0x3f0ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4) 
           | (0xf0000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish)
                            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_trigger)
                            : (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e4ff__dout 
                               >> 0x10U)) << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
        = ((0x3fffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish) 
              << 1U));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_e4) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
            = ((0x3f0ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4) 
               | (0xf0000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4_trigger_ff__dout) 
                              << 0xcU)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
            = ((0x3ff0fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4) 
               | (0xf000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4_trigger_ff__dout) 
                             << 0xcU)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4 
        = (1U & ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                    >> 0x18U) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                    >> 0x1aU))) & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                    >> 2U))) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc2_in 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc2_in 
        = ((0x7fffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc2_in) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                    & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc2_up) 
                          & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                                >> 0xbU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc3_in 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc3_in 
        = ((0x7fffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc3_in) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                    & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc2_up) 
                          & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                >> 0xbU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2 
        = ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                  >> 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                              >> 0xdU))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_external_dc2)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc2_up))) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc2) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3) 
           & (~ (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc5))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5 
        = (1U & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                       >> 0xdU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                   >> 0xeU))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc5))) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                       >> 0xbU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_addr 
        = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                             << 5U))) ? 0U : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                                              ((IData)(1U) 
                                               + (3U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                      << 5U))))) 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
              (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))] 
              >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                           << 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_sz 
        = ((0xbU >= (0xfU & ((IData)(3U) * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))))
            ? (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz) 
                     >> (0xfU & ((IData)(3U) * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))))
            : 0U);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write) 
                 >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req 
        = (1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid) 
                     >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
                    & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_rpend) 
                          >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))) 
                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done) 
                         >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))) 
                  & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                             >> (7U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                    << 1U)))))))) 
                 & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write) 
                        >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid) 
                       >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__final_h 
        = (0U != ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dir_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2 
        = ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2)) 
           | ((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                              >> 6U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fgmask_f2) 
                                          >> 6U)) << 6U) 
              | ((((0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                                 >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fgmask_f2) 
                                             >> 5U)) 
                  << 5U) | ((((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                                              >> 4U))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fgmask_f2) 
                                 >> 4U)) << 4U) | (
                                                   (((0U 
                                                      != 
                                                      (0x1fU 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                                                          >> 3U))) 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fgmask_f2) 
                                                        >> 3U)) 
                                                    << 3U) 
                                                   | ((((0U 
                                                         != 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                                                             >> 2U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fgmask_f2) 
                                                           >> 2U)) 
                                                       << 2U) 
                                                      | ((((0U 
                                                            != 
                                                            (0x7fU 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                                                                >> 1U))) 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fgmask_f2) 
                                                              >> 1U)) 
                                                          << 1U) 
                                                         | ((0U 
                                                             != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2)) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fgmask_f2)))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__in 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__Vfuncout 
        = ((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__Vfuncout)) 
           | ((IData)((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__in) 
                                      >> 4U)))) << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__Vfuncout 
        = ((5U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__Vfuncout)) 
           | (2U & ((((0x3fffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__in) 
                                     >> 6U)) | (0x7fffffeU 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__in) 
                                                   >> 5U))) 
                     | (0x3ffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__in) 
                                       >> 2U))) | (0x7ffffffeU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__in) 
                                                      >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__Vfuncout 
        = ((6U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__Vfuncout)) 
           | (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__in) 
                       >> 7U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__in) 
                                 >> 5U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__in) 
                                            >> 3U)) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__in) 
                       >> 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2_enc 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__4__Vfuncout;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__in 
        = (0x7fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                    >> 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__Vfuncout 
        = ((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__Vfuncout)) 
           | ((IData)((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__in) 
                                      >> 4U)))) << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__Vfuncout 
        = ((5U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__Vfuncout)) 
           | (2U & ((((0x3fffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__in) 
                                     >> 6U)) | (0x7fffffeU 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__in) 
                                                   >> 5U))) 
                     | (0x3ffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__in) 
                                       >> 2U))) | (0x7ffffffeU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__in) 
                                                      >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__Vfuncout 
        = ((6U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__Vfuncout)) 
           | (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__in) 
                       >> 7U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__in) 
                                 >> 5U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__in) 
                                            >> 3U)) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__in) 
                       >> 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2_enc_shift 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__encode8_3__5__Vfuncout;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2 
        = (0xffffU & (((((((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                                               >> 7U)))) 
                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3o_rd_data_f2 
                                >> 1U)) | ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                                                          >> 6U)))) 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3e_rd_data_f2 
                                              >> 1U))) 
                           | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                                                >> 5U)))) 
                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2o_rd_data_f2 
                                 >> 1U))) | ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                                                            >> 4U)))) 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2e_rd_data_f2 
                                                >> 1U))) 
                         | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                                              >> 3U)))) 
                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1o_rd_data_f2 
                               >> 1U))) | ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                                                          >> 2U)))) 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1e_rd_data_f2 
                                              >> 1U))) 
                       | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                                            >> 1U)))) 
                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0o_rd_data_f2 
                             >> 1U))) | ((- (IData)(
                                                    (1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2)))) 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0e_rd_data_f2 
                                            >> 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicerr 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignfinalperr) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignsbecc)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l2 
        = ((0xfff00000U & (((((((((0xfff00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l1) 
                                  | (((- (IData)((1U 
                                                  & ((((((~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x1eU))) 
                                                         & (~ (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                       >> 0x1dU)))) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x1bU))) 
                                                       & (~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x1aU)))) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x10U))) 
                                                     | (((~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x1fU))) 
                                                         & (~ (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                       >> 0x1dU)))) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x10U))))))) 
                                      << 0x14U) & (
                                                   (0xfe000000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__simm5d) 
                                                                      >> 5U)))) 
                                                       << 0x19U)) 
                                                   | (0x1f00000U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__simm5d) 
                                                         << 0x14U))))) 
                                 | (((- (IData)((1U 
                                                 & (((~ (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x1eU))) 
                                                     & (~ (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x11U)))) 
                                                    & (~ (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x10U))))))) 
                                     << 0x14U) & ((0x3c000000U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x17U)) 
                                                      << 0x1aU)) 
                                                  | ((0x3000000U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x1bU)) 
                                                         << 0x18U)) 
                                                     | ((0x800000U 
                                                         & ((IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x15U)) 
                                                            << 0x17U)) 
                                                        | (0x400000U 
                                                           & ((IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                       >> 0x16U)) 
                                                              << 0x16U))))))) 
                                | (((- (IData)((1U 
                                                & ((((((((~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x1fU))) 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0x1eU))) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x1dU))) 
                                                       & (~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x1bU)))) 
                                                      & (~ (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0x1aU)))) 
                                                     & (~ (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x19U)))) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x18U))) 
                                                   & (~ (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x17U))))))) 
                                    << 0x14U) & ((0xe0000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__simm9d) 
                                                                    >> 5U)))) 
                                                     << 0x1dU)) 
                                                 | (0x1f000000U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__simm9d) 
                                                       << 0x18U))))) 
                               | (((- (IData)((1U & 
                                               ((((~ (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x1fU))) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0x1eU))) 
                                                 & (~ (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x11U)))) 
                                                & (~ (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x10U))))))) 
                                   << 0x14U) & ((0x4000000U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0x15U)) 
                                                    << 0x1aU)) 
                                                | ((0x3800000U 
                                                    & ((IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                >> 0x1aU)) 
                                                       << 0x17U)) 
                                                   | (0x400000U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x16U)) 
                                                         << 0x16U)))))) 
                              | (((- (IData)((1U & 
                                              (((~ (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                            >> 0x1fU))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0x1eU))) 
                                               & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                          >> 0x11U)))))) 
                                  << 0x14U) & ((0xc000000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                            >> 0x12U)) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x1cU)) 
                                                      << 0x19U)) 
                                                  | (0x1c00000U 
                                                     & ((IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x14U)) 
                                                        << 0x16U)))))) 
                             | (((- (IData)((1U & (
                                                   (((((IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                >> 0x1fU)) 
                                                       & (~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x1eU)))) 
                                                      & (~ (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0x1dU)))) 
                                                     & (~ (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x1bU)))) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x10U))) 
                                                   | (((~ (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x1fU))) 
                                                       & (~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x1eU)))) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x11U))))))) 
                                 << 0x14U) & ((0x2000000U 
                                               & ((IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0x1cU)) 
                                                  << 0x19U)) 
                                              | (0x1f00000U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0x12U)) 
                                                    << 0x14U))))) 
                            | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sjaloffset11_1))) 
                                << 0x14U) & ((0x80000000U 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sjald 
                                                 << 0xcU)) 
                                             | ((0x7fe00000U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sjald 
                                                    << 0x15U)) 
                                                | (0x100000U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sjald 
                                                      << 0xaU)))))) 
                           | (0xfff00000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sluimm17_12))) 
                                              << 0x14U) 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sluimmd 
                                                << 0xcU))))) 
           | ((0xff000U & ((0xfffff000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l1 
                                           | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sjaloffset11_1))) 
                                               << 0xcU) 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sjald 
                                                 << 1U)))) 
                           | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sluimm17_12))) 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sluimmd) 
                              << 0xcU))) | (0xfffU 
                                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l1)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l2 
        = ((0xfff00000U & (((((((((0xfff00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l1) 
                                  | (((- (IData)((1U 
                                                  & ((((((~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x2eU))) 
                                                         & (~ (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                       >> 0x2dU)))) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x2bU))) 
                                                       & (~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x2aU)))) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x20U))) 
                                                     | (((~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x2fU))) 
                                                         & (~ (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                       >> 0x2dU)))) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x20U))))))) 
                                      << 0x14U) & (
                                                   (0xfe000000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__simm5d) 
                                                                      >> 5U)))) 
                                                       << 0x19U)) 
                                                   | (0x1f00000U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__simm5d) 
                                                         << 0x14U))))) 
                                 | (((- (IData)((1U 
                                                 & (((~ (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x2eU))) 
                                                     & (~ (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x21U)))) 
                                                    & (~ (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x20U))))))) 
                                     << 0x14U) & ((0x3c000000U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x27U)) 
                                                      << 0x1aU)) 
                                                  | ((0x3000000U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x2bU)) 
                                                         << 0x18U)) 
                                                     | ((0x800000U 
                                                         & ((IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x25U)) 
                                                            << 0x17U)) 
                                                        | (0x400000U 
                                                           & ((IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                       >> 0x26U)) 
                                                              << 0x16U))))))) 
                                | (((- (IData)((1U 
                                                & ((((((((~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x2fU))) 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0x2eU))) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x2dU))) 
                                                       & (~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x2bU)))) 
                                                      & (~ (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0x2aU)))) 
                                                     & (~ (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x29U)))) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x28U))) 
                                                   & (~ (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x27U))))))) 
                                    << 0x14U) & ((0xe0000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__simm9d) 
                                                                    >> 5U)))) 
                                                     << 0x1dU)) 
                                                 | (0x1f000000U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__simm9d) 
                                                       << 0x18U))))) 
                               | (((- (IData)((1U & 
                                               ((((~ (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x2fU))) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0x2eU))) 
                                                 & (~ (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x21U)))) 
                                                & (~ (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0x20U))))))) 
                                   << 0x14U) & ((0x4000000U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0x25U)) 
                                                    << 0x1aU)) 
                                                | ((0x3800000U 
                                                    & ((IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                >> 0x2aU)) 
                                                       << 0x17U)) 
                                                   | (0x400000U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0x26U)) 
                                                         << 0x16U)))))) 
                              | (((- (IData)((1U & 
                                              (((~ (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                            >> 0x2fU))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0x2eU))) 
                                               & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                          >> 0x21U)))))) 
                                  << 0x14U) & ((0xc000000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                            >> 0x22U)) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x2cU)) 
                                                      << 0x19U)) 
                                                  | (0x1c00000U 
                                                     & ((IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x24U)) 
                                                        << 0x16U)))))) 
                             | (((- (IData)((1U & (
                                                   (((((IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                >> 0x2fU)) 
                                                       & (~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x2eU)))) 
                                                      & (~ (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0x2dU)))) 
                                                     & (~ (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x2bU)))) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x20U))) 
                                                   | (((~ (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x2fU))) 
                                                       & (~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x2eU)))) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x21U))))))) 
                                 << 0x14U) & ((0x2000000U 
                                               & ((IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0x2cU)) 
                                                  << 0x19U)) 
                                              | (0x1f00000U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0x22U)) 
                                                    << 0x14U))))) 
                            | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sjaloffset11_1))) 
                                << 0x14U) & ((0x80000000U 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sjald 
                                                 << 0xcU)) 
                                             | ((0x7fe00000U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sjald 
                                                    << 0x15U)) 
                                                | (0x100000U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sjald 
                                                      << 0xaU)))))) 
                           | (0xfff00000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sluimm17_12))) 
                                              << 0x14U) 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sluimmd 
                                                << 0xcU))))) 
           | ((0xff000U & ((0xfffff000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l1 
                                           | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sjaloffset11_1))) 
                                               << 0xcU) 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sjald 
                                                 << 1U)))) 
                           | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sluimm17_12))) 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sluimmd) 
                              << 0xcU))) | (0xfffU 
                                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l1)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l2 
        = ((0xfff00000U & (((((((((0xfff00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1) 
                                  | (((- (IData)((1U 
                                                  & ((((((~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0xeU))) 
                                                         & (~ (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                       >> 0xdU)))) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0xbU))) 
                                                       & (~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0xaU)))) 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                                     | (((~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0xfU))) 
                                                         & (~ (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                       >> 0xdU)))) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))))) 
                                      << 0x14U) & (
                                                   (0xfe000000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__simm5d) 
                                                                      >> 5U)))) 
                                                       << 0x19U)) 
                                                   | (0x1f00000U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__simm5d) 
                                                         << 0x14U))))) 
                                 | (((- (IData)((1U 
                                                 & (((~ (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0xeU))) 
                                                     & (~ (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 1U)))) 
                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))))) 
                                     << 0x14U) & ((0x3c000000U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 7U)) 
                                                      << 0x1aU)) 
                                                  | ((0x3000000U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 0xbU)) 
                                                         << 0x18U)) 
                                                     | ((0x800000U 
                                                         & ((IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 5U)) 
                                                            << 0x17U)) 
                                                        | (0x400000U 
                                                           & ((IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                       >> 6U)) 
                                                              << 0x16U))))))) 
                                | (((- (IData)((1U 
                                                & ((((((((~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0xfU))) 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0xeU))) 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0xdU))) 
                                                       & (~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0xbU)))) 
                                                      & (~ (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0xaU)))) 
                                                     & (~ (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 9U)))) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 8U))) 
                                                   & (~ (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 7U))))))) 
                                    << 0x14U) & ((0xe0000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__simm9d) 
                                                                    >> 5U)))) 
                                                     << 0x1dU)) 
                                                 | (0x1f000000U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__simm9d) 
                                                       << 0x18U))))) 
                               | (((- (IData)((1U & 
                                               ((((~ (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                              >> 0xfU))) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 0xeU))) 
                                                 & (~ (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 1U)))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))))) 
                                   << 0x14U) & ((0x4000000U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 5U)) 
                                                    << 0x1aU)) 
                                                | ((0x3800000U 
                                                    & ((IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                >> 0xaU)) 
                                                       << 0x17U)) 
                                                   | (0x400000U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                  >> 6U)) 
                                                         << 0x16U)))))) 
                              | (((- (IData)((1U & 
                                              (((~ (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                            >> 0xfU))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0xeU))) 
                                               & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                          >> 1U)))))) 
                                  << 0x14U) & ((0xc000000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                            >> 2U)) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0xcU)) 
                                                      << 0x19U)) 
                                                  | (0x1c00000U 
                                                     & ((IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 4U)) 
                                                        << 0x16U)))))) 
                             | (((- (IData)((1U & (
                                                   (((((IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                >> 0xfU)) 
                                                       & (~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0xeU)))) 
                                                      & (~ (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                    >> 0xdU)))) 
                                                     & (~ (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0xbU)))) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                                   | (((~ (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0xfU))) 
                                                       & (~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0xeU)))) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 1U))))))) 
                                 << 0x14U) & ((0x2000000U 
                                               & ((IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                           >> 0xcU)) 
                                                  << 0x19U)) 
                                              | (0x1f00000U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                             >> 2U)) 
                                                    << 0x14U))))) 
                            | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjaloffset11_1))) 
                                << 0x14U) & ((0x80000000U 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjald 
                                                 << 0xcU)) 
                                             | ((0x7fe00000U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjald 
                                                    << 0x15U)) 
                                                | (0x100000U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjald 
                                                      << 0xaU)))))) 
                           | (0xfff00000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sluimm17_12))) 
                                              << 0x14U) 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sluimmd 
                                                << 0xcU))))) 
           | ((0xff000U & ((0xfffff000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1 
                                           | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjaloffset11_1))) 
                                               << 0xcU) 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjald 
                                                 << 1U)))) 
                           | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sluimm17_12))) 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sluimmd) 
                              << 0xcU))) | (0xfffU 
                                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pred_valid_e4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U] 
                >> 0x13U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                             >> 9U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp_raw;
    if ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_br_error) 
               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                  >> 0x13U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp = 0ULL;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
            = (0x2000000000000ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
            = (0x1000000000000ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
            = (0x800000000000ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
            = (0x800000000ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
            = (1ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
            = (0x2000ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_offset 
        = (0xfffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_raw) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_raw))
                      ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_imm
                      : ((0x800U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                    >> 0x14U)) | ((0x400U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                      << 3U)) 
                                                  | ((0x3f0U 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                         >> 0x15U)) 
                                                     | (0xfU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                           >> 8U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_misp 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                  >> 9U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_ataken 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                  >> 8U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                  >> 6U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_div_finish)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4 
        = ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U] 
              >> 0x12U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4)) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U))) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                 >> 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4 
        = ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U] 
              >> 0x11U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4)) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U))) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                 >> 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_ecc_error_dc3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_hi_dc3) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_single_ecc_error_dc3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_hi_dc3) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_dc3));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__single_ecc_error_hi_dc3)
            ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
               ^ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__din_plus_parity)
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__din_plus_parity);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__load_mul_rs1_bypass_e1)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_result_dc3
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_ff_e1);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__load_mul_rs2_bypass_e1)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_result_dc3
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_ff_e1);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3_final 
        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                   >> 0x19U) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                >> 0x1cU))) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_result_dc3
            : ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                       >> 0x19U) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                    >> 0x1dU))) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mul_result_e3
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e3_final 
        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                   >> 2U) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                             >> 4U))) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_result_dc3
            : ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                       >> 2U) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                 >> 5U))) ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mul_result_e3
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e3));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_dc1 
        = ((0x200U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_result_dc3
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_dc1_raw);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_wrlru_b0 
        = (0xfU & (((IData)(1U) << (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                           << 0xaU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                             >> 0x16U)))) 
                   & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_bank_decoded) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_wrlru_b1 
        = (0xfU & (((IData)(1U) << (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                           << 0xaU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                             >> 0x16U)))) 
                   & (- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_bank_decoded) 
                                  >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_wrlru_b2 
        = (0xfU & (((IData)(1U) << (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                           << 0xaU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                             >> 0x16U)))) 
                   & (- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_bank_decoded) 
                                  >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_wrlru_b3 
        = (0xfU & (((IData)(1U) << (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                           << 0xaU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                             >> 0x16U)))) 
                   & (- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_bank_decoded) 
                                  >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_data 
        = ((0x3fe0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                          << 0xbU)) | ((0x1ffe0U & 
                                        ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                          << 0xdU) 
                                         | (0x1fe0U 
                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                               >> 0x13U)))) 
                                       | ((0x10U & 
                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                            >> 2U)) 
                                          | ((8U & 
                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                               >> 4U)) 
                                             | ((4U 
                                                 & ((0x1fffcU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                                        >> 0xfU)) 
                                                    | (0x7fffcU 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                                          >> 0xdU)))) 
                                                | ((2U 
                                                    & ((0x1fffeU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                                           >> 0xfU)) 
                                                       | (0x3fffeU 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                                             >> 0xeU)))) 
                                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid) 
                                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_wb)))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid_write 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
              >> 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in 
        = ((6U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                   << 0xdU) | (0x1ffeU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                          >> 0x13U)))) 
           | (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                     >> 6U) ^ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                               >> 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout)) 
           | (0x80U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                         << 5U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                                   << 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                                              << 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout)) 
           | (0x40U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                         << 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                                   << 5U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in)) 
                                              << 6U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout)) 
           | (0x20U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                         << 3U) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                                       >> 1U)) << 5U)) 
                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                          << 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout)) 
           | (0x10U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                         << 2U) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                                       >> 1U)) << 4U)) 
                       & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in)) 
                          << 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout)) 
           | (8U & ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                          >> 2U)) << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                                            << 2U)) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                       << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout)) 
           | (4U & ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                          >> 2U)) << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                                            << 1U)) 
                    & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in)) 
                       << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout)) 
           | (2U & ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                          >> 2U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                                        >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in)) 
                    << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout)) 
           | (1U & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                         >> 2U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in) 
                                       >> 1U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0 
        = ((- (IData)(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid) 
                         & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                               >> 0x11U))) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                                 >> 0x10U))) 
                       & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                             >> 0xfU))))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__10__Vfuncout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcycleh_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcycleh_wb) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_cout_f))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcycleh_wb)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcycleh_inc)
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcycleh);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstreth_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__minstretf_cout_ff__dout) 
                   >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstreth_wb)))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstreth_wb)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstreth_inc)
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstreth);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcause_ns 
        = (((((0xf0000000U & (- (IData)((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                 >> 0xcU) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                   >> 1U)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout)))))) 
              | (0xf0000001U & (- (IData)((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                   >> 0xcU) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                     >> 1U)) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                                    >> 1U))))))) 
             | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                   >> 0xcU) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                  >> 1U)))))) 
                & ((0x80000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                   << 0x11U)) | (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                    >> 7U))))) 
            | ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcause_wb) 
                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                 >> 0xcU))))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb)) 
           | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcause_wb)) 
                                & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                      >> 0xcU)))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcause));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_micect_wb) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                     >> 0xaU))) ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_micect_wb)
                                    ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_sat) 
                                        << 0x1bU) | 
                                       (0x7ffffffU 
                                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb))
                                    : ((0xf8000000U 
                                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect) 
                                       | (0x7ffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect 
                                             + (1U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                   >> 0xaU))))))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_miccmect_wb) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                     >> 9U))) ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_miccmect_wb)
                                  ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_sat) 
                                      << 0x1bU) | (0x7ffffffU 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb))
                                  : ((0xf8000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect) 
                                     | (0x7ffffffU 
                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect 
                                           + (1U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                               >> 9U))))))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdccmect_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mdccmect_wb) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_dccm_errorff__dout)))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mdccmect_wb)
                ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_sat) 
                    << 0x1bU) | (0x7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb))
                : ((0xf8000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdccmect) 
                   | (0x7ffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdccmect 
                                    + (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_dccm_errorff__dout))))))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdccmect);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstret_enable) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstretl_wb))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstretl_wb)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl 
                    + (IData)((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_wb)))) 
                   + (IData)((QData)((IData)((1U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                               >> 5U)))))))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_ns 
        = (((((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_wb))) 
                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout 
                   << 1U)) | (0xfffffffeU & ((- (IData)(
                                                        (1U 
                                                         & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                              >> 0xcU) 
                                                             & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                 >> 3U) 
                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                   >> 2U))) 
                                                            & (~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                                >> 1U)))))) 
                                             & (((IData)(1U) 
                                                 + vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout) 
                                                << 1U)))) 
              | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_wb))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_illegal_inst)) 
             | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_wb))) 
                & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_wbff__dout 
                           >> 2U)))) | ((- (IData)(
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtval_wb) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                        >> 0xeU))))) 
                                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb)) 
           | ((- (IData)((1U & ((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                        >> 1U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtval_wb))) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_wb))) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_wb))) 
                                 & (~ ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                           >> 0xcU) 
                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_wb))) 
                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_wb))) 
                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_wb))) 
                                       & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                             >> 4U))))) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_wb)))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_meicpct_wb) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meihap_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_claimid;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meicidpl_ns 
            = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_pl));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meihap_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__meihap_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meicidpl_ns 
            = (0xfU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                        & (0xbcbU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                 << 0xdU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                   >> 0x13U)))))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meicidpl)));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mepc_ns 
        = (0x7fffffffU & (((((- (IData)((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                 >> 0xdU) 
                                                | (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_wbff__dout 
                                                           >> 1U))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                  >> 4U))))) 
                             & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout) 
                            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                 >> 0xeU)))) 
                               & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout)) 
                           | ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_wb) 
                                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                >> 0xcU))))) 
                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                 >> 1U))) | ((- (IData)(
                                                        (1U 
                                                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_wb)) 
                                                            & (~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                                >> 0xcU)))))) 
                                             & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpmc_b_ns 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mpmc_wb)
                  ? (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                        >> 1U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpmc_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4 
        = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
                                | ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4_trigger_ff__dout) 
                                       >> 8U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                  >> 6U)))))) 
              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                 >> 0xcU)) & (~ (- (IData)((1U & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U] 
                                                   >> 0x12U) 
                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U] 
                                                     >> 0x11U))))))) 
            & (~ (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_store) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_data)) 
                  & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4_raw)))))) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_enabled));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e4 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
               >> 0x13U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                            >> 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__e4_valid 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4 
        = (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
             >> 0x12U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4 
        = (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
             >> 0x11U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfpc_dc4 
        = ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
               & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                             >> 0x23U)))) & (~ (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                                                        >> 0x24U)))) 
             & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                        >> 0x25U))) & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout 
                                                  >> 0x22U)))) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4_raw 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
            >> 0x18U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
           & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4 
                    >> 0xeU) | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_dc5_dc4)))) 
               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4))) 
                  & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                      >> 0xeU) | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_dc5_dc3))))) 
              | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3))) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4))) 
                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                     >> 0xeU) | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_dc5_dc2))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_lo 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3 
                                             >> 2U))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
               >> 0xdU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_lo_hi 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3 
                                             >> 2U))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
               >> 0xdU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_lo 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3 
                                             >> 2U))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
               >> 0xdU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc3hit_hi_hi 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc3 
                                             >> 2U))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
               >> 0xdU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_lo 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc4 
                                             >> 2U))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4 
               >> 0xdU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_lo_hi 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc4 
                                             >> 2U))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4 
               >> 0xdU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_lo 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc4 
                                             >> 2U))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4 
               >> 0xdU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc4hit_hi_hi 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc4 
                                             >> 2U))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4 
               >> 0xdU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_lo 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
                                             >> 2U))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
               >> 0xdU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_lo_hi 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
                                             >> 2U))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
               >> 0xdU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_lo 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5 
                                             >> 2U))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
               >> 0xdU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_dc5hit_hi_hi 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5 
                                             >> 2U))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
               >> 0xdU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                                             >> 2U))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                                             >> 2U))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                 >> 2U)) == (0x3fffffffU 
                                             & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
                                                 << 0x1eU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U] 
                                                   >> 2U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
               & ((1U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                  | (2U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                 >> 2U)) == (0x3fffffffU 
                                             & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
                                                 << 0x1eU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U] 
                                                   >> 2U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
               & ((1U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                  | (2U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (0xfffffffeU & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
                                       >> 2U)))) << 1U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & (((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 3U))) 
                                  | (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                  >> 3U)))) 
                                 << 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                                            << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (0xfffffffeU & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
                                       >> 2U)))) << 1U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & (((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 3U))) 
                                  | (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                  >> 3U)))) 
                                 << 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                                            << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (0xfffffffcU & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
                                       >> 2U)))) << 2U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & (((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 6U))) 
                                  | (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                  >> 6U)))) 
                                 << 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                                            << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (0xfffffffcU & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
                                       >> 2U)))) << 2U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & (((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 6U))) 
                                  | (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                  >> 6U)))) 
                                 << 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                                            << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (0xfffffff8U & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[4U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
                                       >> 2U)))) << 3U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & (((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 9U))) 
                                  | (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                  >> 9U)))) 
                                 << 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                                            << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (0xfffffff8U & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[4U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
                                       >> 2U)))) << 3U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & (((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 9U))) 
                                  | (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                  >> 9U)))) 
                                 << 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                                            << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (0xfffffff0U & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[5U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[4U] 
                                       >> 2U)))) << 4U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & (((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 0xcU))) 
                                  | (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                  >> 0xcU)))) 
                                 << 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                                            << 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (0xfffffff0U & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[5U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[4U] 
                                       >> 2U)))) << 4U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & (((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 0xcU))) 
                                  | (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                  >> 0xcU)))) 
                                 << 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                                            << 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (0xffffffe0U & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[6U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[5U] 
                                       >> 2U)))) << 5U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & (((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 0xfU))) 
                                  | (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                  >> 0xfU)))) 
                                 << 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                                            << 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (0xffffffe0U & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[6U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[5U] 
                                       >> 2U)))) << 5U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & (((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 0xfU))) 
                                  | (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                  >> 0xfU)))) 
                                 << 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                                            << 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (0xffffffc0U & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[7U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[6U] 
                                       >> 2U)))) << 6U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & (((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 0x12U))) 
                                  | (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                  >> 0x12U)))) 
                                 << 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                                            << 6U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (0xffffffc0U & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[7U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[6U] 
                                       >> 2U)))) << 6U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & (((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 0x12U))) 
                                  | (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                  >> 0x12U)))) 
                                 << 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                                            << 6U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (0xffffff80U & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[7U] 
                                      >> 2U))) << 7U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & (((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 0x15U))) 
                                  | (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                  >> 0x15U)))) 
                                 << 7U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                                            << 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (0xffffff80U & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[7U] 
                                      >> 2U))) << 7U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & (((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 0x15U))) 
                                  | (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                  >> 0x15U)))) 
                                 << 7U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                                            << 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain 
        = ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
               >> 0xeU) | ((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                                           >> 2U)) 
                           != (0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                              >> 2U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
           & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                >> 0xeU) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                            & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4 
                                     >> 0xeU) | (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_dc5_dc4) 
                                                  & (~ 
                                                     ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
                                                       ^ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc4) 
                                                      >> 2U)))))) 
                                | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4))) 
                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                       >> 0xeU) | (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_dc5_dc3) 
                                                    & (~ 
                                                       ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
                                                         ^ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3) 
                                                        >> 2U))))))) 
                               | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3))) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4))) 
                                  & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                      >> 0xeU) | (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_dc5_dc2) 
                                                   & (~ 
                                                      ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
                                                        ^ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2) 
                                                       >> 2U))))))))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellinp__freezeff__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3) 
            << 1U) | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__freezeff__dout) 
                            >> 1U)));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e2_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__pred_correct_upper_e3_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__pred_correct_upper_e3_ff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e2_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__pred_correct_upper_e3_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__pred_correct_upper_e2_ff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc4_in 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc4_in 
        = ((0x7fffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc4_in) 
           | (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc3) 
                           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                 >> 0xbU))))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__flushff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout)
            : ((2U & ((0x7ffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                      >> 1U)) | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout 
                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                                                 << 1U))) 
               | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                         >> 2U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_data_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc3_clken) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2)) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                      >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rd_data_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__write_csr_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                        >> 3U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                  >> 2U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                             >> 1U)) 
                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                        >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)
                ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__write_csr_data 
                   - (IData)(1U)) : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb)
                                      ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                                      : ((((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                          >> 3U)))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csr_data_e1ff__dout) 
                                              & (~ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_mask_e1))) 
                                          | ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                            >> 2U)))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csr_data_e1ff__dout) 
                                                | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_mask_e1))) 
                                         | ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                           >> 1U)))) 
                                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_mask_e1))))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__write_csr_data);
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__pred_correct_upper_e2_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__pred_correct_upper_e2_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_e3 
            = ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_before)) 
               & 1U);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__pred_correct_upper_e2_ff__DOT____Vcellinp__dffs__din 
            = ((2U & (((0x7ffffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                                        >> 1U) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__actual_taken)) 
                                                  << 1U))) 
                       | (0x3ffffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                                          >> 2U) & 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__actual_taken) 
                                          << 1U)))) 
                      & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__any_jal)) 
                         << 1U))) | (1U & ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                                              >> 2U) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__actual_taken))) 
                                            | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__actual_taken))) 
                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__any_jal)))));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_e3 = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U] 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U]) 
           | (0x2000000U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 2U)) << 0x19U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U] 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U]) 
           | (0x1000000U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 2U)) << 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U] 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U]) 
           | (0x800000U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                  >> 2U)) << 0x17U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U] 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U]) 
           | (4U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                     & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout) 
                            >> 1U)) << 2U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 2U)) 
                                               << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U] 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U]) 
           | (2U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                     & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout) 
                            >> 1U)) << 1U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 2U)) 
                                               << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[0U] 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[0U]) 
           | (0x40000U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout) 
                                  >> 1U)) << 0x12U)) 
                          & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                 >> 2U)) << 0x12U))));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[0U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U] = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[2U] = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e3_clken 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e2) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 6U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_after_unfreeze2 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__freezeff__dout) 
                  >> 1U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__freezeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e2_clken 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e1) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 6U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_sec_decode_e3 
        = (1U & (((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                   >> 0x17U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 2U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_dccm_c1_dc3_clken 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc3_clken) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_after_unfreeze1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__freezeff__dout) 
                 >> 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_sec_decode_e3 
        = (1U & ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                    >> 0x12U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout) 
                                    >> 1U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 2U))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc4_clken 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc3_clken 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__unfreeze_cycle2 
        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                  & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__freezeff__dout) 
                        >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__freezeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_dc3 
        = ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                 >> 0xdU)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc3) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3))) 
            & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc3)) 
               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                  >> 0xbU))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                  >> 0xeU)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc3))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__dec_nonblock_load_freeze_dc3))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                 >> 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U) | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout 
                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout)) 
                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__unfreeze_cycle1 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__freezeff__dout) 
                    >> 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                    & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5)) 
                       << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                    & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5)) 
                       << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                    & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5)) 
                       << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en)) 
           | (0x10U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                       & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5)) 
                          << 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en)) 
           | (0x20U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                       & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5)) 
                          << 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en)) 
           | (0x40U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                       & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5)) 
                          << 6U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en)) 
           | (0x80U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                       & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5)) 
                          << 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5))) 
           | (((((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                    >> 0x19U) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                 >> 2U)) & ((0x1fU 
                                             & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                            == (0x1fU 
                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                    << 0x1aU) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                      >> 6U))))) 
                 & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                    >> 0x1cU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb)) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 1U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en 
        = ((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5)) 
                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                   >> 0xdU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)) 
             & ((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
                                >> 2U)) == (0x3fffffffU 
                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                                               >> 2U)))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5))) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                 >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d) 
           | (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_sz)) 
               << 0x12U) | (((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_sz)) 
                             << 0x11U) | (((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_sz)) 
                                           << 0x10U) 
                                          | ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_sz)) 
                                             << 0xfU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x7dfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x7bfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d) 
           | (0x4000U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write)) 
                         << 0xeU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_iccm_valid) 
               >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count) 
              >= (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                        >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dccm_valid) 
               >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count) 
              >= (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                        >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__Vfuncout 
        = (0xfU & ((((((((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid) 
                                >> 7U)) + (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid) 
                                                 >> 6U))) 
                        + (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid) 
                                 >> 5U))) + (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid) 
                               >> 3U))) + (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid) 
                                                 >> 2U))) 
                    + (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid) 
                             >> 1U))) + (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__Vfuncout;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__rs_addr__offset 
        = ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                  >> 2U)) | (1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                      >> 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_fg_crossing_f2 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                    >> 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l3 
        = ((0xfe000000U & ((((0xfe000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l2) 
                             | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sbroffset8_1))) 
                                 << 0x19U) & ((0xf0000000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sbr8d) 
                                                                 >> 7U)))) 
                                                  << 0x1cU)) 
                                              | (0xe000000U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sbr8d) 
                                                    << 0x15U))))) 
                            | (0x6000000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswimm6_2))) 
                                              << 0x19U) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswimm6d) 
                                                << 0x16U)))) 
                           | (0xe000000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswspimm7_2))) 
                                             << 0x19U) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswspimm7d) 
                                               << 0x16U))))) 
           | ((0x1fff000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l2) 
              | ((0xf80U & ((((0xffffff80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l2) 
                              | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sbroffset8_1))) 
                                  << 7U) & ((0xf00U 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sbr8d) 
                                                << 8U)) 
                                            | (0x80U 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sbr8d))))) 
                             | (0xe00U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswimm6_2))) 
                                           << 7U) & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswimm6d) 
                                           << 9U)))) 
                            | (0xe00U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswspimm7_2))) 
                                          << 7U) & 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswspimm7d) 
                                          << 9U))))) 
                 | (0x7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l3 
        = ((0xfe000000U & ((((0xfe000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l2) 
                             | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sbroffset8_1))) 
                                 << 0x19U) & ((0xf0000000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sbr8d) 
                                                                 >> 7U)))) 
                                                  << 0x1cU)) 
                                              | (0xe000000U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sbr8d) 
                                                    << 0x15U))))) 
                            | (0x6000000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswimm6_2))) 
                                              << 0x19U) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswimm6d) 
                                                << 0x16U)))) 
                           | (0xe000000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswspimm7_2))) 
                                             << 0x19U) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswspimm7d) 
                                               << 0x16U))))) 
           | ((0x1fff000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l2) 
              | ((0xf80U & ((((0xffffff80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l2) 
                              | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sbroffset8_1))) 
                                  << 7U) & ((0xf00U 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sbr8d) 
                                                << 8U)) 
                                            | (0x80U 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sbr8d))))) 
                             | (0xe00U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswimm6_2))) 
                                           << 7U) & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswimm6d) 
                                           << 9U)))) 
                            | (0xe00U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswspimm7_2))) 
                                          << 7U) & 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswspimm7d) 
                                          << 9U))))) 
                 | (0x7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l3 
        = ((0xfe000000U & ((((0xfe000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l2) 
                             | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbroffset8_1))) 
                                 << 0x19U) & ((0xf0000000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbr8d) 
                                                                 >> 7U)))) 
                                                  << 0x1cU)) 
                                              | (0xe000000U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbr8d) 
                                                    << 0x15U))))) 
                            | (0x6000000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6_2))) 
                                              << 0x19U) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6d) 
                                                << 0x16U)))) 
                           | (0xe000000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7_2))) 
                                             << 0x19U) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7d) 
                                               << 0x16U))))) 
           | ((0x1fff000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l2) 
              | ((0xf80U & ((((0xffffff80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l2) 
                              | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbroffset8_1))) 
                                  << 7U) & ((0xf00U 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbr8d) 
                                                << 8U)) 
                                            | (0x80U 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbr8d))))) 
                             | (0xe00U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6_2))) 
                                           << 7U) & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6d) 
                                           << 9U)))) 
                            | (0xe00U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7_2))) 
                                          << 7U) & 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7d) 
                                          << 9U))))) 
                 | (0x7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xffffffc7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xfffffff8U & ((0x20U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 9U)) 
                                       << 5U)) | (0x18U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                              >> 0x28U)) 
                                                     << 3U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = ((0xffe7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap) 
           | (0x180U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                 >> 0x25U)) << 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = ((0x81fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap) 
           | ((0x78000U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                    >> 0x21U)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                      >> 0x1fU)) << 0xeU)) 
                 | (0x2000U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                        >> 0x20U)) 
                               << 0xdU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = ((0xfff9fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap) 
           | (0x60U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                >> 0x1dU)) << 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = ((0xfe1ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap) 
           | ((0x1800U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                   >> 0x1aU)) << 0xbU)) 
              | ((0x400U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                     >> 0x18U)) << 0xaU)) 
                 | (0x200U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                       >> 0x19U)) << 9U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_jal 
        = (1U & ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                            >> 0x17U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall_case))) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pja_case))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret_case))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                    >> 0x17U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall_case));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pja 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                    >> 0x17U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pja_case));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                    >> 0x17U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret_case));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff 
        = (1U & ((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                             >> 0x31U))) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                    >> 0x30U)) & (0U != (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                  >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                    >> 0x2fU)) & (0U != (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                  >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[1U] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[1U]) 
           | (0xff000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_offset) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[2U] 
        = ((0x3f0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d[2U]) 
           | (0xffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_offset) 
                           >> 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_error 
        = (1U & ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                    >> 0x14U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid) 
                                 & (~ ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw 
                                                  >> 0x1cU)) 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_raw)) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_raw)) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_raw))))) 
                  | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                          >> 0x16U)) & ((0xfffU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[2U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                                                      >> 0x17U))) 
                                        != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_offset))) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_raw)))) 
                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid) 
                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[0U] 
                        >> 9U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_raw)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_error_pkt_dc3 
        = ((0x7ffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_error_pkt_dc3) 
           | ((QData)((IData)((((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc3) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc3)) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ld_bus_error_dc3)) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)) 
                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3) 
                                  & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                        >> 0xbU))) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc3))) 
                                << 2U) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_single_ecc_error_dc3) 
                                            & (~ (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc3) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_dc3)) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)))) 
                                           << 1U) | 
                                          (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                 >> 0xdU)))))) 
              << 0x23U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__load_stbuf_reqvld_dc3 
        = (((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                  >> 0xeU)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc3) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_single_ecc_error_dc3)) 
            & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc3)) 
               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                  >> 0xbU))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_hi_dc3 
        = ((0xfc000000U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                    >> 0x20U)) << 0x1aU)) 
           | ((0x3fff800U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                      >> 0x10U)) << 0xbU)) 
              | ((0x7f0U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                     >> 8U)) << 4U)) 
                 | ((0xeU & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                      >> 4U)) << 1U)) 
                    | (1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                     >> 2U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_dc1 
           + ((0xffffe000U & ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_offset_dc1) 
                                                >> 0xcU)))) 
                              << 0xdU)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_offset_dc1)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
        = ((0xfffff000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1) 
           | (0xfffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_dc1 
                        + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout 
        = (1U & (((0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_dc1) 
                  + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1)) 
                 >> 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__in 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_bank_wb;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__Vfuncout 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__Vfuncout)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__in) 
                     << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__in) 
                               << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__Vfuncout 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__Vfuncout)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__in) 
                     << 1U) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__in)) 
                               << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__Vfuncout 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__Vfuncout)) 
           | (2U & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__in) 
                         >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__in)) 
                    << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__Vfuncout 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__Vfuncout)) 
           | (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__in) 
                        >> 1U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__in 
        = (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                  << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                              >> 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__Vfuncout 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__Vfuncout)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__in) 
                     << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__in) 
                               << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__Vfuncout 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__Vfuncout)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__in) 
                     << 1U) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__in)) 
                               << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__Vfuncout 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__Vfuncout)) 
           | (2U & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__in) 
                         >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__in)) 
                    << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__Vfuncout 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__Vfuncout)) 
           | (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__in) 
                        >> 1U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way0 
        = (0xfU & ((((- (IData)((((~ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U]) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid_write)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_wb))))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__6__Vfuncout)) 
                    | ((- (IData)((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_wb)) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_all_banks_error_wb))))) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__7__Vfuncout))) 
                   | (- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_all_banks_error_wb))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__in 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_bank_wb;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__Vfuncout 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__Vfuncout)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__in) 
                     << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__in) 
                               << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__Vfuncout 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__Vfuncout)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__in) 
                     << 1U) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__in)) 
                               << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__Vfuncout 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__Vfuncout)) 
           | (2U & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__in) 
                         >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__in)) 
                    << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__Vfuncout 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__Vfuncout)) 
           | (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__in) 
                        >> 1U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__in 
        = (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[2U] 
                  << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                              >> 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__Vfuncout 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__Vfuncout)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__in) 
                     << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__in) 
                               << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__Vfuncout 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__Vfuncout)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__in) 
                     << 1U) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__in)) 
                               << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__Vfuncout 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__Vfuncout)) 
           | (2U & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__in) 
                         >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__in)) 
                    << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__Vfuncout 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__Vfuncout)) 
           | (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__in) 
                        >> 1U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_wr_en_way1 
        = (0xfU & ((((- (IData)(((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid_write)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_wb))))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__8__Vfuncout)) 
                    | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_wb)) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_all_banks_error_wb))))) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode2_4__9__Vfuncout))) 
                   | (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_all_banks_error_wb))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                  & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                 & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xfffffffeU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))) 
                             << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xfffffffcU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))) 
                             << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xfffffff8U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))) 
                             << 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xfffffff0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))) 
                             << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xffffffe0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))) 
                             << 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xffffffc0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))) 
                             << 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xffffff80U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))) 
                             << 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xffffff00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))) 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xfffffe00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))) 
                             << 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xfffffc00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                & (0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  & (0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 & (0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))) 
                             << 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xfffff800U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                & (0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  & (0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 & (0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))) 
                             << 0xbU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xfffff000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                & (0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  & (0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 & (0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))) 
                             << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xffffe000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                & (0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  & (0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 & (0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))) 
                             << 0xdU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xffffc000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                & (0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  & (0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 & (0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))) 
                             << 0xeU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xffff8000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                & (0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  & (0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 & (0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))) 
                             << 0xfU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xffff0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xfU) & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x10U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xfU) & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x10U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xfU) & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x10U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xfffe0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x10U) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x11U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x10U) & ((1U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x11U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x10U) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x11U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xfffc0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x11U) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x12U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x11U) & ((2U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x12U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x11U) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x12U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xfff80000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x12U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x13U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x12U) & ((3U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x13U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x12U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xfff00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x13U) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x14U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x13U) & ((4U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x14U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x13U) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x14U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xffe00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x14U) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x15U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x14U) & ((5U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x15U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x14U) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x15U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xffc00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x15U) & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x16U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x15U) & ((6U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x16U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x15U) & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x16U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xff800000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x16U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x17U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x16U) & ((7U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x17U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x16U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x17U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xff000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x17U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x18U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x17U) & ((8U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x18U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x17U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x18U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xfe000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x18U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x19U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x18U) & ((9U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x19U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x18U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x19U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xfc000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x19U) & ((0xaU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1aU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x19U) & ((0xaU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1aU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x19U) & ((0xaU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1aU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xf8000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x1aU) & ((0xbU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1bU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x1aU) & ((0xbU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1bU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x1aU) & ((0xbU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1bU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xf0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x1bU) & ((0xcU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1cU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x1bU) & ((0xcU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1cU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x1bU) & ((0xcU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1cU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xe0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x1cU) & ((0xdU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1dU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x1cU) & ((0xdU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1dU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x1cU) & ((0xdU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1dU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0xc0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x1dU) & ((0xeU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1eU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x1dU) & ((0xeU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1eU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x1dU) & ((0xeU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U] 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[0U]) 
           | (0x80000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x1eU) & ((0xfU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1fU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x1eU) & ((0xfU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1fU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x1eU) & ((0xfU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1fU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                 >> 2U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                   >> 2U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                  >> 2U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0x7ffffffeU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                >> 1U) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 1U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                >> 1U) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 1U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 >> 1U) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xfffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                               & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                  << 2U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             & ((2U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                                << 2U))) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                   << 2U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xfffffff8U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 1U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 3U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 1U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 3U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 1U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 3U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xfffffff0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 2U) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 4U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 2U) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 4U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 2U) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xffffffe0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 3U) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 5U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 3U) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 5U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 3U) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xffffffc0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 4U) & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 6U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 4U) & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 6U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 4U) & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xffffff80U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 5U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 7U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 5U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 7U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 5U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 7U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xffffff00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 6U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 8U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 6U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 8U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 6U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xfffffe00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 7U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 9U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 7U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 9U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 7U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 9U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xfffffc00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 8U) & ((0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xaU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 8U) & ((0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xaU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 8U) & ((0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xfffff800U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 9U) & ((0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xbU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 9U) & ((0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xbU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 9U) & ((0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xbU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xfffff000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xaU) & ((0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0xcU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xaU) & ((0xcU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0xcU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xaU) & ((0xcU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0xcU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xffffe000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xbU) & ((0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0xdU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xbU) & ((0xdU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0xdU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xbU) & ((0xdU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0xdU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xffffc000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xcU) & ((0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0xeU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xcU) & ((0xeU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0xeU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xcU) & ((0xeU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0xeU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xffff8000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xdU) & ((0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0xfU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xdU) & ((0xfU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0xfU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xdU) & ((0xfU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0xfU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xffff0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xdU) & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x10U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xdU) & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x10U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xdU) & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x10U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xfffe0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xeU) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x11U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xeU) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x11U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xeU) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x11U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xfffc0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xfU) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x12U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xfU) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x12U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xfU) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x12U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xfff80000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x10U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x13U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x10U) & ((3U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x13U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x10U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xfff00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x11U) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x14U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x11U) & ((4U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x14U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x11U) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x14U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xffe00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x12U) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x15U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x12U) & ((5U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x15U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x12U) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x15U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xffc00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x13U) & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x16U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x13U) & ((6U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x16U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x13U) & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x16U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xff800000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x14U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x17U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x14U) & ((7U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x17U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x14U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x17U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xff000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x15U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x18U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x15U) & ((8U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x18U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x15U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x18U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xfe000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x16U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x19U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x16U) & ((9U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x19U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x16U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x19U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xfc000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x17U) & ((0xaU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1aU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x17U) & ((0xaU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1aU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x17U) & ((0xaU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1aU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xf8000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x18U) & ((0xbU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1bU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x18U) & ((0xbU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1bU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x18U) & ((0xbU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1bU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xf0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x19U) & ((0xcU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1cU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x19U) & ((0xcU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1cU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x19U) & ((0xcU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1cU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xe0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x1aU) & ((0xdU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1dU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x1aU) & ((0xdU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1dU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x1aU) & ((0xdU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1dU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0xc0000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x1bU) & ((0xeU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1eU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x1bU) & ((0xeU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1eU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x1bU) & ((0xeU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U] 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[1U]) 
           | (0x80000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x1cU) & ((0xfU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x1fU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x1cU) & ((0xfU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x1fU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x1cU) & ((0xfU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x1fU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                 >> 4U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed))) 
               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                   >> 4U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)))) 
              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                  >> 4U) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0x1ffffffeU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                >> 3U) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 1U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                >> 3U) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 1U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 >> 3U) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0x3ffffffcU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                >> 2U) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 2U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                >> 2U) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 2U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 >> 2U) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 2U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0x7ffffff8U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                >> 1U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 3U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                >> 1U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 3U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 >> 1U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 3U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xfffffff0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                               & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                  << 4U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                             & ((4U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                                << 4U))) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                   << 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xffffffe0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 1U) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 5U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 1U) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 5U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 1U) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xffffffc0U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 2U) & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 6U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 2U) & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 6U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 2U) & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xffffff80U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 3U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 7U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 3U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 7U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 3U) & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 7U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xffffff00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 4U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 8U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 4U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 8U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 4U) & ((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xfffffe00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 5U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 9U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                << 5U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                          << 9U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 5U) & ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 9U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xfffffc00U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 6U) & ((0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xaU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 6U) & ((0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xaU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 6U) & ((0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xfffff800U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 7U) & ((0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xbU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 7U) & ((0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xbU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 7U) & ((0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xbU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xfffff000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 8U) & ((0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xcU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 8U) & ((0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xcU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 8U) & ((0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xcU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xffffe000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 9U) & ((0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                          << 0xdU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 9U) & ((0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                            << 0xdU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 9U) & ((0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                           << 0xdU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xffffc000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xaU) & ((0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0xeU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xaU) & ((0xeU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0xeU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xaU) & ((0xeU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0xeU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xffff8000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xbU) & ((0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0xfU)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xbU) & ((0xfU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0xfU))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xbU) & ((0xfU 
                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0xfU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xffff0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xbU) & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x10U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xbU) & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x10U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xbU) & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x10U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xfffe0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xcU) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x11U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xcU) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x11U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xcU) & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x11U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xfffc0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xdU) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x12U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xdU) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x12U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xdU) & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x12U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xfff80000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xeU) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x13U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xeU) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x13U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xeU) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x13U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xfff00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0xfU) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                            << 0x14U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0xfU) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                              << 0x14U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0xfU) & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                             << 0x14U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U] 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_bank_sel[2U]) 
           | (0xffe00000U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en0) 
                                << 0x10U) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_hashed)) 
                                             << 0x15U)) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1) 
                                  << 0x10U) & ((5U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb)) 
                                               << 0x15U))) 
                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2) 
                                 << 0x10U) & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb)) 
                                              << 0x15U)))));
}
