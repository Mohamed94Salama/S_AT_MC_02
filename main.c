/*
 * TIMER_DRIVER2.c
 *
 * Created: 7/9/2021 4:01:47 PM
 * Author : DELLL
 */ 

#include "STD_TYPES.h"
#include "TM.h"
#include "TM_Cfg.h"
#include "BIT_MANIPULATE.h"
#include "DIO.h"
#include "DIO_Cfg.h"

void func(void)
{
	DIO_Toogle(0);
}

int main(void)
{
    DIO_Init();
	Timer_Init();
	Timer_Start(0,1000000,&func);
    while (1) 
    {
		Timer_GetStatus(0);
    }
}

