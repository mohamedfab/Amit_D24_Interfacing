/*
 * Dio.h
 *
 *  Created on: Nov 19, 2021
 *      Author: Eng_Fawzi
 */

#ifndef DIO_H_
#define DIO_H_

#include "Std_Types.h"
#include "Bit_Math.h"
#include "Dio_Reg.h"
#include "Dio_Types.h"

/*	Functions Prototypes	*/
void Dio_ConfigChannel(port_type port,pin_type pin,direction_type direction);
void Dio_WriteChannel(port_type port,pin_type pin,level_type level);
void Dio_WriteGroup(port_type port,u8 mask,u8 data);
void Dio_TogglChannel(port_type port,pin_type pin);
level_type Dio_ReadChannel(port_type port,pin_type pin);

#endif /* DIO_H_ */
