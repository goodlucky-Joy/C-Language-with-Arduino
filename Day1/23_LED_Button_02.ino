/* 버튼 스위치를 누르면 LED가 켜지는 예제 프로그램, 스위치 연결시 내부풀업저항 사용*/

void setup() {
   Serial.begin(9600);
   pinMode(13, OUTPUT);
   pinMode(2, INPUT_PULLUP);
}

void loop() {
   int swState = digitalRead(2);
   digitalWrite(13, swState);
   Serial.println( swState );
}
    
