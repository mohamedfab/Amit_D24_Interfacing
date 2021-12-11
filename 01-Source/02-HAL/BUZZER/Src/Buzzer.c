/*
 * Buzzer.c
 *
 *  Created on: Nov 26, 2021
 *      Author: Eng_Fawzi
 */
#include "Buzzer.h"

void Buzzer_Init()
{
	Dio_ConfigChannel(BUZZER_PORT,BUZZER_PIN,OUTPUT);
}

void Buzzer_ON()
{
	Dio_WriteChannel(BUZZER_PORT,BUZZER_PIN,STD_HIGH);
}

void Buzzer_OFF()
{
	Dio_WriteChannel(BUZZER_PORT,BUZZER_PIN,STD_LOW);
}

void Buzzer_Toggle()
{
	Dio_TogglChannel(BUZZER_PORT,BUZZER_PIN);
}
