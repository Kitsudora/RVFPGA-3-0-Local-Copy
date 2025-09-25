#pragma once

#include <stdint.h>

#include "config.h"
#include "utils.h"

#define SPI_SPDR_VALUE (*(volatile uint8_t *)(SPI_SPDR_ADDR))
#define SPI_SPSR_VALUE (*(volatile uint8_t *)(SPI_SPSR_ADDR))

#define SPI_TRANSFER_TIMEOUT_ITERATIONS 1000000u

//SPI RATE
typedef uint8_t spi_div_t;

#define SPI_DIV_ENCODE(ESPR,SPR)  ( ((uint8_t)(ESPR) << 2) | ((uint8_t)(SPR) & 0x3) )
#define SPI_DIV_GET_SPR(x)        ( (x) & 0x3 )
#define SPI_DIV_GET_ESPR(x)       ( ((x) >> 2) & 0x3 )

typedef enum {
    SPI_DIV_2    = SPI_DIV_ENCODE(0b00, 0b00), // 2
    SPI_DIV_4    = SPI_DIV_ENCODE(0b00, 0b01), // 4
    SPI_DIV_8    = SPI_DIV_ENCODE(0b01, 0b00), // 8
    SPI_DIV_16   = SPI_DIV_ENCODE(0b00, 0b10), // 16
    SPI_DIV_32   = SPI_DIV_ENCODE(0b00, 0b11), // 32
    SPI_DIV_64   = SPI_DIV_ENCODE(0b01, 0b01), // 64
    SPI_DIV_128  = SPI_DIV_ENCODE(0b01, 0b10), // 128
    SPI_DIV_256  = SPI_DIV_ENCODE(0b01, 0b11), // 256
    SPI_DIV_512  = SPI_DIV_ENCODE(0b10, 0b00), // 512
    SPI_DIV_1024 = SPI_DIV_ENCODE(0b10, 0b01), // 1024
    SPI_DIV_2048 = SPI_DIV_ENCODE(0b10, 0b10), // 2048
    SPI_DIV_4096 = SPI_DIV_ENCODE(0b10, 0b11), // 4096
    // 0b11xx reserved
} spi_div_enum;


// SPI MODE
// bit2 = SPHA(CPHA)，bit3 = SPLO(CPOL)
typedef uint8_t spi_mode_t;

#define SPI_MODE_ENCODE(SPLO, SPHA)   ( ((uint8_t)(SPHA) << 2) | ((uint8_t)(SPLO) << 3) )
#define SPI_MODE_GET_SPHA(x)          ( ((x) >> 2) & 0x1 )
#define SPI_MODE_GET_SPLO(x)          ( ((x) >> 3) & 0x1 )

typedef enum {
    SPI_MODE0 = SPI_MODE_ENCODE(0,0), // CPOL=0, CPHA=0
    SPI_MODE1 = SPI_MODE_ENCODE(0,1), // CPOL=0, CPHA=1
    SPI_MODE2 = SPI_MODE_ENCODE(1,0), // CPOL=1, CPHA=0
    SPI_MODE3 = SPI_MODE_ENCODE(1,1), // CPOL=1, CPHA=1
} spi_mode_enum;


// MSTR SPE SPIE
typedef uint8_t spi_cr_flags_t;

typedef enum {
    SPI_CR_MSTR = (1u << 4),   // Master Mode Select
    SPI_CR_SPE  = (1u << 6),   // Serial Peripheral Enable 
    SPI_CR_SPIE = (1u << 7)    // Serial Peripheral Interrupt Enable
}spi_cr_flags_enum;


// ICNT
typedef uint8_t spi_icnt_t;

#define SPI_ICNT_ENCODE(v)   ( ((uint8_t)(v) & 0x3) << 6 )
#define SPI_ICNT_GET(x)      ( ((x) >> 6) & 0x3 )

typedef enum {
    SPI_ICNT_1 = SPI_ICNT_ENCODE(0b00), // SPIF is set after every completed transfer 
    SPI_ICNT_2 = SPI_ICNT_ENCODE(0b01), // SPIF is set after every two completed transfers
    SPI_ICNT_3 = SPI_ICNT_ENCODE(0b10), // SPIF is set after every three completed transfers
    SPI_ICNT_4 = SPI_ICNT_ENCODE(0b11), // SPIF is set after every four completed transfers
} spi_icnt_enum;


// SPSR
typedef uint8_t spi_spsr_t;

typedef enum {
    SPSR_RFEMPTY = 1u << 0,
    SPSR_RFFULL  = 1u << 1,
    SPSR_WFEMPTY = 1u << 2,
    SPSR_WFFULL  = 1u << 3,
    SPSR_WCOL    = 1u << 6,
    SPSR_SPIF    = 1u << 7 
} spi_spsr_enum;


// functions
void spi_cfg(spi_div_t divider, spi_mode_t mode, spi_icnt_t icnt)
{
    uint8_t SPCR = 0b11011111 & (SPI_DIV_GET_SPR(divider) | mode);
    uint8_t SPER = 0b11000011 & (SPI_DIV_GET_ESPR(divider) | icnt);

    WRITE_ADDR(SPI_SPCR_ADDR, SPCR);
    WRITE_ADDR(SPI_SPER_ADDR, SPER);
}

static inline void spi_enable(){WRITE_ADDR(SPI_SPCR_ADDR, READ_ADDR(SPI_SPCR_ADDR) | SPI_CR_SPE);}

static inline void spi_disable(){WRITE_ADDR(SPI_SPCR_ADDR, READ_ADDR(SPI_SPCR_ADDR) & ~SPI_CR_SPE);}

static inline void spi_intp_enable(){WRITE_ADDR(SPI_SPCR_ADDR, READ_ADDR(SPI_SPCR_ADDR) | SPI_CR_SPIE);}

static inline void spi_intp_disable(){WRITE_ADDR(SPI_SPCR_ADDR, READ_ADDR(SPI_SPCR_ADDR) & ~SPI_CR_SPIE);}

static inline void spi_set_master(){WRITE_ADDR(SPI_SPCR_ADDR, READ_ADDR(SPI_SPCR_ADDR) | SPI_CR_MSTR);}

static inline void spi_set_slave(){WRITE_ADDR(SPI_SPCR_ADDR, READ_ADDR(SPI_SPCR_ADDR) & ~SPI_CR_MSTR);}

uint8_t spi_transfer(uint8_t value)
{
    while(SPI_SPSR_VALUE & SPSR_WFFULL){} // write if buffer(fifo) not full
    WRITE_ADDR(SPI_SPDR_ADDR, value);

    uint32_t timeout = SPI_TRANSFER_TIMEOUT_ITERATIONS;
    while((SPI_SPSR_VALUE & SPSR_RFEMPTY) && timeout > 0){
        timeout--;
    }
    if((SPI_SPSR_VALUE & SPSR_RFEMPTY) && timeout == 0){
        return 0;
    }

    uint8_t response = READ_ADDR(SPI_SPDR_ADDR);    // check return value here during debug
    return response;
}
