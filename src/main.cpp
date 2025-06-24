#include <Arduino.h>


const int buttonPin = 15; // Beispiel-Pin für den Taster
const int relayPins[8] = {32, 33, 25, 26, 27, 14, 12, 13};  // Beispiel-Pins, anpassen je nach Modul
bool relayState[8] = {true, true, true, true, true, true, true, true};
bool lastButtonState = 1;

void setup() {
    Serial.begin(115200);

    pinMode(buttonPin, INPUT_PULLUP);
    
    for (int i = 0; i < 8; i++) {
        pinMode(relayPins[i], OUTPUT);
        digitalWrite(relayPins[i], relayState[i]);
    }
}

void loop() {
    bool buttonState = digitalRead(buttonPin);

    if (buttonState != lastButtonState && buttonState == 0) {
        for (int i = 0; i < 7; i++) {
            relayState[i] = !relayState[i];
            digitalWrite(relayPins[i], relayState[i]);
        }
        digitalWrite(relayPins[7], 1);
        relayState[7] = true;
        // delay random time between 500 and 5000 ms seed millis
        delay(random(500, 5000));
        digitalWrite(relayPins[7], 0);
        relayState[7] = false;         
    }

    lastButtonState = buttonState;
}