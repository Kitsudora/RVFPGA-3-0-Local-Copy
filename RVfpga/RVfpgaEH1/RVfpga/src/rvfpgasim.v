// SPDX-License-Identifier: Apache-2.0
// Copyright 2019 Western Digital Corporation or its affiliates.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//********************************************************************************
// $Id$
//
// Function: Verilog testbench for SweRVolf
// Comments:
//
//********************************************************************************

`default_nettype none
module rvfpgasim
  #(parameter bootrom_file  = "")
`ifdef VERILATOR
  (

  `ifdef ViDBo
   input wire [15:0] i_sw,
   output reg [15:0] o_led,
   input wire [4:0]  i_pb,
   output reg [7:0]   AN,
   output reg         CA, CB, CC, CD, CE, CF, CG,
   output wire [7:0]  Enables_Reg,
   output wire [31:0] Digits_Reg,
   input wire clk,
   input wire  rst,
   input wire  i_jtag_tck,
   input wire  i_jtag_tms,
   input wire  i_jtag_tdi,
   input wire  i_jtag_trst_n,
   output wire o_jtag_tdo,
   output wire o_uart_tx,
   output wire        tf_push,
   output wire [7:0]  wb_m2s_uart_dat_output,
   output wire o_gpio

  `elsif Pipeline
   input wire [15:0] i_sw,
   output reg [15:0] o_led,
   input wire [4:0]  i_pb,
   output reg [7:0]   AN,
   output reg         CA, CB, CC, CD, CE, CF, CG,
   output wire [7:0]  Enables_Reg,
   output wire [31:0] Digits_Reg,
   input wire clk,
   input wire  rst,
   input wire  i_jtag_tck,
   input wire  i_jtag_tms,
   input wire  i_jtag_tdi,
   input wire  i_jtag_trst_n,
   output wire o_jtag_tdo,
   output wire o_uart_tx,
   output wire        tf_push,
   output wire [7:0]  wb_m2s_uart_dat_output,
   output wire o_gpio,
   output logic           ic_act_miss_f2,
   output logic           ic_act_hit_f2,

   output logic [31:0]  ib3_in,
   output logic [31:0]  ib2_in,
   output logic [31:0]  ib1_in,
   output logic [31:0]  ib0_in,

   output logic ic_hit_f2,

   output logic        exu_i0_flush_upper_e1,
   output logic [31:0] exu_i0_flush_path_e1_ext,
   output logic        exu_i1_flush_upper_e1,
   output logic [31:0] exu_i1_flush_path_e1_ext,

   output logic [31:0] ifc_fetch_addr_f1_ext,

   output logic               addr_external_dc1,
   output logic               addr_external_dc2,
   output logic               addr_external_dc3,

   output logic        lsu_dccm_rden_dc1,
   output logic        lsu_dccm_rden_dc2,
   output logic        lsu_dccm_rden_dc3,

   output logic        [31:0]  a_e1,
   output logic        [31:0]  b_e1,
   output logic        [63:0]  prod_e2_red,
   logic [31:0] exu_mul_result_e3,

   output logic [31:0]  mul_rs1_d,
   output logic [31:0]  mul_rs2_d,

   output logic [31:0] exu_lsu_rs1_d,

   output logic [31:0] i0_result_e2,
   output logic [31:0] i1_result_e2,
   output logic [31:0] i0_result_e3, i1_result_e3,

   output logic [31:0] i0_result_e3_final,
   output logic [31:0] i1_result_e3_final,

   output logic [5:0]   i0_control,
   output logic [5:0]   i1_control,
   output logic [5:0]   lsu_control,
   output logic [5:0]   mul_control,
   output logic [5:0]   i0_branch,
   output logic [5:0]   i1_branch,

   output logic [11:0]  instr_control,

   output logic         lsu_load_stall_any,       // This is for blocking stores
   output logic        lsu_busreq_dc2,
   output logic [31:0] bus_read_data_dc3,
   output wire        lsu_arvalid,
   output wire        lsu_rvalid,

   output logic [31:0]  dccm_data_lo_dc2,

   output logic         dccm_rden,

   output logic [31:0]        rs1_dc1,
   output logic [11:0]        offset_dc1,

   output logic [31:0] i0_result_e4_final,
   output logic [31:0] i1_result_e4_final,

   output logic [31:0] dccm_data_lo_dc3,

   output logic [31:0]        full_addr_dc1,

   output logic [11:0] dec_lsu_offset_d,

   output logic [31:0]  dec_i0_pc_d_ext,

   output logic [4:0]  dec_i0_waddr_wb,
   output logic        dec_i0_wen_wb,
   output logic [31:0] dec_i0_wdata_wb,

   output logic [4:0]  dec_i1_waddr_wb,
   output logic        dec_i1_wen_wb,
   output logic [31:0] dec_i1_wdata_wb,

   output logic [31:0] i0_rs1_d,
   output logic [31:0] i0_rs2_d,
   output logic [31:0] i1_rs1_d,
   output logic [31:0] i1_rs2_d,

   output logic [31:0] exu_i0_result_e1,
   output logic [31:0] exu_i1_result_e1,

   output logic [31:0] i0_rs1_bypass_data_d,
   output logic [31:0] i0_rs2_bypass_data_d,
   output logic [31:0] i1_rs1_bypass_data_d,
   output logic [31:0] i1_rs2_bypass_data_d,

   output logic [31:0] aff0,
   output logic [31:0] aff1,
   output logic [31:0] bff0,
   output logic [31:0] bff1,

    output logic  [31:0] gpr_i0_rs1_d,               // gpr rs1 data
    output logic  [31:0] gpr_i0_rs2_d,               // gpr rs2 data
    output logic  [31:0] gpr_i1_rs1_d,
    output logic  [31:0] gpr_i1_rs2_d,


   output logic [31:0]           ifu_i0_instr_export,
   output logic [31:0]           ifu_i1_instr_export,

   output logic [31:0]        i0_inst_d,
   output logic [31:0]        i0_inst_e1,
   output logic [31:0]        i0_inst_e2,
   output logic [31:0]        i0_inst_e3,
   output logic [31:0]        i0_inst_e4,
   output logic [31:0]        i0_inst_wb,

   output logic [31:0]        i1_inst_d,
   output logic [31:0]        i1_inst_e1,
   output logic [31:0]        i1_inst_e2,
   output logic [31:0]        i1_inst_e3,
   output logic [31:0]        i1_inst_e4,
   output logic [31:0]        i1_inst_wb,

   output logic [31:0]        i0_inst_d_uncompressed,
   output logic [31:0]        i0_inst_e1_uncompressed,
   output logic [31:0]        i0_inst_e2_uncompressed,
   output logic [31:0]        i0_inst_e3_uncompressed,
   output logic [31:0]        i0_inst_e4_uncompressed,
   output logic [31:0]        i0_inst_wb_uncompressed,

   output logic [31:0]        i1_inst_d_uncompressed,
   output logic [31:0]        i1_inst_e1_uncompressed,
   output logic [31:0]        i1_inst_e2_uncompressed,
   output logic [31:0]        i1_inst_e3_uncompressed,
   output logic [31:0]        i1_inst_e4_uncompressed,
   output logic [31:0]        i1_inst_wb_uncompressed,

   output logic               dec_i0_decode_d,
   output logic               dec_i1_decode_d,

   output logic       i0_e1_ctl_en, i0_e2_ctl_en, i0_e3_ctl_en, i0_e4_ctl_en, i0_wb_ctl_en,
   output logic       i1_e1_ctl_en, i1_e2_ctl_en, i1_e3_ctl_en, i1_e4_ctl_en, i1_wb_ctl_en

  `else

   input wire clk,
   input wire  rst,
   input wire  i_jtag_tck,
   input wire  i_jtag_tms,
   input wire  i_jtag_tdi,
   input wire  i_jtag_trst_n,
   output wire o_jtag_tdo,
   output wire o_uart_tx,
   output wire o_gpio

  `endif

   )
