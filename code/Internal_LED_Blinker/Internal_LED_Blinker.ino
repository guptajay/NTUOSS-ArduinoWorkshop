// Internal LED Blinker Circuit

int ledPin = 13;

void setup()
{
   // initialize pins as OUTPUT
   pinMode(ledPin, OUTPUT);
}

void loop()
{
  // Blink the LED
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
