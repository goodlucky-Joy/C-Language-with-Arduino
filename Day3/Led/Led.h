//Led.h
//LED On/Off 클래스 정의 
#ifndef Led_h
#define Led_h
#include <Arduino.h>
class Led
{
   private:
      int LedPin;
   public:
      Led(int Pin){
         LedPin = Pin;
         pinMode(LedPin, OUTPUT);
      }
      ~Led(){
      }
   public:
      void LedHigh();
      void LedLow();
};
#endif
