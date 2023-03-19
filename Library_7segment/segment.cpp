#include "segment.h" //include the header file

segment::segment(int a, int b, int c, int d, int e, int f, int g){
  //the constructor must have the values of the pins for each segment
pins[0]=a; //the values are saved on the pins array
pins[1]=b; 
pins[2]=c;
pins[3]=d;
pins[4]=e;
pins[5]=f;
pins[6]=g;
}

void segment::init(){ //define the pins that are in used as outputs
for(int i=0;i<8;i++){
    pinMode(pins[i],OUTPUT);
}
}

void segment::Zero(){ //display 0 on the 7-segment
  //0 
for (int a=0;a<8;a++){ //the function uses a for loop and arrays to digitalWrite on and off in the right pins
  digitalWrite(pins[a],zero[a]); //pins array are on or off in accordance with zero array 
}

}  

void segment::One(){ //display 1 on the 7-segment
//1
for (int a=0;a<8;a++){
  digitalWrite(pins[a],one[a]);
}

}

void segment::Two(){ //display 2 on the 7-segment
//2
for (int a=0;a<8;a++){
  digitalWrite(pins[a],two[a]);
}

}

void segment::Three(){ //display 3 on the 7-segment
//3
for (int a=0;a<8;a++){
  digitalWrite(pins[a],three[a]);
}

}

void segment::Four(){ //display 4 on the 7-segment
//4
for (int a=0;a<8;a++){
  digitalWrite(pins[a],four[a]);
}

}

void segment::Five(){ //display 5 on the 7-segment
//5
for (int a=0;a<8;a++){
  digitalWrite(pins[a],five[a]);
}

}

void segment::Six(){ //display 6 on the 7-segment
//6
for (int a=0;a<8;a++){
  digitalWrite(pins[a],six[a]);
}

}

void segment::Seven(){ //display 7 on the 7-segment
//7
for (int a=0;a<8;a++){
  digitalWrite(pins[a],seven[a]);
}

}

void segment::Eight(){ //display 8 on the 7-segment
//8
for (int a=0;a<8;a++){
  digitalWrite(pins[a],eight[a]);
}

}

void segment::Nine(){ //display 9 on the 7-segment
//9
for (int a=0;a<8;a++){
  digitalWrite(pins[a],nine[a]);
}
}