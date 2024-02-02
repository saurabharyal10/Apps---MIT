void setup() {
  // put your setup code here, to run once:

  pinMode(4,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:30-500,90-1500:
int x=833;
    digitalWrite(4,1);
    delayMicroseconds(x);
    digitalWrite(4,0);
    delayMicroseconds(20000-x);
}
