/*
 * EXTI_Interface.h
 *
 *  Created on: Oct 16, 2026
 *      Author: samsung
 */

#ifndef MCAL_EXTI_EXTI_INTERFACE_H_
#define MCAL_EXTI_EXTI_INTERFACE_H_

#include "../Atmega_32_Register.h"
#include "../../Common/BitMath.h"
#include "../../Common/Definition.h"

#include "EXTI_Private.h"
#include "EXTI_Config.h"
//POST BUILD
//EXTI0
void EXTI_Init(uint8_t InterruptNumber , uint8_t SensControl);
// from table in data sheet
void EXTI_Enable(uint8_t InterruptNumber);
void EXTI_Disable(uint8_t InterruptNumber);
/*CallBacks*/
void EXTI_CallBackFunction(uint8_t InterruptNumber , void (*PF)(void));


#endif /* MCAL_EXTI_EXTI_INTERFACE_H_ */
