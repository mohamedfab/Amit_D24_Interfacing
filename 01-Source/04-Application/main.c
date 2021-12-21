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
#define WDG_WDTCR_REG			(*(volatile u8*)0x41)
int main ()
{
	LED_Init();
	WDG_WDTCR_REG |= 7;   			/*	Reset Time 2.1s	*/
	SET_BIT(WDG_WDTCR_REG,3);		/*	Enable Watchdog*/

	LED_ON(LED0);
	_delay_ms(900);
	LED_OFF(LED0);
	_delay_ms(900);

	while (1)
	{
		asm("WDR");
	}
	return 0;
}
