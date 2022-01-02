/*
 * Dio.c
 *
 *  Created on: Jan 2, 2022
 *      Author: Eng_Fawzi
 */

#include "Dio.h"
void Dio_ConfigChannel(port_type port,pin_type pin,direction_type direction)
{
    switch (port)
    {
    case DIO_PORTA:
        SET_BIT(GPIO_GPIOADEN_REG,pin);
        if (direction == INPUT)
        {
            CLR_BIT(GPIO_GPIOADIR_REG,pin);
        }
        else
        {
            SET_BIT(GPIO_GPIOADIR_REG,pin);
        }
        break;

    case DIO_PORTB:
        SET_BIT(GPIO_GPIOBDEN_REG,pin);
        if (direction == INPUT)
        {
            CLR_BIT(GPIO_GPIOBDIR_REG,pin);
        }
        else
        {
            SET_BIT(GPIO_GPIOBDIR_REG,pin);
        }
        break;

    case DIO_PORTC:
        SET_BIT(GPIO_GPIOCDEN_REG,pin);
        if (direction == INPUT)
        {
            CLR_BIT(GPIO_GPIOCDIR_REG,pin);
        }
        else
        {
            SET_BIT(GPIO_GPIOCDIR_REG,pin);
        }
        break;

    case DIO_PORTD:
        SET_BIT(GPIO_GPIODDEN_REG,pin);
        if (direction == INPUT)
        {
            CLR_BIT(GPIO_GPIODDIR_REG,pin);
        }
        else
        {
            SET_BIT(GPIO_GPIODDIR_REG,pin);
        }
        break;
    case DIO_PORTE:
        SET_BIT(GPIO_GPIOEDEN_REG,pin);
        if (direction == INPUT)
        {
            CLR_BIT(GPIO_GPIOEDIR_REG,pin);
        }
        else
        {
            SET_BIT(GPIO_GPIOEDIR_REG,pin);
        }
        break;
    case DIO_PORTF:
        SET_BIT(GPIO_GPIOFDEN_REG,pin);
        if (direction == INPUT)
        {
            CLR_BIT(GPIO_GPIOFDIR_REG,pin);
        }
        else
        {
            SET_BIT(GPIO_GPIOFDIR_REG,pin);
        }
        break;
    }
}
void Dio_WriteChannel(port_type port,pin_type pin,level_type level)
{
    switch (port)
    {
    case DIO_PORTA:
        if (level == STD_HIGH)
        {
            SET_BIT(GPIO_GPIOADATA_REG,pin);
        }
        else
        {
            CLR_BIT(GPIO_GPIOADATA_REG,pin);
        }
        break;

    case DIO_PORTB:
        if (level == STD_HIGH)
        {
            SET_BIT(GPIO_GPIOBDATA_REG,pin);
        }
        else
        {
            CLR_BIT(GPIO_GPIOBDATA_REG,pin);
        }
        break;

    case DIO_PORTC:
        if (level == STD_HIGH)
        {
            SET_BIT(GPIO_GPIOCDATA_REG,pin);
        }
        else
        {
            CLR_BIT(GPIO_GPIOCDATA_REG,pin);
        }
        break;

    case DIO_PORTD:
        if (level == STD_HIGH)
        {
            SET_BIT(GPIO_GPIODDATA_REG,pin);
        }
        else
        {
            CLR_BIT(GPIO_GPIODDATA_REG,pin);
        }
        break;
    case DIO_PORTE:
        if (level == STD_HIGH)
        {
            SET_BIT(GPIO_GPIOEDATA_REG,pin);
        }
        else
        {
            CLR_BIT(GPIO_GPIOEDATA_REG,pin);
        }
        break;
    case DIO_PORTF:
        if (level == STD_HIGH)
        {
            SET_BIT(GPIO_GPIOFDATA_REG,pin);
        }
        else
        {
            CLR_BIT(GPIO_GPIOFDATA_REG,pin);
        }
        break;
    }
}

void Dio_EnableCLock(port_type port)
{
    SET_BIT(GPIO_RCG_REG,port);
}
