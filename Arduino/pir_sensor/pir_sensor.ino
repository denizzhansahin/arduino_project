int sensorPin=9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensorPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int deger=digitalRead(sensorPin);
  if(deger==HIGH)
  Serial.println(" etrafımda birileri var ");
  else
  Serial.println(" etrafta kimse yok");
  delay(1000);
}
