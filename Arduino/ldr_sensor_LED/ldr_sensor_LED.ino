const int ledPin = 9;
const int LDRpin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int LDRDeger=analogRead(LDRpin);
  Serial.println("Işık şiddeti:");
  Serial.println(LDRDeger);


  if(LDRDeger<500)
  digitalWrite(ledPin,HIGH);
  else
  digitalWrite(ledPin,LOW);
}
