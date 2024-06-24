#include <LiquidCrystal.h>  // Inclui a biblioteca LiquidCrystal para utilizar o display LCD

// Define os pinos usados para conectar o display LCD ao Arduino
const int rs = 3, en = 4, d4 = A2, d5 = A3, d6 = A4, d7 = A5;

// Cria um objeto LiquidCrystal chamado lcd, passando os pinos definidos acima
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int led = 10;  // Define o pino 10 como saída para controlar um LED

void setup() {
  pinMode(led, OUTPUT);  // Configura o pino do LED como saída

  Serial.begin(9600);  // Inicializa a comunicação serial com velocidade de 9600 bps

  lcd.begin(16, 2);  // Inicializa o display LCD de 2 linhas x 16 colunas
  lcd.setCursor(1, 1);  // Define a posição do cursor no display (linha 1, coluna 1)
  lcd.print("Inicializando...");  // Escreve uma mensagem no display
  delay(1000);  // Aguarda por 1 segundo

  lcd.clear();  // Limpa o conteúdo do display
  lcd.setCursor(2, 0);  // Define a posição do cursor (linha 2, coluna 0)
  lcd.print("Sistema OK!");  // Escreve outra mensagem no display
  delay(1000);  // Aguarda por 1 segundo

  lcd.clear();  // Limpa o conteúdo do display
}

void loop() {
  digitalWrite(led, HIGH);  // Liga o LED (pino 10)
  
  lcd.setCursor(0, 0);  // Define a posição do cursor (linha 0, coluna 0)
  lcd.print("LED ligado");  // Escreve uma mensagem indicando que o LED está ligado
  delay(1000);  // Aguarda por 1 segundo

  digitalWrite(led, LOW);  // Desliga o LED (pino 10)
  
  lcd.clear();  // Limpa o conteúdo do display
  lcd.setCursor(0, 1);  // Define a posição do cursor (linha 1, coluna 0)
  lcd.print("LED desligado");  // Escreve uma mensagem indicando que o LED está desligado
  delay(1000);  // Aguarda por 1 segundo

  lcd.clear();  // Limpa o conteúdo do display
}