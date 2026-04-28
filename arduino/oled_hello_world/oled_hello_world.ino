#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#ifndef SDA
#define SDA 6
#endif

#ifndef SCL
#define SCL 7
#endif

Adafruit_SSD1306 display(128, 64, &Wire, -1);

bool oledReady = false;

bool initOLED() {
  Wire.begin(SDA, SCL);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    return false;
  }

  display.clearDisplay();
  display.setTextSize(1);
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

  display.clearDisplay();

  display.setCursor(0, 0);
  display.println("Hello World!");
  display.setCursor(0, 8);
  display.println("Running...");
  display.println(millis());
  display.display();

  delay(500);
}
