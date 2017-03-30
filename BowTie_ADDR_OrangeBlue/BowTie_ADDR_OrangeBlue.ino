#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip = Adafruit_NeoPixel(8, 5, NEO_GRB + NEO_KHZ800);
void setup() {
  strip.begin();
}
void loop() {
  chase(strip.Color(75, 25, 0)); //ORANGE
  chase(strip.Color(0, 25, 75)); //BLUE
}
static void chase(uint32_t c) {
  for (uint16_t i = 0; i < strip.numPixels() + 0; i++) {
    strip.setPixelColor(i  , c); // Draw new pixel
    strip.show();
    delay(300);
  }
}
