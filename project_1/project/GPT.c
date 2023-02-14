#include "GPT_Interface.h"

void GPT_Int( t_mode mode ,timer_type type , t_counts counts,t_interrupt interrupt)
{

	switch(type)
	{
	
		case TIMER0_A_16:
			
		

		SET_BIT(RCGC_TIMER_Reg,0);
		
		

		GPT_MTAILR_Timer0_REG=200&0xFFFF;
		

		CLEAR_BIT(GPT_MCTL_Timer0_REG,TAEN);
		
		GPT_MCFG_Timer0_REG=0x4;
		GPT_MTAPR_Timer0_REG=0xFF;
		
		
	 
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTAMR_Timer0_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTAMR_Timer0_REG,5);

			break;
		}
		
	
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTAMR_Timer0_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTAMR_Timer0_REG,4);
				break;
			}
		switch(mode)
		{
			case SNAPHOT_MODE:
				GPT_MTAMR_Timer0_REG=0x0;

			SET_BIT(GPT_MTAMR_Timer0_REG,7);
			
			SET_BIT(GPT_MTAMR_Timer0_REG,5);
		
			break;
			
			case CONTINUOUS_MODE:
								GPT_MTAMR_Timer0_REG=0x2;

			CLEAR_BIT(GPT_MTAMR_Timer0_REG,7);
			
			break;
		}
		
		
		break;
		
		case TIMER0_A_32:
			
		SET_BIT(RCGCW_TIMER_Reg,0);
		
		CLEAR_BIT(GPT_MCTL_WIDE_Timer0_REG,TAEN);
		
		GPT_MCFG_Timer0_REG=0x4;
		
		GPT_MTAPR_WIDE_Timer0_REG=0xFFFF;
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTAMR_WIDE_Timer0_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
				SET_BIT(GPT_MTAMR_WIDE_Timer0_REG,5);

			break;
		}

			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTAMR_WIDE_Timer0_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTAMR_WIDE_Timer0_REG,4);
				break;
			}
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTAMR_WIDE_Timer0_REG=0x0;
			
			SET_BIT(GPT_MTAMR_WIDE_Timer0_REG,7);
			
			break;
			
			case CONTINUOUS_MODE:
				
			CLEAR_BIT(GPT_MTAMR_Timer0_REG,7);
			GPT_MTAMR_WIDE_Timer0_REG=0x2;
			
		
			break;
		}

		GPT_MTAILR_Timer0_REG=200&0xFFFF;
		break;
		
		case TIMER0_B_16:
			
		SET_BIT(RCGC_TIMER_Reg,0);
		
		CLEAR_BIT(GPT_MCTL_Timer0_REG,TBEN);
		
		GPT_MCFG_Timer0_REG=0x4;
		
		GPT_MTBPR_Timer0_REG=0xFF;
		
	
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTBMR_Timer0_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTBMR_Timer0_REG,5);

			break;
		}
		

			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTBMR_Timer0_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTBMR_Timer0_REG,4);
				break;
			}
		
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTBMR_Timer0_REG=0x0;

			
			SET_BIT(GPT_MTBMR_Timer0_REG,7);
			
		
			break;
			
			case CONTINUOUS_MODE:

			CLEAR_BIT(GPT_MTBMR_Timer0_REG,7);
								GPT_MTBMR_Timer0_REG=0x2;
	
			break;
		}
		break;

		GPT_MTBILR_Timer0_REG=200&0xFFFF;
		case TIMER0_B_32:

		SET_BIT(RCGCW_TIMER_Reg,0);

		CLEAR_BIT(GPT_MCTL_WIDE_Timer0_REG,TBEN);
		GPT_MCFG_Timer0_REG=0x4;
		GPT_MTAPR_WIDE_Timer0_REG=0xFFFF;
		GPT_MTAILR_Timer0_REG=0xFFFF;
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTBMR_WIDE_Timer0_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTBMR_WIDE_Timer0_REG,5);

			break;
		}
		
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTBMR_WIDE_Timer0_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTBMR_WIDE_Timer0_REG,4);
				break;
			}
			
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTBMR_WIDE_Timer0_REG=0x0;
			
			SET_BIT(GPT_MTBMR_WIDE_Timer0_REG,7);
	
			break;
			
			case CONTINUOUS_MODE:
			CLEAR_BIT(GPT_MTBMR_Timer0_REG,7);
								GPT_MTBMR_WIDE_Timer0_REG=0x2;
	
			break;
		}
		break;
		
		
		case TIMER1_A_16:
			
		
		SET_BIT(RCGC_TIMER_Reg,0);
		
		
		CLEAR_BIT(GPT_MCTL_Timer1_REG,TAEN);
		
		GPT_MCFG_Timer1_REG=0x4;
		
		GPT_MTAPR_Timer1_REG=0xFF;
		
		

		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTAMR_Timer1_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTAMR_Timer1_REG,5);

			break;
		}
		

			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTAMR_Timer1_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTAMR_Timer1_REG,4);
				break;
			}
		switch(mode)
		{
			case SNAPHOT_MODE:
				GPT_MTAMR_Timer0_REG=0x0;

			SET_BIT(GPT_MTAMR_Timer1_REG,7);
			
			SET_BIT(GPT_MTAMR_Timer1_REG,5);
			
			
			
				
			
			break;
			
			case CONTINUOUS_MODE:
			GPT_MTAMR_Timer1_REG=0x2;
			CLEAR_BIT(GPT_MTAMR_Timer1_REG,7);
			
			break;
		}
		
		
		break;
		
		case TIMER1_A_32:
			
		
		
		SET_BIT(RCGCW_TIMER_Reg,0);
		
		
				CLEAR_BIT(GPT_MCTL_WIDE_Timer1_REG,TAEN);
		
		
		
		GPT_MCFG_Timer0_REG=0x4;
		
		GPT_MTAPR_WIDE_Timer1_REG=0xFFFF;
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTAMR_WIDE_Timer1_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
				SET_BIT(GPT_MTAMR_WIDE_Timer1_REG,5);

			break;
		}
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTAMR_WIDE_Timer1_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTAMR_WIDE_Timer1_REG,4);
				break;
			}
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTAMR_WIDE_Timer1_REG=0x0;
			
			
			SET_BIT(GPT_MTAMR_WIDE_Timer1_REG,7);
			
			
			
			
			break;
			
			case CONTINUOUS_MODE:
				
			CLEAR_BIT(GPT_MTAMR_Timer1_REG,7);
								GPT_MTAMR_WIDE_Timer1_REG=0x2;
			
			
		
			break;
		}
		
		break;
		
		case TIMER1_B_16:
			
		SET_BIT(RCGC_TIMER_Reg,0);
		
		
		CLEAR_BIT(GPT_MCTL_Timer1_REG,TBEN);
		
		
		GPT_MCFG_Timer1_REG=0x4;
		
		
		GPT_MTBPR_Timer1_REG=0xFF;
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTBMR_Timer1_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTBMR_Timer1_REG,5);

			break;
		}
		
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTBMR_Timer1_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTBMR_Timer1_REG,4);
				break;
			}
		
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTBMR_Timer1_REG=0x0;
			
			SET_BIT(GPT_MTBMR_Timer1_REG,7);
			
		
			break;
			
			case CONTINUOUS_MODE:
			CLEAR_BIT(GPT_MTBMR_Timer1_REG,7);
								GPT_MTBMR_Timer1_REG=0x2;
	
			break;
		}
		break;
		
		case TIMER1_B_32:
		SET_BIT(RCGCW_TIMER_Reg,0);
		CLEAR_BIT(GPT_MCTL_WIDE_Timer1_REG,TBEN);
		GPT_MCFG_Timer1_REG=0x4;
		GPT_MTBPR_WIDE_Timer1_REG=0xFFFF;
		GPT_MTAILR_WIDE_Timer1_REG=0xFFFF;
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTBMR_WIDE_Timer1_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTBMR_WIDE_Timer1_REG,5);

			break;
		}
		
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTBMR_WIDE_Timer1_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTBMR_WIDE_Timer1_REG,4);
				break;
			}
			
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTBMR_WIDE_Timer1_REG=0x0;
			
			SET_BIT(GPT_MTBMR_WIDE_Timer1_REG,7);
	
			break;
			
			case CONTINUOUS_MODE:
			CLEAR_BIT(GPT_MTBMR_WIDE_Timer1_REG,7);
								GPT_MTBMR_WIDE_Timer1_REG=0x2;
	
			break;
		}
		break;
		case TIMER2_A_16:
			
		
		SET_BIT(RCGC_TIMER_Reg,0);
		
		
		CLEAR_BIT(GPT_MCTL_Timer2_REG,TAEN);
		
		
		
		
		GPT_MCFG_Timer2_REG=0x4;
		
		
		
		
		GPT_MTAPR_Timer2_REG=0xFF;
		
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTAMR_Timer2_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTAMR_Timer2_REG,5);

			break;
		}
		
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTAMR_Timer2_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTAMR_Timer2_REG,4);
				break;
			}
		switch(mode)
		{
			case SNAPHOT_MODE:
				GPT_MTAMR_Timer2_REG=0x0;
			SET_BIT(GPT_MTAMR_Timer2_REG,7);
			
			SET_BIT(GPT_MTAMR_Timer2_REG,5);
			
			
		
			break;
			
			case CONTINUOUS_MODE:
								GPT_MTAMR_Timer2_REG=0x2;
			CLEAR_BIT(GPT_MTAMR_Timer2_REG,7);
			
			break;
		}
		
		
		break;
		
		case TIMER2_A_32:
			
		
		
		SET_BIT(RCGCW_TIMER_Reg,0);
		
		
		
		CLEAR_BIT(GPT_MCTL_WIDE_Timer2_REG,TAEN);
		
		
		
		GPT_MCFG_Timer2_REG=0x4;
		
		
		GPT_MTAPR_WIDE_Timer2_REG=0xFFFF;
		

		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTAMR_WIDE_Timer2_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
				SET_BIT(GPT_MTAMR_WIDE_Timer2_REG,5);

			break;
		}
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTAMR_WIDE_Timer2_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTAMR_WIDE_Timer2_REG,4);
				break;
			}
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTAMR_WIDE_Timer2_REG=0x0;
			
			
			SET_BIT(GPT_MTAMR_WIDE_Timer2_REG,7);
			
			
			
			
			break;
			
			case CONTINUOUS_MODE:
				
			CLEAR_BIT(GPT_MTAMR_Timer2_REG,7);
			GPT_MTAMR_WIDE_Timer2_REG=0x2;
			
			
		
			break;
		}
		
		break;
		
		case TIMER2_B_16:
			
		SET_BIT(RCGC_TIMER_Reg,0);
		
		
		CLEAR_BIT(GPT_MCTL_Timer2_REG,TBEN);
		
		
		GPT_MCFG_Timer2_REG=0x4;
		
		
		GPT_MTBPR_Timer2_REG=0xFF;
		
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTBMR_Timer2_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTBMR_Timer2_REG,5);

			break;
		}
		
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTBMR_Timer2_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTBMR_Timer2_REG,4);
				break;
			}
		
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTBMR_Timer2_REG=0x0;
			
			SET_BIT(GPT_MTBMR_Timer2_REG,7);
			
		
			break;
			
			case CONTINUOUS_MODE:
			CLEAR_BIT(GPT_MTBMR_Timer2_REG,7);
								GPT_MTBMR_Timer2_REG=0x2;
	
			break;
		}
		break;
		
		case TIMER2_B_32:
		SET_BIT(RCGCW_TIMER_Reg,0);
		CLEAR_BIT(GPT_MCTL_WIDE_Timer2_REG,TBEN);
		GPT_MCFG_Timer2_REG=0x4;
		GPT_MTBPR_WIDE_Timer2_REG=0xFFFF;
		GPT_MTAILR_Timer2_REG=0xFFFF;
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTBMR_WIDE_Timer2_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTBMR_WIDE_Timer2_REG,5);

			break;
		}
		
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTBMR_WIDE_Timer2_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTBMR_WIDE_Timer2_REG,4);
				break;
			}
			
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTBMR_WIDE_Timer2_REG=0x0;
			
			SET_BIT(GPT_MTBMR_WIDE_Timer2_REG,7);
	
			break;
			
			case CONTINUOUS_MODE:
			CLEAR_BIT(GPT_MTBMR_Timer2_REG,7);
			GPT_MTBMR_WIDE_Timer2_REG=0x2;
	
			break;
		}
		break;
		case TIMER3_A_16:
			
		
		SET_BIT(RCGC_TIMER_Reg,0);
		
		
		
		
		CLEAR_BIT(GPT_MCTL_Timer3_REG,TAEN);

		
		GPT_MCFG_Timer3_REG=0x4;
		
		
		
		
		GPT_MTAPR_Timer3_REG=0xFF;
		
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTAMR_Timer3_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTAMR_Timer3_REG,5);

			break;
		}
		
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTAMR_Timer3_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTAMR_Timer3_REG,4);
				break;
			}
		switch(mode)
		{
			case SNAPHOT_MODE:
				GPT_MTAMR_Timer3_REG=0x0;
			SET_BIT(GPT_MTAMR_Timer3_REG,7);
			
			SET_BIT(GPT_MTAMR_Timer3_REG,5);
			
			
			
				
			
			break;
			
			case CONTINUOUS_MODE:
								GPT_MTAMR_Timer3_REG=0x2;
			CLEAR_BIT(GPT_MTAMR_Timer3_REG,7);
			
			break;
		}
		
		
		break;
		
		case TIMER3_A_32:
			
		
		
		SET_BIT(RCGCW_TIMER_Reg,0);
		
		
		
		CLEAR_BIT(GPT_MCTL_WIDE_Timer3_REG,TAEN);
		
		
		
		GPT_MCFG_WIDE_Timer3_REG=0x4;
		
		
		GPT_MTAPR_WIDE_Timer3_REG=0xFFFF;
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTAMR_WIDE_Timer3_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
				SET_BIT(GPT_MTAMR_WIDE_Timer3_REG,5);

			break;
		}
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTAMR_WIDE_Timer3_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTAMR_WIDE_Timer3_REG,4);
				break;
			}
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTAMR_WIDE_Timer3_REG=0x0;
			
			
			SET_BIT(GPT_MTAMR_WIDE_Timer3_REG,7);
			
			
			
			
			break;
			
			case CONTINUOUS_MODE:
				
			CLEAR_BIT(GPT_MTAMR_Timer3_REG,7);
								GPT_MTAMR_WIDE_Timer3_REG=0x2;
			
			
		
			break;
		}
		
		break;
		
		case TIMER3_B_16:
			
		SET_BIT(RCGC_TIMER_Reg,0);
		
		
		CLEAR_BIT(GPT_MCTL_Timer3_REG,TBEN);
		
		
		GPT_MCFG_Timer3_REG=0x4;
		
		
		GPT_MTBPR_Timer3_REG=0xFF;
		
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTBMR_Timer3_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTBMR_Timer3_REG,5);

			break;
		}
		
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTBMR_Timer3_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTBMR_Timer3_REG,4);
				break;
			}
		
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTBMR_Timer3_REG=0x0;
			
			SET_BIT(GPT_MTBMR_Timer3_REG,7);
			
		
			break;
			
			case CONTINUOUS_MODE:
			CLEAR_BIT(GPT_MTBMR_Timer3_REG,7);
								GPT_MTBMR_Timer3_REG=0x2;
	
			break;
		}
		break;
		
		case TIMER3_B_32:
		SET_BIT(RCGCW_TIMER_Reg,0);
		CLEAR_BIT(GPT_MCTL_WIDE_Timer3_REG,TBEN);
		GPT_MCFG_Timer3_REG=0x4;
		GPT_MTBPR_WIDE_Timer3_REG=0xFFFF;
		GPT_MTAILR_WIDE_Timer3_REG=0xFFFF;
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTBMR_WIDE_Timer3_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTBMR_WIDE_Timer3_REG,5);

			break;
		}
		
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTBMR_WIDE_Timer3_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTBMR_WIDE_Timer3_REG,4);
				break;
			}
			
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTBMR_WIDE_Timer3_REG=0x0;
			
			SET_BIT(GPT_MTBMR_WIDE_Timer3_REG,7);
	
			break;
			
			case CONTINUOUS_MODE:
			CLEAR_BIT(GPT_MTBMR_WIDE_Timer3_REG,7);
								GPT_MTBMR_WIDE_Timer3_REG=0x2;
	
			break;
		}
		break;
		case TIMER4_A_16:
			
		
		SET_BIT(RCGC_TIMER_Reg,0);
		
		
		
		
		CLEAR_BIT(GPT_MCTL_Timer4_REG,TAEN);
		
		
		
		GPT_MCFG_Timer4_REG=0x4;
		
		
		
		
		GPT_MTAPR_Timer4_REG=0xFF;
		
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTAMR_Timer4_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTAMR_Timer4_REG,5);

			break;
		}
		
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTAMR_Timer4_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTAMR_Timer4_REG,4);
				break;
			}
		switch(mode)
		{
			case SNAPHOT_MODE:
				GPT_MTAMR_Timer4_REG=0x0;
			SET_BIT(GPT_MTAMR_Timer4_REG,7);
			
			SET_BIT(GPT_MTAMR_Timer4_REG,5);
			
			
			
				
			
			break;
			
			case CONTINUOUS_MODE:
								GPT_MTAMR_Timer4_REG=0x2;
			CLEAR_BIT(GPT_MTAMR_Timer4_REG,7);
			
			break;
		}
		
		
		break;
		
		case TIMER4_A_32:
			
		
		
		SET_BIT(RCGCW_TIMER_Reg,0);
		
		
		
		CLEAR_BIT(GPT_MCTL_WIDE_Timer4_REG,TAEN);
		
		
		
		GPT_MCFG_WIDE_Timer4_REG=0x4;
		
		
		GPT_MTAPR_WIDE_Timer4_REG=0xFFFF;
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTAMR_WIDE_Timer4_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
				SET_BIT(GPT_MTAMR_WIDE_Timer4_REG,5);

			break;
		}
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTAMR_WIDE_Timer4_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTAMR_WIDE_Timer4_REG,4);
				break;
			}
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTAMR_WIDE_Timer4_REG=0x0;
			
			
			SET_BIT(GPT_MTAMR_WIDE_Timer4_REG,7);
			
			
			
			
			break;
			
			case CONTINUOUS_MODE:
				
			CLEAR_BIT(GPT_MTAMR_WIDE_Timer4_REG,7);
								GPT_MTAMR_WIDE_Timer4_REG=0x2;
			
			
		
			break;
		}
		
		break;
		
		case TIMER4_B_16:
			
		SET_BIT(RCGC_TIMER_Reg,0);
		
		
		CLEAR_BIT(GPT_MCTL_Timer4_REG,TBEN);
		
		
		GPT_MCFG_Timer4_REG=0x4;
		
		
		GPT_MTBPR_Timer4_REG=0xFF;
		
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTBMR_Timer4_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTBMR_Timer4_REG,5);

			break;
		}
		
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTBMR_Timer4_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTBMR_Timer4_REG,4);
				break;
			}
		
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTBMR_Timer4_REG=0x0;
			
			SET_BIT(GPT_MTBMR_Timer4_REG,7);
			
		
			break;
			
			case CONTINUOUS_MODE:
			CLEAR_BIT(GPT_MTBMR_Timer4_REG,7);
								GPT_MTBMR_Timer4_REG=0x2;
	
			break;
		}
		break;
		
		case TIMER4_B_32:
		SET_BIT(RCGCW_TIMER_Reg,0);
		CLEAR_BIT(GPT_MCTL_WIDE_Timer4_REG,TBEN);
		GPT_MCFG_WIDE_Timer4_REG=0x4;
		GPT_MTBPR_WIDE_Timer4_REG=0xFFFF;
		GPT_MTAILR_WIDE_Timer4_REG=0xFFFF;
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTBMR_WIDE_Timer4_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTBMR_WIDE_Timer4_REG,5);

			break;
		}
		
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTBMR_WIDE_Timer4_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTBMR_WIDE_Timer4_REG,4);
				break;
			}
			
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTBMR_WIDE_Timer4_REG=0x0;
			
			SET_BIT(GPT_MTBMR_WIDE_Timer4_REG,7);
	
			break;
			
			case CONTINUOUS_MODE:
			CLEAR_BIT(GPT_MTBMR_WIDE_Timer4_REG,7);
								GPT_MTBMR_WIDE_Timer4_REG=0x2;
	
			break;
		}
		break;
		case TIMER5_A_16:
			
		
		SET_BIT(RCGC_TIMER_Reg,0);

		
		CLEAR_BIT(GPT_MCTL_Timer5_REG,TAEN);
				
		GPT_MCFG_Timer5_REG=0x4;
		

		GPT_MTAPR_Timer5_REG=0xFF;
		
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTAMR_Timer5_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTAMR_Timer5_REG,5);

			break;
		}
		
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTAMR_Timer5_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTAMR_Timer5_REG,4);
				break;
			}
		switch(mode)
		{
			case SNAPHOT_MODE:
				GPT_MTAMR_Timer5_REG=0x0;
			SET_BIT(GPT_MTAMR_Timer5_REG,7);
			
			SET_BIT(GPT_MTAMR_Timer5_REG,5);
			
			
			
				
			
			break;
			
			case CONTINUOUS_MODE:
			GPT_MTAMR_Timer5_REG=0x2;
			CLEAR_BIT(GPT_MTAMR_Timer5_REG,7);
			
			break;
		}
		
		
		break;
		
		case TIMER5_A_32:
			
		
		SET_BIT(RCGCW_TIMER_Reg,0);

		CLEAR_BIT(GPT_MCTL_WIDE_Timer5_REG,TAEN);
		
		
		
		GPT_MCFG_WIDE_Timer5_REG=0x4;
		
		
		GPT_MTAPR_WIDE_Timer5_REG=0xFFFF;
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTAMR_WIDE_Timer5_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
				SET_BIT(GPT_MTAMR_WIDE_Timer5_REG,5);

			break;
		}
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTAMR_WIDE_Timer5_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTAMR_WIDE_Timer5_REG,4);
				break;
			}
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTAMR_WIDE_Timer5_REG=0x0;
			
			
			SET_BIT(GPT_MTAMR_WIDE_Timer5_REG,7);
			
			
			
			
			break;
			
			case CONTINUOUS_MODE:
				
			CLEAR_BIT(GPT_MTAMR_WIDE_Timer5_REG,7);
								GPT_MTAMR_WIDE_Timer5_REG=0x2;
			
			
		
			break;
		}
		
		break;
		
		case TIMER5_B_16:
			
		SET_BIT(RCGC_TIMER_Reg,0);
		
		
		CLEAR_BIT(GPT_MCTL_Timer5_REG,TBEN);
		
		GPT_MCFG_Timer5_REG=0x4;

		GPT_MTBPR_Timer5_REG=0xFF;
		
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTBMR_Timer5_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTBMR_Timer5_REG,5);

			break;
		}
		
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTBMR_Timer5_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTBMR_Timer5_REG,4);
				break;
			}
		
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTBMR_Timer5_REG=0x0;
			
			SET_BIT(GPT_MTBMR_Timer5_REG,7);
			
		
			break;
			
			case CONTINUOUS_MODE:
			CLEAR_BIT(GPT_MTBMR_Timer5_REG,7);
								GPT_MTBMR_Timer5_REG=0x2;
	
			break;
		}
		break;
		
		case TIMER5_B_32:
		SET_BIT(RCGCW_TIMER_Reg,0);
		CLEAR_BIT(GPT_MCTL_WIDE_Timer5_REG,TBEN);
		GPT_MCFG_WIDE_Timer5_REG=0x4;
		GPT_MTBPR_WIDE_Timer5_REG=0xFFFF;
		GPT_MTAILR_WIDE_Timer5_REG=0xFFFF;
		
		switch(interrupt)
		{
			case INTERRUPT_ENABLE:
				SET_BIT(GPT_MTBMR_WIDE_Timer5_REG,5);
			
			break;
			
			case INTERRUPT_DISABLE:
								SET_BIT(GPT_MTBMR_WIDE_Timer5_REG,5);

			break;
		}
		
			switch (counts)
			{
				case COUNT_UP:
					CLEAR_BIT(GPT_MTBMR_WIDE_Timer5_REG,4);
				break;
				
				case COUNT_DOWN:
					SET_BIT(GPT_MTBMR_WIDE_Timer5_REG,4);
				break;
			}
			
					switch(mode)
		{
			case SNAPHOT_MODE:
								GPT_MTBMR_WIDE_Timer0_REG=0x0;
			
			SET_BIT(GPT_MTBMR_WIDE_Timer0_REG,7);
	
			break;
			
			case CONTINUOUS_MODE:
			CLEAR_BIT(GPT_MTBMR_WIDE_Timer5_REG,7);
								GPT_MTBMR_WIDE_Timer5_REG=0x2;
	
			break;
		}
		break;
				
	}


}

