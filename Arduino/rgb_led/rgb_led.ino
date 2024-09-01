const int sure = 1000;
const int kirmizi = 9;
const int yesil = 10;
const int mavi = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(kirmizi,OUTPUT);
  pinMode(yesil,OUTPUT);
  pinMode(mavi,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(kirmizi,LOW);
  delay(sure);
  digitalWrite(kirmizi,HIGH);
  digitalWrite(yesil,LOW);
  delay(sure);
  digitalWrite(yesil,HIGH);
  digitalWrite(mavi,LOW);
  delay(sure);
}
