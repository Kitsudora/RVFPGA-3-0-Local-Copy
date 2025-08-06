#if defined(D_NEXYS_A7)
   #include <bsp_printf.h>
   #include <bsp_mem_map.h>
   #include <bsp_version.h>
#else
   PRE_COMPILED_MSG("no platform was defined")
#endif
#include <psp_api.h>

extern void Test_Assembly(void);

#define DIM 3 

float x[DIM] = {2.0, 4.3, 5.9}; // x is an array of size 3(DIM) 
float y[DIM] = {4.0, 2.2, 3.7}; // same as x

float sum_swemul=0, sum_hwimpl=0;

void dotproduct_swemul(){
   int i;

   for (i=0; i<DIM; i++) { 
        sum_swemul += x[i]*y[i]; 
   } 

}

extern void dotproduct_hwimpl();

int main(void)
{
   int cyc_beg_swemul, cyc_end_swemul;
   int cyc_beg_hwimpl, cyc_end_hwimpl;

   /* Initialize Uart */
   uartInit();

   pspEnableAllPerformanceMonitor(1);

   pspPerformanceCounterSet(D_PSP_COUNTER0, E_CYCLES_CLOCKS_ACTIVE);

   cyc_beg_swemul = pspPerformanceCounterGet(D_PSP_COUNTER0);

   dotproduct_swemul();

   cyc_end_swemul = pspPerformanceCounterGet(D_PSP_COUNTER0);


   cyc_beg_hwimpl = pspPerformanceCounterGet(D_PSP_COUNTER0);

   dotproduct_hwimpl(DIM, x, y, &sum_hwimpl);

   cyc_end_hwimpl = pspPerformanceCounterGet(D_PSP_COUNTER0);


   printfNexys("Cycles SwEmul= %d\n", cyc_end_swemul-cyc_beg_swemul);

   printfNexys("Cycles HwImpl= %d\n", cyc_end_hwimpl-cyc_beg_hwimpl);

   while(1);
}