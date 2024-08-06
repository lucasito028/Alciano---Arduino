#include <Servo.h>

Servo servoMotor;

void setup() {

  servoMotor.attach(A1);
  servoMotor.write(0);

  Serial.begin(9600); 

}

void loop() {
  for(int i = 0; i <= 180; i = i + 10){
    servoMotor.write(i);
    Serial.println(i);
    delay(100);
  }

  delay(2000);
  servoMotor.write(0);
  delay(2000);

}