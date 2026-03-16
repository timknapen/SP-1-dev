/**
 * @file stemplayer_pins.h
 * @author Tim Knapen (https://www.timknapen.be/stemplayer)
 * @brief pinout of TE SP-1 stem player
 * @version 0.0.0
 * @date 2025
 *
 * @copyright Copyright (c) 2025
 *
 */

#ifndef STEMPLAYER_PINS_H
#define STEMPLAYER_PINS_H

#include "nrf_gpio.h"
#include "nrf_saadc.h"

// INPUTS
#define PIN_FADER_1 NRF_GPIO_PIN_MAP(0, 5)  // P0.05 / AIN3
#define PIN_FADER_2 NRF_GPIO_PIN_MAP(0, 30) // P0.30 / AIN6
#define PIN_FADER_3 NRF_GPIO_PIN_MAP(0, 4)  // P0.04 / AIN2
#define PIN_FADER_4 NRF_GPIO_PIN_MAP(0, 31) // P0.31 / AIN7

// LADDER 1 : Play, track buttons
#define PIN_LADDER_TRACKS NRF_GPIO_PIN_MAP(0, 2) // P0.02 / AIN0

// LADDER 2 : Vol Up/Down, FWD, RWD
#define PIN_LADDER_VOL NRF_GPIO_PIN_MAP(0, 3) // P0.03 /AIN1

// Power for ladders and faders
#define PIN_BTN_COM NRF_GPIO_PIN_MAP(1, 10) // P1.10

// Function button ••
#define PIN_BTN_FNC NRF_GPIO_PIN_MAP(0, 27) // P0.27

// Playback LEDS (between PLAY and Function buttons)
#define PIN_LED_1 NRF_GPIO_PIN_MAP(1, 13) // P1.13
#define PIN_LED_2 NRF_GPIO_PIN_MAP(0, 0)  // P0.00
#define PIN_LED_3 NRF_GPIO_PIN_MAP(1, 12) // P1.12
#define PIN_LED_4 NRF_GPIO_PIN_MAP(0, 1)  // P0.01

// Track LEDs
#define PIN_LED_T_1 NRF_GPIO_PIN_MAP(0, 29) // P0.29
#define PIN_LED_T_2 NRF_GPIO_PIN_MAP(0, 26) // P0.26
#define PIN_LED_T_3 NRF_GPIO_PIN_MAP(1, 15) // P1.15
#define PIN_LED_T_4 NRF_GPIO_PIN_MAP(1, 14) // P1.14

// I2C / TWIM
#define PIN_I2C_SCL NRF_GPIO_PIN_MAP(1, 11) // P1.11
#define PIN_I2C_SDA NRF_GPIO_PIN_MAP(1, 07) // P1.07

// TAS2505 speaker amp
#define PIN_TAS_RST NRF_GPIO_PIN_MAP(0, 9) // P0.09 / NFC1

// CS42L42 headphone amp
#define PIN_CS42_RST NRF_GPIO_PIN_MAP(0, 15) // P0.15

// I2S
#define PIN_I2S_DOUT NRF_GPIO_PIN_MAP(1, 9)    // P1.09
#define PIN_I2S_LRCLK NRF_GPIO_PIN_MAP(0, 11)  // P0.11
#define PIN_I2S_SCLK NRF_GPIO_PIN_MAP(0, 12)   // P0.12
#define PIN_I2S_OSC_EN NRF_GPIO_PIN_MAP(0, 13) // P0.13 // 3.072 MHz OSC en

// eMMC interface to flash memory
#define PIN_EMMC_CLK NRF_GPIO_PIN_MAP(0, 6)   // P0.06
#define PIN_EMMC_DAT0 NRF_GPIO_PIN_MAP(0, 7)  // P0.07
#define PIN_EMMC_CMD NRF_GPIO_PIN_MAP(0, 8)   // P0.08
#define PIN_EMMC_RST NRF_GPIO_PIN_MAP(1, 8)   // P1.08
#define PIN_EMMC_VCCQ NRF_GPIO_PIN_MAP(0, 14) // P0.14

// CYBT-353027-02 BT module
#define PIN_UART_CTS NRF_GPIO_PIN_MAP(1, 1)   // P1.01
#define PIN_UART_RXD NRF_GPIO_PIN_MAP(1, 2)   // P1.02
#define PIN_UART_RTS NRF_GPIO_PIN_MAP(1, 3)   // P1.03
#define PIN_UART_TXD NRF_GPIO_PIN_MAP(1, 4)   // P1.04
#define PIN_CY_SPI_CSN NRF_GPIO_PIN_MAP(1, 5) // P1.05
#define PIN_CY_nRST NRF_GPIO_PIN_MAP(0, 10)   // P0.10 / NFC2

// BQ24232 battery charger
#define PIN_BQ_ISET NRF_GPIO_PIN_MAP(1, 00)    // P1.00
#define PIN_BQ_nCHG NRF_GPIO_PIN_MAP(0, 22)    // P0.22
#define PIN_BQ_nPGOOD NRF_GPIO_PIN_MAP(0, 24)  // P0.24
#define PIN_BQ_nCE NRF_GPIO_PIN_MAP(0, 21)     // P0.21
#define PIN_BATT_LEVEL NRF_GPIO_PIN_MAP(0, 28) // P0.28 / AIN4

// ADC channels for setting up with SAADC
#define ADC_LADDER_TRACKS NRF_SAADC_INPUT_AIN0 // LADDER 1 : Play, tracks
#define ADC_LADDER_VOL NRF_SAADC_INPUT_AIN1    // LADDER 2 : Volume, FWD, RWD
#define ADC_TRACK_1 NRF_SAADC_INPUT_AIN3       // Track 1 fader
#define ADC_TRACK_2 NRF_SAADC_INPUT_AIN6       // Track 2 fader
#define ADC_TRACK_3 NRF_SAADC_INPUT_AIN2       // Track 3 fader
#define ADC_TRACK_4 NRF_SAADC_INPUT_AIN7       // Track 4 fader
#define ADC_BATT_LEVEL NRF_SAADC_INPUT_AIN4    // battery level
#define ADC_VDD NRF_SAADC_INPUT_VDD            // VDD

#endif