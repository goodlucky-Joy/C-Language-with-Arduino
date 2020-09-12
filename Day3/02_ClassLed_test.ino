/* Led.h와 Led.cpp 파일에 Led클래스를 만든 후 객체를 생성하여 사용해보는 예제 프로그램 */
/* Led.h와 Led.cpp는 내문서/Arduino/Libraries/Led 폴더를 만들어서 그 안에 넣어주세요 */

#include <Led.h>

Led obj(13);	//Led 클래스의 객체 선언

void setup(){
}

void loop(){

   obj.LedHigh();
   delay(1000);

   obj.LedLow();
   delay(1000);
}
