#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN,RST_PIN);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  Serial.println("kartı yaklaştır");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(!mfrc522.PICC_IsNewCardPresent())
  {
    return;
  }

  if(!mfrc522.PICC_ReadCardSerial())
  {
    return;
  }

  Serial.print("kart numarası : ");
  String bilgi="";
  byte kod;
  for (byte i=0;i<mfrc522.uid.size;i++)
  {
    Serial.print(mfrc522.uid.uidByte[i]<0x10 ? "0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    bilgi.concat(String(mfrc522.uid.uidByte[i]<0x10 ? "0" : " "));
    bilgi.concat(String(mfrc522.uid.uidByte[i], HEX));
  }

  Serial.println();
  Serial.print("Mesaj : ");

  bilgi.toUpperCase();

  if(bilgi.substring(1)=="AD 20 54 C5")
  {
    Serial.println("Giriş Kabul Edildi");
    Serial.println();
    delay(3000);
  }
  else {
    Serial.println("Giriş Reddedildi");
    delay(3000);
  }
}
