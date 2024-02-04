/**
 * @file external_btn.c
 * @brief External Button for STM32F030R8 EVAL Board.
 * * Find video sample here: https://youtube.com/shorts/J1YUPy0i5zQ
 */

#include <Arduino.h>

const int led = LED_BUILTIN;
const int btn = D2;

void setup()
{
	pinMode(led, OUTPUT);
	pinMode(btn, INPUT_PULLUP);
}

void loop()
{
	if (digitalRead(btn) == LOW)
	{
		digitalWrite(led, HIGH);
	}
	else
	{
		digitalWrite(led, LOW);
	}
}