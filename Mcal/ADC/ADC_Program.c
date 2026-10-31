/*
 * ADC_Program.c
 *
 *  Created on: Oct 17, 2026
 *      Author: samsung
 */

//*****************************************************
#include"ADC_Interface.h"

//***************************************
static uint8_t Adc_State = ADC_Uninitialized;
void ADC_Int()
{
	/*Pseudo-code & steps
	 * 1. Configure voltage reference , result adjust
	 * 2. configure control and status register for enable , mode , prescalle
	 * 3. configure trigger source if Auto Mode Selected
	 * */
	if (Adc_State != ADC_Uninitialized)
	{
		return;
	}
	/*
	 * config ADMUX : Voltage Adjust
	 * BitMath => (Reg = Reg&~Mask|Value)
	 * ADMUX => 1 1 1 0 0 0 0
	 * */
	ADMUX_Reg = ADC_VrefSelection|ADC_AdjustSelection;
	/*
	 *config ADCSRA : Enable , Interrupt , Mode , Prescaler
	 *
	 * */
	ADCSRA_Reg = ADC_Intstate|ADC_Mode|ADC_Interrupt_State|ADC_DevisionFactorSelection;
	/*
	 * configration of SFIOR : configure Trigger Source if Auto Mode select
	 * SFIOR =>7 6 5 anoter use in another perfiral
	 * BitMask = Reg=Reg&~Mask
	 * ADC_TriggerMask = 1110 0000
	 * */
	#if  ADC_Mode == ADC_AutoMode
	SFIOR_Reg = (SFIOR_Reg & ~ ADC_TriggerMask)|ADC_Trigger;
	#endif
	Adc_State = ADC_Idel;
}
void ADC_DeInt()
{
	/*   Pesoud code dn steps
	 * 1. Clear the ADC Conversion Complet Flag ADIF
	 * 2.Disable ADC Interrupt
	 * 3.Disable ADC Perifrial
	 * 4.Rest Drive State To Uninitialized
	 * 5.
	 * */

}
void ADC_Enable()
{
	SetBit(ADCSRA_Reg, ADEN);
}
void ADC_Disable()
{
	ClearBit(ADCSRA_Reg, ADEN);
}
void ADC_EnableInterrupt()
{
	SetBit(ADCSRA_Reg, ADIE);
}
void ADC_DisableInterrupt()
{
	ClearBit(ADCSRA_Reg, ADIE);
}

uint8_t ADC_Read(uint8_t Channel, uint16_t *DigitalValue , uint32_t MaxTimeOut)
{
	//**********************
	/* pseudo-code & Steps:
	     * //! 1. Validate Pointer  & Validate Range & Driver State
	     * //! 2. Select Channel
	     * //! 3. Start Conversion
	     * //! 3. Update the Driver State to Busy
	     * //! 3. Start Conversion
	     *
	     * */
	uint32_t LocalTimeOut = 0;
	if (DigitalValue==NULL)
	{
		return Adc_NullPointerErr;
	}
	if(Channel>ADC_SingleEndedChannel7)
	{
		return ADC_InvalidChannelErr;
	}
	if(Adc_State==ADC_Uninitialized)
	{
		return ADC_NotInitializedErr;
	}
	ADC_SelectChannel(Channel);
	SetBit(ADCSRA_Reg,ADSC);
	Adc_State=ADC_Busy;
	//wating until conversion Finish ->flag

	while(ReadBit(ADCSRA_Reg , ADIF)==0)
	{
		if(LocalTimeOut>=MaxTimeOut)
		{
			Adc_State = ADC_Idel;
			return ADC_TimeOutErr;
		}
		LocalTimeOut++;
	}
	//Clear Flag Manul
	SetBit(ADCSRA_Reg,ADIF);
	//Return Value
	*DigitalValue = ADCData_Reg;
	Adc_State = ADC_Idel;
	return Adc_Ok;


}
//*********************************************
/*uint8_t ADC_StartConversion(uint8_t Channel)
{
	***********************
}*/
//*************************************************
/*uint8_t ADC_SetCallBack(void(*ADC_PF)(uint16_t Result))
{
	**********************
}*/
//***********************************************
static void ADC_SelectChannel(uint8_t Channel)
{
	/*Pseudo-code & steps
		 * 1. Clear Channel in ADMUX (4:0)
		 * 2. Mack sure The Channel Var with in Range (31 : 0)
		 * 3. Apply the new channel
		 * */
	ADMUX_Reg=(ADMUX_Reg&~ADC_ChannelMask)|(Channel&ADC_ChannelMask);
}
//************************************************************************************
uint8_t ADC_GetStatus()
{
    return Adc_State;
}
