const int PINO_LED = 8;
int luminosidade = 0;

const int PINO_SENSOR_MOVIMENTO = 7;
const int PINO_ANALOGICO = A3;


int movimento = 0;

void setup() {
  pinMode(PINO_LED, OUTPUT);
  pinMode(PINO_SENSOR_MOVIMENTO, INPUT);
  Serial.begin(9600);
}

void loop() {
  movimento = digitalRead(PINO_SENSOR_MOVIMENTO);
  luminosidade = analogRead(PINO_ANALOGICO);
  if (movimento == HIGH and luminosidade < 500) {
      Serial.println("MOVIMENTO NOTURNO");
      digitalWrite(PINO_LED, HIGH);
    
  } else {
    digitalWrite(PINO_LED, LOW);
    Serial.println("SEM MOVIMENTO NOTURNO");
  }
  delay(1000);
}



