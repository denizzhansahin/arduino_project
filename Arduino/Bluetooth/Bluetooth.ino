#include <SoftwareSerial.h>
#define Rx 7
#define Tx 8

SoftwareSerial Bluetooth(Rx,Tx);


char veri= '\0';

void setup()
{
  Serial.begin(9600);
  Bluetooth.begin(9600);
  Serial.println("Kod için hazır");
  pinMode(Rx, INPUT);
  pinMode(Tx, OUTPUT);


  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop()
{

  
  if (Bluetooth.available())
  {
    int Deger = Bluetooth.read();
    Serial.print("Bluetooth'tan gelen veri: ");
    Serial.println((char)Deger);
    //Serial.println(Deger);
    veri =((char)Deger);
    //Serial.println(veri);


  }

  if (Serial.available())
  {
    char Deger = Serial.read();
    Bluetooth.write(Deger);
    
  }


  Serial.println("Eldeki veri : ");
  Serial.print(veri);
  Serial.println("\n\n\n");



  
  if(veri=='k')
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  }
  else if(veri=='y')
  {
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  }
  else if(veri=='h')
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
  }
  else if(veri=='a')
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }


  delay(500);


}