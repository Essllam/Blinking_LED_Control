/******************islam gamal*****************/
#ifndef GPT_INTERFACE_H_
#define GPT_INTERFACE_H_

#include "GPT_Types.h"
#include "Timers_Reg.h"
#include "Bit_Math.h"

void GPT_INT(t_mode mode ,timer_type type ,t_counts counts,t_interrupt interrupt);
void GPT_Enable(timer_type type);
void GPT_Disable(timer_type type);
void GPT_Timer_Start(timer_type type, u32 value);
void GPT_Timer_Stop(timer_type type);

#endif /* GPT_INTERFACE_H_ */