 /********************************************************************************************************************
 *  File		: KeyPad.h
 *	Module		: KEYPAD
 *	Target		: General
 *	Author		: mFawzi
 *  Description	:      
 *********************************************************************************************************************/
#ifndef KEYPAD_H_
#define KEYPAD_H_

#include "Dio.h"
#include "KeyPad_Cfg.h"
#include "Std_Types.h"
#include <util/delay.h>
void KeyPad_Init(void);
u8 KeyPad_Scan(void);
u8 KeyPad_GetKey(void);

#endif  /* KEYPAD_H_ */

/**********************************************************************************************************************
 *  END OF FILE: KeyPad.h
 *********************************************************************************************************************/
