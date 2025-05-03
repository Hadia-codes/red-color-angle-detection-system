#include <Servo.h>

Servo myServo;
int ledPins[] = {6, 7, 8};

void setup() {
  myServo.attach(9);
  for (int i = 0; i < 3; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char input = Serial.read();
    int fingers = input - '0';blob:https://web.whatsapp.com/2abd1062-9c83-4316-84d5-2747e2fbf994

    for (int i = 0; i < 3; i++) {
      digitalWrite(ledPins[i], i < fingers ? HIGH : LOW);
    }

    int angle = fingers * 45;
    if (angle > 180) angle = 180;
    myServo.write(angle);
  }
}
