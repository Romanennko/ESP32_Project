#include <Arduino.h>

int ledPins[] = {2, 4, 5, 13, 12};
int numLeds = 5;

void setup() {
    for (int i = 0; i < numLeds; i++) {
      pinMode(ledPins[i], OUTPUT);
    }
}

void loop() {
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], HIGH);
      delay(300);
      digitalWrite(ledPins[i], LOW);
    }
}
