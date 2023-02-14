/***************islam gamal**************/
#ifndef Dio_Interface_H_
#define Dio_Interface_H_

#include "GPIO_Private.h"
#include "GPIO_Types.h"

void Dio_Config_Channel(Dio_Port port, Dio_Channnel channel, Dio_Channel_Direction dir);
void Dio_Write_Channel(Dio_Port port, Dio_Channnel channel, Dio_Channel_Level level);

#endif /* Dio_Interface_H_ */