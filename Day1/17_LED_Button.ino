void setup() {
   Serial.begin(9600);
   pinMode(13, OUTPUT);
   pinMode(2, INPUT);
}

void loop() {
   int swState = digitalRead(2);
   digitalWrite(13, swState);
   Serial.println( swState );
}
    
