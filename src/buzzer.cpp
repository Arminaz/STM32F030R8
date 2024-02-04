/**
 * @file buzzer
 * @brief Buzzer for STM32F030R8 EVAL Board.
 * * Find video sample here: https://youtu.be/ghW0EezlxTU 
 */

#include <Arduino.h>

const int buz = D2;

void setup()
{
	pinMode(buz, OUTPUT);
}

void loop()
{
	digitalWrite(buz, HIGH);
	delay(1000);
	digitalWrite(buz, LOW);
	delay(1000);
}