int ledPin = 13;
int buttonPin = 2;

int ledState = LOW;
int lastButtonState = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH && lastButtonState == LOW) {
    ledState = !ledState;              
    digitalWrite(ledPin, ledState);
    delay(200);                        
  }

  lastButtonState = buttonState;
}
