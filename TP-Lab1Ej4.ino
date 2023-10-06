#include <LiquidCrystal.h>

const int rs = 8, en = 6, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(1, 0);
  lcd.print("INGENIERIA");
  lcd.setCursor(2, 1);
  lcd.print("ELECTRONICA!");
}

void loop() {
  lcd.noCursor();
  delay(10);
  lcd.cursor();
  delay(10);
}

