/**
 * @file external_blinker.c
 * @brief External Blinker for STM32F030R8 EVAL Board.
 * Find video sample here: https://youtube.com/shorts/WqoUpb1Ku5g 
 *
 */

#include <Arduino.h>

// This is using the D2 slot on the Board.
// To make the LED work, we need to ensure that there is a resistor attached.
// LED Used: Green which is typically around 2.0 to 3.3 volts.
// Resistor 330-ohm to limit the current flowing through to LED.
// Resistor is connected to ground to complete the flow.
const int ledPin = D2;

void setup()
{
	pinMode(ledPin, OUTPUT);
}

void loop()
{
	digitalWrite(ledPin, HIGH);
	delay(1000);
	digitalWrite(ledPin, LOW);
	delay(1000);
}