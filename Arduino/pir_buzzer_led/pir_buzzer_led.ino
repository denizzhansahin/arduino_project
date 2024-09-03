int sensorPin=9;
int pin8=8;
int pin7=7;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensorPin,INPUT);
  pinMode(pin8,OUTPUT);
  pinMode(pin7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int deger=digitalRead(sensorPin);
  if(deger==HIGH)
  {
    Serial.println(" etrafımda birileri var ");
  digitalWrite(pin8,HIGH);
  digitalWrite(pin7,HIGH);
  delay(1000);
  }
  else
  {
    Serial.println(" etrafta kimse yok");
  digitalWrite(pin8,LOW);
  digitalWrite(pin7,LOW);
  }

  delay(1000);
}
