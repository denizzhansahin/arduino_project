void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);//13. pin //13 yazsan da olur
  //  pinMode(13, OUTPUT);//13. pin //13 yazsan da olur

}

void loop() { 
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(12, LOW); //enerji ver
  delay(1000); //bir saniye bekle
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(12, HIGH); //kapat
  delay(1000); //bekle
}
