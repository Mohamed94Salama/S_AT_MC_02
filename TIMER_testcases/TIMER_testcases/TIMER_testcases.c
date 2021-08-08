/*
 * TIMER_testcases.c
 *
 * Created: 8/7/2021 1:22:14 AM
 *  Author: DELLL
 */ 

#include "TIMER_testcases.h"
void Timer_Init_test(void)
{
	uint8_t res=Timer_Init();
	if(res==E_OK)
	{
		UART_SendString("PASS");
		UART_SendData('\r');
	}else if(res==E_ERROR)
	{
		UART_SendString("FAILED");
		UART_SendData('\r');
	}
}

void Timer_Start_test(uint8_t u8GroupId, uint64_t u32TimerValueUS, void(*pfCallback)(void))
{
	uint8_t res=Timer_Start(u8GroupId, u32TimerValueUS, pfCallback);
		if(res==E_OK)
		{
			UART_SendString("PASS");
			UART_SendData('\r');
		}else if(res==E_ERROR)
		{
			UART_SendString("FAILED");
			UART_SendData('\r');
		}
}

void Timer_Stop_test(uint8_t u8GroupId)
{
	uint8_t res=Timer_Stop(u8GroupId);
	if(res==E_OK)
	{
		UART_SendString("PASS");
		UART_SendData('\r');
	}else if(res==E_ERROR)
	{
		UART_SendString("FAILED");
		UART_SendData('\r');
	}	
}

void Timer_GetStatus_test(uint8_t u8GroupId)
{
	uint8_t res=Timer_GetStatus(u8GroupId);
	if(res==E_OK)
	{
		UART_SendString("PASS");
		UART_SendData('\r');
		
	}else if(res==E_ERROR)
	{
		UART_SendString("FAILED");
		UART_SendData('\r');
		
	}	
}