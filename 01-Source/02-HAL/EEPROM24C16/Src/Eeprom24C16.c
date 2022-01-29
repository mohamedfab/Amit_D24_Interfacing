 /**********************************************************************************************************************
 *  File		: Eeprom24C16.c
 *	Module		: Eeprom24C16
 *	Target		: General
 *	Author		: mFawzi
 *  Description	:      
 * 
 *********************************************************************************************************************/

#include "Eeprom24C16.h"
#include "Lcd.h"
void Eeprom24C16_Init(void)
{
	I2C_MasterInit();
}

/*	addr = 0 to 2047	*/
void Eeprom24C16_WriteByte(u16 addr, u8 data)
{
	u8 loc_pageNo = (addr/256);
	u8 loc_byteNo = (addr%256);
	Lcd_Goto_Row_Column(0, 0);
	Lcd_DisplayNum(loc_pageNo);
	Lcd_Goto_Row_Column(0, 8);
	Lcd_DisplayNum(loc_byteNo);
	I2C_StartCondition();
	Lcd_Goto_Row_Column(1, 0);
	I2C_Send_SlaveAddressWriteOperation(0x50 | ( ( addr & 0x0700 ) >> 8 ));
	Lcd_Goto_Row_Column(1, 0);
	I2C_WriteByte(loc_byteNo);
	Lcd_Goto_Row_Column(1, 0);
	I2C_WriteByte(data);
	Lcd_Goto_Row_Column(1, 0);
	I2C_StopCondition();
}

/*	addr = 0 to 2047	*/
u8 Eeprom24C16_ReadByte(u16 addr)
{
	u8 loc_pageNo = (addr/256);
	u8 loc_byteNo = (addr%256);
	u8 loc_dataRead=0;
	I2C_StartCondition();
	I2C_Send_SlaveAddressWriteOperation(0x50 | ( ( addr & 0x0700 ) >> 8 ) );
	I2C_WriteByte(loc_byteNo);
	I2C_RepeatedStartCondition();
	I2C_Send_SlaveAddressReadOperation(0x50 | ( ( addr & 0x0700 ) >> 8 ));
	loc_dataRead = I2C_ReadByte();
	I2C_StopCondition();
	return loc_dataRead;
}
/**********************************************************************************************************************
 *  END OF FILE: KeyPad.c
 *********************************************************************************************************************/
