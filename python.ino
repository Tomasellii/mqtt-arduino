void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char comando = Serial.read();

    if (comando == '1') {
      digitalWrite(13, HIGH);
      Serial.println("LED LIGADO");
    }

    if (comando == '0') {
      digitalWrite(13, LOW);
      Serial.println("LED DESLIGADO");
    }
  }
}