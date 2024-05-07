// Declaração das variáveis
float sensorluz = A0;  // Porta analógica à qual o sensor de luz está conectado
int led1 = 6;            // Porta digital à qual o LED está conectado
int led2 = 2;
int led3 = 3; 
int led4 = 4; 
int led5 = 5; 
float luminosidade = 0; // Variável para armazenar o valor da luminosidade

void setup() {
  // Configuração inicial
  pinMode(sensorluz, INPUT); // Define a porta do sensor de luz como entrada
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);      // Define a porta do LED como saída
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  
  // Inicialização da comunicação serial
  Serial.begin(9600); // Inicia a comunicação serial com uma taxa de 9600 bauds
}

void loop() {
  // Lendo o valor do sensor de luz
  luminosidade = analogRead(sensorluz); // Lê o valor do sensor de luz e armazena na variável luminosidade
  
  // Exibe a luminosidade lida no monitor serial
  Serial.print("Luminosidade: ");
  Serial.println(luminosidade);

  // Aguarda meio segundo
  delay(500);

  // Verifica se a luminosidade é menor ou igual a 500
  
  if (luminosidade <= 350) {
    digitalWrite(led1, 1);

  } else {
    digitalWrite(led1, 0);
  }

  if ((luminosidade < 300) && (luminosidade > 270)) {
    
  }


}