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
#include "Adc.h"
#include "Uart.h"
#include <string.h>
#include "Eeprom24C16.h"
#include "Eeprom.h"
int main ()
{
	u8 Num = 0;
	Lcd_Init();

	if (EEPROM_Read(0) != 0xFF)
	{
		Num = EEPROM_Read(0);
	}

	Lcd_Goto_Row_Column(0, 0);
	Lcd_DisplayStr("Counter = ");
	while (1)
	{
		Lcd_Goto_Row_Column(0, 10);
		Lcd_DisplayNum(Num);
		Num++;
		EEPROM_Write(0, Num);
		_delay_ms(1000);
	}
	return 0;
}
