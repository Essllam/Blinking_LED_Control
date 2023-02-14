/*********************LED BLINKING********************/
/*********************1st project ********************/
/*********************islam gamal*********************/

#include "GPIO_Interface.h"
#include "SysTick_Timer_Interface.h"

void Delay(u32 ON_delay,u32 OFF_delay);

/**************DONT FORGET TO ADD: memory map add.***********/
//0x40000000, 0x400FFFFF

int main(void)
{
	u32 ON_delay=10000000,OFF_delay=10000000;
	SysTick_Enable();
	
  Dio_Config_Channel(DIO_PORTF,CHANNEL0,OUTPUT);

	while(1)
	{
	Delay(ON_delay,OFF_delay);
	}
	
	return 0;
}


void Delay(u32 ON_delay,u32 OFF_delay)
{
	Dio_Write_Channel(DIO_PORTF,CHANNEL0,HIGH); // LED ON
		SysTick_Period_Set(ON_delay);
		
		
		Dio_Write_Channel(DIO_PORTF,CHANNEL0,LOW); // LED OFF
		SysTick_Period_Set(OFF_delay);
}