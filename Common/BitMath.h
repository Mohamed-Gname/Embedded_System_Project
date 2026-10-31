/*
 * BitMath.h
 *
 *  Created on: Oct 16, 2026
 *      Author: samsung
 */

#ifndef COMMON_BITMATH_H_
#define COMMON_BITMATH_H_
//*****************************
#define SetBit(Reg,BitNo)    Reg|=(1<<BitNo)
#define ClearBit(Reg,BitNo)  Reg&=~(1<<BitNo)
#define ToggleBit(Reg,BitNo) Reg^=(1<<BitNo)
#define ReadBit(Reg,BitNo)  (((Reg) >> (BitNo)) & 1)
//*******************************************
//#define ReadBit(Reg,BitNo)  (Reg>>BitNo)&1
//#define ReadBit(Reg, BitNo) (((Reg) >> (BitNo)) & 1U)
#endif /* COMMON_BITMATH_H_ */
