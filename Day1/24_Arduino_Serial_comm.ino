/* 아두이노 직렬통신을 통해 키보드로 부터 입력받은 값에 따라 LED 제어 예제 프로그램 */

void setup(){
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop(){
  char c;
  if(Serial.available() > 0){  	// 수신 버퍼에 저장된 바이트 수 반환
    c = Serial.read();	   	    // 수신 버퍼에서 한 바이트 읽어옴
    if(c=='a'){
      digitalWrite(13, HIGH);
    }else{
      digitalWrite(13, LOW);
    }
  }
}
