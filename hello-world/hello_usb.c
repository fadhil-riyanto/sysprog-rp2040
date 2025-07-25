#include <hardware/gpio.h>
#include <stdio.h>
#include <pico/stdio.h>
#include <pico/time.h>

int main() {
    int n = 0;
    stdio_init_all();

    const uint LED_PIN = 25;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);


    while (true) {
        gpio_put(LED_PIN, 1);
        printf("Hello, world! %d %p\n", n, &n);
        sleep_ms(500);

        gpio_put(LED_PIN, 0);
        sleep_ms(500);
        

        n = n + 1;
    }
}