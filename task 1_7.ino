int ledPin = 13;
int irPin = 2;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(irPin, INPUT);
}

void loop() {
  if (digitalRead(irPin) == LOW)
  {   
    digitalWrite(ledPin, HIGH);
  } else 
  {
    digitalWrite(ledPin, LOW);
  }
}
