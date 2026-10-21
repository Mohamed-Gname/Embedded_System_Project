/*
 * Atmega_32_Register.h
 *
 *  Created on: Oct 16, 2026
 *      Author: samsung
 */

#ifndef MCAL_ATMEGA_32_REGISTER_H_
#define MCAL_ATMEGA_32_REGISTER_H_

#include <stdint.h>


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
#define SFIOR_Reg     *((volatile uint8_t*)0x50)

#endif /* MCAL_ATMEGA_32_REGISTER_H_ */
