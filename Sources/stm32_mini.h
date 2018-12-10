#ifndef __STM32_MINI_H
#define __STM32_MINI_H

#include "main.h"

#define GPIO_RCC_CMD						RCC_APB2PeriphClockCmd

#define AFIO_RCC							RCC_APB2Periph_AFIO

#define GPIO_ToggleBits(GPIOx, GPIO_Pin)	GPIOx->ODR ^= GPIO_Pin

#define LED_GPIO							GPIOC
#define LED_RCC								RCC_APB2Periph_GPIOC
#define LED_D4								GPIO_Pin_2
#define LED_D5								GPIO_Pin_3
#define LED_D4_ON							GPIO_ResetBits(LED_GPIO, LED_D4)
#define LED_D4_OFF							GPIO_SetBits(LED_GPIO, LED_D4)
#define LED_D4_TOGGLE						GPIO_ToggleBits(LED_GPIO, LED_D4)
#define LED_D5_ON							GPIO_ResetBits(LED_GPIO, LED_D5)
#define LED_D5_OFF							GPIO_SetBits(LED_GPIO, LED_D5)
#define LED_D5_TOGGLE						GPIO_ToggleBits(LED_GPIO, LED_D5)

#define DEBUG_UART							USART1
#define DEBUG_UART_RCC						RCC_APB2Periph_USART1
#define DEBUG_UART_RCC_CMD					RCC_APB2PeriphClockCmd
#define DEBUG_UART_GPIO						GPIOA
#define DEBUG_UART_GPIO_RCC					RCC_APB2Periph_GPIOA
#define DEBUG_UART_TX						GPIO_Pin_9
#define DEBUG_UART_RX						GPIO_Pin_10
#define DEBUG_UART_BAUDRATE					115200
#define DEBUG_UART_IRQ						USART1_IRQn
#define DEBUG_UART_IRQ_HANDLER				USART1_IRQHandler
#define DEBUG_UART_PRIPRIO					2
#define DEBUG_UART_SUBPRIO					2

#define LED_TIM_PSC							36000-1		// 2 KHz TIM
#define LED_TIM_PERIOD						1000-1		// 1 Hz blink frequency
#define LED_TIM								TIM2
#define LED_TIM_RCC							RCC_APB1Periph_TIM2
#define LED_TIM_RCC_CMD						RCC_APB1PeriphClockCmd
#define LED_TIM_IRQ							TIM2_IRQn
#define LED_TIM_IRQ_HANDLER					TIM2_IRQHandler

void mini_delay_us(uint32_t us);

void mini_led_config(void);
void mini_uart_config(void);
void mini_tim_config(void);

#endif
