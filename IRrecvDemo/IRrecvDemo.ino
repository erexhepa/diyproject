/*
 * IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
 * An IR detector/demodulator must be connected to the input RECV_PIN.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

#include <IRremote.h>

int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  // In case the interrupt driver crashes on setup, give a clue
  // to the user what's going on.
  Serial.println("Enabling IRin");
  pinMode (13, OUTPUT);
  digitalWrite(13, LOW);    //At first the LED should be tuned off.
  irrecv.enableIRIn(); // Start the receiver
  Serial.println("Enabled IRin");
}

void loop() {
  
if (irrecv.decode(&results)) {
Serial.println(results.value, DEC);
if (results.value == 16724175)   //If The IR receiver receives the number
//16724175 (button 1)...
{digitalWrite (13, HIGH);}   //...the LED gets turned on.
if (results.value == 16718055)   //If the IR receiver receives the number
//16718055 (button 2)...
{digitalWrite (13, LOW);}  //....the LED gets turned off.
irrecv.resume(); // Receive the next value
}
}
