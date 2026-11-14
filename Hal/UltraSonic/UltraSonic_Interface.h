/*
 * UltraSonic_Interface.h
 *
 *  Created on: Nov 6, 2026
 *      Author: samsung
 */

#ifndef HAL_ULTRASONIC_ULTRASONIC_INTERFACE_H_
#define HAL_ULTRASONIC_ULTRASONIC_INTERFACE_H_

#include <stdint.h>
#include "../../Mcal/DIO/DIO_Interface.h"
#include "../../Mcal/Timer1/T1_Interface.h"

#include "UltraSonic_Private.h"
#include "UltraSonic_Config.h"


void UltraSonic_Init();
void UltraSonic_Trigger();
uint8_t UltraSonic_GetDistance(uint16_t *DistanceValue);

#endif /* HAL_ULTRASONIC_ULTRASONIC_INTERFACE_H_ */
