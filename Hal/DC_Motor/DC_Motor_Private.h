/*
 * DC_Motor_Private.h
 *
 *  Created on: Oct 17, 2026
 *      Author: samsung
 */

#ifndef HAL_DC_MOTOR_DC_MOTOR_PRIVATE_H_
#define HAL_DC_MOTOR_DC_MOTOR_PRIVATE_H_

#include <stdint.h>


typedef enum
{
    Dc_WithoutHBridge,
    Dc_WithHBridge,
}Dc_ConnectionType_t;

typedef struct
{
    uint8_t ConnectionType;
    uint8_t Dc_M1Group;
    uint8_t Dc_M1Pin;
    uint8_t Dc_M2Group;
    uint8_t Dc_M2Pin;
}Dc_config_t;


#endif /* HAL_DC_MOTOR_DC_MOTOR_PRIVATE_H_ */