void GPT_Notification_Disable(timer_type type)
{

	switch (type)
	{
		case TIMER0_A_16:
			CLEAR_BIT(GPT_MIMR_Timer0_REG,4);
			break;
		
		case TIMER0_A_32:
			CLEAR_BIT(GPT_MIMR_WIDE_Timer0_REG,4);
		break;
		case TIMER0_B_16:
			CLEAR_BIT(GPT_MIMR_Timer0_REG,11);
		break;
		
		case TIMER0_B_32:
			CLEAR_BIT(GPT_MIMR_WIDE_Timer0_REG,11);
		break;
		case TIMER1_A_16:
			CLEAR_BIT(GPT_MIMR_Timer1_REG,4);
			break;
		
		case TIMER1_A_32:
			CLEAR_BIT(GPT_MIMR_WIDE_Timer1_REG,4);
		break;
		case TIMER1_B_16:
			CLEAR_BIT(GPT_MIMR_Timer1_REG,11);
		break;
		
		case TIMER1_B_32:
			CLEAR_BIT(GPT_MIMR_WIDE_Timer1_REG,11);
		break;
		case TIMER2_A_16:
			CLEAR_BIT(GPT_MIMR_Timer2_REG,4);
			break;
		
		case TIMER2_A_32:
			CLEAR_BIT(GPT_MIMR_WIDE_Timer2_REG,4);
		break;
		case TIMER2_B_16:
			CLEAR_BIT(GPT_MIMR_Timer2_REG,11);
		break;
		
		case TIMER2_B_32:
			CLEAR_BIT(GPT_MIMR_WIDE_Timer2_REG,11);
		break;
		case TIMER3_A_16:
			CLEAR_BIT(GPT_MIMR_Timer3_REG,4);
			break;
		
		case TIMER3_A_32:
			CLEAR_BIT(GPT_MIMR_WIDE_Timer3_REG,4);
		break;
		case TIMER3_B_16:
			CLEAR_BIT(GPT_MIMR_Timer3_REG,11);
		break;
		
		case TIMER3_B_32:
			CLEAR_BIT(GPT_MIMR_WIDE_Timer3_REG,11);
		break;
		case TIMER4_A_16:
			CLEAR_BIT(GPT_MIMR_Timer4_REG,4);
			break;
		
		case TIMER4_A_32:
			CLEAR_BIT(GPT_MIMR_WIDE_Timer4_REG,4);
		break;
		case TIMER4_B_16:
			CLEAR_BIT(GPT_MIMR_Timer4_REG,11);
		break;
		
		case TIMER4_B_32:
			CLEAR_BIT(GPT_MIMR_WIDE_Timer4_REG,11);
		break;
		case TIMER5_A_16:
			CLEAR_BIT(GPT_MIMR_Timer5_REG,4);
			break;
		
		case TIMER5_A_32:
			CLEAR_BIT(GPT_MIMR_WIDE_Timer5_REG,4);
		break;
		case TIMER5_B_16:
			CLEAR_BIT(GPT_MIMR_Timer5_REG,11);
		break;
		
		case TIMER5_B_32:
			CLEAR_BIT(GPT_MIMR_WIDE_Timer5_REG,11);
		break;
	
	}		
		
}	
	void GPT_Notification_Enable(timer_type type)
{
switch (type)
	{
		case TIMER0_A_16:
			CLEAR_BIT(GPT_MIMR_Timer0_REG,4);
			break;
		
		case TIMER0_A_32:
			SET_BIT(GPT_MIMR_WIDE_Timer0_REG,4);
		break;
		case TIMER0_B_16:
			SET_BIT(GPT_MIMR_Timer0_REG,11);
		break;
		
		case TIMER0_B_32:
			SET_BIT(GPT_MIMR_WIDE_Timer0_REG,11);
		break;
		case TIMER1_A_16:
			SET_BIT(GPT_MIMR_Timer1_REG,4);
			break;
		
		case TIMER1_A_32:
			SET_BIT(GPT_MIMR_WIDE_Timer1_REG,4);
		break;
		case TIMER1_B_16:
			SET_BIT(GPT_MIMR_Timer1_REG,11);
		break;
		
		case TIMER1_B_32:
			SET_BIT(GPT_MIMR_WIDE_Timer1_REG,11);
		break;
		case TIMER2_A_16:
			SET_BIT(GPT_MIMR_Timer2_REG,4);
			break;
		
		case TIMER2_A_32:
			SET_BIT(GPT_MIMR_WIDE_Timer2_REG,4);
		break;
		case TIMER2_B_16:
			SET_BIT(GPT_MIMR_Timer2_REG,11);
		break;
		
		case TIMER2_B_32:
			SET_BIT(GPT_MIMR_WIDE_Timer2_REG,11);
		break;
		case TIMER3_A_16:
			SET_BIT(GPT_MIMR_Timer3_REG,4);
			break;
		
		case TIMER3_A_32:
			SET_BIT(GPT_MIMR_WIDE_Timer3_REG,4);
		break;
		case TIMER3_B_16:
			SET_BIT(GPT_MIMR_Timer3_REG,11);
		break;
		
		case TIMER3_B_32:
			SET_BIT(GPT_MIMR_WIDE_Timer3_REG,11);
		break;
		case TIMER4_A_16:
			SET_BIT(GPT_MIMR_Timer4_REG,4);
			break;
		
		case TIMER4_A_32:
			SET_BIT(GPT_MIMR_WIDE_Timer4_REG,4);
		break;
		case TIMER4_B_16:
			SET_BIT(GPT_MIMR_Timer4_REG,11);
		break;
		
		case TIMER4_B_32:
			SET_BIT(GPT_MIMR_WIDE_Timer4_REG,11);
		break;
		case TIMER5_A_16:
			SET_BIT(GPT_MIMR_Timer5_REG,4);
			break;
		
		case TIMER5_A_32:
			SET_BIT(GPT_MIMR_WIDE_Timer5_REG,4);
		break;
		case TIMER5_B_16:
			SET_BIT(GPT_MIMR_Timer5_REG,11);
		break;
		
		case TIMER5_B_32:
			SET_BIT(GPT_MIMR_WIDE_Timer5_REG,11);
		break;
	
	}		
}



