int LEDblue=3;  //Blue colour on pin 3
int LEDred=5;   //Red colour on 5
int LEDgreen=6;   //Green colour on pin 6
int b=1000;   //b defines a break of 1000ms (1 second)

 
int brightnessblue=250;  //Value between 0 and 255 – defines the brightness of
//the single colour
int brightnessred=250;   //Value between 0 and 255 – defines the brightness of
//the single colour
int brightnessgreen=5;   //Value between 0 and 255 – defines the brightness of
//the single colour
int dark=0;  //Value 0 stands vor 0V voltage – therefore LED off


void setup() {
  pinMode(LEDblue, OUTPUT);
  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDred, OUTPUT);
}

void loop() {
  analogWrite(LEDblue, brightnessblue);
  delay(b);  //Break
  //Turn on blue
  //analogWrite(LEDblue, dark);   //Turn off blue
  analogWrite(LEDred, brightnessred);  //Turn on red
  delay(b);   //Break
  analogWrite(LEDred, dark); // Turn off red
  analogWrite(LEDblue, dark);
  
  analogWrite(LEDgreen, brightnessgreen);  //Turn on green
  delay(b);  //Break
  analogWrite(LEDgreen, dark);   //Turn off  green
}

