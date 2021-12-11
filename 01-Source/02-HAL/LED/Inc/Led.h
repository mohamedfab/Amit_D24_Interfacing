/*
 * Led.h
 *
 *  Created on: Nov 19, 2021
 *      Author: Eng_Fawzi
 */

#ifndef LED_H_
#define LED_H_

#include "Dio.h"
#include "Led_Types.h"
#include "Led_Cfg.h"
void LED_Init(void);
void LED_ON(led_type ledId);
void LED_OFF(led_type ledId);
void LED_TOGGLE(led_type ledId);
#endif /* LED_H_ */
