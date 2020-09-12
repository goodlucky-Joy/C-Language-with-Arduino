/* 아두이노 두 대를 직렬로 연결하여 통신하는 채팅 프로그램 */
/* SoftwareSerial 모듈을 사용해서 가상포트를 통해 직렬통신 */

#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); // (Rx, Tx)

void setup()
{
	// 직렬통신 전담 하드웨어, UART를 이용한 직렬통신 준비
	Serial.begin(9600);  
	// 소프트웨어 방식을 이용한 직렬통신 준비
	mySerial.begin(9600);
} 

void loop() 
{
	if (mySerial.available()>0) { 
		Serial.write(mySerial.read()); 
	}

	if (Serial.available()>0) {
		mySerial.write(Serial.read());
	}
}
