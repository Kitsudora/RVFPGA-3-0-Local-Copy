// SPDX-License-Identifier: Apache-2.0
// Copyright 2022 Daniel Chaver
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

#include <cairo.h>

#include <gtk/gtk.h>
#include <string.h>
#include <stdlib.h>

#include <stdint.h>
#include <signal.h>

#include "Vrvfpgasim.h"

#include "Disassembler.h"

using namespace std;

static bool done;

vluint64_t main_time = 0;

double sc_time_stamp () {
  return main_time;
}

void INThandler(int signal) {
  printf("\nCaught ctrl-c\n");
  done = true;
}


int test_var[150];



static void do_drawing(cairo_t *cr)
{

  cairo_set_line_width(cr, 1.0);
  cairo_set_source_rgb(cr, 0.8, 0.0, 0.0);


  cairo_move_to(cr, 470,  300);
  cairo_line_to(cr, 1180, 300);

  cairo_move_to(cr, 470,  410);
  cairo_line_to(cr, 1180, 410);

  cairo_move_to(cr, 470,  525);
  cairo_line_to(cr, 1180, 525);

  cairo_move_to(cr, 470,  680);
  cairo_line_to(cr, 1180, 680);



  cairo_stroke(cr);

}


static gboolean on_draw_event(GtkWidget *widget, cairo_t *cr, 
    gpointer user_data)
{
//  do_drawing(cr);

  return FALSE;
}



static const size_t BUFSIZE=128;

