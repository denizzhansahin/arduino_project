#include <LiquidCrystal.h>                              //LCD kütüphanemizi başlatıyoruz.
int trigPin = 7;                                        //Ultrasonik sensör trig pini değişkeni
int echoPin = 6;                                        //Ultrasonik sensör echo pini değişkeni
int sure;                                               //Ses dalgasının gidip gelme süresi değişkeni
int uzaklik;                                            //Ölçülen uzaklık değeri değişkeni
int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;   //LCD'nin pin değişkenlerini tanımlıyoruz.
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);              //LCD'nin pin bağlantılarını ayarlıyoruz.

void setup() {
  pinMode(trigPin, OUTPUT);                             //trig pinini OUTPUT olarak ayarlıyoruz.
  pinMode(echoPin,INPUT);                               //echo pinini INPUT olarak ayarlıyoruz.
  lcd.begin(16, 2);                                     //LCD ekranımızın en-boy oranını ayarlıyoruz.                               
}
void loop() {
  // put your main code here, to run repeatedly:
  int analogDeger=analogRead(A0);
  int deger=map(analogDeger,0,1023,0,4);

  switch(deger)
  {
    case 0:
      lcd.clear();                                          //LCD'deki eski yazılar temizlenir.
      lcd.setCursor(0, 0);                                  //LCD'nin 1. satır 1. sütunundan yazmaya başlıyoruz.      
      lcd.print("Uzaklik:");                                
      lcd.setCursor(0, 1);                                  //LCD'nin 2. satır 1. sütunundan yazmaya başlıyoruz.
      lcd.print(uzaklik);                                   //Uzaklık değerini LCD'ye yazdırıyoruz.
      lcd.print("cm");
      delay(1000);
      break;

    case 1:
      lcd.clear();                                          //LCD'deki eski yazılar temizlenir.
      lcd.setCursor(0, 0);                                  //LCD'nin 1. satır 1. sütunundan yazmaya başlıyoruz.      
      lcd.print("Merhaba:");                                
      lcd.setCursor(0, 1);                                  //LCD'nin 2. satır 1. sütunundan yazmaya başlıyoruz.
      lcd.print(uzaklik);                                   //Uzaklık değerini LCD'ye yazdırıyoruz.
      lcd.print("cm");
      delay(1000);
      break;

    case 2:
      lcd.clear();                                          //LCD'deki eski yazılar temizlenir.
      lcd.setCursor(0, 0);                                  //LCD'nin 1. satır 1. sütunundan yazmaya başlıyoruz.      
      lcd.print("Nasılsın:");                                
      lcd.setCursor(0, 1);                                  //LCD'nin 2. satır 1. sütunundan yazmaya başlıyoruz.
      lcd.print(uzaklik);                                   //Uzaklık değerini LCD'ye yazdırıyoruz.
      lcd.print("cm");
      delay(1000);
      break;

    case 3:
      lcd.clear();                                          //LCD'deki eski yazılar temizlenir.
      lcd.setCursor(0, 0);                                  //LCD'nin 1. satır 1. sütunundan yazmaya başlıyoruz.      
      lcd.print("Nerdesin:");                                
      lcd.setCursor(0, 1);                                  //LCD'nin 2. satır 1. sütunundan yazmaya başlıyoruz.
      lcd.print(uzaklik);                                   //Uzaklık değerini LCD'ye yazdırıyoruz.
      lcd.print("cm");
      delay(1000);
      break;

    default:
      lcd.clear();

  }
}
