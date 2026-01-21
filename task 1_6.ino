int ledPin = 9;
int buttonPin = 2;

int level = 0;   

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    level++;
    if (level > 2) level = 0;

    if (level == 0) analogWrite(ledPin, 50);   
    if (level == 1) analogWrite(ledPin, 150);  
    if (level == 2) analogWrite(ledPin, 255);  

    delay(300);  
  }
}
