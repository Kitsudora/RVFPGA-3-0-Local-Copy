#if defined(D_NEXYS_A7)
   #include <bsp_printf.h>
   #include <bsp_mem_map.h>
   #include <bsp_version.h>
#else
   PRE_COMPILED_MSG("no platform was defined")
#endif
#include <psp_api.h>

#include <math.h>

#define F(x) ((x)*(x) - 2)

extern void bisection_hard();

float a=1.25, b=2.5;
float a_sw, b_sw, a_hw, b_hw;
float tol=0.01, fzero, fb;
float zero_swemul=0, zero_hwimpl=0;


void bisection_soft() {
    while(1){
        //Compute new zero
        zero_swemul=(a_sw+b_sw)/2;

        // Check if |f(c)|-tol <= 0. If the condition is met, go out of the loop by jumping to the tag Out_Bisection.
        if((fabsf(F(zero_swemul))-tol) <= 0) break;

        // Determine new value for a or b
        if(F(b_sw)*F(zero_swemul)<0) a_sw=zero_swemul;
        else b_sw=zero_swemul;
    }
}


int main(void)
{
   int cyc_beg_swemul, cyc_end_swemul;
   int cyc_beg_hwimpl, cyc_end_hwimpl;

   a_sw=a;
   b_sw=b;
   a_hw=a;
   b_hw=b;

   /* Initialize Uart */
   uartInit();

   pspEnableAllPerformanceMonitor(1);
   pspPerformanceCounterSet(D_PSP_COUNTER0, E_CYCLES_CLOCKS_ACTIVE);

   cyc_beg_swemul = pspPerformanceCounterGet(D_PSP_COUNTER0);
   bisection_soft();
   cyc_end_swemul = pspPerformanceCounterGet(D_PSP_COUNTER0);

   tol=-tol;
   cyc_beg_hwimpl = pspPerformanceCounterGet(D_PSP_COUNTER0);
   bisection_hard(&a_hw, &b_hw, &tol, &zero_hwimpl);
   cyc_end_hwimpl = pspPerformanceCounterGet(D_PSP_COUNTER0);

   printfNexys("Cycles SwEmul= %d\n", cyc_end_swemul-cyc_beg_swemul);
   printfNexys("Cycles HwImpl= %d\n", cyc_end_hwimpl-cyc_beg_hwimpl);

   while(1);
}