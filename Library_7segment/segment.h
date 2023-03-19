#ifndef SEGMENT_H 
#define SEGMENT_H
//define if is not defined yet

#include <Arduino.h> //include Arduino library

class segment { //create a class
  private:
    //here are the values that are hidden and cannot be changed by the program
    int pins[7]; //variable that stores the pin that are used

//arrays that contain the information for each segment to display each digit 
    int zero[7]={1,1,1,1,1,1,0};
    int one[7]={0,1,1,0,0,0,0};
    int two[7]={1,1,0,1,1,0,1};
    int three[7]={1,1,1,1,0,0,1};
    int four[7]={0,1,1,0,0,1,1};
    int five[7]={1,0,1,1,0,1,1};
    int six[7]={1,0,1,1,1,1,1};
    int seven[7]={1,1,1,0,0,0,0};
    int eight[7]={1,1,1,1,1,1,1};
    int nine[7]={1,1,1,0,0,1,1};  

  public:
      

segment(){};//Default constructor
segment(int a, int b, int c, int d, int e, int f, int g); //constructor that will be used

void init(); //function to initialize the 7-segment

void Zero(); //function to display 0 on the display

void One(); //function to display 1 on the display

void Two(); //function to display 2 on the display

void Three(); //function to display 3 on the display

void Four(); //function to display 4 on the display

void Five(); //function to display 5 on the display

void Six(); //function to display 6 on the display

void Seven(); //function to display 7 on the display

void Eight(); //function to display 8 on the display

void Nine(); //function to display 9 on the display
};
//endif
#endif


