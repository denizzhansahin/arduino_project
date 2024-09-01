void setup() {
  pinMode(LED_BUILTIN, OUTPUT);//13. pin //13 yazsan da olur
  //  pinMode(13, OUTPUT);//13. pin //13 yazsan da olur

}

void loop() { 
  digitalWrite(LED_BUILTIN, HIGH); //enerji ver
  delay(5000); //beş saniye bekle
  digitalWrite(LED_BUILTIN, LOW); //kapat
  delay(100); //bekle
}
