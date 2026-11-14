/*
 * UART_Program.c
 *
 *  Created on: Nov 6, 2026
 *      Author: samsung
 */

#include "UART_Interface.h"


void UART_Int()
{
	//-----------------------
}

void UART_TX_RawData(uint16_t Data)
{
	//------------------------------
	 while (ReadBit(UCSRA_Reg, UDRE) == 0);

	 if (Data & 0x0100)
	 {
	     SetBit(UCSRB_Reg, TXB8);
	 }
	 else
	 {
		 ClearBit(UCSRB_Reg, TXB8);
	 }

	 UDR_Reg = (uint8_t)Data;
}

RX_RawData()
{
	//-------------------
	uint16_t Data;

	while (ReadBit(UCSRA_Reg, RXC) == 0);

	Data = ReadBit(UCSRB_Reg, RXB8);

	Data = (Data << 8);

	Data |= UDR_Reg;

	return Data;
}


void UART_EnableRX()
{
	//--------------
	SetBit(UCSRB_Reg , RXEN);
}
void UARRT_EnableTX()
{
	//---------------------
	SetBit(UCSRB_Reg , TXEN);
}
void UART_DisableRX()
{
	//------------------------
	ClearBit(UCSRB_Reg , RXEN);
}
void UART_DisableTX()
{
	//--------------------------
	ClearBit(UCSRB_Reg , TXEN);
}

