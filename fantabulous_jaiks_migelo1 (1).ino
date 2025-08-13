
const int greenPin = 2;
const int yellowPin = 3;
const int redPin = 4;

void setup()
{
  // Set all traffic light pins as OUTPUT
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop()
{
  // Green light ON for 5 seconds
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, LOW);
  delay(5000);

  // Yellow light ON for 2 seconds
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(redPin, LOW);
  delay(2000);

  // Red light ON for 5 seconds
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);
  delay(5000);
}
