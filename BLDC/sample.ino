

#include <Servo.h>

Servo ESC;     // create servo object to control the ESC

int potValue;  // value from the analog pin

int i=0;

int velocity=0;
void setup() {
//  ESC.attach(9);
//  ESC.write(velocity);
//  delay(2000);

//  ESC.write(100);
  // Attach the ESC on pin 9
  ESC.attach(9,10000,20000);
  Serial.begin(9600);// (pin, min pulse width, max pulse width in microseconds) 
}


void loop() {
//  potValue = analogRead(A0);   // reads the value of the potentiometer (value between 0 and 1023)
//  potValue = map(potValue, 0, 1023, 0, 180);   // scale it to use it with the servo library (value between 0 and 180)
  ESC.write(0);
  Serial.print(potValue);
  Serial.print("\n");
  delay(2000);
  i=i+1;
  while(i==5){
    Serial.print(i);
    potValue=43;
     ESC.write(potValue);
     Serial.print(potValue);
     delay(2000);
    }
  
  // Send the signal to the ESC
//for(velocity=0;velocity<=10;velocity+=1){
//  ESC.write(velocity);
//  delay(100);
//  }
}
