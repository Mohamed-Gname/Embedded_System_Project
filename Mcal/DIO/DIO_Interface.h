/*
 * DIO_Interface.h
 *
 *  Created on: Oct 16, 2026
 *      Author: samsung
 */

#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_

//*************************************
#include <stdint.h>
#include "../../Common/BitMath.h"
#include "../../Common/Definition.h"
#include "../Atmega_32_Register.h"

#include "DIO_Private.h"
#include "DIO_Config.h"

 /*Direction*/


/**
 * @fn
 * @brief
 * @param GroupName
 * @param PinNo
 * @param DirectionState
 */
void DIO_DirectionSelectForPin(uint8_t GroupName ,uint8_t PinNo ,uint8_t DirectionState );

/**
 * @fn
 * @brief
 * @param GroupName
 * @param DirectionState
 */
void DIO_DirectionSelectForGroup(uint8_t GroupName ,uint8_t DirectionState );

 /*OutputValue*/
void DIO_WriteForPin(uint8_t GroupName ,uint8_t PinNo ,uint8_t OutputValue );
void DIO_WriteForGroup(uint8_t GroupName ,uint8_t OutputValue );


 /*InputState*/
void DIO_ReadInputForPin(uint8_t GroupName ,uint8_t PinNo ,uint8_t *InputState );
void DIO_ReadInputForGroup(uint8_t GroupName ,uint8_t *InputState);


 /*Toggle*/
void DIO_ToggleForPin(uint8_t GroupName ,uint8_t PinNo );
void DIO_ToggleForGroup(uint8_t GroupName  );
 /*Internal Pull Up */
 void DIO_InternalPullUpControl(uint8_t GroupName ,uint8_t PinNo,uint8_t PullUpState);



#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
