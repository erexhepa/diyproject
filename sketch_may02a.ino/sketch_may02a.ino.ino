void setup() {
  // setup the input and ouput pins in the board
  pinMode(7, OUTPUT);   //Pin 7 is defined as output
  pinMode(8, OUTPUT);   //Pin 8 is defined as output
}

void loop() {
  // main function being repeated in a continous loop in the board
  
  digitalWrite(7, HIGH);   //turn on the LED on pin 7
  delay(1000);   //wait for 1000 milliseconds
  digitalWrite(7, LOW);  //turn off the LED on pin 7
  
  digitalWrite(8, HIGH);   //turn on the LED on pin 8
  delay(1000);   //wait for 1000 milliseconds
  digitalWrite(8, LOW);  //turn off the LED on pin 8
}