`endif
  ;

   localparam RAM_SIZE     = 32'h10000;

`ifndef VERILATOR
   reg 	 clk = 1'b0;
   reg 	 rst = 1'b1;
   always #10 clk <= !clk;
   initial #100 rst <= 1'b0;
   wire  o_gpio;
   wire i_jtag_tck = 1'b0;
   wire i_jtag_tms = 1'b0;
   wire i_jtag_tdi = 1'b0;
   wire i_jtag_trst_n = 1'b0;
   wire o_jtag_tdo;
   wire  o_uart_tx;

//   uart_decoder #(115200) uart_decoder (o_uart_tx);

`endif


  `ifdef ViDBo
     wire [15:0]  gpio_in;
     wire [15:0]  gpio_out;
     assign gpio_in = i_sw;
     always @(posedge clk) begin
        o_led[15:0] <= gpio_out[15:0];
     end
  `endif

  `ifdef Pipeline
     wire [15:0]  gpio_in;
     wire [15:0]  gpio_out;
     assign gpio_in = i_sw;
     always @(posedge clk) begin
        o_led[15:0] <= gpio_out[15:0];
     end
  `endif


   reg [1023:0] ram_init_file;
   initial begin
      if (|$test$plusargs("jtag_vpi_enable"))
	$display("JTAG VPI enabled. Not loading RAM");
      else if ($value$plusargs("ram_init_file=%s", ram_init_file)) begin
	 $display("Loading RAM contents from %0s", ram_init_file);
	 $readmemh(ram_init_file, ram.ram.mem);
      end
   end

   reg [1023:0] rom_init_file;
   initial begin
      if ($value$plusargs("rom_init_file=%s", rom_init_file)) begin
	 $display("Loading ROM contents from %0s", rom_init_file);
	 $readmemh(rom_init_file, swervolf.bootrom.ram.mem);
      end else if (!(|bootrom_file))
	//Jump to address 0 if no bootloader is selected
	swervolf.bootrom.ram.mem[0] = 64'h0000000000000067;
   end

`ifdef ViDBo
`elsif Pipeline
`else
     wire [15:0]  i_sw;
     assign  i_sw = 16'hFE34;
