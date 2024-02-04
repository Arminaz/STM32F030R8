/**
 * @file external_led_brightness
 * @brief External LED Brightness for STM32F030R8 EVAL Board.
 * * Find video sample here: https://youtube.com/shorts/zUpeGaUAht4
 */
#include <Arduino.h>

const int PWM_PIN = D5;

/**
 * @brief Fades an LED between two levels of brightness. This function levels the brightness of an LED from start to the end.
 * It uses PWM (Pulse Width Modulation) to adjust the brightness by using analogWrite instead of digitalWrite.
 *
 * @param start The starting level of the brightness.
 * @param end The ending level of the brightness.
 * @param ms The time in miliseconds it will take to fade
 */
void fade(double start, double end, int ms);

void setup()
{
	pinMode(PWM_PIN, OUTPUT);
}

void loop()
{
	fade(0, 1, 10);
	fade(1, 0, 10);
}

void fade(double start, double end, int ms)
{
	if (start < end)
	{
		for (double i = start; i <= end; i += 0.01)
		{
			analogWrite(PWM_PIN, int(i * 255));
			delay(ms);
		}
	}
	else
	{
		for (double i = start; i >= end; i -= 0.01)
		{
			analogWrite(PWM_PIN, int(i * 255));
			delay(ms);
		}
	}
}