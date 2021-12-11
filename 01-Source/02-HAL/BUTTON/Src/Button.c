/*
 * Button.c
 *
 *  Created on: Nov 19, 2021
 *      Author: Eng_Fawzi
 */
#include "Button.h"

void Button_Init(void)
{
	Dio_ConfigChannel(BUTTON0_PORT,BUTTON0_PIN,INPUT);
	Dio_ConfigChannel(BUTTON1_PORT,BUTTON1_PIN,INPUT);
	Dio_ConfigChannel(BUTTON2_PORT,BUTTON2_PIN,INPUT);
}
button_type Button_GetStatus(buttonID_type button)
{
	button_type status = RELEASED;
	switch (button)
	{
	case BUTTON0:
		if (Dio_ReadChannel(BUTTON0_PORT,BUTTON0_PIN) == STD_HIGH)
		{
			status = PRESSED;
		}
		else
		{
			status = RELEASED;
		}
		break;

	case BUTTON1:
		if (Dio_ReadChannel(BUTTON1_PORT,BUTTON1_PIN) == STD_HIGH)
		{
			status = PRESSED;
		}
		else
		{
			status = RELEASED;
		}
		break;

	case BUTTON2:
		if (Dio_ReadChannel(BUTTON2_PORT,BUTTON2_PIN) == STD_HIGH)
		{
			status = PRESSED;
		}
		else
		{
			status = RELEASED;
		}
		break;
	}
	return status;
}
