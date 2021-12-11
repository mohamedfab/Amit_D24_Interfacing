/*
 * Button.h
 *
 *  Created on: Nov 19, 2021
 *      Author: Eng_Fawzi
 */

#ifndef BUTTON_H_
#define BUTTON_H_
#include "Dio.h"
#include "Button_Cfg.h"
#include "Button_Types.h"

void Button_Init(void);
button_type Button_GetStatus(buttonID_type button);

#endif /* BUTTON_H_ */