void PaintOneCycle (GtkButton *button, GtkLabel *data[])
{
  char buffer[BUFSIZE]; 
  char instruction_dis[BUFSIZE] = { 0 };
  const char *format;
  char *markup;
  int i;
  
  for(i=0;i<12;i++){
    format = "<span font_desc=\"Bold\" foreground=\"blue\">%s</span>";
    memset(instruction_dis,0,strlen(instruction_dis));
    DisassembleOneInstruction(test_var[i], &instruction_dis[0]);
    if (test_var[116+i] == 1) sprintf(buffer, "%s", &instruction_dis[0]);
    else sprintf(buffer, "-----");
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[i]), markup);
    g_free (markup);
  }


  sprintf(buffer, "Cycles=%d", test_var[90]);
  gtk_label_set_text(GTK_LABEL(data[90]), buffer);



  if(test_var[60]){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "a=%x", test_var[21]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[21]), markup);
    g_free (markup);
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "b=%x", test_var[22]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[22]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "a=%x", test_var[21]);
    gtk_label_set_text(GTK_LABEL(data[21]), buffer);
    sprintf(buffer, "b=%x", test_var[22]);
    gtk_label_set_text(GTK_LABEL(data[22]), buffer);
  }

  if(test_var[66]){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "a=%x", test_var[23]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[23]), markup);
    g_free (markup);
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "b=%x", test_var[24]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[24]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "a=%x", test_var[23]);
    gtk_label_set_text(GTK_LABEL(data[23]), buffer);
    sprintf(buffer, "b=%x", test_var[24]);
    gtk_label_set_text(GTK_LABEL(data[24]), buffer);
  }


  if(test_var[61]){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "a_ff=%x", test_var[25]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[25]), markup);
    g_free (markup);
    sprintf(buffer, "b_ff=%x", test_var[26]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[26]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "a_ff=%x", test_var[25]);
    gtk_label_set_text(GTK_LABEL(data[25]), buffer);
    sprintf(buffer, "b_ff=%x", test_var[26]);
    gtk_label_set_text(GTK_LABEL(data[26]), buffer);
  }   

  if(test_var[67]){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "a_ff=%x", test_var[27]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[27]), markup);
    g_free (markup);
    sprintf(buffer, "b_ff=%x", test_var[28]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[28]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "a_ff=%x", test_var[27]);
    gtk_label_set_text(GTK_LABEL(data[27]), buffer);
    sprintf(buffer, "b_ff=%x", test_var[28]);
    gtk_label_set_text(GTK_LABEL(data[28]), buffer);
  }   

  if(test_var[61] && (test_var[104]==0)){
    sprintf(buffer, "out=%x", test_var[29]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[29]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "out=%x", test_var[29]);
    gtk_label_set_text(GTK_LABEL(data[29]), buffer);
  }   

  if(test_var[67] && (test_var[105]==0)){
    sprintf(buffer, "out=%x", test_var[30]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[30]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "out=%x", test_var[30]);
    gtk_label_set_text(GTK_LABEL(data[30]), buffer);
  }   


  if(test_var[32]){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "waddr0=%x", test_var[31]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[31]), markup);
    g_free (markup);
    sprintf(buffer, "wen0=%x", test_var[32]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[32]), markup);
    g_free (markup);
    sprintf(buffer, "wd0=%x", test_var[33]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[33]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "waddr0=%x", test_var[31]);
    gtk_label_set_text(GTK_LABEL(data[31]), buffer);
    sprintf(buffer, "wen0=%x", test_var[32]);
    gtk_label_set_text(GTK_LABEL(data[32]), buffer);
    sprintf(buffer, "wd0=%x", test_var[33]);
    gtk_label_set_text(GTK_LABEL(data[33]), buffer);
  }

  if(test_var[35]){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "waddr1=%x", test_var[34]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[34]), markup);
    g_free (markup);
    sprintf(buffer, "wen1=%x", test_var[35]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[35]), markup);
    g_free (markup);
    sprintf(buffer, "wd1=%x", test_var[36]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[36]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "waddr1=%x", test_var[34]);
    gtk_label_set_text(GTK_LABEL(data[34]), buffer);
    sprintf(buffer, "wen1=%x", test_var[35]);
    gtk_label_set_text(GTK_LABEL(data[35]), buffer);
    sprintf(buffer, "wd1=%x", test_var[36]);
    gtk_label_set_text(GTK_LABEL(data[36]), buffer);
  }


  if(test_var[54]){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "exu_lsu_rs1_d=%x", test_var[37]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[37]), markup);
    g_free (markup);
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "offset=%x", test_var[39]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[39]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "exu_lsu_rs1_d=%x", test_var[37]);
    gtk_label_set_text(GTK_LABEL(data[37]), buffer);
    sprintf(buffer, "offset=%x", test_var[39]);
    gtk_label_set_text(GTK_LABEL(data[39]), buffer);
  }


  if(test_var[62] && (test_var[2] != 0x00000013)){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "i0_result_e2=%x", test_var[72]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[72]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "i0_result_e2=%x", test_var[72]);
    gtk_label_set_text(GTK_LABEL(data[72]), buffer);
  }
  if(test_var[68] && (test_var[8] != 0x00000013)){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "i1_result_e2=%x", test_var[73]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[73]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "i1_result_e2=%x", test_var[73]);
    gtk_label_set_text(GTK_LABEL(data[73]), buffer);
  }

  if(test_var[63] && (test_var[3] != 0x00000013)){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "i0_result_e3=%x", test_var[74]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[74]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "i0_result_e3=%x", test_var[74]);
    gtk_label_set_text(GTK_LABEL(data[74]), buffer);
  }
  if(test_var[69] && (test_var[9] != 0x00000013)){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "i1_result_e3=%x", test_var[75]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[75]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "i1_result_e3=%x", test_var[75]);
    gtk_label_set_text(GTK_LABEL(data[75]), buffer);
  }

  if(test_var[57] && test_var[92]){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "dccm_data_lo_dc3=%x", test_var[46]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[46]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "dccm_data_lo_dc3=%x", test_var[46]);
    gtk_label_set_text(GTK_LABEL(data[46]), buffer);
  }


  if((test_var[57] || test_var[63] || test_var[87]) && (test_var[3] != 0x00000013)){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "i0_result_e3_final=%x", test_var[78]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[78]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "i0_result_e3_final=%x", test_var[78]);
    gtk_label_set_text(GTK_LABEL(data[78]), buffer);
  }
  if((test_var[57] || test_var[69] || test_var[87]) && (test_var[9] != 0x00000013)){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "i1_result_e3_final=%x", test_var[79]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[79]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "i1_result_e3_final=%x", test_var[79]);
    gtk_label_set_text(GTK_LABEL(data[79]), buffer);
  }


  if((test_var[58] || test_var[64] || test_var[88]) && (test_var[4] != 0x00000013)){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "i0_result_e4_final=%x", test_var[47]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[47]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "i0_result_e4_final=%x", test_var[47]);
    gtk_label_set_text(GTK_LABEL(data[47]), buffer);
  }

  if((test_var[58] || test_var[70] || test_var[88]) && (test_var[10] != 0x00000013)){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "i1_result_e4_final=%x", test_var[48]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[48]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "i1_result_e4_final=%x", test_var[48]);
    gtk_label_set_text(GTK_LABEL(data[48]), buffer);
  }


  if(test_var[84]){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "mul_rs1_d=%x", test_var[76]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[76]), markup);
    g_free (markup);
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "mul_rs2_d=%x", test_var[77]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[77]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "mul_rs1_d=%x", test_var[76]);
    gtk_label_set_text(GTK_LABEL(data[76]), buffer);
    sprintf(buffer, "mul_rs2_d=%x", test_var[77]);
    gtk_label_set_text(GTK_LABEL(data[77]), buffer);
  }


  if(test_var[87]){
    format = "<span foreground=\"red\">\%s</span>";
    sprintf(buffer, "exu_mul_result_e3=%x", test_var[83]);
    markup = g_markup_printf_escaped (format, buffer);
    gtk_label_set_markup (GTK_LABEL (data[83]), markup);
    g_free (markup);
  }
  else{
    sprintf(buffer, "exu_mul_result_e3=%x", test_var[83]);
    gtk_label_set_text(GTK_LABEL(data[83]), buffer);
  }


  gtk_main_quit();
}





