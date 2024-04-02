int potenciometro = A0;
int buzzer = 3;
float valor_lido = 0;
int led = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(potenciometro, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  valor_lido = map(analogRead(potenciometro), 0, 1023, 0, 255);
 
 /* Meu codigo Anterior sem Chat GTP
  analogWrite(led, valor_lido);

  analogWrite(buzzer, valor_lido);*/

  // Codigo depois do Chat GTP
  if (valor_lido < 128) {
    analogWrite(led, 255);   
    analogWrite(buzzer, 0);
  } else {
    analogWrite(led, 0);     
    analogWrite(buzzer, 255);
  }

  delay(10);


}
