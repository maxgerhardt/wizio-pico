#include <stdio.h>
#include <stdlib.h>
#include "pico/stdlib.h"

int main(void)
{
  stdio_init_all();
  printf("\n\nPICO-SDK Raspberrypi PI Pico 2021 Georgi Angelov\n");
  gpio_init(PICO_DEFAULT_LED_PIN);
  gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
  while (true)
  {
    printf("LOOP \n");
    gpio_put(PICO_DEFAULT_LED_PIN, 1);
    sleep_ms(500);
    gpio_put(PICO_DEFAULT_LED_PIN, 0);
    sleep_ms(500);
  }
}