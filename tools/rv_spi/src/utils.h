#pragma once

#include <stdint.h>

#define READ_ADDR(dir) (*(volatile unsigned *)dir)
#define WRITE_ADDR(dir, value) { (*(volatile unsigned *)dir) = (value); }

#define CPU_FREQ_HZ 10000000u  // 10 MHz
#define CYCLES_PER_MS (CPU_FREQ_HZ / 1000)

void delay_cycles(uint32_t cycles) {
    while (cycles--) 
    {
        __asm__ volatile ("nop");
    }
}

void delay_ms(uint32_t ms) {
    delay_cycles(ms * CYCLES_PER_MS);
}