#include<SoftwareSerial.h>
SoftwareSerial.myserial(11,12);   //RX - 11TX - 12

int a=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:30-500,90-1500:
 
  while(Serial.available()>0)
  {
   a= Serial.read();
  }
  if (a==0)
  {
    int x=500;
      digitalWrite(4,1);
      delayMicroseconds(x);
      digitalWrite(4,0);
      delayMicroseconds(20000-x);
  }
  if (a==1)
  {
    int x=1000;
      digitalWrite(4,1);
      delayMicroseconds(x);
      digitalWrite(4,0);
      delayMicroseconds(20000-x);
  }
  if (a==2) 
  {
    int x=1500;
      digitalWrite(4,1);
      delayMicroseconds(x);
      digitalWrite(4,0);
      delayMicroseconds(20000-x);
  }
  if (a==3)
  {
    int x=2000;
      digitalWrite(4,1);
      delayMicroseconds(x);
      digitalWrite(4,0);
      delayMicroseconds(20000-x);
  }
  if (a==4)
  {
    int x=2500;
      digitalWrite(4,1);
      delayMicroseconds(x);
      digitalWrite(4,0);
      delayMicroseconds(20000-x);
  }
}
