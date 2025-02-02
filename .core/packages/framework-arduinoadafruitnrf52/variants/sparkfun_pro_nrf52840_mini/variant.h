 /*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_SPARKFUN52840MINI_
#define _VARIANT_SPARKFUN52840MINI_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

#define USE_LFXO      // Board uses 32khz crystal for LF
// define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (64)
#define NUM_DIGITAL_PINS     (64)
#define NUM_ANALOG_INPUTS    (8)
#define NUM_ANALOG_OUTPUTS   (0)

// LEDs
#define PIN_LED1             (7)
#define PIN_LED2             (14)

#define LED_BUILTIN          PIN_LED1
#define LED_CONN             PIN_LED2

#define LED_BLUE             PIN_LED1
#define LED_RED              PIN_LED2

#define LED_STATE_ON         1         // State when LED is litted

// Buttons
/*
#define PIN_BUTTON1             (2)
#define PIN_BUTTON2             (3)
#define PIN_BUTTON3             (4)
#define PIN_BUTTON4             (5)
*/

/*
 * Analog pins
 */
#define PIN_A0               (2)
#define PIN_A1               (3)
#define PIN_A2               (31)
#define PIN_A3               (30)
#define PIN_A4               (29)
#define PIN_A5               (28)
#define PIN_A6               (5)
#define PIN_A7               (4)

static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;
static const uint8_t A2  = PIN_A2 ;
static const uint8_t A3  = PIN_A3 ;
static const uint8_t A4  = PIN_A4 ;
static const uint8_t A5  = PIN_A5 ;
static const uint8_t A6  = PIN_A6 ;
static const uint8_t A7  = PIN_A7 ;
#define ADC_RESOLUTION    14

// Other pins
#define PIN_AREF           (2)
#define PIN_DFU            (13)
#define PIN_NFC1           (9)
#define PIN_NFC2           (10)

static const uint8_t AREF = PIN_AREF;

/*
 * Serial interfaces
 */
// Serial
#define PIN_SERIAL_RX       (15)
#define PIN_SERIAL1_RX      PIN_SERIAL_RX
#define PIN_SERIAL_TX       (17)
#define PIN_SERIAL1_TX      PIN_SERIAL_TX

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (31)
#define PIN_SPI_MOSI         (3)
#define PIN_SPI_SCK          (30)

static const uint8_t SS   = 2 ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (8)
#define PIN_WIRE_SCL         (11)

/*
 * QSPI interface for external flash
 */
#define PIN_QSPI_SCK         32
#define PIN_QSPI_CS          33
#define PIN_QSPI_DATA0       34
#define PIN_QSPI_DATA1       35
#define PIN_QSPI_DATA2       36
#define PIN_QSPI_DATA3       37

// On-board QSPI Flash
// If EXTERNAL_FLASH_DEVICES is not defined, all supported devices will be used
#define EXTERNAL_FLASH_DEVICES   GD25Q16C

#define USB_VID 0x1B4F
#define USB_PID 0x002A

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
