/**
 * @file switch_external_led
 * @brief Switch with External LED for STM32F030R8 EVAL Board.
 * * Find video sample here: https://youtu.be/LdNNNbFCoaU
 */

#include <Arduino.h>

const int btn = USER_BTN;
const int led = LED_BUILTIN;
const int e_led = D2;

void flip()
{
	digitalWrite(e_led, !digitalRead(e_led));
}

void setup()
{
	pinMode(btn, INPUT);
	pinMode(led, OUTPUT);
	pinMode(e_led, OUTPUT);

	attachInterrupt(digitalPinToInterrupt(btn), flip, FALLING);
}

void loop()
{
	digitalWrite(led, !digitalRead(led));
	delay(1000);
}