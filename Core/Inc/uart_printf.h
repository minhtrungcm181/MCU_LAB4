/*
 * Led7Segment.h
 *
 *  Created on: Nov 1, 2023
 *      Author: Admin
 */

#ifndef INC_UART_PRINTF_H_
#define INC_UART_PRINTF_H_

#include "main.h"
#include <stdio.h>

#ifdef __GNUC__
/* With GCC/RAISONANCE, small printf (option LD Linker->Libraries->Small printf
 set to 'Yes') calls __io_putchar() */
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */

void init_uart_printf(UART_HandleTypeDef *uart);

#endif /* INC_UART_PRINTF_H_ */
