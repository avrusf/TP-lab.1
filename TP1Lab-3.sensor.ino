#define LDR A0
#define LED 10


int EstadoLDR;

void setup() {
  pinMode (LDR, INPUT);
  pinMode (LED, OUTPUT);
  
  Serial.begin(9600);
}


void loop() {
  EstadoLDR = analogRead(LDR);
  Serial.println(EstadoLDR);
  if(EstadoLDR<500){
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
  delay (200);
}
