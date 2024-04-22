/*
  Este código lê o valor de um potenciômetro conectado ao pino A0 e controla um buzzer e um LED com base nesse valor.

  Conexões:
  - O potenciômetro está conectado ao pino A0.
  - O buzzer está conectado ao pino 3.
  - O LED está conectado ao pino 4.

  O valor lido do potenciômetro é mapeado para o intervalo de 0 a 255 e usado para controlar a intensidade do LED e do buzzer.
  Se o valor lido do potenciômetro for menor que 128, o LED estará aceso e o buzzer estará desligado.
  Caso contrário, o LED estará desligado e o buzzer estará aceso.

  Autor: [Seu Nome/Autor]
  Data de Criação: [Data de Criação]
*/

// Definindo os pinos usados para os componentes
int potenciometro = A0;  // Pino do potenciômetro
int buzzer = 3;          // Pino do buzzer
int led = 4;             // Pino do LED

float valor_lido = 0;    // Variável para armazenar o valor lido do potenciômetro

void setup() {
  // Configurando os pinos como entrada ou saída
  pinMode(potenciometro, INPUT);  // O potenciômetro é uma entrada
  pinMode(buzzer, OUTPUT);        // O buzzer é uma saída
  pinMode(led, OUTPUT);           // O LED é uma saída
  Serial.begin(9600);             // Iniciando a comunicação serial
}

void loop() {
  // Lendo o valor do potenciômetro e mapeando-o para o intervalo de 0 a 255
  valor_lido = map(analogRead(potenciometro), 0, 1023, 0, 255);
  
  // Controlando o LED e o buzzer com base no valor lido do potenciômetro
  if (valor_lido < 128) {
    // Se o valor lido for menor que 128, acenda o LED e desligue o buzzer
    analogWrite(led, 255);   
    analogWrite(buzzer, 0);
  } else {
    // Caso contrário, desligue o LED e acenda o buzzer
    analogWrite(led, 0);     
    analogWrite(buzzer, 255);
  }

  delay(10);  // Pequeno atraso para evitar leituras muito rápidas
}
