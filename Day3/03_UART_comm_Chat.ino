//Arduino UART 통신 채팅프로그램

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
