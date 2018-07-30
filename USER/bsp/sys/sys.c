/*
 * Copyright (c) 2018 zhangyuhude@163.com
 * All Rights Reserved.
 */

#include "sys.h"

/******************************************************************************
 * @brief NVIC_Configuration
 *****************************************************************************/

void NVIC_Configuration(void)
{

    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);	//设置NVIC中断分组2:2位抢占优先级，2位响应优先级

}
