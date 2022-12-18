const int PINO_ANALOGICO = A0;

int luminosidade = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  luminosidade = analogRead(PINO_ANALOGICO);
  
  if (luminosidade > 300) {
    Serial.println("AMBIENTE CLARO");    
  } else {
    Serial.println("AMBIENTE ESCURO");  
  }
  delay(500);
}
