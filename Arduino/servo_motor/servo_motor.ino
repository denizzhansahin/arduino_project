int servo1=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(servo1,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<180; i+=1)
  {
    int deger = map(i,0,180,0,255);
    analogWrite(servo1,deger);
    //analogWrite(servo1,i);
    delay(20);
  }

  for(int i=180; i>0; i-=1)
  {
    int deger = map(i,0,180,0,255);
    analogWrite(servo1,deger);
    //analogWrite(servo1,i);
    delay(20);
  }
  //analogWrite(servo1,180);

}
