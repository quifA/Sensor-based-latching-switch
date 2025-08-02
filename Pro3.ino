const int pirPin = A0 ;
const int buttonPin = 2;
const int ledPin = 4;

bool systemEnabled = false;
unsigned long lastMotionTime = 0;
const unsigned long delayTime = 10000;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    delay(200);
    systemEnabled = !systemEnabled;
    delay(300);
  }

  if (systemEnabled) {
    int motion = digitalRead(pirPin);

    if (motion == HIGH) {
      digitalWrite(ledPin, HIGH);
      lastMotionTime = millis();
    }

    if (millis() - lastMotionTime > delayTime) {
      digitalWrite(ledPin, LOW);
    }
  } else {
    digitalWrite(ledPin, LOW);
  }
}