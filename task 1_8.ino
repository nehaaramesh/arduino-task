int ledPin = 13;
int irPin = 2;

int count = 0;
int lastState = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(irPin, INPUT);
}

void loop() {
  int currentState = digitalRead(irPin);

  if (currentState == LOW && lastState == HIGH) {
    count++;   

    for (int i = 0; i < count; i++) {
      digitalWrite(ledPin, HIGH);
      delay(300);
      digitalWrite(ledPin, LOW);
      delay(300);
    }
  }

  lastState = currentState;
}
