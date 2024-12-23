// -------------------------------------------------
// Copyright (c) 2024 HiBit <https://www.hibit.dev>
// -------------------------------------------------

void increaseLight(int ledPin)
{
  for (int i = 0; i <= 255; i++) {
    analogWrite(ledPin, i);

    delay(10);
  }
}

void decreaseLight(int ledPin)
{
  for (int i = 255; i >= 0; i--) {
    analogWrite(ledPin, i);

    delay(10);
  }
}