int main(int argc, char **argv, char **env) {
  
  Verilated::commandArgs(argc, argv);

  Vrvfpgasim* top = new Vrvfpgasim;

  signal(SIGINT, INThandler);

  top->clk = 1;
  int last_leds = top->o_led;
  int new_SevSegDispl = 0;
  int last_SevSegDispl = 0;
  int new_Enables = 0;
  int sidx = 0;
  int SevSegDispl4;
  int Digit, Digit_Hex, CheckDigit=0;
  char item2[13] = {0}; //Space for SevSegDispl?\0
  int TestInside=0;
  int Cycles=0;

  printf("\nHELLO_TB\n");


  GtkWidget *window;
  GtkWidget *grid;
  GtkWidget *subButton;
  int i;
  void * data[120];

  char buffer[30]; 
  const char *format;
  char *markup;

  gtk_init (0,0);

  window        = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_container_set_border_width (GTK_CONTAINER(window), 5);

  grid          = gtk_grid_new ();
  gtk_container_add              (GTK_CONTAINER(window), grid);
  gtk_grid_set_row_spacing       (GTK_GRID(grid), 2);
  gtk_grid_set_column_spacing    (GTK_GRID(grid), 2);

  //Pipeline Stages
  GtkWidget *stages[9];
  stages[2]=gtk_label_new ("-----");
  stages[3]=gtk_label_new ("DECODE");
  stages[4]=gtk_label_new ("EX1/DC1/M1");
  stages[5]=gtk_label_new ("EX2/DC2/M2");
  stages[6]=gtk_label_new ("EX3/DC3/M3");
  stages[7]=gtk_label_new ("COMMIT");
  stages[8]=gtk_label_new ("WRITE-BACK");
  void * stages_data[9];
  for (i=2;i<9;i++) stages_data[i]=stages[i];
  for (i=2;i<9;i++) gtk_label_set_selectable (GTK_LABEL(stages[i]), TRUE);
  gtk_grid_attach (GTK_GRID(grid), stages[2],  200, 2, 80, 10);
  gtk_grid_attach (GTK_GRID(grid), stages[3],  300, 2, 80, 10);
  gtk_grid_attach (GTK_GRID(grid), stages[4],  400, 2, 80, 10);
  gtk_grid_attach (GTK_GRID(grid), stages[5],  500, 2, 80, 10);
  gtk_grid_attach (GTK_GRID(grid), stages[6],  600, 2, 80, 10);
  gtk_grid_attach (GTK_GRID(grid), stages[7],  800, 2, 100, 10);
  gtk_grid_attach (GTK_GRID(grid), stages[8],  950, 2, 30, 10);
  for (i=2;i<9;i++) gtk_label_set_xalign (GTK_LABEL(stages_data[i]), 0.0);
  format = "<span font_desc=\"Bold\" foreground=\"green\">%s</span>";
  sprintf(buffer, "-----");
  markup = g_markup_printf_escaped (format, buffer);
  gtk_label_set_markup (GTK_LABEL (stages[2]), markup);
  sprintf(buffer, "DECODE");
  markup = g_markup_printf_escaped (format, buffer);
  gtk_label_set_markup (GTK_LABEL (stages[3]), markup);
  sprintf(buffer, "EX1/DC1/M1");
  markup = g_markup_printf_escaped (format, buffer);
  gtk_label_set_markup (GTK_LABEL (stages[4]), markup);
  sprintf(buffer, "EX2/DC2/M2");
  markup = g_markup_printf_escaped (format, buffer);
  gtk_label_set_markup (GTK_LABEL (stages[5]), markup);
  sprintf(buffer, "EX3/DC3/M3");
  markup = g_markup_printf_escaped (format, buffer);
  gtk_label_set_markup (GTK_LABEL (stages[6]), markup);
  sprintf(buffer, "COMMIT");
  markup = g_markup_printf_escaped (format, buffer);
  gtk_label_set_markup (GTK_LABEL (stages[7]), markup);
  sprintf(buffer, "WRITE-BACK");
  markup = g_markup_printf_escaped (format, buffer);
  gtk_label_set_markup (GTK_LABEL (stages[8]), markup);
  g_free (markup);

  //Pipes
  GtkWidget *pipes[4];
  pipes[0]=gtk_label_new ("           I0 Pipe");
  pipes[1]=gtk_label_new ("           I1 Pipe");
  pipes[2]=gtk_label_new ("           L/S Pipe");
  pipes[3]=gtk_label_new ("           MUL Pipe");
  void * pipes_data[4];
  for (i=0;i<4;i++) pipes_data[i]=pipes[i];
  for (i=0;i<4;i++) gtk_label_set_selectable (GTK_LABEL(pipes[i]), TRUE);
  gtk_grid_attach (GTK_GRID(grid), pipes[0],  200, 1001, 1, 1);
  gtk_grid_attach (GTK_GRID(grid), pipes[1],  200, 1201, 1, 1);
  gtk_grid_attach (GTK_GRID(grid), pipes[2],  200, 2301, 1, 1);
  gtk_grid_attach (GTK_GRID(grid), pipes[3],  200, 3001, 1, 1);
  for (i=0;i<4;i++) gtk_label_set_xalign (GTK_LABEL(pipes_data[i]), 0.0);
  format = "<span font_desc=\"Bold\" foreground=\"green\">%s</span>";
  sprintf(buffer, "           I0 Pipe");
  markup = g_markup_printf_escaped (format, buffer);
  gtk_label_set_markup (GTK_LABEL (pipes[0]), markup);
  sprintf(buffer, "           I1 Pipe");
  markup = g_markup_printf_escaped (format, buffer);
  gtk_label_set_markup (GTK_LABEL (pipes[1]), markup);
  sprintf(buffer, "           L/S Pipe");
  markup = g_markup_printf_escaped (format, buffer);
  gtk_label_set_markup (GTK_LABEL (pipes[2]), markup);
  sprintf(buffer, "           MUL Pipe");
  markup = g_markup_printf_escaped (format, buffer);
  gtk_label_set_markup (GTK_LABEL (pipes[3]), markup);
  g_free (markup);

  //Ways
  GtkWidget *ways[2];
  ways[0]=gtk_label_new ("Instr Way 0");
  ways[1]=gtk_label_new ("Instr Way 1");
  void * ways_data[2];
  for (i=0;i<2;i++) ways_data[i]=ways[i];
  for (i=0;i<2;i++) gtk_label_set_selectable (GTK_LABEL(ways[i]), TRUE);
  gtk_grid_attach (GTK_GRID(grid), ways[0],  200, 101, 1, 1);
  gtk_grid_attach (GTK_GRID(grid), ways[1],  200, 102, 1, 1);
  for (i=0;i<2;i++) gtk_label_set_xalign (GTK_LABEL(ways_data[i]), 0.0);
  sprintf(buffer, "Instr Way 0");
  markup = g_markup_printf_escaped (format, buffer);
  gtk_label_set_markup (GTK_LABEL (ways[0]), markup);
  sprintf(buffer, "Instr Way 1");
  markup = g_markup_printf_escaped (format, buffer);
  gtk_label_set_markup (GTK_LABEL (ways[1]), markup);
  g_free (markup);


  //Instructions
  GtkWidget *instructions[12];
  for(i=0;i<12;i++) instructions[i]=gtk_label_new ("----------------------");
  for (i=0;i<12;i++) gtk_label_set_selectable (GTK_LABEL(instructions[i]), TRUE);
  gtk_grid_attach (GTK_GRID(grid), instructions[0],     300, 101,  80, 1);
  gtk_grid_attach (GTK_GRID(grid), instructions[1],     400, 101,  80, 1);
  gtk_grid_attach (GTK_GRID(grid), instructions[2],     500, 101,  80, 1);
  gtk_grid_attach (GTK_GRID(grid), instructions[3],     600, 101,  80, 1);
  gtk_grid_attach (GTK_GRID(grid), instructions[4],     800, 101,  100, 1);
  gtk_grid_attach (GTK_GRID(grid), instructions[5],     950, 101,  30, 1);
  gtk_grid_attach (GTK_GRID(grid), instructions[6],     300, 102,  80, 1);
  gtk_grid_attach (GTK_GRID(grid), instructions[7],     400, 102,  80, 1);
  gtk_grid_attach (GTK_GRID(grid), instructions[8],     500, 102,  80, 1);
  gtk_grid_attach (GTK_GRID(grid), instructions[9],     600, 102,  80, 1);
  gtk_grid_attach (GTK_GRID(grid), instructions[10],    800, 102,  100, 1);
  gtk_grid_attach (GTK_GRID(grid), instructions[11],    950, 102,  30, 1);
  for (i=0;i<12;i++) data[i]=instructions[i];
  for (i=0;i<12;i++) gtk_label_set_xalign (GTK_LABEL(data[i]), 0.0);

  //Input Integer Pipes Decode
  GtkWidget *inputdeco[4];
  for(i=0;i<4;i++) inputdeco[i]=gtk_label_new ("----------------------");
  for (i=0;i<4;i++) gtk_label_set_selectable (GTK_LABEL(inputdeco[i]), TRUE);
  gtk_grid_attach (GTK_GRID(grid), inputdeco[0],   300, 1000, 200, 1);
  gtk_grid_attach (GTK_GRID(grid), inputdeco[1],   300, 1002, 200, 1);
  gtk_grid_attach (GTK_GRID(grid), inputdeco[2],   300, 1200, 200, 1);
  gtk_grid_attach (GTK_GRID(grid), inputdeco[3],   300, 1202, 200, 1);
  for (i=0;i<4;i++) data[i+21]=inputdeco[i];
  for (i=0;i<4;i++) gtk_label_set_xalign (GTK_LABEL(data[i+21]), 0.0);

  //Input ALU EX1
  GtkWidget *inputalu[4];
  for(i=0;i<4;i++) inputalu[i]=gtk_label_new ("----------------------");
  for (i=0;i<4;i++) gtk_label_set_selectable (GTK_LABEL(inputalu[i]), TRUE);
  gtk_grid_attach (GTK_GRID(grid), inputalu[0],      400, 1000,  80, 1);
  gtk_grid_attach (GTK_GRID(grid), inputalu[1],      400, 1002,  80, 1);
  gtk_grid_attach (GTK_GRID(grid), inputalu[2],      400, 1200,  80, 1);
  gtk_grid_attach (GTK_GRID(grid), inputalu[3],      400, 1202,  80, 1);
  for (i=0;i<4;i++) data[i+25]=inputalu[i];
  for (i=0;i<4;i++) gtk_label_set_xalign (GTK_LABEL(data[i+25]), 0.0);

  //Output ALU EX1
  GtkWidget *outputalu[2];
  for(i=0;i<2;i++) outputalu[i]=gtk_label_new ("----------------------");
  for (i=0;i<2;i++) gtk_label_set_selectable (GTK_LABEL(outputalu[i]), TRUE);
  gtk_grid_attach (GTK_GRID(grid), outputalu[0],      420, 1001, 80, 1);
  gtk_grid_attach (GTK_GRID(grid), outputalu[1],      420, 1201, 80, 1);
  for (i=0;i<2;i++) data[i+29]=outputalu[i];
  for (i=0;i<2;i++) gtk_label_set_xalign (GTK_LABEL(data[i+29]), 0.0);

  //Register Write WB
  GtkWidget *regwrite[6];
  for(i=0;i<6;i++) regwrite[i]=gtk_label_new ("----------------------");
  for (i=0;i<6;i++) gtk_label_set_selectable (GTK_LABEL(regwrite[i]), TRUE);
  gtk_grid_attach (GTK_GRID(grid), regwrite[0],      950, 2000, 30, 1);
  gtk_grid_attach (GTK_GRID(grid), regwrite[1],      950, 2001, 30, 1);
  gtk_grid_attach (GTK_GRID(grid), regwrite[2],      950, 2002, 30, 1);
  gtk_grid_attach (GTK_GRID(grid), regwrite[3],      950, 2200, 30, 1);
  gtk_grid_attach (GTK_GRID(grid), regwrite[4],      950, 2201, 30, 1);
  gtk_grid_attach (GTK_GRID(grid), regwrite[5],      950, 2202, 30, 1);
  for (i=0;i<6;i++) data[i+31]=regwrite[i];
  for (i=0;i<6;i++) gtk_label_set_xalign (GTK_LABEL(data[i+31]), 0.0);

  //Inputs Decode L/S
  GtkWidget *regLS[5];
  for(i=0;i<5;i++) regLS[i]=gtk_label_new ("----------------------");
  for (i=0;i<5;i++) gtk_label_set_selectable (GTK_LABEL(regLS[i]), TRUE);
  gtk_grid_attach (GTK_GRID(grid), regLS[0],      300, 2300,  100, 1);
  gtk_grid_attach (GTK_GRID(grid), regLS[2],      300, 2301,  100, 1);
  for (i=0;i<5;i++) data[i+37]=regLS[i];
  for (i=0;i<5;i++) gtk_label_set_xalign (GTK_LABEL(data[i+37]), 0.0);

  //DCCM_Data
  GtkWidget *dccmdata[4];
  for(i=0;i<4;i++) dccmdata[i]=gtk_label_new ("----------------------");
  for(i=0;i<4;i++) gtk_label_set_selectable (GTK_LABEL(dccmdata[i]), TRUE);
  gtk_grid_attach (GTK_GRID(grid), dccmdata[0],      600, 2301, 80, 1);
  gtk_grid_attach (GTK_GRID(grid), dccmdata[1],      800, 2001,  100, 1);
  gtk_grid_attach (GTK_GRID(grid), dccmdata[2],      800, 2201,  100, 1);
  for(i=0;i<4;i++) data[i+46]=dccmdata[i];
  for(i=0;i<4;i++) gtk_label_set_xalign (GTK_LABEL(data[i+46]), 0.0);

  //EX2 and EX3 results
  GtkWidget *result23data[4];
  for(i=0;i<4;i++) result23data[i]=gtk_label_new ("----------------------");
  for(i=0;i<4;i++) gtk_label_set_selectable (GTK_LABEL(result23data[i]), TRUE);
  gtk_grid_attach (GTK_GRID(grid), result23data[0],      500, 1001,  80, 1);
  gtk_grid_attach (GTK_GRID(grid), result23data[1],      500, 1201, 80, 1);
  gtk_grid_attach (GTK_GRID(grid), result23data[2],      600, 1001,  80, 1);
  gtk_grid_attach (GTK_GRID(grid), result23data[3],      600, 1201, 80, 1);
  for(i=0;i<4;i++) data[i+72]=result23data[i];
  for(i=0;i<4;i++) gtk_label_set_xalign (GTK_LABEL(data[i+72]), 0.0);

  //Mult Deco
  GtkWidget *muldecodata[4];
  for(i=0;i<4;i++) muldecodata[i]=gtk_label_new ("----------------------");
  for(i=0;i<4;i++) gtk_label_set_selectable (GTK_LABEL(muldecodata[i]), TRUE);
  gtk_grid_attach (GTK_GRID(grid), muldecodata[0],      300, 3000,  100, 1);
  gtk_grid_attach (GTK_GRID(grid), muldecodata[1],      300, 3002,  100, 1);
  gtk_grid_attach (GTK_GRID(grid), muldecodata[2],      650, 2001,  100, 1);
  gtk_grid_attach (GTK_GRID(grid), muldecodata[3],      650, 2201,  100, 1);
  for(i=0;i<4;i++) data[i+76]=muldecodata[i];
  for(i=0;i<4;i++) gtk_label_set_xalign (GTK_LABEL(data[i+76]), 0.0);

  //Mult M1, M2, M3
  GtkWidget *mulm1data[4];
  for(i=0;i<4;i++) mulm1data[i]=gtk_label_new ("----------------------");
  for(i=0;i<4;i++) gtk_label_set_selectable (GTK_LABEL(mulm1data[i]), TRUE);
  gtk_grid_attach (GTK_GRID(grid), mulm1data[3],      600, 3001,  80, 1);
  for(i=0;i<4;i++) data[i+80]=mulm1data[i];
  for(i=0;i<4;i++) gtk_label_set_xalign (GTK_LABEL(data[i+80]), 0.0);

  //White Spaces
  GtkWidget *white[30];
  for(i=0;i<30;i++) white[i]=gtk_label_new ("");
  void * white_data[30];
  for (i=0;i<30;i++) white_data[i]=white[i];
  for (i=0;i<30;i++) gtk_label_set_selectable (GTK_LABEL(white[i]), TRUE);
//  gtk_grid_attach (GTK_GRID(grid), white[0],  0, 150 , 1, 10);
  gtk_grid_attach (GTK_GRID(grid), white[1],  0, 1100, 1, 30);
  gtk_grid_attach (GTK_GRID(grid), white[3],  0, 2500, 1, 30);
  gtk_grid_attach (GTK_GRID(grid), white[4],  0, 3500, 1, 30);
  gtk_grid_attach (GTK_GRID(grid), white[5],  0, 800, 1, 10);
  gtk_grid_attach (GTK_GRID(grid), white[6],  0, 400, 1, 10);
  for (i=0;i<15;i++) gtk_label_set_yalign (GTK_LABEL(white_data[i]), 0.0);

  //Sub Button
  subButton     = gtk_button_new_with_label ("+ 1 Cycle");
  gtk_grid_attach (GTK_GRID(grid), subButton, 950, 4001, 1, 1);

  //Cycles
  GtkWidget *cycles;
  cycles=gtk_label_new ("----------------------");
  data[90]=cycles;
  gtk_label_set_selectable (GTK_LABEL(cycles), TRUE);
  gtk_grid_attach (GTK_GRID(grid), cycles,  950, 4000, 1, 1);
  gtk_label_set_xalign (GTK_LABEL(cycles), 0.0);

  //Draw
  g_signal_connect(G_OBJECT(grid), "draw", G_CALLBACK(on_draw_event), NULL);  

  gtk_widget_show_all (window);







  while (!(done || Verilated::gotFinish())) {

    top->eval();

    top->clk = !top->clk;
    main_time+=10;

    if ((top->i0_inst_d==0x01eef033) || (top->i1_inst_d==0x01eef033)) TestInside=1;


    if ( (TestInside && top->clk) ){

        Cycles++;

        test_var[0]=top->i0_inst_d;
        test_var[1]=top->i0_inst_e1;
        test_var[2]=top->i0_inst_e2;
        test_var[3]=top->i0_inst_e3;
        test_var[4]=top->i0_inst_e4;
        test_var[5]=top->i0_inst_wb;
        test_var[6]=top->i1_inst_d;
        test_var[7]=top->i1_inst_e1;
        test_var[8]=top->i1_inst_e2;
        test_var[9]=top->i1_inst_e3;
        test_var[10]=top->i1_inst_e4;
        test_var[11]=top->i1_inst_wb;
        test_var[12]=top->gpr_i0_rs1_d;
        test_var[13]=top->gpr_i0_rs2_d;
        test_var[14]=top->gpr_i1_rs1_d;
        test_var[15]=top->gpr_i1_rs2_d;
        test_var[16]=top->dec_i0_pc_d_ext;
        test_var[17]=top->i0_rs1_bypass_data_d;
        test_var[18]=top->i0_rs2_bypass_data_d;
        test_var[19]=top->i1_rs1_bypass_data_d;
        test_var[20]=top->i1_rs2_bypass_data_d;
        test_var[21]=top->i0_rs1_d;
        test_var[22]=top->i0_rs2_d;
        test_var[23]=top->i1_rs1_d;
        test_var[24]=top->i1_rs2_d;
        test_var[25]=top->aff0;
        test_var[26]=top->bff0;
        test_var[27]=top->aff1;
        test_var[28]=top->bff1;
        test_var[29]=top->exu_i0_result_e1;
        test_var[30]=top->exu_i1_result_e1;
        test_var[31]=top->dec_i0_waddr_wb;
        test_var[32]=top->dec_i0_wen_wb;
        test_var[33]=top->dec_i0_wdata_wb;
        test_var[34]=top->dec_i1_waddr_wb;
        test_var[35]=top->dec_i1_wen_wb;
        test_var[36]=top->dec_i1_wdata_wb;
        test_var[37]=top->exu_lsu_rs1_d;
        test_var[38]=top->gpr_i1_rs1_d;
        test_var[39]=top->dec_lsu_offset_d;
        test_var[40]=top->full_addr_dc1;
        test_var[41]=top->dccm_data_lo_dc3;
        test_var[42]=top->rs1_dc1;
        test_var[43]=top->offset_dc1;
        test_var[44]=top->full_addr_dc1;
        test_var[45]=top->dccm_rden;
        test_var[46]=top->dccm_data_lo_dc3;
        test_var[47]=top->i0_result_e4_final;
        test_var[48]=top->i1_result_e4_final;
        test_var[49]=top->dccm_data_lo_dc2;
        test_var[50]=top->lsu_arvalid;
        test_var[51]=top->lsu_rvalid;
        test_var[52]=top->bus_read_data_dc3;

        if((top->lsu_control) & 1) test_var[54]=1;
        else test_var[54]=0;
        if((top->lsu_control) & 2) test_var[55]=1;
        else test_var[55]=0;
        if((top->lsu_control) & 4) test_var[56]=1;
        else test_var[56]=0;
        if((top->lsu_control) & 8) test_var[57]=1;
        else test_var[57]=0;
        if((top->lsu_control) & 16) test_var[58]=1;
        else test_var[58]=0;
        if((top->lsu_control) & 32) test_var[59]=1;
        else test_var[59]=0;

        if(((top->i0_control) & 1) && (top->i0_inst_d != 0x00000013)) test_var[60]=1;
        else test_var[60]=0;
        if(((top->i0_control) & 2) && (top->i0_inst_e1 != 0x00000013)) test_var[61]=1;
        else test_var[61]=0;
        if(((top->i0_control) & 4) && (top->i0_inst_e2 != 0x00000013)) test_var[62]=1;
        else test_var[62]=0;
        if(((top->i0_control) & 8) && (top->i0_inst_e3 != 0x00000013)) test_var[63]=1;
        else test_var[63]=0;
        if(((top->i0_control) & 16) && (top->i0_inst_e4 != 0x00000013)) test_var[64]=1;
        else test_var[64]=0;

        if(((top->i1_control) & 1) && (top->i1_inst_d != 0x00000013)) test_var[66]=1;
        else test_var[66]=0;
        if(((top->i1_control) & 2) && (top->i1_inst_e1 != 0x00000013)) test_var[67]=1;
        else test_var[67]=0;
        if(((top->i1_control) & 4) && (top->i1_inst_e2 != 0x00000013)) test_var[68]=1;
        else test_var[68]=0;
        if(((top->i1_control) & 8) && (top->i1_inst_e3 != 0x00000013)) test_var[69]=1;
        else test_var[69]=0;
        if(((top->i1_control) & 16) && (top->i1_inst_e4 != 0x00000013)) test_var[70]=1;
        else test_var[70]=0;

        if((top->mul_control) & 1) test_var[84]=1;
        else test_var[84]=0;
        if((top->mul_control) & 2) test_var[85]=1;
        else test_var[85]=0;
        if((top->mul_control) & 4) test_var[86]=1;
        else test_var[86]=0;
        if((top->mul_control) & 8) test_var[87]=1;
        else test_var[87]=0;
        if((top->mul_control) & 16) test_var[88]=1;
        else test_var[88]=0;
        if((top->mul_control) & 32) test_var[89]=1;
        else test_var[89]=0;

        test_var[72]=top->i0_result_e2;
        test_var[73]=top->i1_result_e2;
        test_var[74]=top->i0_result_e3;
        test_var[75]=top->i1_result_e3;

        test_var[78]=top->i0_result_e3_final;
        test_var[79]=top->i1_result_e3_final;

        test_var[76]=top->mul_rs1_d;
        test_var[77]=top->mul_rs2_d;
        test_var[80]=top->a_e1;
        test_var[81]=top->b_e1;
        test_var[82]=top->prod_e2_red;
        test_var[83]=top->exu_mul_result_e3;

        test_var[90]=Cycles;

        test_var[91]=top->lsu_dccm_rden_dc2;
        test_var[92]=top->lsu_dccm_rden_dc3;

        test_var[94]=top->addr_external_dc1;
        test_var[95]=top->addr_external_dc2;
        test_var[96]=top->addr_external_dc3;

        test_var[98]=top->ifc_fetch_addr_f1_ext;

        test_var[100]=top->exu_i0_flush_upper_e1;
        test_var[101]=top->exu_i0_flush_path_e1_ext;
        test_var[102]=top->exu_i1_flush_upper_e1;
        test_var[103]=top->exu_i1_flush_path_e1_ext;

        if((top->i0_branch) & 1) test_var[104]=1;
        else test_var[104]=0;
        if((top->i1_branch) & 1) test_var[105]=1;
        else test_var[105]=0;

        test_var[108]=top->ic_act_hit_f2;
        test_var[109]=top->ic_act_miss_f2;

        test_var[112]=top->ib0_in;
        test_var[113]=top->ib1_in;
        test_var[114]=top->ib2_in;
        test_var[115]=top->ib3_in;

        if((top->instr_control) & 1) test_var[116]=1;
        else test_var[116]=0;
        if((top->instr_control) & 2) test_var[117]=1;
        else test_var[117]=0;
        if((top->instr_control) & 4) test_var[118]=1;
        else test_var[118]=0;
        if((top->instr_control) & 8) test_var[119]=1;
        else test_var[119]=0;
        if((top->instr_control) & 16) test_var[120]=1;
        else test_var[120]=0;
        if((top->instr_control) & 32) test_var[121]=1;
        else test_var[121]=0;

        if((top->instr_control) & 64) test_var[122]=1;
        else test_var[122]=0;
        if((top->instr_control) & 128) test_var[123]=1;
        else test_var[123]=0;
        if((top->instr_control) & 256) test_var[124]=1;
        else test_var[124]=0;
        if((top->instr_control) & 512) test_var[125]=1;
        else test_var[125]=0;
        if((top->instr_control) & 1024) test_var[126]=1;
        else test_var[126]=0;
        if((top->instr_control) & 2048) test_var[127]=1;
        else test_var[127]=0;


/*
        test_var[116]=top->dec_i0_decode_d;
        test_var[117]=top->i0_e1_ctl_en;
        test_var[118]=top->i0_e2_ctl_en;
        test_var[119]=top->i0_e3_ctl_en;
        test_var[120]=top->i0_e4_ctl_en;
        test_var[121]=top->i0_wb_ctl_en;

        test_var[122]=top->dec_i1_decode_d;
        test_var[123]=top->i1_e1_ctl_en;
        test_var[124]=top->i1_e2_ctl_en;
        test_var[125]=top->i1_e3_ctl_en;
        test_var[126]=top->i1_e4_ctl_en;
        test_var[127]=top->i1_wb_ctl_en;
*/


        g_signal_connect(G_OBJECT(subButton), "clicked", G_CALLBACK(PaintOneCycle), data);

        gtk_main();
    }

  }

  exit(0);
}


