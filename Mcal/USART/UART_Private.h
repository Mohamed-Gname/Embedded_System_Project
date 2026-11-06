/*
 * UART_Private.h
 *
 *  Created on: Nov 6, 2026
 *      Author: samsung
 */

#ifndef MCAL_USART_UART_PRIVATE_H_
#define MCAL_USART_UART_PRIVATE_H_

/*=================================
 * >>>>>USART REGISTER<<<<<<<<<<<<<<
 ===================================*/
//UDR-UBRR(H-L)-UCSRA-UCSRB-UCSRC-
#define UDR_Reg    *((volatile uint8_t*)0x2C)
#define UBRRL_Reg    *((volatile uint8_t*)0x29)
#define UBRRH_Reg    *((volatile uint8_t*)0x40)
#define UCSRA_Reg    *((volatile uint8_t*)0x2B)
#define UCSRB_Reg    *((volatile uint8_t*)0x2A)
#define UCSRC_Reg    *((volatile uint8_t*)0x40)

typedef enum
{
	//UCSRA PINS
	MPCM,
	U2X,
	PE,
	DOR,
	UDRE,
	FE,
	TXC,
	RXC,
	//UCSRB PINS
	TXB8=0,
	RXB8,
	UCSZ2,
	TXEN,
	RXEN,
	UDRIE,
	UDRIE,
	TXCIE,
	RXCIE,
	//UCSRC
	UCPOL=0,
	UCSZ0,
	UCSZ1,
	USBS,
	UPM0,
	UPM1,
	UMSEL,
	URSEL,

}Uart_BitName_t;


typedef enum
{
	Asunch_NormalSpeed,
	Asunch_DoubleSpeed=0x02,
}Uart_SpeedMode_t;

typedef enum
{
	TX_Disable =0x00,
	TX_Enable =0x08,
	RX_Disable =0x00,
	RX_Enable =0x10,
	Both_Enable=0x18,
}Uart_OperationMode_t;


typedef enum
{
	Asunch_NormalSpeed,
	Asunch_DoubleSpeed=0x02,
}Uart_SpeedMode_t;

#endif /* MCAL_USART_UART_PRIVATE_H_ */
