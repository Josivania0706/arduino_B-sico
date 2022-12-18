const int BOTAO_PUSH = 2;
const int TEMPO_ESPERA = 2000;

void setup() {
  Serial.begin(9600);
  pinMode(BOTAO_PUSH, INPUT);
}

void loop() {
  int estadoAtual = digitalRead(BOTAO_PUSH);
  Serial.println(estadoAtual);
  delay(TEMPO_ESPERA);
}
