 /***********************************************
 *  File		: Spi_Cfg.h
 *	Module		: SPI
 *	Target		: ATMEGA32
 *	Author		: mFawzi
 *  Description	:
 *************************************************/
#ifndef SPI_CFG_H
#define SPI_CFG_H

#include "Std_Types.h"

#define SPI_SS_PORT       	(DIO_PORTB)
#define SPI_SS_CHANNEL		(DIO_PIN4)
#define SPI_MOSI_PORT       (DIO_PORTB)
#define SPI_MOSI_CHANNEL	(DIO_PIN5)
#define SPI_MISO_PORT       (DIO_PORTB)
#define SPI_MISO_CHANNEL	(DIO_PIN6)
#define SPI_SCK_PORT       	(DIO_PORTB)
#define SPI_SCK_CHANNEL		(DIO_PIN7)

#endif  /* UART_H */
