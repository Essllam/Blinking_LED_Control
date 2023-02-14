/*********************islam gamal******************/

#include "SysTick_Timer_Interface.h"
 static void (*sysTick_ISR)(void);
 
 void SysTick_Enable(void)
 {
 
	SET_BIT(SysTick_STCTRL_REG,0);
	 SET_BIT(SysTick_STCTRL_REG,2);
 }
 
 void SysTick_Disable(void)
 {
 CLEAR_BIT(SysTick_STCTRL_REG,0);
 }
 

 
 void SysTick_Int_Enable(void)
 {
 SET_BIT(SysTick_STCTRL_REG,1);
 }
 
 void SysTick_Int_Disable(void)
 {
 CLEAR_BIT(SysTick_STCTRL_REG,1);
 }
 
 void SysTick_Period_Set(u32 ui32Period)
 {

 SysTick_STRELOAD_REG=(ui32Period-1);
     while( (SysTick_STCTRL_REG & (1<<16) ) == 0) ; 

 }
 
 u32 SysTick_Period_Get(void)
 {
 
	 return (SysTick_STCURRENT_REG+1);
 }
 /* callback func*/
 void SysTick_SetISR_CallBack( void (*funPtr)(void) ) 
{ 
	sysTick_ISR = funPtr; 
}

void SysTick_Handler(void) 
{ 
	sysTick_ISR(); 
}