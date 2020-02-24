# include <Servo.h> 

Servo Servo1 ;

int Position=0 ;

int mode=0;
void setup() {
Serial.begin(9600);

Servo1.attach(A0); 
}

void loop() {
if(mode==0){
Position++;
Servo1.write(Position);
Serial.println(Position);
delay(15);
if(Position==50){
mode=1;    

}

}else{
  
Position--;
Servo1.write(Position);
Serial.println(Position);
delay(15);
if(Position==0){
mode=0;    

} 
 
}

}
