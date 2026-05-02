#include <WiFi.h>
#include "secrets.h"

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println();
  Serial.println("Starting XIAO ESP32-C3 WiFi test...");

  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  Serial.print("Connecting to ");
  Serial.print(WIFI_SSID);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  Serial.println();
  Serial.println("WiFi connected.");

  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  Serial.print("Signal strength RSSI: ");
  Serial.print(WiFi.RSSI());
  Serial.println(" dBm");
}

void loop() {
  Serial.print("Still connected. IP: ");
  Serial.print(WiFi.localIP());
  Serial.print(WiFi.RSSI());
  Serial.println(" dBm");

  delay(5000);
}
