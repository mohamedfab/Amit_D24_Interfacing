/*
 * Bit_Math.h
 *
 *  Created on: Jan 2, 2022
 *      Author: Eng_Fawzi
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_


#define SET_BIT(REG,BIT_NO)          (REG|=(1<<BIT_NO))
#define CLR_BIT(REG,BIT_NO)          (REG&=~(1<<BIT_NO))
#define TOGGLE_BIT(REG,BIT_NO)       (REG^=(1<<BIT_NO))
#define CHECK_BIT(REG,BIT_NO)        ((REG >> BIT_NO)&0x01)


#endif /* BIT_MATH_H_ */
