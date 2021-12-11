/*
 * Led.c
 *
 *  Created on: Nov 19, 2021
 *      Author: Eng_Fawzi
 */

#include "Led.h"

void LED_Init(void)
{
	Dio_ConfigChannel(LED0_PORT,LED0_PIN,OUTPUT);
	Dio_ConfigChannel(LED1_PORT,LED1_PIN,OUTPUT);
	Dio_ConfigChannel(LED2_PORT,LED2_PIN,OUTPUT);
}

void LED_ON(led_type ledId)
{
	switch (ledId)
	{
	case LED0:
		Dio_WriteChannel(LED0_PORT,LED0_PIN,STD_HIGH);
		break;

	case LED1:
		Dio_WriteChannel(LED1_PORT,LED1_PIN,STD_HIGH);
		break;

	case LED2:
		Dio_WriteChannel(LED2_PORT,LED2_PIN,STD_HIGH);
		break;
	}
}

void LED_OFF(led_type ledId)
{
	switch (ledId)
	{
	case LED0:
		Dio_WriteChannel(LED0_PORT,LED0_PIN,STD_LOW);
		break;

	case LED1:
		Dio_WriteChannel(LED1_PORT,LED1_PIN,STD_LOW);
		break;

	case LED2:
		Dio_WriteChannel(LED2_PORT,LED2_PIN,STD_LOW);
		break;
	}
}
void LED_TOGGLE(led_type ledId)
{
	switch (ledId)
	{
	case LED0:
		Dio_TogglChannel(LED0_PORT,LED0_PIN);
		break;

	case LED1:
		Dio_TogglChannel(LED1_PORT,LED1_PIN);
		break;

	case LED2:
		Dio_TogglChannel(LED2_PORT,LED2_PIN);
		break;
	}
}






