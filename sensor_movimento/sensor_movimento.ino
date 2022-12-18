const int PINO_LED = 8;
const int PINO_SENSOR_MOVIMENTO = 2;

int movimento = 0;

void setup() {
  pinMode(PINO_LED, OUTPUT);
  pinMode(PINO_SENSOR_MOVIMENTO, INPUT);
  Serial.begin(9600);
}

void loop() {
  movimento = digitalRead(PINO_SENSOR_MOVIMENTO);

  if (movimento == HIGH) {
    Serial.println("MOVIMENTO");
    digitalWrite(PINO_LED, HIGH);
  } else {
    digitalWrite(PINO_LED, LOW);
    Serial.println("SEM MOVIMENTO");
  }
  delay(500);
}
