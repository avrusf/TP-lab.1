#include <LCD.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7);

#define arriba_abajo 11
#define enter 12
#define menos_letra 10
#define mas_letra 9

  int contador=65, fila=0, columna=0;

void setup() {
 pinMode(mas_letra, INPUT);
 pinMode(menos_letra, INPUT);
 pinMode(enter, INPUT);
 pinMode(arriba_abajo, INPUT);
 lcd.setBacklightPin(3, POSITIVE);
 lcd.setBacklight(HIGH);
 lcd.begin (16,2);
 lcd.clear ();
 Serial.begin (9600);
}

void loop() {
  if(digitalRead(mas_letra)){
    delay(400);
    contador++;
  } else if(digitalRead(menos_letra)){
    delay(400);
    contador--;
  }
  if(digitalRead(enter)){
    delay(400);
    fila++;
    contador = 65;    
    if(fila==16){
      fila=0;
    }
  }
  if(digitalRead(arriba_abajo)){
    delay(400);
    fila=0;
    contador = 65;
    if(columna==0){
      columna=1;
    }else{
      columna=0;
    }
  }
 lcd.setCursor(fila,columna);
 lcd.print((char)contador);
 Serial.println(contador);
}