/*
 * T0_Interface.h
 *
 *  Created on: Nov 5, 2026
 *      Author: samsung
 */

#ifndef MCAL_TIMER0_T0_INTERFACE_H_
#define MCAL_TIMER0_T0_INTERFACE_H_

#include "../../Common/Definition.h"
#include "../../Common/BitMath.h"
#include "../../Common/Config.h"
#include "../Atmega_32_Register.h"


#include "T0_Private.h"
#include "T0_Config.h"

#if T0_Normal
void T0_NormalInit();
void T0_SetPreLoad(uint8_t PreloadValue);
void T0_NormalCallBack(void(*PF)(void));
#endif

#if T0_CTC
void T0_CTCInit();
void T0_SetCompareValue(uint8_t CompareValue);
void T0_CTCCallBack(void(*PF)(void));
#endif// _MCAL_TIMER0_T0_INTERFACE_H


#if T0_PWM
    void T0_PwmInit();
    void T0_SetDutyCycle(uint8_t DutyCyclePre);

#endif// _MCAL_TIMER0_T0_INTERFACE_H

#endif// _MCAL_TIMER0_T0_INTERFACE_H
