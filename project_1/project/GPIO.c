/*******************islam gamal*******************/
#include "GPIO_Interface.h"

/***********Dio_Config_Channel*******************/
void Dio_Config_Channel(Dio_Port port, Dio_Channnel channel, Dio_Channel_Direction dir)
{
	u32 read=0;
switch (port)
{
	case DIO_PORTA:
	SET_BIT(GPIO_RCG_REG,DIO_PORTA);

	for(read=0;read<300000;read++)
	{
	
	}
	SET_BIT(GPIOA_DEN_REG,channel);
	if(dir==OUTPUT)
	{
	SET_BIT(GPIOA_DIR_REG,channel);
	}
	else
	{
	CLEAR_BIT(GPIOA_DIR_REG,channel);
	}
	
	break;
	case DIO_PORTB:
		SET_BIT(GPIO_RCG_REG,DIO_PORTB);

	for(read=0;read<300000;read++)
	{
	
	}
	SET_BIT(GPIOB_DEN_REG,channel);
	if(dir==OUTPUT)
	{
	SET_BIT(GPIOB_DIR_REG,channel);
	}
	else
	{
	CLEAR_BIT(GPIOB_DIR_REG,channel);
	}
	break;
	case DIO_PORTC:
		SET_BIT(GPIO_RCG_REG,DIO_PORTC);

	for(read=0;read<300000;read++)
	{
	
	}
	SET_BIT(GPIOC_DEN_REG,channel);
	if(dir==OUTPUT)
	{
	SET_BIT(GPIOC_DIR_REG,channel);
	}
	else
	{
	CLEAR_BIT(GPIOC_DIR_REG,channel);
	}
	
	break;
	
	
	case DIO_PORTD:
		
	SET_BIT(GPIO_RCG_REG,DIO_PORTD);
	
	for(read=0;read<300000;read++)
	{
	
	}
	SET_BIT(GPIOD_DEN_REG,channel);
	if(dir==OUTPUT)
	{
	SET_BIT(GPIOD_DIR_REG,channel);
	}
	else
	{
	CLEAR_BIT(GPIOD_DIR_REG,channel);
	}
	break;
	
	
	case DIO_PORTE:
		SET_BIT(GPIO_RCG_REG,DIO_PORTE);
	
	for(read=0;read<300000;read++)
	{
	
	}
	SET_BIT(GPIOE_DEN_REG,channel);
	if(dir==OUTPUT)
	{
	SET_BIT(GPIOE_DIR_REG,channel);
	}
	else
	{
	CLEAR_BIT(GPIOE_DIR_REG,channel);
	}
	break;
	
	case DIO_PORTF:
		SET_BIT(GPIO_RCG_REG,DIO_PORTF);

	for(read=0;read<300000;read++)
	{
	
	}
	SET_BIT(GPIOF_DEN_REG,channel);
	if(dir==OUTPUT)
	{
	SET_BIT(GPIOF_DIR_REG,channel);
	}
	else
	{
	CLEAR_BIT(GPIOF_DIR_REG,channel);
	}
	break;
}
}

/*************************Dio_Write_Channel*******************************/
void Dio_Write_Channel(Dio_Port port, Dio_Channnel channel, Dio_Channel_Level level)
{
switch(port)
{
	case DIO_PORTA:
		if(level==HIGH)
		{
		SET_BIT(GPIOA_DATA_REG,channel);
		}
		else
		{
		CLEAR_BIT(GPIOA_DATA_REG,channel);
		}
	break;
	
	
	case DIO_PORTB:
		if(level==HIGH)
		{
		SET_BIT(GPIOB_DATA_REG,channel);
		}
		else
		{
		CLEAR_BIT(GPIOB_DATA_REG,channel);
		}		
	
	break;
	
	
	case DIO_PORTC:
				if(level==HIGH)
		{
		SET_BIT(GPIOC_DATA_REG,channel);
		}
		else
		{
		CLEAR_BIT(GPIOC_DATA_REG,channel);
		}
	break;
	
	
	case DIO_PORTD:
				if(level==HIGH)
		{
		SET_BIT(GPIOD_DATA_REG,channel);
		}
		else
		{
		CLEAR_BIT(GPIOD_DATA_REG,channel);
		}
	break;
	
	
	case DIO_PORTE:
				if(level==HIGH)
		{
		SET_BIT(GPIOE_DATA_REG,channel);
		}
		else
		{
		CLEAR_BIT(GPIOE_DATA_REG,channel);
		}
	
	break;
	
	case DIO_PORTF:
				if(level==HIGH)
		{
		SET_BIT(GPIOF_DATA_REG,channel);
		}
		else
		{
		CLEAR_BIT(GPIOF_DATA_REG,channel);
		}
	
	break;
}
}