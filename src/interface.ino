#include <Encoder.h> 

// Define encoder pins
#define ENC_A 2
#define ENC_B 3

// Define push button
#define BUTTON_PIN 4

// Initialize encoder object
Encoder encoder(ENC_A, ENC_B);

int currentMenu = 0;
int numMenus = 5;

void setup() {
    pinMode(BUTTON_PIN, INPUT_PULLUP);

    // Additional setup
}

void loop() {
    int buttonState = digitalRead(BUTTON_PIN);

    if (buttonState == LOW) {
        currentMenu= (currentMenu + 1) % numMenus;
        delay(250);
    }
}