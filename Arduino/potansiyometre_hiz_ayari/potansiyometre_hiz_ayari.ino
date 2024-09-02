const int analogGiris = A0;
const int ledPin=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(analogGiris,INPUT);
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int deger = analogRead(analogGiris);
  int ledDeger=map(deger,0,1023,0,2046);
  digitalWrite(ledPin,HIGH);
  delay(ledDeger);
  digitalWrite(ledPin,LOW);
  delay(ledDeger);
  analogWrite(ledPin,ledDeger);
}
