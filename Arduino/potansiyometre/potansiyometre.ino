const int analogGiris = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(analogGiris,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int deger = analogRead(analogGiris);
  Serial.println("\n\ndeger:");
  Serial.println(deger);
  delay(1000);
}
