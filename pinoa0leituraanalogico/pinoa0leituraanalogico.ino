const int BITS_SEGUNDO = 9600;
const float PINO_5V = 5.0;
const float VALOR_ANALOGICO_MAXIMO = 1023.0;

void setup() {
  Serial.begin(BITS_SEGUNDO);
}

void loop() {
  int valorPino = analogRead(A0);
  float voltagemAtual = valorPino * (PINO_5V / VALOR_ANALOGICO_MAXIMO);
  Serial.println(voltagemAtual);
  delay(1000);
}
