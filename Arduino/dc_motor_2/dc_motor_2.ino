int in1 = 8;
int in2 = 7;
int enbA = 9;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enbA, OUTPUT);  // Bu satır aktif hale getirildi

  digitalWrite(10, HIGH);  // Sabit dijital sinyal, sadece test için
}

void loop() {
  // Motoru ileri yönlü çalıştır
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  //analogWrite(enbA, 128);  // Hız %50
  delay(2000);  // 2 saniye çalıştır

  // Motoru durdur
  analogWrite(enbA, 0);  // Motoru durdur
  delay(1000);  // 1 saniye bekle

  // Motoru geri yönlü çalıştır
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  //analogWrite(enbA, 200);  // Hız %78
  delay(2000);  // 2 saniye çalıştır

  // Motoru durdur
  //analogWrite(enbA, 0);
  delay(1000);  // 1 saniye bekle


    for (int i = 0; i <= 255; i++) {
    analogWrite(enbA, i);
    delay(10);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(enbA, i);
    delay(10);
  }
}
