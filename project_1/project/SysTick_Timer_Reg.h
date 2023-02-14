/********************islam gamal**************************/
#ifndef SYSTICK_TIMER_REG_H
#define SYSTICK_TIMER_REG_H

#include "std_Types.h"

/* Systick_BASE*/
#define Systick_BASE    (0xE000E000)
/* Systick_timer_oFFSET*/
#define SysTick_STCTRL_oFFSET					(0x010)     					/* SysTick_Control_and_Status_Register*/
#define SysTick_STRELOAD_oFFSET				(0x014)     					/* SysTick_Reload_Value_Register*/
#define SysTick_STCURRENT_OFFSET			(0x018)     					/* SysTick_Current_Value_Register*/

/* Systick_timer_Register */
#define SysTick_STCTRL_REG				(*(u32 volatile*)(SysTick_STCTRL_oFFSET+Systick_BASE))
#define SysTick_STRELOAD_REG				(*(u32 volatile*)(SysTick_STRELOAD_oFFSET+Systick_BASE))
#define SysTick_STCURRENT_REG				(*(u32 volatile*)(SysTick_STCURRENT_OFFSET+Systick_BASE))
	
#endif /*SYSTICK_TIMER_REG_H*/