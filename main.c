
/*
 * main.c
 *
 * Project: LDR-Based Automatic LED Control
 * Microcontroller: ATmega32
 *
 * Hardware Connections:
 * LDR Output  -> PA0 / ADC0
 * LED 1       -> PB0
 * LED 2       -> PB1
 * LED 3       -> PB2
 * LED 4       -> PB3
 * LED 5       -> PB4
 * LED 6       -> PB5
 * LED 7       -> PB6
 * LED 8       -> PB7
 */

/* Include standard integer data types */
#include <stdint.h>

/* Include ADC Driver functions and definitions */
#include "Mcal/ADC/ADC_Interface.h"

/* Include LED Driver functions and definitions */
#include "Hal/LED/LED_Interface.h"

/* Define the number of LEDs connected to PORTB */
#define LED_COUNT  8

/* Define ADC thresholds for controlling LEDs */
#define THRESHOLD_1  200
#define THRESHOLD_2  400
#define THRESHOLD_3  600
#define THRESHOLD_4  800

/* Main program entry point */
int main(void)
{
    /* Variable to store the ADC digital reading */
    uint16_t ADC_Value = 0;

    /* Variable to store the ADC function return status */
    uint8_t ADC_Status = 0;

    /* Variable to determine how many LEDs should turn ON */
    uint8_t LED_Number = 0;

    /* Loop counter used to access LED pins */
    uint8_t i = 0;

    /* Initialize all eight LEDs connected to PORTB */
    for(i = 0; i < LED_COUNT; i++)
    {
        /* Initialize the current LED pin */
        Led_Init(DIO_GroupB, i);
    }

    /* Initialize the ADC peripheral */
    ADC_Int();

    /* Enable the ADC module */
    ADC_Enable();

    /* Start the continuous application loop */
    while(1)
    {
        /* Read the LDR analog voltage through ADC Channel 0 */
        ADC_Status = ADC_Read(
                         ADC_SingleEndedChannel0, /* ADC input channel PA0 */
                         &ADC_Value,               /* Address to store ADC result */
                         100000UL                  /* Maximum polling timeout count */
                     );

        /* Check whether the ADC conversion was successful */
        if(ADC_Status == Adc_Ok)
        {
            /* If ADC reading is below 200, turn OFF all LEDs */
            if(ADC_Value < THRESHOLD_1)
            {
                LED_Number = 0;
            }

            /* If ADC reading is from 200 to 399, turn ON 2 LEDs */
            else if(ADC_Value < THRESHOLD_2)
            {
                LED_Number = 2;
            }

            /* If ADC reading is from 400 to 599, turn ON 4 LEDs */
            else if(ADC_Value < THRESHOLD_3)
            {
                LED_Number = 4;
            }

            /* If ADC reading is from 600 to 799, turn ON 6 LEDs */
            else if(ADC_Value < THRESHOLD_4)
            {
                LED_Number = 6;
            }

            /* If ADC reading is 800 or greater, turn ON all 8 LEDs */
            else
            {
                LED_Number = 8;
            }

            /* Loop through all eight LEDs to update their states */
            for(i = 0; i < LED_COUNT; i++)
            {
                /* Check whether the current LED is within the required count */
                if(i < LED_Number)
                {
                    /* Turn ON the current LED */
                    Led_On(DIO_GroupB, i, Led_SourceConnection);
                }

                /* If the LED index is outside the required count */
                else
                {
                    /* Turn OFF the current LED */
                    Led_Off(DIO_GroupB, i, Led_SourceConnection);
                }
            }
        }

        /* If ADC conversion fails */
        else
        {
            /* Loop through all LEDs */
            for(i = 0; i < LED_COUNT; i++)
            {
                /* Turn OFF the current LED as a safe default */
                Led_Off(DIO_GroupB, i, Led_SourceConnection);
            }
        }
    }

    /* Return zero if the program exits */
    return 0;
}
