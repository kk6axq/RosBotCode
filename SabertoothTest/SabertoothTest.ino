/*****************************************
SabertoothTest.ino
Created August 25, 2016
Author: thecentralthinkingunit.blogspot.com
Purpose:
This program tests that the connection bet-
ween the Sabertooth and the Arduino is wor-
king correctly. Desired output should be 
driving forward and left for 2.5 seconds
then stopping for 2.5 seconds.
******************************************/




#include <Servo.h>// Import the Servo library 
/* Initialize two constant ints to hold the
pin numbers for the two channels*/
const int turnServoPin = 5;
const int linearServoPin = 6;
 
Servo turnServo;//Create servo objects for the two channels
Servo linearServo;

void setup() // This function run once at start
{ 
  turnServo.attach(turnServoPin);// associate the servo object with the pin
  linearServo.attach(linearServoPin);
  turnServo.write(90);// set the angle of the servo to 90 degrees
  linearServo.write(90);
  
} 
 
 
void loop() //Runs continuously after start
{ 
  linearServo.write(100);//Set the servos to new positions
  turnServo.write(100);
  delay(2500);// Wait for 2.5 seconds
  linearServo.write(90);//Stop both servos
  turnServo.write(90);
  delay(2500);// Wait for 2.5 seconds
} 
