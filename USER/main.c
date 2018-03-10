/*
 * Copyright (c) 2018 zhangyuhude@163.com
 * All Rights Reserved.
 */
#include <string.h>
#include "stm32f10x.h"
#include "GPIOLIKE51.h"
#include "led.h"
#include "sys.h"
#include "delay.h"
#include "hal_watchdog.h"
#include "hal_uart.h"
#include "nfc.h"
#include "log.h"


int main(void)
{
    SystemInit();
    NVIC_Configuration();
    delayInit(72);
    LED_Init();
    uartxInit();
    TIM2_Configuration();
#if 0 //暂不使用看门狗
    watchdogInit(2);
#endif
    printf("sys start \r\n");
    nfc_WakeUp();

    while (1)
    {
        printf("test uart \r\n");
        LED_Open();
        delayMs(1000);
        LED_Close();
        delayMs(1000);
    }
}



