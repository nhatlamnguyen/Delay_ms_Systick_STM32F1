#ifndef __DELAY_H
#define __DELAY_H 


//Use systick STM32F10x
// delay ms
#include "stm32f10x.h"

void Delay_ms(uint16_t time);
void SysTick_Configuration(void);

#endif