void Gpt_Timer_Start(timer_type type, u32 value)
{
switch (type)
{
	case TIMER0_A_16:
		SET_BIT(GPT_MCTL_Timer0_REG,0);
	GPT_MTAILR_Timer0_REG=value&0xFFFF;
	break;
	
	case TIMER0_A_32:
				SET_BIT(GPT_MCTL_WIDE_Timer0_REG,0);
	GPT_MTAILR_WIDE_Timer0_REG=value&0xFFFF;
	break;
	
	case TIMER0_B_16:
				SET_BIT(GPT_MCTL_Timer0_REG,8);
	GPT_MTBILR_Timer0_REG=value&0xFFFF;
	break;
	case TIMER0_B_32:
				SET_BIT(GPT_MCTL_WIDE_Timer0_REG,8);
	GPT_MTBILR_WIDE_Timer0_REG=value&0xFFFF;
	break;
		case TIMER1_A_16:
		SET_BIT(GPT_MCTL_Timer1_REG,0);
	GPT_MTAILR_Timer1_REG=value&0xFFFF;
	break;
	
	case TIMER1_A_32:
				SET_BIT(GPT_MCTL_WIDE_Timer1_REG,0);
	GPT_MTAILR_WIDE_Timer1_REG=value&0xFFFF;
	break;
	
	case TIMER1_B_16:
				SET_BIT(GPT_MCTL_Timer1_REG,8);
	GPT_MTBILR_Timer1_REG=value&0xFFFF;
	break;
	case TIMER1_B_32:
				SET_BIT(GPT_MCTL_WIDE_Timer1_REG,8);
	GPT_MTBILR_WIDE_Timer1_REG=value&0xFFFF;
	break;
		case TIMER2_A_16:
		SET_BIT(GPT_MCTL_Timer2_REG,0);
	GPT_MTAILR_Timer2_REG=value&0xFFFF;
	break;
	
	case TIMER2_A_32:
				SET_BIT(GPT_MCTL_WIDE_Timer2_REG,0);
	GPT_MTAILR_WIDE_Timer2_REG=value&0xFFFF;
	break;
	
	case TIMER2_B_16:
				SET_BIT(GPT_MCTL_Timer2_REG,8);
	GPT_MTBILR_Timer2_REG=value&0xFFFF;
	break;
	case TIMER2_B_32:
				SET_BIT(GPT_MCTL_WIDE_Timer2_REG,8);
	GPT_MTBILR_WIDE_Timer2_REG=value&0xFFFF;
	break;
		case TIMER3_A_16:
		SET_BIT(GPT_MCTL_Timer3_REG,0);
	GPT_MTAILR_Timer3_REG=value&0xFFFF;
	break;
	
	case TIMER3_A_32:
				SET_BIT(GPT_MCTL_WIDE_Timer3_REG,0);
	GPT_MTAILR_WIDE_Timer3_REG=value&0xFFFF;
	break;
	
	case TIMER3_B_16:
				SET_BIT(GPT_MCTL_Timer3_REG,8);
	GPT_MTBILR_Timer3_REG=value&0xFFFF;
	break;
	case TIMER3_B_32:
				SET_BIT(GPT_MCTL_WIDE_Timer3_REG,8);
	GPT_MTBILR_WIDE_Timer3_REG=value&0xFFFF;
	break;
		case TIMER4_A_16:
		SET_BIT(GPT_MCTL_Timer4_REG,0);
	GPT_MTAILR_Timer4_REG=value&0xFFFF;
	break;
	
	case TIMER4_A_32:
				SET_BIT(GPT_MCTL_WIDE_Timer4_REG,0);
	GPT_MTAILR_WIDE_Timer4_REG=value&0xFFFF;
	break;
	
	case TIMER4_B_16:
				SET_BIT(GPT_MCTL_Timer4_REG,8);
	GPT_MTBILR_Timer4_REG=value&0xFFFF;
	break;
	case TIMER4_B_32:
				SET_BIT(GPT_MCTL_WIDE_Timer4_REG,8);
	GPT_MTBILR_WIDE_Timer4_REG=value&0xFFFF;
	break;
		case TIMER5_A_16:
		SET_BIT(GPT_MCTL_Timer5_REG,0);
	GPT_MTAILR_Timer5_REG=value&0xFFFF;
	break;
	
	case TIMER5_A_32:
				SET_BIT(GPT_MCTL_WIDE_Timer5_REG,0);
	GPT_MTAILR_WIDE_Timer5_REG=value&0xFFFF;
	break;
	
	case TIMER5_B_16:
				SET_BIT(GPT_MCTL_Timer5_REG,8);
	GPT_MTBILR_Timer5_REG=value&0xFFFF;
	break;
	case TIMER5_B_32:
				SET_BIT(GPT_MCTL_WIDE_Timer5_REG,8);
	GPT_MTBILR_WIDE_Timer5_REG=value&0xFFFF;
	break;
}
}

