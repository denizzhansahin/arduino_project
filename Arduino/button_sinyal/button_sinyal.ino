const int ledPin = 9;
const int buttonPin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int deger = digitalRead(buttonPin);
  if(deger==HIGH)
  digitalWrite(ledPin,HIGH);
  else
  digitalWrite(ledPin,LOW);

}
