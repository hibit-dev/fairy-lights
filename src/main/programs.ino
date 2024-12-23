// -------------------------------------------------
// Copyright (c) 2024 HiBit <https://www.hibit.dev>
// -------------------------------------------------

// Turn ON for 5 seconds
void program1(int ledPin)
{
  digitalWrite(ledPin, HIGH);
  delay(5000);
  digitalWrite(ledPin, LOW);
}

// Gradually turn ON and then OFF (5 times)
void program2(int ledPin)
{
  int iterations = 0;

  while (iterations < 5) {
    increaseLight(ledPin);
    delay(500);
    decreaseLight(ledPin);

    iterations++;
  }
}

// Blink (10 times)
void program3(int ledPin)
{
  int iterations = 0;

  while (iterations < 10) {
    digitalWrite(ledPin, HIGH);
    delay(250);
    digitalWrite(ledPin, LOW);
    delay(250);

    iterations++;
  }
}
