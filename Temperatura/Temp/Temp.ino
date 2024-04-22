/*
  Este código lê o valor de um sensor de temperatura conectado ao pino A0 e imprime a temperatura em milivolts no Monitor Serial.

  Conexões:
  - O sensor de temperatura está conectado ao pino A0.

  O código lê o valor do sensor de temperatura, converte-o em milivolts e imprime o resultado no Monitor Serial a cada segundo.

  Autor: [Seu Nome/Autor]
  Data de Criação: [Data de Criação]
*/

// Declarando as variáveis
float sensortemp = A0;   // Pino do sensor de temperatura
float valor = 0;         // Variável para armazenar o valor lido do sensor
float milivolts = 0;     // Variável para armazenar a temperatura em milivolts
float temp = 0;          // Variável para armazenar a temperatura em graus Celsius

void setup() {
  // Configurando o pino do sensor de temperatura como entrada
  pinMode(sensortemp, INPUT);
  
  // Iniciando a comunicação serial
  Serial.begin(9600);
}

void loop() {
  // Lendo o valor do sensor de temperatura
  valor = analogRead(sensortemp);
  
  // Convertendo o valor lido em milivolts
  milivolts = (valor * (500.0 / 1023.0));
  
  // Atribuindo o valor de milivolts à variável de temperatura
  temp = milivolts;
  
  // Imprimindo a temperatura em milivolts no Monitor Serial
  Serial.println(temp);
  
  // Aguardando 1 segundo
  delay(1000);
}
