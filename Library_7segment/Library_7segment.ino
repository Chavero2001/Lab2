/*The goal of this program is to display digits on a 7-segment display, using a class,
this includes creating a .h and a .cpp files

Class, functions, 7 segment*/
#include "segment.h" //include the library for the 7 segment

segment test (4,5,6,7,8,9,10); //create an object and pass the values of the pins that are connected to the 7 segment

void setup() {
  //run the function to initialize the segment
test.init();
}

void loop() {

test.Zero(); //display 0
delay(1000); //wait 1 second
test.One(); //display 1
delay(1000); //wait 1 second
test.Two(); //display 2
delay(1000); //wait 1 second
}
