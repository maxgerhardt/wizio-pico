#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  Serial.println("\nArdiuno Raspberrypi PI Pico 2021 Georgi Angelov");
  pinMode(LED, OUTPUT);

  // analogInit(ADC_T);
}

void loop()
{
  static int led = 0;
  digitalWrite(LED, led);
  led ^= 1;
  delay(1000);
  Serial.println(millis()); // UART
  printf("%lu\n", millis()); // USB

  // Serial.println(temperatureRead());
}
