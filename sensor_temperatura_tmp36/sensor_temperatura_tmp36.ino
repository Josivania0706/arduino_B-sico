const int PINO_ANALOGICO = A0;
const int BITS_SEGUNDO = 9600;

int temperaturaCelsius = 0;
int valorAnalogico = 0;

void setup() {
  pinMode(PINO_ANALOGICO, INPUT);
  Serial.begin(BITS_SEGUNDO);
}

void loop() {
  valorAnalogico = analogRead(PINO_ANALOGICO);

  /* Sensor TMP-36 (Chip) */
  temperaturaCelsius = map(((valorAnalogico - 20) * 3.04), 0, 1023, -40, 125);

  // Min: -40 C; Max: +125 C
  Serial.println(temperaturaCelsius);
  delay(1000);
}
