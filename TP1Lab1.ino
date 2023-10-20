#define a 8
#define b 7
#define c 6
#define d 5
#define e 4
#define f 3
#define g 2
#define unidad 9
#define decena 10
#define p1 12
#define p2 11
int contador=0, digito_unidad=0, digito_decena=0;




void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
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

digito_decena = contador / 10;
digito_unidad = contador - (digito_decena * 10 );

Serial.println(contador);
Serial.println(digito_decena);
Serial.println(digito_unidad);

digitalWrite(unidad, HIGH);
mostrar(digito_unidad);
delay(10);
apagar();
digitalWrite(unidad, LOW);
delay(10);
 
digitalWrite(decena, HIGH);
mostrar(digito_decena);
delay(10);
apagar();
digitalWrite(decena, LOW);
delay(10);
}


void mostrar(int digito){
  switch(digito){
      case 0:{
        cero();
        break;
      }
      case 1:{
        uno();
        break;
      }
      case 2:{
        dos();
        break;
      }
      case 3:{
        tres();
        break;
      }
      case 4:{
        cuatro();
        break;
      }
      case 5:{
        cinco();
        break;
      }
      case 6:{
        seis();
        break;
      }
      case 7:{
        siete();
        break;
      }
      case 8:{
        ocho();
        break;
      }
      case 9:{
        nueve();
        break;
      }
    }
 
}
void uno(){
digitalWrite(a, LOW);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
}
void dos(){
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, LOW);
digitalWrite(d, HIGH);
digitalWrite(e, HIGH);
digitalWrite(f, LOW);
digitalWrite(g, HIGH);
}
void tres(){
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, HIGH);
}
void cuatro(){
digitalWrite(a, LOW);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
}
void cinco(){
digitalWrite(a, HIGH);
digitalWrite(b, LOW);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(e, LOW);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
}
void seis(){
digitalWrite(a, HIGH);
digitalWrite(b, LOW);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(e, HIGH);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
}
void siete(){
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, HIGH);
}
void ocho(){
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(e, HIGH);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
}
void nueve(){
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
}
void cero(){
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(e, HIGH);
digitalWrite(f, HIGH);
digitalWrite(g, LOW);
}
void apagar(){
digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
}
