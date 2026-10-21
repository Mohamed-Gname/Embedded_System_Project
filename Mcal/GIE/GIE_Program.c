/*
 * GIE_Program.c
 *
 *  Created on: Oct 16, 2026
 *      Author: samsung
 */
#include "GIE_Interface.h"

void GIE_Enable()
{
    SetBit(SREG_Reg,7);
}

void GIE_Disable()
{
    ClearBit(SREG_Reg,7);
}

