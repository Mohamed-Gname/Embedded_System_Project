/*
 * Atmega_32_Register.h
 *
 *  Created on: Oct 16, 2026
 *      Author: samsung
 */

#ifndef MCAL_ATMEGA_32_REGISTER_H_
#define MCAL_ATMEGA_32_REGISTER_H_

#include <stdint.h>

#define _SetAddress8bit(Addrress)   *((volatile uint8_t*)Addrress)
#define _SetAddress16bit(Addrress)  *((volatile uint16_t*)Addrress)
#define _SetAddress32bit(Addrress)  *((volatile uint32_t*)Addrress)



/*=================================================*/
//Defintion of PORT A REGISTER:
/*==================================================*/
#define DDRA_Reg    *((volatile uint8_t*)0x3A)
#define PORTA_Reg   *((volatile uint8_t*)0x3B)
#define PINA_Reg    *((volatile uint8_t*)0x39)
/*====================================================*/
//Defintion of PORTB REGISTER:
/*===================================================*/
#define DDRB_Reg    *((volatile uint8_t*)0x37)
#define PORTB_Reg   *((volatile uint8_t*)0x38)
#define PINB_Reg    *((volatile uint8_t*)0x36)
/*===========================================*/
// DEFINTION OF PORTC REGISER::::::::::::::::::
/*============================================*/
#define DDRC_Reg    *((volatile uint8_t*)0x34)
#define PORTC_Reg   *((volatile uint8_t*)0x35)
#define PINC_Reg    *((volatile uint8_t*)0x33)
/*=============================================*/
//DEFINTION OF PORT D REGISTER
/*============================================*/
#define DDRD_Reg    *((volatile uint8_t*)0x31)
#define PORTD_Reg   *((volatile uint8_t*)0x32)
#define PIND_Reg    *((volatile uint8_t*)0x30)
/*==========================================================
 * DEFINTION OF INTRUPT REGITER
 * ==========================================================*/
#define MCUCR_Reg    *((volatile uint8_t*)0x55)
#define MCUCSR_Reg   *((volatile uint8_t*)0x54)
#define GICR_Reg     *((volatile uint8_t*)0x5B)
#define GIFR_Reg     *((volatile uint8_t*)0x5A)

/*==================================================
*The AVR Status Register – SREG -
==================================================*/

#define SREG_Reg    *((volatile uint8_t*)0x5F)

/*======================================================
 * ADC REGISTER
 * =======================================================*/
#define ADMUX_Reg     *((volatile uint8_t*)0x27)
#define ADCSRA_Reg    *((volatile uint8_t*)0x26)
#define ADCH_Reg      *((volatile uint8_t*)0x25)
#define ADCL_Reg      *((volatile uint8_t*)0x24)
#define ADCData_Reg  _SetAddress16bit(0x24)
#define SFIOR_Reg     *((volatile uint8_t*)0x50)

/*============================================
 * Timer 0 Registers
 * =========================================*/

#define TCCR0_Reg     *((volatile uint8_t*)0x53)
#define TCNT0_Reg     *((volatile uint8_t*)0x52)
#define OCR0_Reg     *((volatile uint8_t*)0x5C)

/*==============================================
 *   Timer 2 Register
 ================================================*/

#define TCCR2_Reg     *((volatile uint8_t*)0x45)
#define TCNT2_Reg     *((volatile uint8_t*)0x44)
#define OCR2_Reg     *((volatile uint8_t*)0x43)

/*====================================
 * Timer 1 Register
 ======================================*/

#define TCCR1A_Reg     *((volatile uint8_t*)0x4F)
#define TCCR1B_Reg     *((volatile uint8_t*)0x4E)
#define TCNT1_Reg     *((volatile uint8_t*)0x4C)
#define OCR1A_Reg     *((volatile uint8_t*)0x4A)
#define OCR1B_Reg     *((volatile uint8_t*)0x48)
#define ICR1_Reg     *((volatile uint8_t*)0x46)

/*=======================================
 *
 =========================================*/


#define TIMSk_Reg    *((volatile uint8_t*)0x59)
#define TIFR_Reg     *((volatile uint8_t*)0x58)






#endif /* MCAL_ATMEGA_32_REGISTER_H_ */
