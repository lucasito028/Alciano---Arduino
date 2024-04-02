int buzzer = 1;
int btn = 12;
int led = 1;
int led2 = 1;
int valor = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(btn, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(valor == 1){
    valor = digitalRead(btn);
    tone(1, 40, 100);
    delay(1000);
    tone(1, 200, 100);
    delay(1000);
    tone(1, 100, 100);
    delay(1000);
    tone(1, 3000, 100);
    delay(1000);
    digitalWrite(led, OUTPUT);
  }else{
      valor = digitalRead(btn);

  }


}
