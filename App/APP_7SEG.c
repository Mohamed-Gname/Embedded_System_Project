/*
 * APP_7SEG.c
 *
 *  Created on: Nov 14, 2026
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


void main(void)
{
    uint8_t Counter = 0;
    uint8_t Button_up;
    uint8_t Button_down;

    // Seven Segment Initialization
    SSD_Init(1);

    // Buttons Initialization
    DIO_DirectionSelectForPin(DIO_GroupB, DIO_Pin0, DIO_Low);
    DIO_DirectionSelectForPin(DIO_GroupB, DIO_Pin1, DIO_Low);

    DIO_InternalPullUpControl(DIO_GroupB, DIO_Pin0, Enable);
    DIO_InternalPullUpControl(DIO_GroupB, DIO_Pin1, Enable);

    // Display initial value
    SSD_DisplayNo(1, Counter);

    while (1)
    {
        // Read UP Button
        DIO_ReadInputForPin(DIO_GroupB, DIO_Pin0, &Button_up);

        // Read DOWN Button
        DIO_ReadInputForPin(DIO_GroupB, DIO_Pin1, &Button_down);

        // UP Button
        if (Button_up == DIO_Low)
        {
            _delay_ms(20);

            DIO_ReadInputForPin(DIO_GroupB, DIO_Pin0, &Button_up);

            if (Button_up == DIO_Low)
            {
                if (Counter == 9)
                {
                    Counter = 0;
                }
                else
                {
                    Counter++;
                }

                SSD_DisplayNo(1, Counter);

                // Wait for button release
                do
                {
                    DIO_ReadInputForPin(DIO_GroupB, DIO_Pin0, &Button_up);
                }
                while (Button_up == DIO_Low);
            }
        }

        // DOWN Button
        if (Button_down == DIO_Low)
        {
            _delay_ms(20);

            DIO_ReadInputForPin(DIO_GroupB, DIO_Pin1, &Button_down);

            if (Button_down == DIO_Low)
            {
                if (Counter == 0)
                {
                    Counter = 9;
                }
                else
                {
                    Counter--;
                }

                SSD_DisplayNo(1, Counter);

                // Wait for button release
                do
                {
                    DIO_ReadInputForPin(DIO_GroupB, DIO_Pin1, &Button_down);
                }
                while (Button_down == DIO_Low);
            }
        }
    }
}*/

