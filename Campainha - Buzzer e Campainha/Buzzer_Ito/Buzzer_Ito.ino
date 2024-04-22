/*
  Este código controla um buzzer, um botão e dois LEDs.

  Conexões:
  - O buzzer está conectado ao pino 1.
  - O botão está conectado ao pino 12.
  - O LED1 está conectado ao pino 1.
  - O LED2 está conectado ao pino 1.

  O botão é usado para ativar e desativar a reprodução de tons no buzzer.
  Quando o botão é pressionado, o buzzer emite uma sequência de tons.
  Enquanto o botão não está pressionado, os LEDs permanecem desligados.

  Autor: [Seu Nome/Autor]
  Data de Criação: [Data de Criação]
*/

// Definindo os pinos usados para os componentes
int buzzer = 1;  // Pino do buzzer
int btn = 12;    // Pino do botão
int led = 1;     // Pino do LED1
int led2 = 1;    // Pino do LED2

int valor = 0;   // Variável para armazenar o estado do botão

void setup() {
  // Configurando os pinos como entrada ou saída
  pinMode(buzzer, OUTPUT);  // O buzzer é uma saída
  pinMode(led, OUTPUT);     // O LED1 é uma saída
  pinMode(led2, OUTPUT);    // O LED2 é uma saída
  pinMode(btn, INPUT);      // O botão é uma entrada
}

void loop() {
  // Verificando se o botão foi pressionado
  valor = digitalRead(btn);
  
  if(valor == 1){
    // Se o botão estiver pressionado, reproduzir uma sequência de tons
    tone(1, 40, 100);
    delay(1000);
    tone(1, 200, 100);
    delay(1000);
    tone(1, 100, 100);
    delay(1000);
    tone(1, 3000, 100);
    delay(1000);
    digitalWrite(led, OUTPUT); // Ligar o LED1
  } else {
    // Se o botão não estiver pressionado, manter os LEDs desligados
    digitalWrite(led, OUTPUT); // Desligar o LED1
  }
}
