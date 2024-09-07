#include <Servo.h>
Servo ustServo;
Servo altServo;

int laserPin=3;
int joyPin=4;

int altAci;
int ustAci;


void setup() {
  // put your setup code here, to run once:
  altServo.attach(9);
  ustServo.attach(10);
  pinMode(laserPin,OUTPUT);
  pinMode(joyPin,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(laserPin,HIGH);
  altAci=analogRead(A0);
  altAci=map(altAci,0,1023,125,65);
  altServo.write(altAci);


  ustAci=analogRead(A1);
  ustAci=map(ustAci,0,1023,140,80);
  ustServo.write(ustAci);


  if(digitalRead(joyPin)==LOW)
  {
   digitalWrite(laserPin,LOW);
   delay(100); 
   digitalWrite(laserPin,HIGH);
   delay(100); 
   digitalWrite(laserPin,LOW);
   delay(100); 
  }
}
