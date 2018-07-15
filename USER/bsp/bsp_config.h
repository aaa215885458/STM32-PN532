#ifndef __BSP_CONFIG_H
#define __BSP_CONFIG_H

//#include "stm32f10x_conf.h"

//功能宏定义
#define WATCHDOG
#define Open_UART1
//#define Open_UART2
#define  DS18B20

#define  LOG_TIME_PRINT             (1)
#define  DEBUG_LOG                  (1)


//LED灯
#define LED_RCC                                   (RCC_APB2Periph_GPIOA)
#define LED_PIN                                   (GPIO_Pin_8)
#define LED_PORT                                  (GPIOA)

//串口
#if defined (Open_UART1)

/***************************************************************
*   UART1_TX   PA9
*   UART1_RX   PA10
****************************************************************/
#define USART1_GPIO_Cmd            RCC_APB2PeriphClockCmd
#define USART1_GPIO_CLK            RCC_APB2Periph_GPIOA

#define USART1_AFIO_Cmd            RCC_APB2PeriphClockCmd
#define USART1_AFIO_CLK            RCC_APB2Periph_AFIO

#define USART1_CLK_Cmd             RCC_APB2PeriphClockCmd
#define USART1_CLK                 RCC_APB2Periph_USART1

#define USART1_GPIO_PORT           GPIOA
#define USART1_RxPin               GPIO_Pin_10
#define USART1_TxPin               GPIO_Pin_9

#endif

#if defined (Open_UART2)

#define USART2_GPIO_Cmd             RCC_APB2PeriphClockCmd
#define USART2_GPIO_CLK             RCC_APB2Periph_GPIOA

#define USART2_AFIO_Cmd             RCC_APB2PeriphClockCmd
#define USART2_AFIO_CLK             RCC_APB2Periph_AFIO

#define USART2_CLK_Cmd              RCC_APB1PeriphClockCmd
#define USART2_CLK                  RCC_APB1Periph_USART2

#define USART2_GPIO_PORT            GPIOA
#define USART2_RxPin                GPIO_Pin_3
#define USART2_TxPin                GPIO_Pin_2

#endif


#if defined (Open_UART3)

#define USART3_GPIO_Cmd             RCC_APB2PeriphClockCmd
#define USART3_GPIO_CLK             RCC_APB2Periph_GPIOC

#define USART3_AFIO_Cmd             RCC_APB2PeriphClockCmd
#define USART3_AFIO_CLK             RCC_APB2Periph_AFIO

#define USART3_CLK_Cmd              RCC_APB1PeriphClockCmd
#define USART3_CLK                  RCC_APB1Periph_USART3

#define USART3_GPIO_PORT            GPIOC
#define USART3_RxPin                GPIO_Pin_11
#define USART3_TxPin                GPIO_Pin_10

#endif

#if defined (DS18B20)

#define DS18B20_RCC                                   (RCC_APB2Periph_GPIOA)
#define DS18B20_PIN                                   (GPIO_Pin_0)
#define DS18B20_PORT                                  (GPIOA)

#endif

#endif




