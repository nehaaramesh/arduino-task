#define IR_PIN 2
#define LED_PIN 9
#define RESET_PIN 4

bool alarmTriggered = false;
unsigned long lastBlink = 0;
bool ledState = false;

void setup() {
  pinMode(IR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(RESET_PIN, INPUT_PULLUP);
}

void loop() {

  
  if (digitalRead(IR_PIN) == LOW) {
    alarmTriggered = true;
  }

  // Reset button pressed
  if (digitalRead(RESET_PIN) == LOW) {
    alarmTriggered = false;
    digitalWrite(LED_PIN, LOW);
  }

  
  if (alarmTriggered) {
    if (millis() - lastBlink > 300) {
      lastBlink = millis();
      ledState = !ledState;
      digitalWrite(LED_PIN, ledState);
    }
  }
}
