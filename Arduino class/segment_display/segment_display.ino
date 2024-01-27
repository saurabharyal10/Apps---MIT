void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i=2;i<=9;i++)
  {
    digitalWrite(i,1);
    delay(50);
  }
  for(i=9;i>=2;i--)
  {
    digitalWrite(i,0);
    delay(50);
  }  
}
