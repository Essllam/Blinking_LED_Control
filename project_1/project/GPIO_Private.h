/*********************islam gamal****************/
#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

#include "std_Types.h"

/*APB*/
#define GPIO_PORTA_BASE 	(0x40004000)
#define GPIO_PORTB_BASE 	(0x40005000)
#define GPIO_PORTC_BASE 	(0x40006000)
#define GPIO_PORTD_BASE 	(0x40007000)
#define GPIO_PORTE_BASE 	(0x40024000)
#define GPIO_PORTF_BASE 	(0x40025000)
#define RCG_BASE              (0x400FE000)

#define GPIO_DATA_OFFSET  (0x3FC)
#define GPIO_RCG_OFFSET   		(0x608)
#define GPIO_DEN_OFFSET   (0x51C)
#define GPIO_DIR_OFFSET   (0x400)
#define GPIO_AFSEL_OFFSET (0x420)
#define GPIO_LOCK_OFFSET  (0x520)
#define GPIO_CR_OFFSET   	(0x524)
#define GPIO_AMSEL_OFFSET (0x528)


/*Direction Register*/
#define GPIOA_DIR_REG     (*(u32 volatile*)(GPIO_PORTA_BASE+GPIO_DIR_OFFSET))
#define GPIOB_DIR_REG     (*(u32 volatile*)(GPIO_PORTB_BASE+GPIO_DIR_OFFSET))
#define GPIOC_DIR_REG     (*(u32 volatile*)(GPIO_PORTC_BASE+GPIO_DIR_OFFSET))
#define GPIOD_DIR_REG     (*(u32 volatile*)(GPIO_PORTD_BASE+GPIO_DIR_OFFSET))
#define GPIOE_DIR_REG     (*(u32 volatile*)(GPIO_PORTE_BASE+GPIO_DIR_OFFSET))
#define GPIOF_DIR_REG     (*(u32 volatile*)(GPIO_PORTF_BASE+GPIO_DIR_OFFSET))


/*Data Register*/
#define GPIOA_DATA_REG     (*(u32 volatile*)(GPIO_PORTA_BASE+GPIO_DATA_OFFSET))
#define GPIOB_DATA_REG     (*(u32 volatile*)(GPIO_PORTB_BASE+GPIO_DATA_OFFSET))
#define GPIOC_DATA_REG     (*(u32 volatile*)(GPIO_PORTC_BASE+GPIO_DATA_OFFSET))
#define GPIOD_DATA_REG     (*(u32 volatile*)(GPIO_PORTD_BASE+GPIO_DATA_OFFSET))
#define GPIOE_DATA_REG     (*(u32 volatile*)(GPIO_PORTE_BASE+GPIO_DATA_OFFSET))
#define GPIOF_DATA_REG     (*(u32 volatile*)(GPIO_PORTF_BASE+GPIO_DATA_OFFSET))
	

/*Digital Enable Register*/
#define GPIOA_DEN_REG     (*(u32 volatile*)(GPIO_PORTA_BASE+GPIO_DEN_OFFSET))
#define GPIOB_DEN_REG     (*(u32 volatile*)(GPIO_PORTB_BASE+GPIO_DEN_OFFSET))
#define GPIOC_DEN_REG     (*(u32 volatile*)(GPIO_PORTC_BASE+GPIO_DEN_OFFSET))
#define GPIOD_DEN_REG     (*(u32 volatile*)(GPIO_PORTD_BASE+GPIO_DEN_OFFSET))
#define GPIOE_DEN_REG     (*(u32 volatile*)(GPIO_PORTE_BASE+GPIO_DEN_OFFSET))
#define GPIOF_DEN_REG     (*(u32 volatile*)(GPIO_PORTF_BASE+GPIO_DEN_OFFSET))
	

/*Digital lock  Register*/
#define GPIOA_LOCK_REG     (*(u32 volatile*)(GPIO_PORTA_BASE+GPIO_LOCK_OFFSET))
#define GPIOB_LOCK_REG     (*(u32 volatile*)(GPIO_PORTB_BASE+GPIO_LOCK_OFFSET))
#define GPIOC_LOCK_REG     (*(u32 volatile*)(GPIO_PORTC_BASE+GPIO_LOCK_OFFSET))
#define GPIOD_LOCK_REG     (*(u32 volatile*)(GPIO_PORTD_BASE+GPIO_LOCK_OFFSET))
#define GPIOE_LOCK_REG     (*(u32 volatile*)(GPIO_PORTE_BASE+GPIO_LOCK_OFFSET))
#define GPIOF_LOCK_REG     (*(u32 volatile*)(GPIO_PORTF_BASE+GPIO_LOCK_OFFSET))
	

/*Digital Commit  Register*/
#define GPIOA_CR_REG     (*(u32 volatile*)(GPIO_PORTA_BASE+GPIO_CR_OFFSET))
#define GPIOB_CR_REG     (*(u32 volatile*)(GPIO_PORTB_BASE+GPIO_CR_OFFSET))
#define GPIOC_CR_REG     (*(u32 volatile*)(GPIO_PORTC_BASE+GPIO_CR_OFFSET))
#define GPIOD_CR_REG     (*(u32 volatile*)(GPIO_PORTD_BASE+GPIO_CR_OFFSET))
#define GPIOE_CR_REG     (*(u32 volatile*)(GPIO_PORTE_BASE+GPIO_CR_OFFSET))
#define GPIOF_CR_REG     (*(u32 volatile*)(GPIO_PORTF_BASE+GPIO_CR_OFFSET))
	

#define GPIOF_AFSEL_REG     (*(u32 volatile*)(GPIO_PORTF_BASE+GPIO_AFSEL_OFFSET))
#define GPIO_RCG_REG     				(*(u32 volatile*)(RCG_BASE+GPIO_RCG_OFFSET))
#define GPIOF_AMSEL_REG     (*(u32 volatile*)(GPIO_PORTF_BASE+GPIO_AMSEL_OFFSET))
	

#endif /* DIO_PRIVATE_H_ */