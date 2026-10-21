/*
 * DC_Motor_Interface.h
 *
 *  Created on: Oct 17, 2026
 *      Author: samsung
 */

#ifndef HAL_DC_MOTOR_DC_MOTOR_INTERFACE_H_
#define HAL_DC_MOTOR_DC_MOTOR_INTERFACE_H_

#include "../../Mcal/DIO/DIO_Interface.h"
#include "DC_Motor_Private.h"
#include "DC_Motor_Config.h"

void DC_Init(Dc_config_t *Config);
/*API for On Off Control Only*/
void DC_On(Dc_config_t *Config);
void DC_Off(Dc_config_t *Config);
/*API for On Off&Direction Control */
void DC_OnCW(Dc_config_t *Config);
void DC_OnCCW(Dc_config_t *Config);

#endif /* HAL_DC_MOTOR_DC_MOTOR_INTERFACE_H_ */
