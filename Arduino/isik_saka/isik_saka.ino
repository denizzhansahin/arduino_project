
int pin8=8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(pin8,OUTPUT);
 
}

void loop() {
  int LDRDeger=analogRead(A0);
  Serial.println("Işık şiddeti:");
  Serial.println(LDRDeger);


  // put your main code here, to run repeatedly:
  
  if(LDRDeger>500)
  {
    Serial.println(" etrafımda birileri var ");
  digitalWrite(pin8,HIGH);
 
  delay(1000);
  }
  else
  {
    Serial.println(" etrafta kimse yok");
  digitalWrite(pin8,LOW);
  
  }

  delay(100);
}
