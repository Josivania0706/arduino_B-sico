// Define constantes
const int PINO_LED = 8;
const int PINO_BOTAO = 9;

void setup() {
  pinMode(PINO_LED, OUTPUT);
  pinMode(PINO_BOTAO, INPUT);
}

void loop() {
  if (digitalRead(PINO_BOTAO) == HIGH) {
    digitalWrite(PINO_LED, HIGH);
  }
}
