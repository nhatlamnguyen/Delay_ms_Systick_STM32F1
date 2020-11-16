#include "delay.h"



#include "stm32f10x.h"


uint32_t Timingdelay;


void Delay_ms(uint16_t time)
	{
		SysTick->CTRL = 0x00000005;
		SysTick->VAL =0;
		SysTick->LOAD = 72000-1;	

		Timingdelay = time;
		while(Timingdelay!=0)
			{
				while( (SysTick->CTRL&0x10000)==0x10000) // kiem tra co CONUNTFLAG
					{
						Timingdelay--;
					}
			}
	}
void SysTick_Configuration(void)
	{
		/*	
		 CTRL = 101  => CLKSOUCE = 1
		 				TICKINT = 0 KO BAT NGAT
		 				ENABLE = 1 
		*/
		
	}



