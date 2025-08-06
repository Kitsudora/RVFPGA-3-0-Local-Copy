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
      b = a*i;
      c = d*i;
      i = i+1;
      e = e + (b-c);
   } while(i<65535);
   return(e);
}

int main(void)
{
   int cyc_beg, cyc_end;
   int instr_beg, instr_end;
   int MulCom_beg, MulCom_end;

   int a=8, d=7, out;

   /* Initialize Uart */
   uartInit();

   pspEnableAllPerformanceMonitor(1);

   pspPerformanceCounterSet(D_PSP_COUNTER0, E_CYCLES_CLOCKS_ACTIVE);
   pspPerformanceCounterSet(D_PSP_COUNTER1, E_INSTR_COMMITTED_ALL);
   pspPerformanceCounterSet(D_PSP_COUNTER2, E_MULS_COMMITTED);

   cyc_beg = pspPerformanceCounterGet(D_PSP_COUNTER0);
   instr_beg = pspPerformanceCounterGet(D_PSP_COUNTER1);
   MulCom_beg = pspPerformanceCounterGet(D_PSP_COUNTER2);

   out = Test_C(a, d);

   cyc_end = pspPerformanceCounterGet(D_PSP_COUNTER0);
   instr_end = pspPerformanceCounterGet(D_PSP_COUNTER1);
   MulCom_end = pspPerformanceCounterGet(D_PSP_COUNTER2);

   printfNexys("Sum = %d", out);

   printfNexys("Cycles = %d", cyc_end-cyc_beg);
   printfNexys("Instructions = %d", instr_end-instr_beg);
   printfNexys("MulCom = %d", MulCom_end-MulCom_beg);

   while(1);
}
