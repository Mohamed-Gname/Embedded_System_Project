/*
 * SevSeg_Interface.h
 *
 *  Created on: Oct 17, 2026
 *      Author: samsung
 */

#ifndef HAL_SEV_SEGMENT_SEVSEG_INTERFACE_H_
#define HAL_SEV_SEGMENT_SEVSEG_INTERFACE_H_

#include <stdint.h>
#include "SevSeg_Private.h"
#include "SevSeg_Config.h"

void SSD_Init(uint8_t SSD_ID);

void SSD_DisplayNo(uint8_t SSD_ID , uint8_t Number);

#endif /* HAL_SEV_SEGMENT_SEVSEG_INTERFACE_H_ */
