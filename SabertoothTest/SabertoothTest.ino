/*****************************************
SabertoothTest.ino
Created August 25, 2016
Author: thecentralthinkingunit@blogspot.com
Purpose:
This program tests that the connection bet-
ween the Sabertooth and the Arduino is wor-
king correctly. Desired output should be 
driving forward and left for 2.5 seconds
then stopping for 2.5 seconds.
******************************************/




#include <Servo.h> 

const int turnServoPin = 5;
const int linearServoPin = 6;
 
Servo turnServo;
Servo linearServo;

void setup() 
{ 
  turnServo.attach(turnServoPin);
  linearServo.attach(linearServoPin);
  turnServo.write(90);
  linearServo.write(90);
  
} 
 
 
void loop() 
{ 
  linearServo.write(100);
  turnServo.write(100);
  delay(2500);
  linearServo.write(90);
  turnServo.write(90);
  delay(2500);
} 
