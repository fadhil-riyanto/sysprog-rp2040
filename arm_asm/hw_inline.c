/*
 * @version     1.0.0
 * @author      Fadhil Riyanto
 * @copyright   2025
 * @licence     GPL 2.0 
 *
 */

#include <hardware/gpio.h>

void __wrap_gpio_set_dir(int pin, int direction) {
    gpio_set_dir(pin, direction);
}


void __wrap_gpio_put(int pin, int state) {
    gpio_put(pin, state);
}