void Gpt_Timer_Stop(timer_type type)
{
switch (type)
{
	case TIMER0_A_16:
		CLEAR_BIT(GPT_MCTL_Timer0_REG,0);
	
	break;
	
	case TIMER0_A_32:
				CLEAR_BIT(GPT_MCTL_WIDE_Timer0_REG,0);
	break;
	
	case TIMER0_B_16:
				CLEAR_BIT(GPT_MCTL_Timer0_REG,8);
	break;
	case TIMER0_B_32:
				CLEAR_BIT(GPT_MCTL_WIDE_Timer0_REG,8);
	break;
		case TIMER1_A_16:
		CLEAR_BIT(GPT_MCTL_Timer1_REG,0);
	break;
	
	case TIMER1_A_32:
				CLEAR_BIT(GPT_MCTL_WIDE_Timer1_REG,0);
	break;
	
	case TIMER1_B_16:
				CLEAR_BIT(GPT_MCTL_Timer1_REG,8);
	break;
	case TIMER1_B_32:
				CLEAR_BIT(GPT_MCTL_WIDE_Timer1_REG,8);
	break;
		case TIMER2_A_16:
		CLEAR_BIT(GPT_MCTL_Timer2_REG,0);
	break;
	
	case TIMER2_A_32:
				CLEAR_BIT(GPT_MCTL_WIDE_Timer2_REG,0);
	break;
	
	case TIMER2_B_16:
				CLEAR_BIT(GPT_MCTL_Timer2_REG,8);
	break;
	case TIMER2_B_32:
				CLEAR_BIT(GPT_MCTL_WIDE_Timer2_REG,8);
	break;
		case TIMER3_A_16:
		CLEAR_BIT(GPT_MCTL_Timer3_REG,0);
	break;
	
	case TIMER3_A_32:
				CLEAR_BIT(GPT_MCTL_WIDE_Timer3_REG,0);
	break;
	
	case TIMER3_B_16:
				CLEAR_BIT(GPT_MCTL_Timer3_REG,8);
	break;
	case TIMER3_B_32:
				CLEAR_BIT(GPT_MCTL_WIDE_Timer3_REG,8);
	break;
		case TIMER4_A_16:
		CLEAR_BIT(GPT_MCTL_Timer4_REG,0);
	break;
	
	case TIMER4_A_32:
				CLEAR_BIT(GPT_MCTL_WIDE_Timer4_REG,0);
	break;
	
	case TIMER4_B_16:
				CLEAR_BIT(GPT_MCTL_Timer4_REG,8);
	break;
	case TIMER4_B_32:
				CLEAR_BIT(GPT_MCTL_WIDE_Timer4_REG,8);
	break;
		case TIMER5_A_16:
		CLEAR_BIT(GPT_MCTL_Timer5_REG,0);
	break;
	
	case TIMER5_A_32:
				CLEAR_BIT(GPT_MCTL_WIDE_Timer5_REG,0);
	break;
	
	case TIMER5_B_16:
				CLEAR_BIT(GPT_MCTL_Timer5_REG,8);
	break;
	case TIMER5_B_32:
				CLEAR_BIT(GPT_MCTL_WIDE_Timer5_REG,8);
	break;
}
}



