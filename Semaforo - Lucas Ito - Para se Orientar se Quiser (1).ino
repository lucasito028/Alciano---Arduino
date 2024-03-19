/*
Criador: Lucas Ito
Sou eu que criei isso e essa é uma "Documentação"
Explicando Sobre o Codigo do Semaforo 
OBS: Não Copie que nem eu fiz Se basem se Puder
*/

//Declarando Portas
int vermelho = 1;
int amarelo = 2;
int verde = 3;

int vermelho2 = 6;
int amarelo2 = 7;
int verde2 = 8;

int vermelho3 = 10;
int amarelo3 = 11;
int verde3 = 12;


void setup() {

  //Declarando como as portas irá se comportar
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);

  pinMode(vermelho2, OUTPUT);
  pinMode(amarelo2, OUTPUT);
  pinMode(verde2, OUTPUT);

  pinMode(vermelho3, OUTPUT);
  pinMode(amarelo3, OUTPUT);
  pinMode(verde3, OUTPUT);



}

void loop() {

  //Começa 
  //Vez do Amarelo - Tempo de 2 segundos

  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, HIGH);

  digitalWrite(vermelho2, HIGH);
  digitalWrite(amarelo2, LOW);
  digitalWrite(verde2, LOW);

  digitalWrite(vermelho3, HIGH);
  digitalWrite(amarelo3, LOW);
  digitalWrite(verde3, LOW);

  delay(2000);


  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);

  digitalWrite(vermelho2, LOW);
  digitalWrite(amarelo2, LOW);
  digitalWrite(verde2, HIGH);

  digitalWrite(vermelho3, HIGH);
  digitalWrite(amarelo3, LOW);
  digitalWrite(verde3, LOW);


  delay(2000);

  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);

  digitalWrite(vermelho2, LOW);
  digitalWrite(amarelo2, HIGH);
  digitalWrite(verde2, LOW);

  digitalWrite(vermelho3, HIGH);
  digitalWrite(amarelo3, LOW);
  digitalWrite(verde3, LOW);


  delay(2000);

  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);

  digitalWrite(vermelho2, HIGH);
  digitalWrite(amarelo2, LOW);
  digitalWrite(verde2, LOW);

  digitalWrite(vermelho3, LOW);
  digitalWrite(amarelo3, LOW);
  digitalWrite(verde3, HIGH);


  delay(2000);

  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);

  digitalWrite(vermelho2, HIGH);
  digitalWrite(amarelo2, LOW);
  digitalWrite(verde2, LOW);

  digitalWrite(vermelho3, LOW);
  digitalWrite(amarelo3, HIGH);
  digitalWrite(verde3, LOW);

  delay(2000);


}

//Fonte: https://www.makerhero.com/blog/como-criar-um-semaforo-com-arduino/