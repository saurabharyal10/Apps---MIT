long dur,dis;
void setup() {
  Serial.begin(9000);
  pinMode(3,OUTPUT);
  pinMode(4,INPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  digitalWrite(3,0);
  delayMicroseconds(2);
  digitalWrite(3,1);
  delayMicroseconds(10);
  dur=pulseIn(4,HIGH);
  dis=(0.0324/2)*dur;
  Serial.println(dis);

  if(dis<20)
  {
    digitalWrite(8,1);
  }
  else
  {
    digitalWrite(8,0);
    }

}
