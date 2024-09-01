void setup() {
  pinMode(LED_BUILTIN, OUTPUT);//13. pin
}


void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  
  digitalWrite(LED_BUILTIN, HIGH); 
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW); 
  delay(1000);
}

