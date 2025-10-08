#pragma once

#include <stddef.h>
#include <stdint.h>

#include "config.h"
#include "utils.h"
#include "rv_spi.h"

#define READ_ADDR(dir) (*(volatile unsigned *)dir)
#define WRITE_ADDR(dir, value) { (*(volatile unsigned *)dir) = (value); }

typedef enum {
    OLED_DC   = (1u << 0),   // Data/Command ACTIVE LOW
    OLED_RES  = (1u << 1),   // Reset ACTIVE LOW
    OLED_VBAT = (1u << 2),   // Power enable for internal supply ACTIVE LOW
    OLED_VDD  = (1u << 3)    // Power enable for digital supply ACTIVE LOW
} oled_ctrl_t;


// functions
static inline void oled_write_ctrl(uint8_t value) {WRITE_ADDR(OLED_CONTROL_LINES, value);}

static inline void oled_power_vdd_on() { oled_write_ctrl(READ_ADDR(OLED_CONTROL_LINES) & ~OLED_VDD);}

static inline void oled_power_vdd_off() {oled_write_ctrl(READ_ADDR(OLED_CONTROL_LINES) | OLED_VDD);}

static inline void oled_power_vbat_on() {oled_write_ctrl(READ_ADDR(OLED_CONTROL_LINES) & ~OLED_VBAT);}

static inline void oled_power_vbat_off() {oled_write_ctrl(READ_ADDR(OLED_CONTROL_LINES) | OLED_VBAT);}

static inline void oled_reset_assert() {oled_write_ctrl(READ_ADDR(OLED_CONTROL_LINES) & ~OLED_RES);}

static inline void oled_reset_release() {oled_write_ctrl(READ_ADDR(OLED_CONTROL_LINES) | OLED_RES);}

static inline void oled_set_command_mode() {oled_write_ctrl(READ_ADDR(OLED_CONTROL_LINES) & ~OLED_DC);}

static inline void oled_set_data_mode() {oled_write_ctrl(READ_ADDR(OLED_CONTROL_LINES) | OLED_DC);}


// write GDDRAM(512B) to 0x00
void oled_clear()
{
    oled_set_data_mode();
    for (int i = 0; i < 128*4; ++i) {
        spi_transfer(0x00);
    }
}


// startup
void oled_startup()
{
    // spi config
    spi_cfg(SPI_ADR_BASE ,SPI_DIV_64, SPI_MODE3, SPI_ICNT_1);
    spi_enable();
    spi_intp_disable();
    spi_set_master();

    // hard reset
    oled_write_ctrl(0xFF);
    delay_ms(200);

    // power (VDD)
    oled_power_vdd_on();
    delay_ms(1);

    // reset
    oled_set_command_mode();
    oled_reset_assert();
    delay_ms(1);
    oled_reset_release();
    delay_ms(200);

    // charge pump on (internal)
    spi_transfer(0x8D); spi_transfer(0x14);

    // pre-charge period (internal pump)
    spi_transfer(0xD9); spi_transfer(0xF1);

    // internal power (VCC/VBAT)
    oled_power_vbat_on();
    delay_ms(200);

    // initialization commands
    oled_set_command_mode();
    spi_transfer(0xA8); spi_transfer(0x1F);   // multiplex = 31 (128x32)
    spi_transfer(0xD3); spi_transfer(0x00);   // display offset = 0
    spi_transfer(0x40);                       // set display start line = 0
    spi_transfer(0xD5); spi_transfer(0x80);   // clock div/freq
    spi_transfer(0xDA); spi_transfer(0x02);   // COM pins config for 128x32
    spi_transfer(0xDB); spi_transfer(0x40);   // VCOMH level
    spi_transfer(0x81); spi_transfer(0x7F);   // contrast
    spi_transfer(0xA4);                       // follow RAM
    spi_transfer(0xA6);                       // normal displ

    spi_transfer(0x20); spi_transfer(0x00);   // memory addressing mode = horizontal
    spi_transfer(0x21); spi_transfer(0x00); spi_transfer(0x7F);
    spi_transfer(0x22); spi_transfer(0x00); spi_transfer(0x03);

    // display on
    spi_transfer(0xAF);
    delay_ms(200);

    // continue transfer begin
    oled_set_data_mode();
}

void oled_flush(const uint8_t *buf, size_t len)
{
    if (!buf || len == 0) return;

    oled_set_data_mode();

    for (size_t i = 0; i < len; ++i) {
        spi_transfer(buf[i]);
    }
}

