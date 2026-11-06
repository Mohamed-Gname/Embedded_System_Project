/*
 * UART_Interface.h
 *
 *  Created on: Nov 6, 2026
 *      Author: samsung
 */

#ifndef MCAL_USART_UART_INTERFACE_H_
#define MCAL_USART_UART_INTERFACE_H_
#include "../Atmega_32_Register.h"
#include "../../Common/BitMath.h"
#include "../../Common/Definition.h"

#include "UART_Private.h"
#include "UART_Config.h"


/*
 * Baud Rate
 * ASyncronization
 * Frame Config (Parity , Data Size , StopBit)
 */
void UART_Int();

/*poling*/
void UART_TX_RawData(uint16_t Data);
uint16_t RX_RawData();

/*Controls*/
void UART_EnableRX();
void UARRT_EnableTX();
void UART_DisableRX();
void UART_DisableTX();



#endif /* MCAL_USART_UART_INTERFACE_H_ */
