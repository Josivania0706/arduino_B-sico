/*
  PNO CONECTADOS NA PLACA
*/


// Intervalo de atualização  DE 0,5 S 
int intervalo = 500;
const int PINO_9 = 9;

void setup() {
  pinMode(PINO_9, OUTPUT);//saida de dados, a propria luz
}

void loop() {
  digitalWrite(PINO_9, HIGH);
  delay(intervalo);
  digitalWrite(PINO_9, LOW);
  delay(intervalo);
}