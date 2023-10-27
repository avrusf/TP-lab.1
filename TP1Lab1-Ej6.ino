#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#define sensor A0
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7);
float temp=0, resultado=0;

void setup() {
//lcd.setBacklightPin(3, POSITIVE);
//lcd.setBacklight(HIGH);  
pinMode(sensor, INPUT);
Serial.begin(9600);
}

void loop() {
temp = analogRead(sensor);
resultado = (temp * 100) / 255;
Serial.println(resultado);
lcd.begin(16, 2);
lcd.setCursor(1, 0);
lcd.print(resultado);
lcd.setCursor(7, 0);
lcd.print(" C");
delay(1000);
}