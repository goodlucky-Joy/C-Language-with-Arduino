/* 128x64 OLED에 Hello World를 출력하는 프로그램 */

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <BH1750.h>

#define OLED_RESET LED_BUILTIN  //4
Adafruit_SSD1306 display(OLED_RESET);

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

BH1750 lightMeter;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  lightMeter.begin();
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  // Clear the buffer.
  display.clearDisplay();
  display.display();
  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Hello World!");
  display.display();
}

void loop() {
  delay(500);
  float lux = lightMeter.readLightLevel();
  Serial.print("Light: ");
  Serial.print(lux);
  Serial.println(" lx");

  display.clearDisplay();
  display.display();
  display.setCursor(0,0);
  display.println(lux);
  display.display();
}
