int in1=8;
int in2=7;
int enbA=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(enbA,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  delay(1000);
  digitalWrite(in1,LOW);
  delay(1000);


  digitalWrite(in2,HIGH);
  digitalWrite(in1,LOW);
  delay(1000);
  digitalWrite(in2,LOW);
  delay(1000);

}
