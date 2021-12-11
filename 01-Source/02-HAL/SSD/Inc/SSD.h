/*
 * SSD.h
 *
 *  Created on: Nov 20, 2021
 *      Author: Eng_Fawzi
 */

#ifndef _SSD_H_
#define _SSD_H_

#include "Std_Types.h"
#include "Dio.h"
#include <util/delay.h>

#define SSD_MASK      (0xF0)
void SSD_Init(void);
void SSD_DisplayNumber(u8 num);

#endif /* 01_SOURCE_02_HAL_SSD_INC_SSD_H_ */
