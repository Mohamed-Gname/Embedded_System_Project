/*
 * LCD_Config.h
 *
 *  Created on: Oct 17, 2026
 *      Author: samsung
 */

#ifndef HAL_LCD_LCD_CONFIG_H_
#define HAL_LCD_LCD_CONFIG_H_

#include "../../Mcal/DIO/DIO_Interface.h"


#define LCD_Mode  Lcd_8BitMode

#define RSPin     DIO_Pin0
#define RSGroup   DIO_GroupA

#define RWPin     DIO_Pin1
#define RWGroup   DIO_GroupA

#define EPin     DIO_Pin2
#define EGroup   DIO_GroupA

#if LCD_Mode==Lcd_8BitMode
    #define DataGroup DIO_GroupC
#elif LCD_Mode==Lcd_4BitMode
    #define D4Pin        DIO_Pin4
    #define D4Group      DIO_GroupC
    #define D5Pin        DIO_Pin5
    #define D5Group      DIO_GroupC
    #define D6pin        DIO_Pin6
    #define D6Group      DIO_GroupC
    #define D7Pin        DIO_Pin7
    #define D7Group      DIO_GroupC
#else
    #error "Invaild Lcd Mode"
#endif

/**
 * Lcd_4Bit2Line5x8F
 * Lcd_4Bit2Line5x11F
 * Lcd_4Bit1Line5x8F
 * Lcd_4Bit1Line5x11F
 * Lcd_8Bit2Line5x8F
 * Lcd_8Bit2Line5x11F
 * Lcd_8Bit1Line5x8F
 * Lcd_8Bit1Line5x11F
 */
#define Lcd_FunctionSet  Lcd_8Bit2Line5x8F

/**
 * Lcd_DisplayOff
 * Lcd_DisplayOnCursorOff
 * Lcd_DisplayOnCursorOnBlinkOff
 * Lcd_DisplayOnCursorOnBlinkOn
 */
#define Lcd_DisplayOnOff   Lcd_DisplayOnCursorOff
/**
 * Lcd_EntryMode_DecNoShift
 * Lcd_EntryMode_DecShift
 * Lcd_EntryMode_IncNoShift
 * Lcd_EntryMode_IncShift
 */
#define Lcd_EntryMode  Lcd_EntryMode_IncNoShift

#endif /* HAL_LCD_LCD_CONFIG_H_ */
