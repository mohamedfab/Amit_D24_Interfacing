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
#include "Uart.h"
#include <string.h>

extern volatile u8 UART_RxBuffer[RX_BUFFER_SIZE];
extern volatile boolean Rx_Buffer_Ready;

int main ()
{
	u8 uartResult = 0;
	Glbl_Interrupt_Enable();
	Lcd_Init();
	Lcd_Cmd(_LCD_CURSOR_OFF);
	LED_Init();
	UART_Init(UART_BAUDRATE_9600);
	UART_TransmitStr("Hello UART.......");
	while (1)
	{
		if (Rx_Buffer_Ready == TRUE)
		{
			Rx_Buffer_Ready = FALSE;
			Lcd_Cmd(_LCD_CLEAR);
			Lcd_Goto_Row_Column(0, 0);
			Lcd_DisplayStr(UART_RxBuffer);
		}
	}
	return 0;
}
