#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <dht11.h>

#define DHT11PIN 4
dht11 DHT11;

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);
  pinMode(7, OUTPUT);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("SSD1306 allocation failed");
    for (;;); // Infinite loop if display init fails
  }

  delay(2000);
  display.clearDisplay();
  display.setTextColor(WHITE);
}

void loop() {
  delay(5000);

  int chk = DHT11.read(DHT11PIN);
  digitalWrite(7, HIGH);

  float t = DHT11.temperature;
  float h = DHT11.humidity;

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  display.clearDisplay();

  display.setTextSize(1);
  display.setCursor(0, 0);
  display.print("Temperature");

  display.setTextSize(2);
  display.setCursor(0, 10);
  display.print(t);
  display.write(167);
  display.print("C");

  display.setTextSize(1);
  display.setCursor(0, 35);
  display.print("Humidity");

  display.setTextSize(2);
  display.setCursor(0, 45);
  display.print(h);
  display.print("%");

  display.display();
}
