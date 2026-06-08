#define TRIG 9
#define ECHO 10

#define LED_VERDE 3
#define LED_VERMELHO 4
#define BUZZER 5

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  Serial.begin(9600);
}

long medirDistancia() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long duracao = pulseIn(ECHO, HIGH);
  long distancia = duracao * 0.034 / 2;

  return distancia;
}

void loop() {
  long dist = medirDistancia();

  Serial.print("Distancia detectada: ");
  Serial.print(dist);
  Serial.println(" cm");

  if (dist > 30) {
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_VERMELHO, LOW);
    noTone(BUZZER);
  }

  else if (dist > 15 && dist <= 30) {
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_VERMELHO, LOW);
    tone(BUZZER, 500);
    delay(300);
    noTone(BUZZER);
  }

  else {
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_VERMELHO, HIGH);
    tone(BUZZER, 1000);
  }

  delay(500);
}
