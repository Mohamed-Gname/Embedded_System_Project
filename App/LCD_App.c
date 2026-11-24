

/*#include "Hal/LCD/LCD_Interface.h"
#include <util/delay.h>
#include <stdint.h>*/

/* Number of characters in the name, including the space
#define Name_Length 12

void main(void)
{
    uint8_t i;       // Loop counter used to move through the name
    uint8_t Phase = 0;  // Controls the movement of the wave pattern

    /* Store the name that will be displayed on the LCD
    uint8_t Name[Name_Length] = "MOHAMED ATEF";


     * Wave pattern:
     * 0 means display the character on LCD Row 0
     * 1 means display the character on LCD Row 1
     *
     * This creates a simple two-row approximation of a sine wave.

    uint8_t Wave[12] =
    {
        0, 0, 0, 0, 0, 0,
        1, 1, 1, 1, 1, 1
    };

     Initialize the LCD
    LCD_Init();

    while (1)
    {
         Clear the LCD before drawing the next wave position
        LCD_SendCommand(Lcd_ClearScreen);

         Display all characters of the name
        for (i = 0; i < Name_Length; i++)
        {

             * Select the row for the current character.
             *
             * (i + Phase) shifts the wave pattern.
             * % Name_Length keeps the array index within 0 to 11.

            uint8_t Line = Wave[(i + Phase) % Name_Length];

             Move the LCD cursor to the selected row and column
            LCD_MoveTo(Line, i);

             Display the current character
            LCD_WriteCharacter(Name[i]);
        }

         Increase Phase to shift the wave pattern
        Phase++;

         Return Phase to zero after completing one full cycle
        if (Phase >= Name_Length)
        {
            Phase = 0;
        }

         Wait 250 milliseconds before displaying the next position
        _delay_ms(250);
    }
}*/

/*another assighment    of     lcd
 *
#include "Hal/LCD/LCD_Interface.h"

void main()
{
    // Define Uppercase M pattern
    uint8_t Upper_M[8] =
    {
        0x11,
        0x1B,
        0x15,
        0x15,
        0x11,
        0x11,
        0x11,
        0x11
    };

    // Define Lowercase m pattern
    uint8_t Lower_m[8] =
    {
        0x00,
        0x00,
        0x1A,
        0x15,
        0x15,
        0x15,
        0x15,
        0x15
    };

    // Initialize LCD
    LCD_Init();

    // Store custom characters in CGRAM
    LCD_StoreSpecialCharacter(Upper_M, 0);
    LCD_StoreSpecialCharacter(Lower_m, 1);

    // Display Uppercase M on Line 1
    LCD_MoveTo(Lcd_Line1, 0);
    LCD_WriteCharacter(0);

    // Display Lowercase m on Line 2
    LCD_MoveTo(Lcd_Line2, 0);
    LCD_WriteCharacter(1);

    while(1)
    {

    }
}
 *  */
