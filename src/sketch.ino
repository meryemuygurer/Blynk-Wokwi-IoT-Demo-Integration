/*************************************************************
  ESP32 LED Control Project
  This project controls an LED using ESP32 and Blynk.
  Prepared as a simple demonstration project for internship applications.
 *************************************************************/

#define BLYNK_TEMPLATE_ID "TMPL6OHgmm3Sk"
#define BLYNK_TEMPLATE_NAME "wokwi led"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Blynk Auth Token
#define BLYNK_AUTH_TOKEN "vtfKu9IKbxsg-rsUT5J52CqLKIDJ-gsV"

// WiFi credentials (Wokwi uses open guest network)
char ssid[] = "Wokwi-GUEST";
char pass[] = "";

// Enable serial debug output
#define BLYNK_PRINT Serial

// LED pin (D2 on ESP32)
#define LED_PIN 2

// Handle LED control from Blynk Button Widget (V1)
BLYNK_WRITE(V1) {
  int buttonState = param.asInt(); // 0 = OFF, 1 = ON
  digitalWrite(LED_PIN, buttonState);
}

void setup()
{
  Serial.begin(115200);          // Start serial monitor
  pinMode(LED_PIN, OUTPUT);      // Set LED pin as output
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass); // Connect to WiFi and Blynk Cloud
}

void loop()
{
  Blynk.run();  // Process incoming Blynk events
  delay(100);   // Small simulation delay
}
