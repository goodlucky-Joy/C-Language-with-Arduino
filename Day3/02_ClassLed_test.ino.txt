//ClassLed_test.ino
//LED On/Off 클래스 사용
#include <Led.h>

Led obj(13);	//객체 선언

void setup(){
}

void loop(){

   obj.LedHigh();
   delay(1000);

   obj.LedLow();
   delay(1000);
}
