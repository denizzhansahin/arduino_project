int reedPin=7;
void setup() {
  // put your setup code here, to run once:
  pinMode(reedPin,INPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(reedPin));
   Serial.println(analogRead(A0));
}
