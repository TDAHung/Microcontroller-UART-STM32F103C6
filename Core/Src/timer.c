/*
 * timer.c
 *
 *  Created on: 21 Nov, 2022
 *      Author: Mr.HUNG
 */
#include <uart_communication_fsm.h>
#include "main.h"
#include "timer.h"
#include "command_parser_fsm.h"

void setTimerResend(int duration);
void timer_run();

// our clock configured cycle
int TIMER_CYCLE = 10;

int timerResend_counter = 0;
int timerResend_flag = 1;

void setTimerResend(int duration)
{
	timerResend_counter = duration / TIMER_CYCLE;
	timerResend_flag = 0;
}

void timer_run()
{
	if (timerResend_counter > 0)
	{
		timerResend_counter--;
		if (timerResend_counter <= 0)
			timerResend_flag = 1;
	}
}
