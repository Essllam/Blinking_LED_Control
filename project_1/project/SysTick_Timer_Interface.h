/**************islam gamal*****************/
#ifndef SYSTICK_TIMER_INTERFACE_H
#define SYSTICK_TIMER_INTERFACE_H

#include "SysTick_Timer_Reg.h"
#include "Bit_Math.h"

 void SysTick_Enable(void);
 void SysTick_Disable(void);
 void SysTick_Int_Enable(void);
 void SysTick_Int_Disable(void);
 void SysTick_Period_Set(u32 ui32Period);
 u32 SysTick_Period_Get(void);

void SysTick_SetISR_CallBack(void(*funPtr)(void));

#endif