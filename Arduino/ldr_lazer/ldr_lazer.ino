void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);

}

void loop() {
  int deger=analogRead(A0);
  Serial.println(deger);
  digitalWrite(7,HIGH);
  // put your main code here, to run repeatedly:
  if(deger<1000)
  {
  Serial.println("Biri var");
  delay(1000);
  }
  else
  {
  Serial.println("Kimse yok");
  delay(1000);
  }

}
