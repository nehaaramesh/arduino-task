int ledPin = 13;
int buttonPin = 3;
int irPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(irPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH && digitalRead(irPin) == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
