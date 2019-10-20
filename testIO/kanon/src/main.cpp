#include <Arduino.h>
#include <Servo.h>

int pinkanon = 7;

Servo servo1;
Servo servo2;
int pos =0;
int pos1 = 0;


void setup() {
  // put your setup code here, to run once:

  servo1.attach(9);
  servo2.attach(8);
  pinMode(pinkanon, OUTPUT);
 

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
servo();
}

void servo(){

  for(pos = 0; pos<=102; pos++){
    servo1.write(pos);
    delay(20);
  }
  
  for(pos = 102; pos<=0; pos--){
    servo1.write(pos);
    delay(20);
  }
 
     for(pos1 = 30; pos1<=0; pos1--){
     servo2.write(pos1);
     delay(20);

  }
    for(int i =0; i<3; i++){
    digitalWrite(pinkanon, HIGH);
    delay(100);
    digitalWrite(pinkanon, LOW);
    delay(100);
    }


   for(pos1 = 0; pos1<=30; pos1++){
   servo2.write(pos1);
   delay(20);

}

for(pos = 102; pos<=180; pos++){
    servo1.write(pos);
    delay(20);


  }
  
  for(pos = 180; pos<=102; pos--){
    servo1.write(pos);
    delay(20);

  }

 }