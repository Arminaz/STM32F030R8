/**
 * @file internal_btn.c
 * @brief Internal Button for STM32F030R8 EVAL Board.
 * * Find video sample here: https://youtube.com/shorts/X-lLQEASmyM 
 */

#include <Arduino.h>

const int led = LED_BUILTIN;
const int btn = USER_BTN;

void setup()
{
	pinMode(led, OUTPUT);
	pinMode(btn, INPUT);
}

void loop()
{
	if (digitalRead(btn) == HIGH)
		digitalWrite(led, LOW);
	else
		digitalWrite(led, HIGH);
}