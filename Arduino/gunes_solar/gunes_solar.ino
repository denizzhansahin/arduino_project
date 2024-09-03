int deger=0;
float gerilim=0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  deger=analogRead(A0);
  gerilim=(deger/1024.0)*5000;
  Serial.print(gerilim);
  Serial.println("volt");
}
