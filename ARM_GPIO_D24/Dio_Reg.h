/*
 * Dio_Reg.h
 *
 *  Created on: Jan 2, 2022
 *      Author: Eng_Fawzi
 */

#ifndef DIO_REG_H_
#define DIO_REG_H_
#include "Std_Types.h"

#define GPIO_PORTA_APB_BASE    (0x40004000)
#define GPIO_PORTB_APB_BASE    (0x40005000)
#define GPIO_PORTC_APB_BASE    (0x40006000)
#define GPIO_PORTD_APB_BASE    (0x40007000)
#define GPIO_PORTE_APB_BASE    (0x40024000)
#define GPIO_PORTF_APB_BASE    (0x40025000)
#define GPIO_RCG_BASE           (0x400FE000)

#define GPIO_GPIODATA_OFFSET    (0x000)
#define GPIO_GPIODIR_OFFSET     (0x400)
#define GPIO_GPIODEN_OFFSET     (0x51C)
#define GPIO_RCG_OFFSET         (0x608)
/*     Data Register */
#define GPIO_GPIOADATA_REG               (*(volatile u32*)(GPIO_PORTA_APB_BASE + GPIO_GPIODATA_OFFSET))
#define GPIO_GPIOBDATA_REG               (*(volatile u32*)(GPIO_PORTB_APB_BASE + GPIO_GPIODATA_OFFSET))
#define GPIO_GPIOCDATA_REG               (*(volatile u32*)(GPIO_PORTC_APB_BASE + GPIO_GPIODATA_OFFSET))
#define GPIO_GPIODDATA_REG               (*(volatile u32*)(GPIO_PORTD_APB_BASE + GPIO_GPIODATA_OFFSET))
#define GPIO_GPIOEDATA_REG               (*(volatile u32*)(GPIO_PORTE_APB_BASE + GPIO_GPIODATA_OFFSET))
#define GPIO_GPIOFDATA_REG               (*(volatile u32*)(GPIO_PORTF_APB_BASE + GPIO_GPIODATA_OFFSET))

/* Direction Register */
#define GPIO_GPIOADIR_REG               (*(volatile u32*)(GPIO_PORTA_APB_BASE + GPIO_GPIODIR_OFFSET))
#define GPIO_GPIOBDIR_REG               (*(volatile u32*)(GPIO_PORTB_APB_BASE + GPIO_GPIODIR_OFFSET))
#define GPIO_GPIOCDIR_REG               (*(volatile u32*)(GPIO_PORTC_APB_BASE + GPIO_GPIODIR_OFFSET))
#define GPIO_GPIODDIR_REG               (*(volatile u32*)(GPIO_PORTD_APB_BASE + GPIO_GPIODIR_OFFSET))
#define GPIO_GPIOEDIR_REG               (*(volatile u32*)(GPIO_PORTE_APB_BASE + GPIO_GPIODIR_OFFSET))
#define GPIO_GPIOFDIR_REG               (*(volatile u32*)(GPIO_PORTF_APB_BASE + GPIO_GPIODIR_OFFSET))

/*     Digital Enable Register */
#define GPIO_GPIOADEN_REG               (*(volatile u32*)(GPIO_PORTA_APB_BASE + GPIO_GPIODEN_OFFSET))
#define GPIO_GPIOBDEN_REG               (*(volatile u32*)(GPIO_PORTB_APB_BASE + GPIO_GPIODEN_OFFSET))
#define GPIO_GPIOCDEN_REG               (*(volatile u32*)(GPIO_PORTC_APB_BASE + GPIO_GPIODEN_OFFSET))
#define GPIO_GPIODDEN_REG               (*(volatile u32*)(GPIO_PORTD_APB_BASE + GPIO_GPIODEN_OFFSET))
#define GPIO_GPIOEDEN_REG               (*(volatile u32*)(GPIO_PORTE_APB_BASE + GPIO_GPIODEN_OFFSET))
#define GPIO_GPIOFDEN_REG               (*(volatile u32*)(GPIO_PORTF_APB_BASE + GPIO_GPIODEN_OFFSET))

#define GPIO_RCG_REG                     (*(volatile u32*)(GPIO_RCG_BASE + GPIO_RCG_OFFSET))
#endif /* DIO_REG_H_ */
