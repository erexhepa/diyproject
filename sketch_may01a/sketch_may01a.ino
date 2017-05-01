void setup() {
  // setup the input and ouput pins in the board
  pinMode(7, OUTPUT);   //Pin 7 is defined as output
  pinMode(8, OUTPUT);   //Pin 8 is defined as output
}

void loop() {
  // main function being repeated in a continous loop in the board
  
  digitalWrite(13, HIGH);  //Turn on the voltage on pin 13 (LED on)
  delay(1000);  //Wait for 1000 milliseconds (one second)
  
  digitalWrite(13, LOW);  //Turn off the voltage on pin 13 (LED off)
  delay(1000);  //Wait for 1000 milliseconds (one second)
}
