#include "pushbutton.h" //include the header file

PushButton::PushButton(int pinNumber) { //the constructor receives the pin number connected to the push button
      pin = pinNumber; //pin variable receives the pin number
      pinMode(pin, INPUT); //define pin as input
      state; //restart the value of state to 0
    };

int PushButton::getState() {//function to return the state
      return state; //return the current state
    };    

void PushButton:: updateState() { //function to update the state
      int currentState = digitalRead(pin); //digital read the pin 
      if (currentState != state) { //if the state is different from 0, update the state 
        state = currentState;
      }
    };