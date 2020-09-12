void setup() {
   Serial.begin(9600);
}

void loop() {
   int signalLevel = analogRead(A0);
   float voltage = signalLevel * 5/1023.0;
   Serial.println( voltage, 4 );
}
   
   
