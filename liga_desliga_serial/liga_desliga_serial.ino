// Define constantes
const int PINO_LED = 8;
const int PINO_BOTAO = 9;

byte ultimoEstadoBotao = LOW;
byte estadoLed = LOW;

unsigned long tempoEspera = 50;
unsigned long ultimaAtualizacaoBotao = 0;

void setup() {
  pinMode(PINO_LED, OUTPUT);
  pinMode(PINO_BOTAO, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (millis() - ultimaAtualizacaoBotao > tempoEspera) {
    byte estadoAtualBotao = digitalRead(PINO_BOTAO);
    if (estadoAtualBotao != ultimoEstadoBotao) {
      ultimaAtualizacaoBotao = millis();
      ultimoEstadoBotao = estadoAtualBotao;
      if (estadoAtualBotao == LOW) {
        estadoLed = (estadoLed == HIGH) ? LOW: HIGH;
 		digitalWrite(PINO_LED, estadoLed);
        if (estadoLed == HIGH) {
          Serial.println("LED LIGADO");
        } else {
          Serial.println("LED DESLIGADO");
        }
      }
    }
  }
}
