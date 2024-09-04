int mavi=8;
int yesil=9;
int kirmizi=10;
int sensorPin=A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(mavi,OUTPUT);
  pinMode(yesil,OUTPUT);
  pinMode(kirmizi,OUTPUT);
  pinMode(sensorPin,INPUT);
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  digitalWrite(7,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  int deger=analogRead(sensorPin);
  Serial.println(deger);





  if(deger>750)
  {
    digitalWrite(kirmizi,HIGH);
    digitalWrite(mavi,LOW);
    digitalWrite(yesil,LOW);
  }
  else if(deger>400)
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(mavi,HIGH);
    digitalWrite(yesil,LOW);
  }
    else
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(mavi,LOW);
    digitalWrite(yesil,HIGH);
  }



delay(1000);
}
