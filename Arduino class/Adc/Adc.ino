int a=0;
void setup(){
  Serial.begin(9600);
  
}
void loop(){
  a=analogRead(A0);
  Serial.println(a);
  delay(200);
}

