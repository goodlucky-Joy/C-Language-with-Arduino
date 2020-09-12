int ledPin = 11;

void setup() {
   pinMode(ledPin, OUTPUT);
}

void loop() {
   analogWrite(ledPin, 255);
   delay(2000);
   analogWrite(ledPin, 127);
   delay(2000);
}
   
