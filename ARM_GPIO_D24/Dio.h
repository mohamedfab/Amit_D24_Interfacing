/*
 * Dio.h
 *
 *  Created on: Jan 2, 2022
 *      Author: Eng_Fawzi
 */

#ifndef DIO_H_
#define DIO_H_

#include "Bit_Math.h"
#include "Dio_Reg.h"
#include "Dio_Types.h"

void Dio_EnableCLock(port_type port);
void Dio_ConfigChannel(port_type port,pin_type pin,direction_type direction);
void Dio_WriteChannel(port_type port,pin_type pin,level_type level);


#endif /* DIO_H_ */
