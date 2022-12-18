/*
  Pisca o LED interno da placa a cada 1s
*/

// Intervalo de atualização 
int intervalo = 1000;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(intervalo);
  digitalWrite(LED_BUILTIN, LOW);
  delay(intervalo);
}