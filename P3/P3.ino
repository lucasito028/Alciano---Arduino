#include <Servo.h>

Servo servoMotor;

int rele = 9;
int led = 8;
int buzzer = 7; 

char tecla;

void setup() {

  pinMode(rele, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

  servoMotor.attach(A1);
  servoMotor.write(0);

  Serial.begin(9600); 

}

void loop() {
   if (Serial.available())
    { 
        tecla = Serial.read();
        
        if (tecla == 'R'){
          digitalWrite(rele, 1); 
        }

        if (tecla == 'J'){
          digitalWrite(rele, 0); 
        }
        
        if (tecla == 'L'){
          digitalWrite(led, HIGH); }// Acende led vermelho
        
        if (tecla == 'D'){
          digitalWrite(led, LOW);
        } // Apaga led vermelho

        if (tecla == 'C'){
          tone(7, 40, 100);
          delay(1000);
          tone(7, 200, 100);
          delay(1000);
          tone(7, 100, 100);
          delay(1000);
        }

        if(tecla == 'A'){
          for(int i = 0; i <= 180; i = i + 10){
            servoMotor.write(i);
            Serial.println(i);
            delay(100);
          }
          delay(3000);
          servoMotor.write(0);
        }
    }
}