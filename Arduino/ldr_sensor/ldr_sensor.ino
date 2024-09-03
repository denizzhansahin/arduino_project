void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int LDRDeger=analogRead(A0);
  Serial.println("Işık şiddeti:");
  Serial.println(LDRDeger);
}
