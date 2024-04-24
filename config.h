#pragma once
//#define SERIAL_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the Serial implementation uses the PIO0 peripheral
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP1     // USART TX pin
#define SERIAL_USART_RX_PIN GP9     // USART RX printf("\n");
#define SERIAL_USART_PIN_SWAP
#define FORCE_NKRO
#define USB_POLLING_INTERVAL_MS 1
#define WS2812_DI_PIN GP0
#define RGB_MATRIX_LED_COUNT 54
#define RGB_MATRIX_SPLIT {27, 27}
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 50
