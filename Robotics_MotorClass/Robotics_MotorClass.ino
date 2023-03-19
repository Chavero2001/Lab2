/*The goal of this program is to move a Robot car using a class for the motors

Class, robot car, digtialWrite, analogWrite, Dc motors*/
#include "motor.h" //include the header file

motor test (150); //create and object to use the clase, and define the speed 

void setup(){
  test.init(); //initialize the motor
}

void loop(){
  test.forward(); //move the car forward
  delay(1000); //move during 1 second
  test.stop(); //stop
  delay(1000); //stop durin 1 second
}
