/*
 * App.c
 *
 *  Created on: Oct 16, 2026
 *      Author: samsung
 */
/*
 * main.c
 *
 *  Created on: Oct 16, 2026
 *      Author: samsung
 */

/*#include "Mcal/DIO/DIO_Interface.h"
#include "Hal/LED/LED_Interface.h"
#include "Hal/LCD/LCD_Interface.h"
#include "util/delay.h"

//*****************************

//*****************************


void main()
{
	uint8_t switch_case;
	uint8_t PIN_NO;
	//Intialization for led& switches
	for (PIN_NO = 0; PIN_NO<8; PIN_NO++)
	{
		Led_Init(DIO_GroupA, PIN_NO );
	}

	for (PIN_NO=0; PIN_NO<8; PIN_NO++)
	{
		//intialization of group pin of switches
		DIO_DirectionSelectForPin(DIO_GroupB, PIN_NO, DIO_Low);
		//Enable INTERNALL PULLUP
		DIO_InternalPullUpControl(DIO_GroupB, PIN_NO, DIO_High);

	}
	while(1)
	{
		for (PIN_NO=0; PIN_NO<8; PIN_NO++)
		{
			DIO_ReadInputForPin(DIO_GroupB, PIN_NO, &switch_case);
			if (switch_case==DIO_Low)
			{
				//LED ON
				Led_On(DIO_GroupA, PIN_NO, Led_SourceConnection);
			}else
			{
				// LED OFF
				Led_Off(DIO_GroupA, PIN_NO, Led_SourceConnection);

			}
		}
	}
}


*/
