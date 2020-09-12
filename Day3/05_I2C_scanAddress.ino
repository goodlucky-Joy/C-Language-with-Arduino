/* 아두이노에 연결되어있는 I2C 소자의 주소를 표시하는 프로그램 */

#include <Wire.h>

void setup(){
  Serial.begin(9600);
  Wire.begin();
}

void loop(){
  Serial.println();
  Serial.println("I2C scanner...");
  byte count=0;

  for(byte i=8; i<120; i++){
    Wire.beginTransmission (i);
    if(Wire.endTransmission()==0)
    {
      Serial.print ("Found address: ");
      Serial.print (i, DEC);
      Serial.print (" (0x");
      Serial.print (i, HEX);
      Serial.println(")");
      count++;
      delay(1);
    }
  }
  Serial.println("Done.");
  Serial.print ("Found ");
  Serial.print(count, DEC);
  Serial.println("device(s)");
  delay(10000);
}
