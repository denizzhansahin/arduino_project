int sensorPin=A0;
int sensorDeger=0;
float gerilim=0;
float sicaklik=0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorDeger=analogRead(sensorPin);
  gerilim=(sensorDeger/1024.0)*5000.0;
  sicaklik=gerilim/100.0; //10.0 olarak da ayarla
  Serial.println(sicaklik);
  delay(2000);
}
