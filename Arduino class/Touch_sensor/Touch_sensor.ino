void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(9,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(9)==HIGH)
    digitalWrite(13,HIGH);
  else
    digitalWrite(13,LOW);

}
