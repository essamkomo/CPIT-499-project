#include<Stepper.h>

// add the number of the used pins 
 int const pin1= 9;
 int const pin2= 11;
 int const pin3= 10;
 int const pin4= 12;
 int count = 0; 
Stepper myStepper(200,pin1,pin2,pin3,pin4); 

void setup() {
Serial.begin(9600);
// set the speed of the motor
myStepper.setSpeed(100);
//myStepper.step(1024);
delay(5000); 

}

void loop() {

// sett the number of steps 

// delay for the rotation 

//count++;
Serial.println(count);
delay(5000); 

myStepper.step(360);

}
