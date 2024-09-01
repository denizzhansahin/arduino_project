
const int aracKirmizi = 13;
const int aracSari = 12;
const int aracYesil = 11;

const int yayaKirmizi = 10;

const int yayaYesil = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(aracKirmizi, OUTPUT);
  pinMode(aracSari, OUTPUT);
  pinMode(aracYesil, OUTPUT);

  pinMode(yayaKirmizi, OUTPUT);

  pinMode(yayaYesil, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(aracKirmizi, HIGH);
  digitalWrite(aracSari, LOW);
  digitalWrite(aracYesil, LOW);
  digitalWrite(yayaKirmizi, LOW);
  digitalWrite(yayaYesil, HIGH);

  delay(1000);


  digitalWrite(aracKirmizi, LOW);
  digitalWrite(aracSari, HIGH);
  digitalWrite(aracYesil, LOW);
  digitalWrite(yayaKirmizi, HIGH);
  digitalWrite(yayaYesil, LOW);

  delay(1000);


  digitalWrite(aracKirmizi, LOW);
  digitalWrite(aracSari, LOW);
  digitalWrite(aracYesil, HIGH);
  digitalWrite(yayaKirmizi, HIGH);
  digitalWrite(yayaYesil, LOW);

  delay(1000);

  //acil geçiş
  delay(1000);
  delay(1000);

  digitalWrite(aracKirmizi, HIGH);
  digitalWrite(aracSari, LOW);
  digitalWrite(aracYesil, LOW);
  digitalWrite(yayaKirmizi, HIGH);
  digitalWrite(yayaYesil, LOW);
delay(1000);
  digitalWrite(aracKirmizi, LOW);
  digitalWrite(yayaKirmizi, LOW);
  digitalWrite(aracKirmizi, HIGH);
  digitalWrite(aracSari, LOW);
  digitalWrite(aracYesil, LOW);
  digitalWrite(yayaKirmizi, HIGH);
  digitalWrite(yayaYesil, LOW);


  delay(1000);
  delay(1000);
  delay(1000);
  delay(1000);
}
