#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author Riddhima Rajput
 * @date 2026-02-22
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

int redPin = 9;

int greenPin = 10;

int bluePin = 11;

void setup() {

    Serial.begin(9600);

    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);

    Serial.println("RGB LED Control System Initialized");
}

void loop() {

    // -------- DIGITAL MODE --------

    digitalWrite(redPin, HIGH);
    delay(1000);

    digitalWrite(redPin, LOW);
    delay(1000);

    // -------- ANALOG (PWM) MODE --------

    analogWrite(redPin, 255);

    // TODO 10:
    // Set GREEN brightness using analogWrite()

    // TODO 11:
    // Set BLUE brightness using analogWrite()

    // TODO 12:
    // Add delay for visible transition
}
