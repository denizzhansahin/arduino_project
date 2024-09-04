int ledPin=9;
int sensorPin=8;
boolean led_durum=false;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(sensorPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor_durum=digitalRead(sensorPin);
  if(sensor_durum==0){
    if(!led_durum)
    {
      digitalWrite(ledPin,HIGH);
      led_durum=true;
    }
    else if(led_durum){
      digitalWrite(ledPin,LOW);
      led_durum=false;
    }
  }
}
