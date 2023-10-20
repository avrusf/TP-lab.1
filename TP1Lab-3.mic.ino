#define mic 9     // D0 de modulo a pin 9
#define led 10    // Anodo del led al pin 10
bool valor;
int estado;
void setup(){
  pinMode(mic, INPUT);      // pin 9 como entrada
  pinMode(led, OUTPUT);     // pin 10 como salida
}




void loop(){
    valor = digitalRead(mic);   // lee el valor del mic
  if (valor == HIGH){     // si esta prendido
    estado = !estado;    // almacena estado del led (encendido o apagado)
    digitalWrite(led, estado);   // escribe en LED el valor opuesto al que tenia
    delay(500);       // demora de medio seg. para evitar pulsos repetidos
  }
  
}
