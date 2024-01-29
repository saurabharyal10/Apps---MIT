void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,0);
  digitalWrite(9,1);
  digitalWrite(10,0);
  delay(1000);
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(10,0);
  delay(1000);
  digitalWrite(8,0);
  digitalWrite(9,1);
  digitalWrite(10,1);
  delay(1000);
  digitalWrite(8,1);
  digitalWrite(9,1);
  digitalWrite(10,0);
  delay(1000);
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(10,1);
  delay(1000);
}
