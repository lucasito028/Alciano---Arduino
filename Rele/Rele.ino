int rele = 7;

void setup(){
  Serial.begin(9600);
  pinMode(rele, OUTPUT);
}
void loop(){
  digitalWrite(rele, 1);
  Serial.println ("Light On");
  delay(1000);
  digitalWrite(rele, 0);
  Serial.println ("Light Zero");
  delay(1000);
}