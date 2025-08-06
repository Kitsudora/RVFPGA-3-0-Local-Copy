#if defined(D_NEXYS_A7)
   #include <bsp_printf.h>
   #include <bsp_mem_map.h>
   #include <bsp_version.h>
#else
   PRE_COMPILED_MSG("no platform was defined")
#endif
#include <psp_api.h>

extern void Test_Assembly(void);

int main(void)
{
   int counter1_beg, counter1_end;
   int counter2_beg, counter2_end;
   int counter3_beg, counter3_end;

   /* Initialize Uart */
   uartInit();

   pspEnableAllPerformanceMonitor(1);

   pspPerformanceCounterSet(D_PSP_COUNTER0, E_I_CACHE_HITS);
   pspPerformanceCounterSet(D_PSP_COUNTER1, E_I_CACHE_MISSES);
   pspPerformanceCounterSet(D_PSP_COUNTER2, E_CYCLES_CLOCKS_ACTIVE);

   counter1_beg = pspPerformanceCounterGet(D_PSP_COUNTER0);
   counter2_beg = pspPerformanceCounterGet(D_PSP_COUNTER1);
   counter3_beg = pspPerformanceCounterGet(D_PSP_COUNTER2);

   Test_Assembly();

   counter1_end = pspPerformanceCounterGet(D_PSP_COUNTER0);
   counter2_end = pspPerformanceCounterGet(D_PSP_COUNTER1);
   counter3_end = pspPerformanceCounterGet(D_PSP_COUNTER2);

   printfNexys("Hits = %d", counter1_end-counter1_beg);
   printfNexys("Miss = %d", counter2_end-counter2_beg);
   printfNexys("Cycles = %d", counter3_end-counter3_beg);

   while(1);
}