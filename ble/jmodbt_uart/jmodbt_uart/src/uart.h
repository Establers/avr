﻿/*
 * uart.h
 *
 * Created: 2019-04-29 오후 7:27:16
 *  Author: yeong
 */ 

#ifndef UART_H_
#define UART_H_

#include <avr/interrupt.h>
#include <avr/io.h>
#include <stdio.h>

void uart1_init(void);
void uart1_rx_int_init(void);
void uart1_trasnmit(char data);
unsigned char uart1_receive(void);

#endif /* UART_H_ */