// Define LED pins
const int ledPins[] = {2, 3, 4, 5, 6}; 
const int numLEDs = 5;

void setup()
{
  // Set all LED pins as OUTPUT
  for (int i = 0; i < numLEDs; i++)
  {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop()
{
  // Turn all LEDs ON
  for (int i = 0; i < numLEDs; i++)
  {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(1000); // Wait for 1 second

  // Turn all LEDs OFF
  for (int i = 0; i < numLEDs; i++)
  {
    digitalWrite(ledPins[i], LOW);
  }
  delay(1000); // Wait for 1 second
}
