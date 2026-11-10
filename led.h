#ifndef LED_H
#define LED_H

#include "nrf_gpio.h"
#include <stdbool.h>
#include <stdint.h>

#define LED0_GREEN_PIN   NRF_GPIO_PIN_MAP(0, 6)
#define LED1_RED_PIN     NRF_GPIO_PIN_MAP(0, 8)
#define LED1_GREEN_PIN   NRF_GPIO_PIN_MAP(1, 9)
#define LED1_BLUE_PIN    NRF_GPIO_PIN_MAP(0, 12)

void led_init(void);
void led_turn_on(uint32_t pin);
void led_turn_off(uint32_t pin);
bool led_is_on(uint32_t pin);

#endif
