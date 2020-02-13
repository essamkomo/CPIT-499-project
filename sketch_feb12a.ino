#include<Stepper.h>

// add the number of the used pins 
 int const pin1= 9;
 int const pin2= 10;
 int const pin3= 11;
 int const pin4= 12;
 
Stepper myStepper(200,pin1,pin2,pin3,pin4); 

void setup() {

 // set the speed of the motor
myStepper.setSpeed(90);
}

void loop() {

// sett the number of steps 
myStepper.step(1024);

// delay for the rotation 
delay(6000);
}
