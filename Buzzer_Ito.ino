int buzzer = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  tone(3, 40, 2000);
  delay(500);
  tone(3, 100, 1000);
  delay(500);
  tone(3, 2000, 2000);
  delay(500);

}
