Adafruit_SSD1306
================

Adafruit_SSD1306 library ported for Spark by Paul Kourany, Mar 18, 2014

SSD1306 128x64 Wiring guide 

```
// If using software SPI (the default case):
#define OLED_MOSI   D0
#define OLED_CLK    D1
#define OLED_DC     D2
#define OLED_CS     D3
#define OLED_RESET  D4
Adafruit_SSD1306 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);
```
<img src="SSD1306-128x64.jpg" alt="SSD1306 128 x 64 wiring guide"/>



Update by Jeremy Ellis Feb 9th, 2016
If using the beginner-128x64-OLED-I2C.ino with the particle.io and the Grove seeedstudio 128x64 OLED http://www.seeedstudio.com/wiki/Grove_-_OLED_Display_0.96%22#With_Arduino

you can connect all four wires to the Photon

black GND 
red 3v3      
white SDA   Pin D0 
yellow SCL  Pin D1 

Remember to include the following files:

Adafruit_GFX.cpp

Adafruit_GFX.h

Adafruit_SSD1306.cpp

Adafruit_SSD1306.h






