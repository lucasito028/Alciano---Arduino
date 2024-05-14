// Declarando as variáveis
int buzzer = 7;
int trig = 2;
int echo = 3;
float distancia;

void setup() {
  // Configurando o pino do sensor de temperatura como entrada
  pinMode(buzzer, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  // Iniciando a comunicação serial
  Serial.begin(9600);
}

void loop() {
  
  digitalWrite(trig, 0);
  delay(0005);
  digitalWrite(trig, 1);
  delay(0010);
  digitalWrite(trig, 0);

  distancia = pulseIn(echo, 1);
  distancia = distancia / 58;
  Serial.println(distancia);

  if((distancia > 5) && (distancia < 15)){
    digitalWrite(buzzer, 1);
  }else if((distancia >= 16) && (distancia < 25)){
    digitalWrite(buzzer, 1);
    delay (1000);
    digitalWrite(buzzer, 0);
    delay (1000);
    digitalWrite(buzzer, 1);
    delay (1000);
    digitalWrite(buzzer, 0);
    delay (1000);
  }else{
    digitalWrite(buzzer, 0);
  }
}