#include<LiquidCrystal.h>
  LiquidCrystal lcd(8,9,4,5,6,7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(1,1);

}

void loop() {
  // put your main code here, to run repeatedly:
    lcd.print("Hello Player");
}
