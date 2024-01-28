int x=0,y=0;
void setup(){
  Serial.begin(9600);
  
}
void loop(){
  x=analogRead(A0);
  y=analogRead(A1);
  
  Serial.print("x axis: ");
  Serial.println(x);
  Serial.print("y axis: ");
  Serial.println(y);
  delay(500);
}

