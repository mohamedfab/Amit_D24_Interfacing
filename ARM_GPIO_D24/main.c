/****************************************
 * main.c
 ****************************************/
#include "Dio.h"

void delay_ms(u32 delayMs)
{
    u32 delay;
    u32 count;
    for (delay = 0;delay <delayMs; delay++)
    {
        for (count =0;count<1590;count++)
        {
            ;  /*   delay for 1 MS */
        }
    }
}
void main(void)
{
    Dio_EnableCLock(DIO_PORTF);
    Dio_ConfigChannel(DIO_PORTF, DIO_PIN1, OUTPUT);
    while (1)
    {
        Dio_WriteChannel(DIO_PORTF, DIO_PIN1, STD_HIGH);
        delay_ms(500);
        Dio_WriteChannel(DIO_PORTF, DIO_PIN1, STD_LOW);
        delay_ms(500);
    }
}
