#ifndef pushbutton_H
#define pushbutton_H
//define if is not defined yet

#include<Arduino.h> //include Arduino library

class PushButton { //create a class for push buttons
  private: //hide and protect the variables here
    int pin; //variable in which the pin number in use will be saved
    int state=0; //the initial state of the pin is 0 as the circuit is pull down

  public:
    PushButton(){}; //default costructor
    PushButton(int pinNumber); //constructor that receives the pin number
    int getState(); //function that returns the current state

    void updateState();//function to digitalRead the pin to see the state of the button 
};

#endif