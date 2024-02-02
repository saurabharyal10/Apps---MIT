void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,1);
  digitalWrite(7,0);
  delay(5000);
  
  digitalWrite(8,0);
  digitalWrite(7,1);
  digitalWrite(10,0);
  delay(5000);
  
  digitalWrite(8,0);
  digitalWrite(7,0);
  delay(5000);
}