`endif

   wire [5:0]  ram_awid;
   wire [31:0] ram_awaddr;
   wire [7:0]  ram_awlen;
   wire [2:0]  ram_awsize;
   wire [1:0]  ram_awburst;
   wire        ram_awlock;
   wire [3:0]  ram_awcache;
   wire [2:0]  ram_awprot;
   wire [3:0]  ram_awregion;
   wire [3:0]  ram_awqos;
   wire        ram_awvalid;
   wire        ram_awready;
   wire [5:0]  ram_arid;
   wire [31:0] ram_araddr;
   wire [7:0]  ram_arlen;
   wire [2:0]  ram_arsize;
   wire [1:0]  ram_arburst;
   wire        ram_arlock;
   wire [3:0]  ram_arcache;
   wire [2:0]  ram_arprot;
   wire [3:0]  ram_arregion;
   wire [3:0]  ram_arqos;
   wire        ram_arvalid;
   wire        ram_arready;
   wire [63:0] ram_wdata;
   wire [7:0]  ram_wstrb;
   wire        ram_wlast;
   wire        ram_wvalid;
   wire        ram_wready;
   wire [5:0]  ram_bid;
   wire [1:0]  ram_bresp;
   wire        ram_bvalid;
   wire        ram_bready;
   wire [5:0]  ram_rid;
   wire [63:0] ram_rdata;
   wire [1:0]  ram_rresp;
   wire        ram_rlast;
   wire        ram_rvalid;
   wire        ram_rready;

   wire        dmi_reg_en;
   wire [6:0]  dmi_reg_addr;
   wire        dmi_reg_wr_en;
   wire [31:0] dmi_reg_wdata;
   wire [31:0] dmi_reg_rdata;
   wire        dmi_hard_reset;
   
   axi_mem_wrapper
     #(.ID_WIDTH  (`RV_LSU_BUS_TAG+2),
       .MEM_SIZE  (RAM_SIZE),
       .INIT_FILE (""))
   ram
     (.clk       (clk),
      .rst_n     (!rst),
      .i_awid    (ram_awid),
      .i_awaddr  (ram_awaddr),
      .i_awlen   (ram_awlen),
      .i_awsize  (ram_awsize),
      .i_awburst (ram_awburst),
      .i_awvalid (ram_awvalid),
      .o_awready (ram_awready),

      .i_arid    (ram_arid),
      .i_araddr  (ram_araddr),
      .i_arlen   (ram_arlen),
      .i_arsize  (ram_arsize),
      .i_arburst (ram_arburst),
      .i_arvalid (ram_arvalid),
      .o_arready (ram_arready),

      .i_wdata  (ram_wdata),
      .i_wstrb  (ram_wstrb),
      .i_wlast  (ram_wlast),
      .i_wvalid (ram_wvalid),
      .o_wready (ram_wready),

      .o_bid    (ram_bid),
      .o_bresp  (ram_bresp),
      .o_bvalid (ram_bvalid),
      .i_bready (ram_bready),

      .o_rid    (ram_rid),
      .o_rdata  (ram_rdata),
      .o_rresp  (ram_rresp),
      .o_rlast  (ram_rlast),
      .o_rvalid (ram_rvalid),
      .i_rready (ram_rready));

   dmi_wrapper dmi_wrapper
     (.trst_n    (i_jtag_trst_n),
      .tck       (i_jtag_tck),
      .tms       (i_jtag_tms),
      .tdi       (i_jtag_tdi),
      .tdo       (o_jtag_tdo),
      .tdoEnable (),
      // Processor Signals
      .scan_mode      (1'b0),
      .core_rst_n     (!rst),
      .core_clk       (clk),
      .jtag_id        (31'd0),
      .rd_data        (dmi_reg_rdata),
      .reg_wr_data    (dmi_reg_wdata),
      .reg_wr_addr    (dmi_reg_addr),
      .reg_en         (dmi_reg_en),
      .reg_wr_en      (dmi_reg_wr_en),
      .dmi_hard_reset (dmi_hard_reset)); 

   swervolf_core
     #(.bootrom_file (bootrom_file))
   swervolf
     (

    `ifdef Pipeline

      .i0_inst_d     (i0_inst_d),
      .i0_inst_e1     (i0_inst_e1),
      .i0_inst_e2     (i0_inst_e2),
      .i0_inst_e3     (i0_inst_e3),
      .i0_inst_e4     (i0_inst_e4),
      .i0_inst_wb     (i0_inst_wb),

      .i1_inst_d     (i1_inst_d),
      .i1_inst_e1     (i1_inst_e1),
      .i1_inst_e2     (i1_inst_e2),
      .i1_inst_e3     (i1_inst_e3),
      .i1_inst_e4     (i1_inst_e4),
      .i1_inst_wb     (i1_inst_wb),

      .ic_act_miss_f2      (ic_act_miss_f2),
      .ic_act_hit_f2      (ic_act_hit_f2),

      .ib3_in      (ib3_in),
      .ib2_in      (ib2_in),
      .ib1_in      (ib1_in),
      .ib0_in      (ib0_in),

      .ic_hit_f2      (ic_hit_f2),

      .exu_i0_flush_upper_e1      (exu_i0_flush_upper_e1),
      .exu_i0_flush_path_e1_ext      (exu_i0_flush_path_e1_ext),
      .exu_i1_flush_upper_e1      (exu_i1_flush_upper_e1),
      .exu_i1_flush_path_e1_ext      (exu_i1_flush_path_e1_ext),

      .ifc_fetch_addr_f1_ext      (ifc_fetch_addr_f1_ext),

      .addr_external_dc1      (addr_external_dc1),
      .addr_external_dc2      (addr_external_dc2),
      .addr_external_dc3      (addr_external_dc3),

      .lsu_dccm_rden_dc1      (lsu_dccm_rden_dc1),
      .lsu_dccm_rden_dc2      (lsu_dccm_rden_dc2),
      .lsu_dccm_rden_dc3      (lsu_dccm_rden_dc3),

      .a_e1      (a_e1),
      .b_e1      (b_e1),
      .prod_e2_red      (prod_e2_red),
      .exu_mul_result_e3      (exu_mul_result_e3),

      .mul_rs1_d      (mul_rs1_d),
      .mul_rs2_d      (mul_rs2_d),

      .exu_lsu_rs1_d      (exu_lsu_rs1_d),

      .i0_result_e2      (i0_result_e2),
      .i1_result_e2      (i1_result_e2),
      .i0_result_e3      (i0_result_e3),
      .i1_result_e3      (i1_result_e3),

      .i0_result_e3_final      (i0_result_e3_final),
      .i1_result_e3_final      (i1_result_e3_final),

      .i0_control      (i0_control),
      .i1_control      (i1_control),
      .lsu_control      (lsu_control),
      .mul_control      (mul_control),
      .i0_branch      (i0_branch),
      .i1_branch      (i1_branch),

      .instr_control      (instr_control),

      .lsu_load_stall_any      (lsu_load_stall_any),
      .lsu_busreq_dc2      (lsu_busreq_dc2),
      .bus_read_data_dc3      (bus_read_data_dc3),
      .lsu_arvalid      (lsu_arvalid),
      .lsu_rvalid      (lsu_rvalid),

      .dccm_data_lo_dc2      (dccm_data_lo_dc2),

      .dccm_rden      (dccm_rden),

      .rs1_dc1      (rs1_dc1),
      .offset_dc1      (offset_dc1),

      .i0_result_e4_final      (i0_result_e4_final),
      .i1_result_e4_final      (i1_result_e4_final),

      .dccm_data_lo_dc3      (dccm_data_lo_dc3),

      .full_addr_dc1      (full_addr_dc1),

      .dec_lsu_offset_d      (dec_lsu_offset_d),

      .dec_i0_pc_d_ext      (dec_i0_pc_d_ext),

      .dec_i0_waddr_wb      (dec_i0_waddr_wb),
      .dec_i0_wen_wb      (dec_i0_wen_wb),
      .dec_i0_wdata_wb      (dec_i0_wdata_wb),

      .dec_i1_waddr_wb      (dec_i1_waddr_wb),
      .dec_i1_wen_wb      (dec_i1_wen_wb),
      .dec_i1_wdata_wb      (dec_i1_wdata_wb),

      .i0_rs1_d      (i0_rs1_d),
      .i0_rs2_d      (i0_rs2_d),
      .i1_rs1_d      (i1_rs1_d),
      .i1_rs2_d      (i1_rs2_d),

      .exu_i0_result_e1      (exu_i0_result_e1),
      .exu_i1_result_e1      (exu_i1_result_e1),

      .i0_rs1_bypass_data_d      (i0_rs1_bypass_data_d),
      .i0_rs2_bypass_data_d      (i0_rs2_bypass_data_d),
      .i1_rs1_bypass_data_d      (i1_rs1_bypass_data_d),
      .i1_rs2_bypass_data_d      (i1_rs2_bypass_data_d),

      .aff0      (aff0),
      .aff1      (aff1),
      .bff0      (bff0),
      .bff1      (bff1),

      .gpr_i0_rs1_d      (gpr_i0_rs1_d),
      .gpr_i0_rs2_d      (gpr_i0_rs2_d),
      .gpr_i1_rs1_d      (gpr_i1_rs1_d),
      .gpr_i1_rs2_d      (gpr_i1_rs2_d),

      .ifu_i0_instr_export (ifu_i0_instr_export),
      .ifu_i1_instr_export (ifu_i1_instr_export),

      .dec_i0_decode_d     (dec_i0_decode_d),
      .dec_i1_decode_d     (dec_i1_decode_d),
      .i0_e1_ctl_en     (i0_e1_ctl_en),
      .i1_e1_ctl_en     (i1_e1_ctl_en),
      .i0_e2_ctl_en     (i0_e2_ctl_en),
      .i1_e2_ctl_en     (i1_e2_ctl_en),
      .i0_e3_ctl_en     (i0_e3_ctl_en),
      .i1_e3_ctl_en     (i1_e3_ctl_en),
      .i0_e4_ctl_en     (i0_e4_ctl_en),
      .i1_e4_ctl_en     (i1_e4_ctl_en),
      .i0_wb_ctl_en     (i0_wb_ctl_en),
      .i1_wb_ctl_en     (i1_wb_ctl_en),

    `endif


      .clk  (clk),
      .rstn (!rst),
      .dmi_reg_rdata       (dmi_reg_rdata),
      .dmi_reg_wdata       (dmi_reg_wdata),
      .dmi_reg_addr        (dmi_reg_addr),
      .dmi_reg_en          (dmi_reg_en),
      .dmi_reg_wr_en       (dmi_reg_wr_en),
      .dmi_hard_reset      (dmi_hard_reset),
      .o_flash_sclk        (),
      .o_flash_cs_n        (),
      .o_flash_mosi        (),
      .i_flash_miso        (1'b0),
      .i_uart_rx           (1'b1),
      .o_uart_tx           (o_uart_tx),

  `ifdef ViDBo
      .tf_push                  (tf_push),
      .wb_m2s_uart_dat_output   (wb_m2s_uart_dat_output),
  `endif

      .o_ram_awid          (ram_awid),
      .o_ram_awaddr        (ram_awaddr),
      .o_ram_awlen         (ram_awlen),
      .o_ram_awsize        (ram_awsize),
      .o_ram_awburst       (ram_awburst),
      .o_ram_awlock        (ram_awlock),
      .o_ram_awcache       (ram_awcache),
      .o_ram_awprot        (ram_awprot),
      .o_ram_awregion      (ram_awregion),
      .o_ram_awqos         (ram_awqos),
      .o_ram_awvalid       (ram_awvalid),
      .i_ram_awready       (ram_awready),
      .o_ram_arid          (ram_arid),
      .o_ram_araddr        (ram_araddr),
      .o_ram_arlen         (ram_arlen),
      .o_ram_arsize        (ram_arsize),
      .o_ram_arburst       (ram_arburst),
      .o_ram_arlock        (ram_arlock),
      .o_ram_arcache       (ram_arcache),
      .o_ram_arprot        (ram_arprot),
      .o_ram_arregion      (ram_arregion),
      .o_ram_arqos         (ram_arqos),
      .o_ram_arvalid       (ram_arvalid),
      .i_ram_arready       (ram_arready),
      .o_ram_wdata         (ram_wdata),
      .o_ram_wstrb         (ram_wstrb),
      .o_ram_wlast         (ram_wlast),
      .o_ram_wvalid        (ram_wvalid),
      .i_ram_wready        (ram_wready),
      .i_ram_bid           (ram_bid),
      .i_ram_bresp         (ram_bresp),
      .i_ram_bvalid        (ram_bvalid),
      .o_ram_bready        (ram_bready),
      .i_ram_rid           (ram_rid),
      .i_ram_rdata         (ram_rdata),
      .i_ram_rresp         (ram_rresp),
      .i_ram_rlast         (ram_rlast),
      .i_ram_rvalid        (ram_rvalid),
      .o_ram_rready        (ram_rready),
      .i_ram_init_done     (1'b1),
      .i_ram_init_error    (1'b0),

  `ifdef ViDBo
      .i_data        ({gpio_in[15:0],16'b0}),
      .o_data        ({gpio_out[15:0]}),
      .AN (AN),
      .Digits_Bits ({CA,CB,CC,CD,CE,CF,CG})
  `elsif Pipeline
      .i_data        ({gpio_in[15:0],16'b0}),
      .o_data        ({gpio_out[15:0]}),
      .AN (AN),
      .Digits_Bits ({CA,CB,CC,CD,CE,CF,CG})
  `else
      .io_data             ({i_sw,16'bz})
  `endif
      );

endmodule
