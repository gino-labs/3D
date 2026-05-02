#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_SHT31.h>

#ifndef SDA
#define SDA 6
#endif

#ifndef SCL
#define SCL 7
#endif

Adafruit_SHT31 sht31 = Adafruit_SHT31();
Adafruit_SSD1306 display(128, 64, &Wire, -1);

bool oledReady = false;

bool initOLED() {
  Serial.begin(115200);
  delay(1000);

  Wire.begin(SDA, SCL);

  if (!sht31.begin(0x44)) {
    Serial.println("Could not find SHT31 at 0x44");
    while (1) {
      delay(10);
    }
  }

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    return false;
  }

  display.clearDisplay();
  display.setTextSize(1.8);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);

  display.println("Hello World!");
  display.display();

  return true;
}

void setup() {
  oledReady = initOLED();
}

void loop() {
  if (!oledReady) {
    delay(1000);
    oledReady = initOLED();
    return;
  }

  float tempC = sht31.readTemperature();
  float humidity = sht31.readHumidity();
  display.clearDisplay();

  display.setCursor(0, 0);
  display.println("Hello World!");
  display.setCursor(0, 24);
  display.print("Temp: ");
  display.println(tempC);
  display.setCursor(0, 48);
  display.print("RH: ");
  display.print(humidity);
  display.println("%");
  display.display();

  delay(5000);
}
