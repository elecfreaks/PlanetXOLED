#ifndef _PLANETXOLED_H_
#define _PLANETXOLED_H_

#include <Adafruit_SSD1306.h>

#define OLED_RESET    4   // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_WIDTH  128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64  // OLED display height, in pixels

class PlanetXOLED : public Adafruit_SSD1306
{
public:
  PlanetXOLED() : Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET) {}
  void begin()
  {
    Adafruit_SSD1306::begin(SSD1306_SWITCHCAPVCC, 0x3C);
  }

private:

};

#endif
