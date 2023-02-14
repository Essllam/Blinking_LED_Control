/*****************islam gamal*******************/

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(Register,Bit_no)  		(Register|=(1<<Bit_no))
#define CLEAR_BIT(Register,Bit_no) 		(Register&=~(1<<Bit_no))
#define TOGGLE_BIT(Register,Bit_no) 	(Register^=(1<<Bit_no))
#define CHECK_BIT(Register,Bit_no)  	((Register>>Bit_no)&0x01)


#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )


#define GET_HW_REG(BaseAddr,RegOffset)      *((volatile u32*)(BaseAddr+RegOffset))
#define GPIO_DIR(BaseAddr)                  *((volatile u32*)BaseAddr+GPIO_DIR_OFFSET) 

#define BASE_ADDRESS_PRE                              0x40000000
#define BASE_ADDRESS_PRE_ALIAS                        0x42000000

#define GET_Register_Offset(RegisterAddr)              ((RegisterAddr - BASE_ADDRESS_PRE)/4)
#define GET_Bit_Offset(RegisterAddr,BitPos)            ((GET_Register_Offset(RegisterAddr)*32) + BitPos)
#define GET_BBAlIAS_PRE_REG(RegisterAddr, BitPos)     (*(volatile uint32*)((GET_Bit_Offset(RegisterAddr,BitPos)*4) + BASE_ADDRESS_PRE_ALIAS))
	
/* Rotate right*/
#define ROR(REG,num) ( REG = (REG>>num) | (REG << ((sizeof(REG) * 8)-num)) )

/* Rotate left */
#define ROL(REG,num) ( REG = (REG<<num) | (REG >> ((sizeof(REG) * 8)-num)) )

#endif /* BIT_MATH_H_ */
