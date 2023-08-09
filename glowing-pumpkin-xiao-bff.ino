/*********************************************************
* Glowing Pumpkin 
* 
* Xaio ESP32 S3 version using the Adafruit 5x5 BFF LED
* Matrix
*
* By John M. Wargo
* https://johnwargo.com
**********************************************************/

#include <FastLED.h>

#define DEBUG true
#define NUM_LEDS 25
#define PIN A3

CRGB leds[NUM_LEDS];

void setup() {
#ifdef DEBUG
  Serial.begin(115200);
  delay(500);
  Serial.println("Initializing FastLED");
#endif
  FastLED.addLeds<NEOPIXEL, PIN>(leds, NUM_LEDS);
}

void loop() {
#ifdef DEBUG
  Serial.println("Loop");
#endif

  leds[0] = CRGB::White;
  FastLED.show();
  delay(500);
  leds[0] = CRGB::Black;
  FastLED.show();
  delay(500);
}