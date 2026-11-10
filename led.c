#include "led.h"

void led_init(void)
{
    nrf_gpio_cfg_output(LED0_GREEN_PIN);
    nrf_gpio_cfg_output(LED1_RED_PIN);
    nrf_gpio_cfg_output(LED1_GREEN_PIN);
    nrf_gpio_cfg_output(LED1_BLUE_PIN);

    led_turn_off(LED0_GREEN_PIN);
    led_turn_off(LED1_RED_PIN);
    led_turn_off(LED1_GREEN_PIN);
    led_turn_off(LED1_BLUE_PIN);
}

void led_turn_on(uint32_t pin)
{
    nrf_gpio_pin_clear(pin);
}

void led_turn_off(uint32_t pin)
{
    nrf_gpio_pin_set(pin);
}

bool led_is_on(uint32_t pin)
{
    return (nrf_gpio_pin_out_read(pin) == 0);
}
