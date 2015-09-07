/* CMSIS-DAP Interface Firmware
 * Copyright (c) 2009-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __IO_CONFIG_H__
#define __IO_CONFIG_H__

#include "MK22F51212.h"

//#define ONE_PIN_SWDIO

// Debug Port I/O Pins

// SWCLK Pin                    PTD5
#define PIN_SWCLK_PORT          PORTD
#define PIN_SWCLK_GPIO          PTD
#define PIN_SWCLK_BIT           (5)
#define PIN_SWCLK               (1<<PIN_SWCLK_BIT)

#if defined(ONE_PIN_SWDIO)
// SWDIO Pin                    PTA12
#define PIN_SWDIO_PORT          PORTA
#define PIN_SWDIO_GPIO          PTA
#define PIN_SWDIO_BIT           (12)
#define PIN_SWDIO               (1<<PIN_SWDIO_BIT)

#else

// SWDIO Out Pin                PTD6
#define PIN_SWDIO_OUT_PORT      PORTD
#define PIN_SWDIO_OUT_GPIO      PTD
#define PIN_SWDIO_OUT_BIT       (6)
#define PIN_SWDIO_TX            (1<<PIN_SWDIO_OUT_BIT)

// SWDIO In Pin                 PTD7
#define PIN_SWDIO_IN_PORT       PORTD
#define PIN_SWDIO_IN_GPIO       PTD
#define PIN_SWDIO_IN_BIT        (7)
#define PIN_SWDIO_RX            (1<<PIN_SWDIO_IN_BIT)

// SWDIO Neg. Output Enable Pin PTD4
#define PIN_SWDIO_NOE_PORT      PORTD
#define PIN_SWDIO_NOE_GPIO      PTD
#define PIN_SWDIO_NOE_BIT       (4)
#define PIN_SWDIO_NOE           (1<<PIN_SWDIO_NOE_BIT)

// SWD Neg. Enable Pin          PTA4
#define PIN_SWD_NOE_PORT        PORTA
#define PIN_SWD_NOE_GPIO        PTA
#define PIN_SWD_NOE_BIT         4
#define PIN_SWD_NOE             (1<<PIN_SWD_NOE_BIT)
#endif

// nRESET Pin                   PTC5
#define PIN_nRESET_PORT         PORTC
#define PIN_nRESET_GPIO         PTC
#define PIN_nRESET_BIT          (5)
#define PIN_nRESET              (1<<PIN_nRESET_BIT)

// PWR_REG_EN PTD2 - Not connected
#define PIN_POWER_EN_PORT       PORTD
#define PIN_POWER_EN_GPIO       PTD
#define PIN_POWER_EN_BIT        (2)
#define PIN_POWER_EN            (1<<PIN_POWER_EN_BIT)

// VTRG_FAULT_B PTD3 - Not connected
#define PIN_VTRG_FAULT_B_PORT   PORTD
#define PIN_VTRG_FAULT_B_GPIO   PTD
#define PIN_VTRG_FAULT_B_BIT    (7)
#define PIN_VTRG_FAULT_B_EN     (1<<PIN_VTRG_FAULT_B_BIT)

// Debug Unit LEDs

// HID_LED PTD4
#define PIN_HID_LED_PORT        PORTA
#define PIN_HID_LED_GPIO        PTA
#define PIN_HID_LED_BIT         (12)
#define PIN_HID_LED             (1<<PIN_HID_LED_BIT)

// MSC_LED PTD5
#define PIN_MSC_LED_PORT        PORTA
#define PIN_MSC_LED_GPIO        PTA
#define PIN_MSC_LED_BIT         (12)
#define PIN_MSC_LED             (1<<PIN_MSC_LED_BIT)

// CDC_LED PTD6
#define PIN_CDC_LED_PORT        PORTA
#define PIN_CDC_LED_GPIO        PTA
#define PIN_CDC_LED_BIT         (12)
#define PIN_CDC_LED             (1<<PIN_CDC_LED_BIT)

// SW RESET BUTTON PTC5
#define PIN_SW_RESET_PORT       PORTC
#define PIN_SW_RESET_GPIO       PTC
#define PIN_SW_RESET_BIT        (5)
#define PIN_SW_RESET            (1<<PIN_SW_RESET_BIT)

// Connected LED                Not available

// Target Running LED           Not available

// USB IRQ Macros
#define DISABLE_USB_IRQ()       NVIC_DisableIRQ(USB0_IRQn)
#define ENABLE_USB_IRQ()        NVIC_EnableIRQ(USB0_IRQn)

// UART
#define UART_PORT               PORTC
#define UART_NUM                (1)

// RX PTC3
#define PIN_UART_RX_GPIO        PTC
#define PIN_UART_RX_BIT         (3)
#define PIN_UART_RX             (1<<PIN_UART_RX_BIT)
#define PIN_UART_RX_MUX_ALT     (3)

// TX PTC4
#define PIN_UART_TX_GPIO        PTC
#define PIN_UART_TX_BIT         (4)
#define PIN_UART_TX             (1<<PIN_UART_TX_BIT)
#define PIN_UART_TX_MUX_ALT     (3)

#define UART                    UART1
#define UART_RX_TX_IRQn         UART1_RX_TX_IRQn
#define UART_RX_TX_IRQHandler   UART1_IRQHandler

#endif
