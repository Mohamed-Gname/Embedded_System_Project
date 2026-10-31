/*
 * ADC_Config.h
 *
 *  Created on: Oct 17, 2026
 *      Author: samsung
 */

#ifndef MCAL_ADC_ADC_CONFIG_H_
#define MCAL_ADC_ADC_CONFIG_H_
#include "ADC_Private.h"

#define ADC_Intstate Enable

//*********************************************
/*ADC_VrefSelection_Option
 * ADC_Aref
 * ADC_AVCC
 * ADC_Internal
 * */
#define ADC_VrefSelection ADC_AVCC
//*****************************************
/*ADC_RightAdjust
 *ADC_LeftAdjust
 */
#define ADC_AdjustSelection ADC_LeftAdjust
//********************************************
/*
    *ADC_DevisionFactor2
	*ADC_DevisionFactor4
	*ADC_DevisionFactor8
	*ADC_DevisionFactor16
	*ADC_DevisionFactor32
	*ADC_DevisionFactor64
	*ADC_DevisionFactor128
 */
#define ADC_DevisionFactorSelection ADC_DevisionFactor16
//***********************************************************
/*
 * ADC_SingleMode
 * ADC_AutoMode
 */
#define ADC_Mode ADC_SingleMode
#if ADC_Mode==ADC_AutoMode
#define ADC_Trigger ADC_FreeRunningMode
#endif

#define ADC_Interrupt_State ADC_InterruptDisable

#endif /* MCAL_ADC_ADC_CONFIG_H_ */
