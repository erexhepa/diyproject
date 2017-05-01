void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);  //Turn on the voltage on pin 13 (LED on)
  delay(1000);  //Wait for 1000 milliseconds (one second)
  digitalWrite(13, LOW);  //Turn off the voltage on pin 13 (LED off)
  delay(1000);  //Wait for 1000 milliseconds (one second)
}
