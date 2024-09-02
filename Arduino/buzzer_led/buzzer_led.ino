const int buzzerPin = 11;
const int ledPin = 9;
const int potPin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin,OUTPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(potPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int deger = analogRead(potPin);
  digitalWrite(buzzerPin,HIGH);
  digitalWrite(ledPin,HIGH);
  delay(deger);
  digitalWrite(buzzerPin,LOW);
  digitalWrite(ledPin,LOW);
  delay(deger);
}
