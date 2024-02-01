#include<LiquidCrystal.h>
#include<DHT.h>
LiquidCrystal lcd(8,9,4,5,6,7);
DHT D;
float t,h;
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("ROBOTICS");
  delay(3000);
}

void loop() {
  // put your main code here, to run repeatedly:
  D.read(3);
  t=D.temperature();
  h=D.humidity();
  lcd.println(t);
  lcd.setCursor(0,1);
  lcd.println(h);
  delay(500);
}
