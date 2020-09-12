int cds = A0;
int led = 13;
int button = 2;

void setup() {
   Serial.begin(9600);
   pinMode(led, OUTPUT);
   pinMode(button, INPUT);
}

void loop() {

   int signalLevel = analogRead(cds);
   Serial.println(signalLevel);
  
   if(signalLevel > 500){		//어두워지면 (풀업저항)
     int motion = digitalRead(button);

     if(motion == HIGH){
      digitalWrite(led, HIGH);	//LED On
      Serial.println("LED ON");
      delay(10000);
      } 			

      digitalWrite(led, LOW);	//LED Off
      Serial.println("LED OFF");

}
 
