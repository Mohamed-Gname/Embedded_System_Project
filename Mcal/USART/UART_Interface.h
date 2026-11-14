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

#include <stdint.h>

/* Initialization */
void UART_Init(void);

/* Transmit & Receive */
void UART_SendByte(uint8_t Data);
uint8_t UART_ReceiveByte(void);

/* Raw Data */
void UART_TX_RawData(uint16_t Data);
uint16_t UART_RX_RawData(void);

/* Controls */
void UART_EnableRX(void);
void UART_EnableTX(void);
void UART_DisableRX(void);
void UART_DisableTX(void);

/* Status */
uint8_t UART_GetStatus(void);

#endif /* MCAL_USART_UART_INTERFACE_H_ */
