/*
 * Ext_INT.c
 *
 *  Created on: Dec 4, 2021
 *      Author: Eng_Fawzi
 */

#include "Ext_INT.h"


void Ext_Interrupt_Enable(ext_Int_t intID)
{
	switch (intID)
	{
	case EXT_INT0:
			SET_BIT(EXT_INT_GICR_REG,6);
			break;

	case EXT_INT1:
			SET_BIT(EXT_INT_GICR_REG,7);
			break;

	case EXT_INT2:
			SET_BIT(EXT_INT_GICR_REG,5);
			break;
	}
}
void Ext_Interrupt_Disable(ext_Int_t intID)
{
	switch (intID)
	{
	case EXT_INT0:
			CLR_BIT(EXT_INT_GICR_REG,6);
			break;

	case EXT_INT1:
			CLR_BIT(EXT_INT_GICR_REG,7);
			break;

	case EXT_INT2:
			CLR_BIT(EXT_INT_GICR_REG,5);
			break;
	}

}

void Ext_Interrupt_SncControl(ext_Int_t intID, snc_mode_t mode)
{
	switch (intID)
	{
		case EXT_INT0:
			EXT_INT_MCUCR_REG |=(mode<<0);
			break;

		case EXT_INT1:
			EXT_INT_MCUCR_REG |=(mode<<2);
			break;

		case EXT_INT2:
			if (mode == FAILING_EDGE)
			{
				CLR_BIT(EXT_INT_MCUCSR_REG,6);
			}
			else if (mode == RISING_EDGE)
			{
				SET_BIT(EXT_INT_MCUCSR_REG,6);
			}
			else
			{
				/*	Do Nothing	*/
			}
			break;
	}
}
