 #include <Arduino.h>
int green = 24;
int yellow = 28;
int red = 26;

 void color(int R, int G, int Y){
  analogWrite(red, R);
  analogWrite(green, G);
  analogWrite(yellow, Y);
 }
