/*
 * T0_Config.h
 *
 *  Created on: Nov 5, 2026
 *      Author: samsung
 */

#ifndef MCAL_TIMER0_T0_CONFIG_H_
#define MCAL_TIMER0_T0_CONFIG_H_

#if Timer0_Driver

#define T0_ClockSelect           T0_Prescaller_64




#if T0_Normal
#define T0_InitPreloadValue      44
#define T0_NoOfOVFCount          49
#endif// _MCAL_TIMER0_T0_CONFIG_H


#if T0_CTC

#endif// _MCAL_TIMER0_T0_CONFIG_H




#if T0_PWM
    /*
     //! 1- T0_PWMFast
     //! 2- T0_PWMPhase
     */
    #define T0_PWMMode      T0_PWMFast
        /*
     //! 1- OC0_NonInverting
     //! 2- OC0_Inverting
     */
    #define T0_PWMAction    OC0_NonInverting
#endif// _MCAL_TIMER0_T0_CONFIG_H


#endif// Timer0_Driver
#endif// _MCAL_TIMER0_T0_CONFIG_H
