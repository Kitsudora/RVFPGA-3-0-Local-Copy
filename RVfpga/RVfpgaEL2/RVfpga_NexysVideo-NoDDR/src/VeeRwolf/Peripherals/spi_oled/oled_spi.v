module oled_spi(
  // 8bit WISHBONE bus slave interface
  input  wire       clk_i,         // clock
  input  wire       rst_i,         // reset (synchronous active high)
  input  wire       cyc_i,         // cycle
  input  wire       stb_i,         // strobe
  input  wire [2:0] adr_i,         // address
  input  wire       we_i,          // write enable
  input  wire [7:0] dat_i,         // data input
  output wire [7:0] dat_o,         // data output
  output wire       ack_o,         // normal bus termination
  output wire       inta_o,        // interrupt output

  // SPI port
  output wire       sck_o,         // serial clock output
  output wire       mosi_o,        // MasterOut SlaveIN

  // OLED Control lines
  output wire       oled_dc_o,
  output wire       oled_res_o,
  output wire       oled_vbat_o,
  output wire       oled_vdd_o
);

wire [7:0] spi_data_o;

simple_spi oled_spi(
      .clk_i  (clk_i),
      .rst_i  (rst_i),
      .adr_i  (adr_i),
      .dat_i  (dat_i),
      .we_i   (we_i),
      .cyc_i  (cyc_i),
      .stb_i  (stb_i),
      .dat_o  (spi_data_o),
      .ack_o  (ack_o),
      .inta_o (inta_o),
      // SPI interface
      .sck_o  (sck_o),
      // .ss_o   (ss_o),           // Single OLED only, CS not used
      .mosi_o (mosi_o)
      // .miso_i (miso_i)          // OLED is write-only, no MISO required
);

wire wb_acc = cyc_i & stb_i;       // WISHBONE access
wire wb_wr  = wb_acc & we_i;       // WISHBONE write access

always @(posedge clk_i)
  if (rst_i)
    begin
      oled_control_lines <= 4'hF;  // all control lines are active low
    end
  else if(wb_wr)
    begin
      if (adr_i == 3'b101)
        begin
          oled_control_lines <= dat_i[3:0];
        end
    end

reg [3:0] oled_control_lines;
reg [7:0] oled_data_o;

always @(posedge clk_i)
  case (adr_i)
    3'b101: oled_data_o = {4'b0000, oled_control_lines};
    default: oled_data_o = 8'h00;
  endcase

assign dat_o = oled_data_o | spi_data_o;

assign oled_dc_o = oled_control_lines[0];
assign oled_res_o = oled_control_lines[1];
assign oled_vbat_o = oled_control_lines[2];
assign oled_vdd_o = oled_control_lines[3];

endmodule