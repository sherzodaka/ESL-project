#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "button.h"
#include "led.h"

static const uint8_t board_id[4] = {7, 2, 0, 2};

static const uint32_t led_pins[4] = 
{
    LED0_GREEN_PIN,
    LED1_RED_PIN,
    LED1_GREEN_PIN,
    LED1_BLUE_PIN
};

int main(void)
{
    static uint8_t index = 0;
    static uint8_t i = 0;

    button_init();
    led_init();

    while (true)
    {
        for ( ; index < 4; index++)
        {
            for ( ; i < board_id[index]; i++)
            {
                if(button_is_pressed(BUTTON1_PIN))
                {
                    led_turn_on(led_pins[index]);
                    nrf_delay_ms(500);
                }
                
                while(!button_is_pressed(BUTTON1_PIN))
                {
                    nrf_delay_ms(1);
                }

                if(button_is_pressed(BUTTON1_PIN))
                {
                    led_turn_off(led_pins[index]);
                    nrf_delay_ms(500);
                }

                while(!button_is_pressed(BUTTON1_PIN))
                {
                    nrf_delay_ms(1);
                }
            }  
            i = 0;
        }       
        
        nrf_delay_ms(1000);
        index = 0;
    }
}
