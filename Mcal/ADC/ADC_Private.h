/*
 * ADC_Private.h
 *
 *  Created on: Oct 17, 2026
 *      Author: samsung
 */

#ifndef MCAL_ADC_ADC_PRIVATE_H_
#define MCAL_ADC_ADC_PRIVATE_H_

typedef enum
{
	/***ADMUX****/
	MUX0,
	MUX1,
	MUX2,
	MUX3,
	MUX4,
	ADLAR,
	REFS0,
	REFS1,
	/**ADCSRA**/
	ADPS0 =0,
	ADPS1,
	ADPS2,
	ADIE,
	ADIF,
	ADATE,
	ADSC,
	ADEN,
	/**SFIOR**/
	ADTS0 =5,
	ADTS1,
	ADTS2,

}ADC_BitName_t;

typedef enum
{
	ADC_InterruptDisable =0x00,
	ADC_InterruptEnable =0x08,
}ADC_InterruptState_t;

typedef enum
{
	ADC_SingleMode=0x00,
	ADC_AutoMode=0x20,
}ADC_Auto_t;

typedef enum
{
	ADC_Aref =0x00,
	ADC_AVCC =0x40,
	ADC_Internal=0xC0,
}ADC_ArefSelect_t;

typedef enum
{
	ADC_RightAdjust=0x00,
	ADC_LeftAdjust=0x20,
}ADC_AdjustResult_t;
typedef enum
{
	ADC_DevisionFactor2 =1,
	ADC_DevisionFactor4,
	ADC_DevisionFactor8,
	ADC_DevisionFactor16,
	ADC_DevisionFactor32,
	ADC_DevisionFactor64,
	ADC_DevisionFactor128,
}ADC_PrescalerSelect_t;

typedef enum
{
	Disable=0x00,
	Enable =0x80,
}ADC_State_t;



typedef enum
{
	ADC_FreeRunningMode =0x00,
	ADC_AnalogComparator =0x20,
	ADC_EXTI0 =0x40,
	ADC_T0CM =0x60,
	ADC_T0OV =0x80,
	ADC_T1CMB =0xA0,
	ADC_T1OV =0xC0,
	ADC_T1CaptureEvent =0xE0,
}ADC_Auto_Trigger_Select_t;

typedef enum
{
	ADC_Channel0,
	ADC_Channel1,
	ADC_Channel2,
	ADC_Channel3,
	ADC_Channel4,
	ADC_Channel5,
	ADC_Channel6,
	ADC_Channel7,
}ADC_SelectChannelSingleEnded_t;

typedef enum
{

}ADC_SelectChanelDifferential_t;

#endif /* MCAL_ADC_ADC_PRIVATE_H_ */
