#ifndef BUTTON_H
#define BUTTON_H

#include "nrf_gpio.h"
#include <stdbool.h>
#include <stdint.h>
#define BUTTON1_PIN NRF_GPIO_PIN_MAP(1, 6)

void button_init(void);
bool button_is_pressed(uint32_t pin);

#endif
