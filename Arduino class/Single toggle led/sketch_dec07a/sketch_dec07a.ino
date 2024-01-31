void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(6,1);
  digitalWrite(7,0);
  digitalWrite(8,0);
  delay(500);
   digitalWrite(6,0);
  digitalWrite(7,1);
  digitalWrite(8,0);
  delay(500);
   digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,1);
  delay(500);
   digitalWrite(6,1);
  digitalWrite(7,1);
  digitalWrite(8,0);
  delay(500);
   digitalWrite(6,0);
  digitalWrite(7,1);
  digitalWrite(8,1);
  delay(500);
  
}
