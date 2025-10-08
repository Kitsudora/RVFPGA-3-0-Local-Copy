# RV SPI Library

This is a lightweight SPI library designed for the **simple_spi** hardware driver. It provides minimal control functions for SPI communication with extremely low overhead.

Improper usage or deviation from the expected sequence may result in undefined behavior, as all safety checks have been intentionally omitted to ensure performance and simplicity.

---

## Configuration Function

**Function:** `void spi_cfg(uint32_t adr_base, spi_div_t divider, spi_mode_t mode, spi_icnt_t icnt)`

Configures the SPI controller.

- **adr_base** — Base address of the SPI controller registers.  
- **divider** — Clock divider for SPI communication speed.  
- **mode** — SPI mode (CPOL/CPHA configuration).  
- **icnt** — Interrupt count configuration.  

**Usage Note:** Always call `spi_cfg()` before any SPI communication or when switching between multiple SPI controllers. Failure to reconfigure may cause incorrect transmission or undefined behavior.

---

## Data Transfer

**Function:** `uint8_t spi_transfer(uint8_t data)`

Performs one SPI data transfer.

- Sends 8 bits of data per call.  
- Returns the received 8-bit message.  
- Returns 0 if a timeout occurs without response.  

---

## SPI Control Functions

These inline functions provide direct control over the SPI hardware registers:

- `spi_enable()` – Enables the SPI controller.  
- `spi_disable()` – Disables the SPI controller.  
- `spi_intp_enable()` – Enables SPI interrupt.  
- `spi_intp_disable()` – Disables SPI interrupt.  
- `spi_set_master()` – Sets SPI to master mode.  
- `spi_set_slave()` – Sets SPI to slave mode.  

---

## Notes

- Designed for **bare-metal environments** with minimal dependencies.  
- Not thread-safe; should only be used within controlled execution flow.  
- Tested with **simple_spi** hardware on RISC-V SoC platforms.  

---

Author: **Bowen**

---

End of README.

