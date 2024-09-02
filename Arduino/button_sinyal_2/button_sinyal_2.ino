const int ledPin = 9;
const int buttonPin = 10;
const int buttonPin2 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);
  pinMode(buttonPin2,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int deger = digitalRead(buttonPin);
  int deger2 = digitalRead(buttonPin2);
  if(deger==HIGH)
  digitalWrite(ledPin,HIGH);
  else if (deger2==HIGH)
  digitalWrite(ledPin,LOW);

}
