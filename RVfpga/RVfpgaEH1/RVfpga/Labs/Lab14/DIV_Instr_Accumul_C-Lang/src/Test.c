#if defined(D_NEXYS_A7)
   #include <bsp_printf.h>
   #include <bsp_mem_map.h>
   #include <bsp_version.h>
#else
   PRE_COMPILED_MSG("no platform was defined")
#endif
#include <psp_api.h>


int Test_C(int a, int d)
{
   int b, c, e=0, i=1;
   do {
      b = a/i;
      c = d/i;
      i = i+1;
      e = e + (b-c);
   } while(i<65535);
   return(e);
}

int main(void)
{
   int cyc_beg, cyc_end;
   int instr_beg, instr_end;
   int DivCom_beg, DivCom_end;

   int a=0x20080000, d=0x20000000, out;

   /* Initialize Uart */
   uartInit();

   pspEnableAllPerformanceMonitor(1);

   pspPerformanceCounterSet(D_PSP_COUNTER0, E_CYCLES_CLOCKS_ACTIVE);
   pspPerformanceCounterSet(D_PSP_COUNTER1, E_INSTR_COMMITTED_ALL);
   pspPerformanceCounterSet(D_PSP_COUNTER2, E_DIVS_COMMITTED);

   cyc_beg = pspPerformanceCounterGet(D_PSP_COUNTER0);
   instr_beg = pspPerformanceCounterGet(D_PSP_COUNTER1);
   DivCom_beg = pspPerformanceCounterGet(D_PSP_COUNTER2);

   out = Test_C(a, d);

   cyc_end = pspPerformanceCounterGet(D_PSP_COUNTER0);
   instr_end = pspPerformanceCounterGet(D_PSP_COUNTER1);
   DivCom_end = pspPerformanceCounterGet(D_PSP_COUNTER2);

   printfNexys("Sum = %d", out);

   printfNexys("Cycles = %d", cyc_end-cyc_beg);
   printfNexys("Instructions = %d", instr_end-instr_beg);
   printfNexys("DivCom = %d", DivCom_end-DivCom_beg);

   while(1);
}