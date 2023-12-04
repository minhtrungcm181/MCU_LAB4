/*
 * Scheduler.c
 *
 *  Created on: Nov 1, 2023
 *      Author: Admin
 */

#include "uart_printf.h"

UART_HandleTypeDef *huart;

void init_uart_printf(UART_HandleTypeDef *uart) {
	huart = uart;
}

PUTCHAR_PROTOTYPE
{
 /* Place your implementation of fputc here */
 /* e.g. write a character to the USART2 and Loop until the end of transmission */
 HAL_UART_Transmit(huart, (uint8_t *)&ch, 1, 0xFFFF);

return ch;
}
