int led_esquerda = 8;
int led_meio = 9;
int led_direita = 10;
char led;

void setup() {

  pinMode(led_esquerda, OUTPUT);
  pinMode(led_meio, OUTPUT);
  pinMode(led_direita, OUTPUT);

  Serial.begin(9600); 

}

void loop() {
   if (Serial.available())
    { 
        led = Serial.read();
        
        if (led == 'R')
        digitalWrite(led_esquerda, HIGH); // Acende led vermelho
        
        if (led == 'G')
        digitalWrite(led_meio, HIGH); // Acende led verde
        
        if (led == 'Y')
        digitalWrite(led_direita, HIGH); // Acende led amarelo
        
        if (led == 'A')
        digitalWrite(led_esquerda, LOW); // Apaga led vermelho
        
        if (led == 'S')
        digitalWrite(led_meio, LOW); // Apaga led verde
        
        if (led == 'D')
        digitalWrite(led_direita, LOW); // Apaga led amarelo
    }
}