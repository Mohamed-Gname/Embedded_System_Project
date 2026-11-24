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
	ADC_DevisionFactor128,// the pest for Atmega32
}ADC_PrescalerSelect_t;

typedef enum
{
	Adc_Disable=0x00,
	Adc_Enable=0x80,
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
	ADC_SingleEndedChannel0,
	ADC_SingleEndedChannel1,
	ADC_SingleEndedChannel2,
	ADC_SingleEndedChannel3,
	ADC_SingleEndedChannel4,
	ADC_SingleEndedChannel5,
	ADC_SingleEndedChannel6,
	ADC_SingleEndedChannel7,
}ADC_Channel_t;

typedef enum
{
    /* Differential Input with Gain 10x */
    ADC_Diff_ADC0_ADC0_Gain10 = 0x08,
    ADC_Diff_ADC1_ADC0_Gain10 = 0x09,
    ADC_Diff_ADC2_ADC2_Gain10 = 0x0C,
    ADC_Diff_ADC3_ADC2_Gain10 = 0x0D,

    /* Differential Input with Gain 200x */
    ADC_Diff_ADC0_ADC0_Gain200 = 0x0A,
    ADC_Diff_ADC1_ADC0_Gain200 = 0x0B,
    ADC_Diff_ADC2_ADC2_Gain200 = 0x0E,
    ADC_Diff_ADC3_ADC2_Gain200 = 0x0F,

    /* Differential Input with Gain 1x */
    ADC_Diff_ADC0_ADC1_Gain1 = 0x10,
    ADC_Diff_ADC1_ADC1_Gain1 = 0x11,
    ADC_Diff_ADC2_ADC1_Gain1 = 0x12,
    ADC_Diff_ADC3_ADC1_Gain1 = 0x13,
    ADC_Diff_ADC4_ADC1_Gain1 = 0x14,
    ADC_Diff_ADC5_ADC1_Gain1 = 0x15,
    ADC_Diff_ADC6_ADC1_Gain1 = 0x16,
    ADC_Diff_ADC7_ADC1_Gain1 = 0x17,

    ADC_Diff_ADC0_ADC2_Gain1 = 0x18,
    ADC_Diff_ADC1_ADC2_Gain1 = 0x19,
    ADC_Diff_ADC2_ADC2_Gain1 = 0x1A,
    ADC_Diff_ADC3_ADC2_Gain1 = 0x1B,
    ADC_Diff_ADC4_ADC2_Gain1 = 0x1C,
    ADC_Diff_ADC5_ADC2_Gain1 = 0x1D,

} ADC_SelectChannelDifferential_t;

typedef enum
{
	ADC_TriggerMask = 0xE0,
	ADC_ChannelMask = 0x1F,
}ADC_MaskinValue_t;

typedef enum
{
	ADC_Uninitialized,
	ADC_Idel,
	ADC_Busy,
}ADC_DriverState;

typedef enum
{
	Adc_Ok,
	Adc_NullPointerErr,
	ADC_InvalidChannelErr,
	ADC_TimeOutErr,
	ADC_NotInitializedErr,
}ADC_ErrorState;
#endif /* MCAL_ADC_ADC_PRIVATE_H_ */
