/*****************************************
 * main.c
 *  Created on: Nov 12, 2021
 *  Author: Eng_Fawzi
 ****************************************/

#include <util/delay.h>
#include "Std_Types.h"
#include "Led.h"
#include "Button.h"
#include "SSD.h"
#include "Buzzer.h"
#include "Lcd.h"
#include "Glbl_INT.h"
#include "Ext_INT.h"
#include <avr/interrupt.h>
#include "Adc.h"

#define TIMER0_TCCR0_REG			(*(volatile u8*)0x53)
#define TIMER0_TCNT0_REG			(*(volatile u8*)0x52)
#define TIMER0_OCR0_REG				(*(volatile u8*)0x5C)
#define TIMER0_TIMSK_REG			(*(volatile u8*)0x59)
#define TIMER0_TIFR_REG				(*(volatile u8*)0x58)
#define CS00_BIT						    (0)
#define COM01_BIT							(5)
#define WGM01_BIT							(3)
#define WGM00_BIT							(6)
int main ()
{
	u8 duty = 0;
	/*	Fast PWM - Non-inverted - No Prescaler 	*/
	TIMER0_TCCR0_REG = (1<<WGM00_BIT) | (1<<WGM01_BIT) | (1<<COM01_BIT) | (1<<CS00_BIT);
	Dio_ConfigChannel(DIO_PORTB, DIO_PIN3, OUTPUT);
	while (1)
	{
		for(duty=0; duty<255; duty++)
				{
				TIMER0_OCR0_REG=duty;  /*increase the LED light intensity*/
					_delay_ms(10);
				}
				for(duty=255; duty>1; duty--)
				{
					TIMER0_OCR0_REG=duty;  /*decrease the LED light intensity*/
					_delay_ms(10);
				}
	}
	return 0;
}
