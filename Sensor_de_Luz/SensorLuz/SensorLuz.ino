// Declaração das variáveis
float sensorluz = A0;  // Porta analógica à qual o sensor de luz está conectado
int led = 5;            // Porta digital à qual o LED está conectado
float luminosidade = 0; // Variável para armazenar o valor da luminosidade

void setup() {
  // Configuração inicial
  pinMode(sensorluz, INPUT); // Define a porta do sensor de luz como entrada
  pinMode(led, OUTPUT);       // Define a porta do LED como saída
  
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
  if (luminosidade <= 500) {
    digitalWrite(led, HIGH); // Acende o LED se a luminosidade for menor ou igual a 500
  } else {
    digitalWrite(led, LOW);  // Desliga o LED se a luminosidade for maior que 500
  }
}

}
