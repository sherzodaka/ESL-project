#include "button.h"

void button_init(void)
{
    nrf_gpio_cfg_input(BUTTON1_PIN, NRF_GPIO_PIN_PULLUP);
}

bool button_is_pressed(uint32_t pin)
{
    return (nrf_gpio_pin_read(pin) == 0);
}
    
