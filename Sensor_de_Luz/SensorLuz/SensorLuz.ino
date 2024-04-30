float sensorluz = A0;  
int led = 5;         
float luminosidade = 0;       

void setup() {
  
  pinMode(sensorluz, INPUT);
  pinMode(led, OUTPUT);
 
  Serial.begin(9600);
}

void loop() {
  // Lendo o valor do sensor de temperatura
  luminosidade = analogRead(sensorluz);

  Serial.print("Luminosidade");
  Serial.println(luminosidade);

  delay(500);

  if((luminosidade <= 500)){
    digitalWrite(led, 1);
  }else{
    digitalWrite(led, 0);
  }
  
}
