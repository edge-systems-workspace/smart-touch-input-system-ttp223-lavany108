#include <Arduino.h>

const int touchPin = 7;
const int ledPin = 13;

void setup() {
    pinMode(touchPin, INPUT);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int touchState = digitalRead(touchPin);

    if (touchState == HIGH) {
        digitalWrite(ledPin, HIGH);
        Serial.println("Touched!!");
    } else {
        digitalWrite(ledPin, LOW);
        Serial.println("Not touched");
    }

    delay(200);   // small delay to avoid flooding serial monitor
}