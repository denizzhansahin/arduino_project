#define motorIn1 9 //yesil
#define motorIn2 10 //kahverengi

#define motorIn3 11 //kirmizi
#define motorIn4 12 //mor



#include <SoftwareSerial.h>
#define Rx 7
#define Tx 8

SoftwareSerial Bluetooth(Rx,Tx);


char veri= '\0';



void setup() {
  // put your setup code here, to run once:
  pinMode(motorIn1,OUTPUT);
  pinMode(motorIn2,OUTPUT);
  pinMode(motorIn3,OUTPUT);
  pinMode(motorIn4,OUTPUT);
  Serial.begin(9600);

  Bluetooth.begin(9600);
  Serial.println("Kod için hazır");
  pinMode(Rx, INPUT);
  pinMode(Tx, OUTPUT);
}

void loop() {

  if (Bluetooth.available())
  {
    int Deger = Bluetooth.read();
    Serial.print("Bluetooth'tan gelen veri: ");
    Serial.println((char)Deger);
    //Serial.println(Deger);
    veri =((char)Deger);
    //Serial.println(veri);


  }
  // put your main code here, to run repeatedly:
if(veri=='w')
  {
    ileri();
  }
  else if(veri=='s')
  {
    geri();
  }
  else if(veri=='a')
  {
    sol();
  }
  else if(veri=='d')
  {
    sag();
  }
    else if(veri=='z')
  {
    dur();
  }

}



void geri()
{
  digitalWrite(motorIn1,LOW);
  digitalWrite(motorIn2,HIGH);
  
  digitalWrite(motorIn3,LOW);
  digitalWrite(motorIn4,HIGH);
 
}



void ileri()
{
  digitalWrite(motorIn1,HIGH);
  digitalWrite(motorIn2,LOW);

  digitalWrite(motorIn3,HIGH);
  digitalWrite(motorIn4,LOW);
  
}





void sol()
{
  digitalWrite(motorIn1,LOW);
  digitalWrite(motorIn2,HIGH);
  
  digitalWrite(motorIn3,HIGH);
  digitalWrite(motorIn4,LOW);
  
}


void sag()
{
  digitalWrite(motorIn1,HIGH);
  digitalWrite(motorIn2,LOW);
  
  digitalWrite(motorIn3,LOW);
  digitalWrite(motorIn4,HIGH);
}


void dur()
{
  digitalWrite(motorIn1,LOW);
  digitalWrite(motorIn2,LOW);
  
  digitalWrite(motorIn3,LOW);
  digitalWrite(motorIn4,LOW);
}