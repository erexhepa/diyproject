int LEDblue=3;  //Blue colour on pin 3
int LEDred=5;   //Red colour on 5
int LEDgreen=6;   //Green colour on pin 6
int b=1000;   //b defines a break of 1000ms (1 second)

 
int brightnessblue=150;  //Value between 0 and 255 – defines the brightness of
//the single colour
int brightnessred=150;   //Value between 0 and 255 – defines the brightness of
//the single colour
int brightnessgreen=150;   //Value between 0 and 255 – defines the brightness of
//the single colour
int dark=0;  //Value 0 stands vor 0V voltage – therefore LED off


void setup() {
pinMode(LEDblue, OUTPUT);
pinMode(LEDgreen, OUTPUT);
pinMode(LEDred, OUTPUT);
}

void loop() {
  analogWrite(LEDgreen, brightnessgreen);  //Green and red on = yellow
  analogWrite(LEDred, brightnessred);
  delay(b);
  analogWrite(LEDgreen, dark);  //Green and red off = yellow off
  analogWrite(LEDred, dark);

  analogWrite(LEDgreen, brightnessgreen);  //Green and blue on = turquoise
  analogWrite(LEDblue, brightnessblue);
  delay(b);
  analogWrite(LEDgreen, dark);   //Green and blue off = turqouise off
  analogWrite(LEDblue, dark);

  analogWrite(LEDred, brightnessred);    //Red an blue on = purple
  analogWrite(LEDblue, brightnessblue);
  delay(b);
  analogWrite(LEDred, dark);   //Red and blue off = purple off
  analogWrite(LEDblue, dark);
}
