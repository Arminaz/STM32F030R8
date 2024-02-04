/**
 * @file builtin_blinker
 * @brief Builtin Blinker for STM32F030R8 EVAL Board.
 * Find video sample here: https://youtube.com/shorts/I4pPbQvWrv8 
 * 
 */
#include <Arduino.h>

const int ledPin = LED_BUILTIN;

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