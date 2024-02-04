#include<SoftwareSerial.h>
SoftwareSerial mySerial(11,12);   //RX - 11TX - 12

int a=0;
void setup() {
  // put your setup code here, to run once:
  mySerial.begin(9600);
  pinMode(13,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:30-500,90-1500:
 
  while(mySerial.available()>0)
  {
   a= mySerial.read();
  }
  if (a==0)
  {
   
      digitalWrite(13,1);
      delay(100);
     
  }
  if (a==1)
  {
    
      digitalWrite(13,1);
      delayMicroseconds(100);
      digitalWrite(13,0);
      delayMicroseconds(100);
  }
  if (a==2) 
  {

      digitalWrite(13,1);
      delayMicroseconds(100);
      digitalWrite(13,0);
      delayMicroseconds(100);
  }
  if (a==3)
  {
  
      digitalWrite(13,1);
      delayMicroseconds(100);
      digitalWrite(13,0);
      delayMicroseconds(100);
  }
  if (a==4)
  {
    
      digitalWrite(13,1);
      delayMicroseconds(100);
      digitalWrite(13,0);
      delayMicroseconds(100);
  }
}
