/* BH1750 조도센서로 입력받은 조도값을 OLED 디스플레이에 출력하는 프로그램 */

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET LED_BUILTIN  //4
Adafruit_SSD1306 display(OLED_RESET);

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

#include <BH1750.h>
BH1750 lightMeter;

void setup(){
  Serial.begin(9600);
  Wire.begin();
  lightMeter.begin();
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void loop() {
  // put your main code here, to run repeatedly:
  displayIlluminance();
  display.display();
}

void displayIlluminance(){
  //Delay to allow sensor to stablize
  delay(1000);
  
  //Read Illuminance
  float lux = lightMeter.readLightLevel();
  Serial.print("Illuminance: ");
  Serial.print(lux);
  Serial.println(" lx");

  // Clear the buffer.
  display.clearDisplay();
  display.display();
  
  display.setCursor(0,0);
  display.print("Illuminance: ");
  display.println(lux);
}
