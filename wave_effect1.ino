
const int ledPins[] = {2, 3, 4, 5, 6}; 
const int numLEDs = 5;

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  
  for (int i = 0; i < numLEDs; i++) {
    for (int j = 0; j <= i; j++) {
      digitalWrite(ledPins[j], HIGH);
    }
    delay(300); // Delay between steps
  }

 
  for (int i = numLEDs - 1; i >= 0; i--) {
    for (int j = i; j < numLEDs; j++) {
      digitalWrite(ledPins[j], LOW);
    }
    delay(300); // Delay between steps
  }
}