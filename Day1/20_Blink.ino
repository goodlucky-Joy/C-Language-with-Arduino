/* LED가 1개를 깜박이는 예제 프로그램 */

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); 			// Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); 			// Wait for 1000 millisecond(s)
}
