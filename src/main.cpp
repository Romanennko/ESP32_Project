#include <Arduino.h>

int ledPins[] = {2, 4, 5, 13, 12};
int numLeds = 5;

int buttonPin = 18;
int delayTime = 500;
bool buttonState = false;

void setup() {
    for (int i = 0; i < numLeds; i++) {
      pinMode(ledPins[i], OUTPUT);
    }
    pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
    for (int i = 0; i < numLeds; i++) {
      if (digitalRead(buttonPin) == LOW) {
        delay(50);
        if (!buttonState) {
          delayTime = (delayTime == 500) ? 200 : 500;
          buttonState = true;
        }
      } else {
        buttonState = false;
      }

      digitalWrite(ledPins[i], HIGH);
      delay(delayTime);
      digitalWrite(ledPins[i], LOW);
    }
}
