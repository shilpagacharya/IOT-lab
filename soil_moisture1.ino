int sensorPin = A0;
int ledPin = 13;
int sensorValue = 0;
int threshold = 600;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.print("Moisture Value: ");
  Serial.println(sensorValue);

  if (sensorValue < threshold) {
    Serial.println("Soil is Wet ");
    digitalWrite(ledPin, LOW);
  } else {
    Serial.println("Soil is Dry ");
    digitalWrite(ledPin, HIGH);
  }

  delay(100);
}
