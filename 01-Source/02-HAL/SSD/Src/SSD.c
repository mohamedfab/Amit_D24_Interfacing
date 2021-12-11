/*
 * SSD.c
 *
 *  Created on: Nov 20, 2021
 *      Author: Eng_Fawzi
 */
#include "SSD.h"
void SSD_Init(void)
{
	/*	Configure Data Lines As Output	*/
	Dio_ConfigChannel(DIO_PORTA,DIO_PIN4,OUTPUT);
	Dio_ConfigChannel(DIO_PORTA,DIO_PIN5,OUTPUT);
	Dio_ConfigChannel(DIO_PORTA,DIO_PIN6,OUTPUT);
	Dio_ConfigChannel(DIO_PORTA,DIO_PIN7,OUTPUT);

	/*	Configure Control Lines As Output	*/
	Dio_ConfigChannel(DIO_PORTB,DIO_PIN1,OUTPUT);
	Dio_ConfigChannel(DIO_PORTB,DIO_PIN2,OUTPUT);
}
void SSD_DisplayNumber(u8 num)
{
	u8 loc_FirstDigit = (num/10)<<4;
	u8 loc_Second_Digit = (num%10)<<4;

	/*	Enable SSD1	*/
	Dio_WriteChannel(DIO_PORTB, DIO_PIN2, STD_HIGH);
	/*	Disable SSD2	*/
	Dio_WriteChannel(DIO_PORTB, DIO_PIN1, STD_LOW);
	/*	Write Number To SSD	*/
	Dio_WriteGroup(DIO_PORTA,SSD_MASK,loc_FirstDigit);
	/*	wait(1m)	*/
	_delay_ms(1);

	/*	Disable SSD1	*/
	Dio_WriteChannel(DIO_PORTB, DIO_PIN2, STD_LOW);
	/*	Enable SSD2	*/
	Dio_WriteChannel(DIO_PORTB, DIO_PIN1, STD_HIGH);
	/*	Write Number To SSD	*/
	Dio_WriteGroup(DIO_PORTA,SSD_MASK,loc_Second_Digit);
	/*	wait(1m)	*/
	_delay_ms(1);
}
