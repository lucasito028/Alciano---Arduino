// Declarando as variáveis
int buzzer = 7;  // Define o pino 7 como saída para o buzzer
int trig = 2;    // Define o pino 2 como saída para o trigger do sensor ultrassônico
int echo = 3;    // Define o pino 3 como entrada para o echo do sensor ultrassônico
float distancia; // Variável para armazenar a distância medida pelo sensor

void setup() {
  // Configurando os pinos como entrada ou saída
  pinMode(buzzer, OUTPUT);  // Configura o pino do buzzer como saída
  pinMode(trig, OUTPUT);    // Configura o pino do trigger como saída
  pinMode(echo, INPUT);     // Configura o pino do echo como entrada

  // Iniciando a comunicação serial com velocidade de 9600 bps
  Serial.begin(9600);
}

void loop() {
  // Emitindo um pulso para iniciar a leitura do sensor ultrassônico
  digitalWrite(trig, LOW);   // Coloca o pino trig em nível baixo
  delayMicroseconds(5);      // Aguarda um curto período de tempo
  digitalWrite(trig, HIGH);  // Coloca o pino trig em nível alto por um curto período de tempo
  delayMicroseconds(10);     // Aguarda um curto período de tempo
  digitalWrite(trig, LOW);   // Retorna o pino trig para nível baixo

  // Medindo a duração do pulso echo e convertendo para distância em centímetros
  distancia = pulseIn(echo, HIGH);  // Mede a duração do pulso no pino echo (em microssegundos)
  distancia = distancia / 58;       // Converte o tempo em microssegundos para centímetros (fórmula para sensor HC-SR04)

  // Enviando a distância medida para a porta serial (monitor serial)
  Serial.println(distancia);

  // Controlando o buzzer com base na distância medida
  if ((distancia > 5) && (distancia < 15)) {
    digitalWrite(buzzer, HIGH);  // Liga o buzzer se a distância estiver entre 5 e 15 cm
  } else if ((distancia >= 16) && (distancia < 25)) {
    // Sequência de sinais sonoros se a distância estiver entre 16 e 25 cm
    digitalWrite(buzzer, HIGH);  // Liga o buzzer
    delay(1000);                 // Aguarda 1 segundo
    digitalWrite(buzzer, LOW);   // Desliga o buzzer
    delay(1000);                 // Aguarda 1 segundo
    digitalWrite(buzzer, HIGH);  // Liga o buzzer
    delay(1000);                 // Aguarda 1 segundo
    digitalWrite(buzzer, LOW);   // Desliga o buzzer
    delay(1000);                 // Aguarda 1 segundo
  } else {
    digitalWrite(buzzer, LOW);   // Desliga o buzzer se a distância não estiver dentro dos valores especificados
  }
}
