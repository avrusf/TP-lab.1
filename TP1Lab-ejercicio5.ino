#include <LiquidCrystal.h>
#define p1 12
#define p2 11
const int rs = 8, rw= 7, en = 6, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int contador=0;

void setup() {
pinMode(11, INPUT);
pinMode(12, INPUT);

Serial.begin(9600);
}

void loop() {   
if(digitalRead(p1)){
delay(400);
contador++;
if (contador==100){
  contador=0;
}
}
if(digitalRead(p2)){
delay(400);
contador--;
if (contador<0){
  contador=99;
}
}
lcd.begin(16, 2);
 lcd.setCursor(1, 0);
  lcd.print(contador);
  delay(10);
}