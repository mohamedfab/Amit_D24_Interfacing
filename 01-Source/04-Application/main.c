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
Eeprom24C16_Init();
//Eeprom24C16_WriteByte(0, 'C');
_delay_ms(20);
Num = Eeprom24C16_ReadByte(0);
	Lcd_DisplayChr(Num);
	while (1)
	{

	}
	return 0;
}
