const int BITS_SEGUNDO = 9600;
const int PINO_ANALOGICO = A0;
const int PINO_LED = 3;

int valorAtualPinoAnalogico = 0;

void setup() {
  Serial.begin(BITS_SEGUNDO);
  pinMode (PINO_LED, OUTPUT);
}

void loop() {
  valorAtualPinoAnalogico = analogRead(PINO_ANALOGICO);
  int brilhoAtualLed = valorAtualPinoAnalogico / 4;
  analogWrite(PINO_LED, brilhoAtualLed);
  Serial.println(brilhoAtualLed);
  delay(1000);
}
