/*
 * TIMER_testcases.c
 *
 * Created: 8/7/2021 1:16:32 AM
 * Author : DELLL
 */ 

#include "DIO.h"
#include "UART.h"
#include "TM.h"

void func(void)
{
	DIO_Toggle(1);
}

int main(void)
{
	DIO_Init();
	UART_Init();
    Timer_Init_test();
	Timer_Start_test(0, 1000000, &func);
    while (1) 
    {
		Timer_GetStatus_test(0);
		break;
    }
}

