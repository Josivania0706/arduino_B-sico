/*
  PNO CONECTADOS NA PLACA
*/
const int PINO_13 = 13;

// Intervalo de atualização  DE 0,5 S 
int intervalo = 500;

void setup() {
  pinMode(PINO_13, OUTPUT);
}

void loop() {
  digitalWrite(PINO_13, HIGH);
  delay(intervalo);
  digitalWrite(PINO_13, LOW);
  delay(intervalo);
}
