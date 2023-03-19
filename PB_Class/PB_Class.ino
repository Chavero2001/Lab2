/*The goal of this program is to create a class for a Push button

Class, functions*/ 
#include "pushbutton.h" //include the header file

PushButton myButton(2); // create a new button object with pin 2

void setup() {
  Serial.begin(9600); // initialize serial communication
}

void loop() {
  myButton.updateState(); // update the state of the button

  if (myButton.getState() == HIGH) {
    Serial.println("Button pressed"); // print a message if the button is pressed
  }

  delay(100); // wait for a short time
}