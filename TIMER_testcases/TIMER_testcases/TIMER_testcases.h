/*
 * TIMER_testcases.h
 *
 * Created: 8/7/2021 1:22:34 AM
 *  Author: DELLL
 */ 


#ifndef TIMER_TESTCASES_H_
#define TIMER_TESTCASES_H_

#include "DIO.h"
#include "UART.h"
#include "TM.h"

void Timer_Init_test(void);

void Timer_Start_test(uint8_t u8GroupId, uint64_t u32TimerValueUS, void(*pfCallback)(void));

void Timer_Stop_test(uint8_t u8GroupId);

void Timer_GetStatus_test(uint8_t u8GroupId);

#endif /* TIMER_TESTCASES_H_ */