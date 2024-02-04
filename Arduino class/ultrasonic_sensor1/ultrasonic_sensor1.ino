long dis,dur;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3,OUTPUT);//trig
  pinMode(4,INPUT); //echo
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

    digitalWrite(3,0);
    delayMicroseconds(200);
    digitalWrite(3,1);
    delayMicroseconds(100);
    digitalWrite(3,0);
    dur=pulseIn(4,HIGH);
    dis=(0.034/2)*dur;
    Serial.println(dis);
    delay(500);
    if(dis<10)
    {
      digitalWrite(13,1);
    }
    else{
      digitalWrite(13,0);
    }
}