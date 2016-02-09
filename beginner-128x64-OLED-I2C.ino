/*********************************************************************
This is an example for our Monochrome OLEDs based on SSD1306 drivers

  Pick one up today in the adafruit shop!
  ------> http://www.adafruit.com/category/63_98

This example is for a 128x64 size display using I2C to communicate
3 pins are required to interface (2 I2C and one reset)

Adafruit invests time and resources providing this open source code, 
please support Adafruit and open-source hardware by purchasing 
products from Adafruit!

Written by Limor Fried/Ladyada  for Adafruit Industries.  
BSD license, check license.txt for more information
All text above, and the splash screen must be included in any redistribution
*********************************************************************/



// Added by Jeremy Ellis
// using Grove 128x64 OLED 
// http://www.seeedstudio.com/wiki/Grove_-_OLED_Display_0.96%22#With_Arduino

// black GND 
// red 3v3      so do not need the protective resistors below
// white SDA    D0 needs resistors 1.5K to 10K since 5V serial
// yellow SCL   D1 needs resistors 1.5K to 10K since 5V serial



//used pkourany github site
//https://github.com/pkourany/Adafruit_SSD1306

// you must include the following files and the coresponding .cpp files 
// total 4 files

#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"

#define OLED_RESET D4
Adafruit_SSD1306 display(OLED_RESET);

#define NUMFLAKES 10
#define XPOS 0
#define YPOS 1
#define DELTAY 2


#define LOGO16_GLCD_HEIGHT 16 
#define LOGO16_GLCD_WIDTH  16 



#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

void setup()   {                
  Serial.begin(9600);

  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3D (for the 128x64)
  // init done
  
  //display.display(); // show splashscreen
 // delay(2000);
  display.clearDisplay();   // clears the screen and buffer
  
  display.setTextSize(2);           // from 1-9 sensible actually can be bigger but useless
  display.setTextColor(BLACK, WHITE); // 'inverted' text
  display.setCursor(0,30);       // 128,64 pixels
  display.clearDisplay();
  display.println("Hello OLED");
  display.display();
  delay(4000);
 

  display.setTextSize(1);
  display.setTextColor(WHITE,BLACK); // Normal text
  display.setCursor(0,0);
  display.clearDisplay();
  display.println("size 1");
  display.println("size 1, line 2");
  display.display();
  delay(4000);
 

  display.clearDisplay();
  display.println("size 2");
  display.display();
  delay(1000);
 
   
  display.setTextSize(3);
  display.clearDisplay();
  display.setCursor(50,4);
  display.println("size 3");
  display.display();
  delay(1000);
 
   
  display.setTextSize(9);
  display.setCursor(0,0);
  display.clearDisplay();
  display.println("9");
  display.display();
  delay(2000);
 
   
  display.setTextSize(1);
  display.setCursor(0,0);
  display.clearDisplay();
  display.println("Good Bye");
  display.display();
  delay(2000);
 
 
  display.clearDisplay();
  display.display();
  
}
