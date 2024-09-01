const int sure = 100;
void setup() {
  // put your setup code here, to run once:
  for (int ledPin=8; ledPin<=13; ledPin++)
    {
      pinMode(ledPin,OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int ledPin=8; ledPin<=13; ledPin++)
    {
      digitalWrite(ledPin,HIGH);
      delay(sure);
      digitalWrite(ledPin,LOW);
    }
  for (int ledPin=13; ledPin>=8; ledPin--)
    {
      digitalWrite(ledPin,HIGH);
      delay(sure);
      digitalWrite(ledPin,LOW);
    }
}
