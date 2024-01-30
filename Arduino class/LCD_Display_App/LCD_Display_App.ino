#include<SoftwareSerial.h>
#include<LiquidCrystal.h>
char a;
SoftwareSerial s(3,2);
LiquidCrystal lcd(8,9,4,5,6,7);
String data=" ";
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  s.begin(9600);
  lcd.setCursor(0,0);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  while(s.available()>0)
  {
    a= s.read();
    data +=a;
  }
  lcd.print(data);
  delay(2000);
  lcd.clear();
}
