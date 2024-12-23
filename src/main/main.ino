// -------------------------------------------------
// Copyright (c) 2024 HiBit <https://www.hibit.dev>
// -------------------------------------------------

#define LED_PIN 3

void setup()
{
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  // Program + delay
  program1(LED_PIN);
  delay(1000);

  // Program + delay
  program2(LED_PIN);
  delay(1000);

  // Program + delay
  program3(LED_PIN);
  delay(1000);
}
