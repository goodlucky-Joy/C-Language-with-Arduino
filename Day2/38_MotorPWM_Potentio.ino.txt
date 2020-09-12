int motorPin = 11;

void setup() {
   pinMode(motorPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  int duty = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(motorPin, duty); 
  delay(100);
}
