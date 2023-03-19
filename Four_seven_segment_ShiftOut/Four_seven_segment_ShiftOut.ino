/*The goal of this program is to use 74HC595 to display 4 different digits on a
7 segment display,  using the Arduino function ShiftOut

74HC595, ShiftOut, 
*/
int latch = 4; //pin to latch
int cs = 2; //clockpin
int data = 0; //pin to pass the information
int dPins[4] = {13, 12, 11, 10};  //pins that control the digits
 //pin 10= digit 1
 //pin 11= digit 2
 //pin 12= digit 3
 //pin 13= digit 4
int step=0; //This varibale is used to change the switch case
//it starts at 0 to show the first digit, and increses to 3 for digit 4
unsigned long prevMillis=0; //variable used to record the previous millis

int time=5;//time required to change between each digit

const byte digits[10] = {  //It indicates which pins have to be on and off to display each number
//each byte has the information to print on the segments on or off in accordance with the digit
  B00111111,  // 0
  B00000110,  // 1
  B01011011,  // 2
  B01001111,  // 3
  B01100110,  // 4
  B01101101,  // 5
  B01111101,  // 6
  B0000111,  // 7
  B01111111,  // 8
  B01101111,   // 9
};

bool wait(unsigned long mill){ //funtion to wait and change the steps in the switch case
  if(millis()-prevMillis>=mill){ //it uses millis() to avoid using delay
  step++; //One is added to step variable each time it reaches 5 milliseconds...
          //this changes the switch case to the next step 
  prevMillis = millis(); //prevMillis is updated to the current millis
    }
  
}
void print_num(int w, int x, int y, int z){ //function to print 4 digits
  switch (step){ //this switch case has the function to display first on digit 1, then on 2 and 3, until reaching the fourth digit
case 0:
//First digit
	digitalWrite(13, HIGH); //high means that is not active
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW); //the output has to be low to display the digit
  digitalWrite(latch, LOW);
 	shiftOut(data, cs, MSBFIRST, digits[z]); //shiftOut the data contained in the digits array for the value on the first digit
 	digitalWrite(latch, HIGH); //active the lacth to display 

  //delay(5);
wait(time); //use the function wait to wait 5 milisecond, and then changing to the next step 
break; //break the case

case 1:
//Secon digit
	digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW); //now this has to be low and the rest high to display only on the second digit
  digitalWrite(10, HIGH);
  digitalWrite(latch, LOW);
 	shiftOut(data, cs, MSBFIRST, digits[y]); //the value now will be the one passed on y 
 	digitalWrite(latch, HIGH);   
  
 // delay(5);

wait(time); //wait and change the step 
break;

case 2:
//Third digit
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(latch, LOW);
 	shiftOut(data, cs, MSBFIRST, digits[x]);
 	digitalWrite(latch, HIGH);
  
  //delay(5);
wait(time);//wait and change the step 
break;

case 3:
//Four digit
digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(latch, LOW);
 	shiftOut(data, cs, MSBFIRST, digits[w]);
 	digitalWrite(latch, HIGH);
   
  //delay(5);
wait(time); //wait and change the step 
break;

default:
step=0; //step is reseted to 0, starting again
break;

};
} 

void setup() {
 	//define pins as outputs
 	pinMode(latch, OUTPUT);
 	pinMode(cs, OUTPUT);
 	pinMode(data, OUTPUT);
 	pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);   
}
void loop() {
 	//call the function to print the number
print_num(1,2,3,4); //the digits has to be passed to the function
 	
}
