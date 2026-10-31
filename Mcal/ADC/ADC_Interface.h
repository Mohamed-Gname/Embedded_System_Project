/*
 * ADC_Interface.h
 *
 *  Created on: Oct 17, 2026
 *      Author: samsung
 */
#ifndef MCAL_ADC_ADC_INTERFACE_H_
#define MCAL_ADC_ADC_INTERFACE_H_
/**************************************************/
#include "../../common/BitMath.h"
#include "../../common/Definition.h"
#include "../Atmega_32_Register.h"
#include "ADC_Config.h"
#include "ADC_Private.h"
#include <stdint.h>
//********************************************************
void ADC_Int();
void ADC_DeInt();
void ADC_Enable();
void ADC_Disable();
void ADC_EnableInterrupt();
void ADC_DisableInterrupt();
//**********************************************************

// Polling Function//
uint8_t ADC_Read(uint8_t Channel, uint16_t *DigitalValue , uint32_t MaxTimeOut);
//Interrupt //
uint8_t ADC_StartConversion(uint8_t Channel);
uint8_t ADC_SetCallBack(void(*ADC_PF)(uint16_t Result));
static void ADC_SelectChannel(uint8_t Channel);
uint8_t ADC_GetStatus();

#endif /* MCAL_ADC_ADC_INTERFACE_H_ */
