int ledPin = 11;

void setup() {
   pinMode(ledPin, OUTPUT);
   Serial.begin(9600);
}

void loop() {
   int sensorValue = analogRead(A0);
   int dutyValue = (sensorValue/1023.0)*255;

   Serial.print("sensorValue = "); Serial.print(sensorValue);
   Serial.print(" , dutyValue = "); Serial.println(dutyValue);
   analogWrite(ledPin, dutyValue);

   delay(20);
}
