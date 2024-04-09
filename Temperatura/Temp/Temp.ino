//Declarando Valores
float sensortemp = A0;
float valor = 0;
float milivolts = 0;
float temp = 0;

//Agora o Setup
void setup(){
    pinMode(sensortemp, INPUT);
    Serial.begin(9600);
}

//Cicle
void loop(){

    valor = analogRead(sensortemp);
    milivolts = (valor * (500.0 / 1023.0) );
    temp = milivolts;
    delay(1000);
    Serial.println(temp);

}