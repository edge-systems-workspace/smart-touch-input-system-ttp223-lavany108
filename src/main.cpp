/**
 * @file main.cpp
 * @brief Simple Arduino example showing how to read a TTP223 touch sensor and drive an LED.
 *
 * This sketch reads a digital input from a capacitive touch sensor (for example the TTP223)
 * and lights the on-board LED when a touch is detected. It also writes a human-readable
 * status message to the serial monitor for debugging and demonstration purposes.
 *
 * Wiring (typical):
 *  - TTP223 VCC -> 5V (or 3.3V depending on the module)
 *  - TTP223 GND -> GND
 *  - TTP223 OUT -> Arduino digital pin defined by `touchPin` (default: 7)
 *  - LED (optional external) -> Arduino digital pin defined by `ledPin` (default: 13)
 *
 * Notes:
 *  - Many TTP223 modules drive the output HIGH when touched. If you have a module
 *    configured to toggle or with inverted logic, invert the checks in `loop()`.
 *  - The sketch includes a small delay to avoid flooding the serial monitor; adjust
 *    the delay to change responsiveness vs. serial output frequency.
 *
 * @author Lavanya
 * @date 2026-02-28
 * @version 1.0
 * @see https://github.com (project repository)
 */

#include <Arduino.h>

/**
 * @brief Digital pin connected to the TTP223 touch sensor output.
 *
 * Expected to read HIGH when the sensor is touched. Change this value to match your
 * wiring. Use an input with the same voltage domain as your sensor (3.3V/5V).
 */
const int touchPin = 7;

/**
 * @brief Digital pin used to drive an LED.
 *
 * By default this example uses the built-in LED on most Arduino boards (pin 13).
 */
const int ledPin = 13;

/**
 * @brief Perform initial hardware configuration.
 *
 * Sets pin modes for the touch input and LED output and starts the serial
 * port at 9600 baud for logging. This function is called once by the Arduino
 * runtime before `loop()` begins.
 */
void setup() {
    pinMode(touchPin, INPUT);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

/**
 * @brief Main application loop.
 *
 * Reads the digital state of the touch sensor and updates the LED and serial
 * output accordingly. Uses a short delay to reduce serial output rate.
 *
 * Behavior contract:
 *  - Input: Reads digital logical level from `touchPin` (HIGH/LOW).
 *  - Output: Sets `ledPin` HIGH when touched, LOW otherwise; prints a message to Serial.
 *
 * Edge cases:
 *  - If the sensor is noisy, consider adding software debounce or reading multiple
 *    samples and taking the majority value.
 *  - If using a sensor configured to toggle its output, this logic will need to be adapted.
 *
 * @return void
 */
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