/*
 * timer.h
 *
 *  Created on: 21 Nov, 2022
 *      Author: Mr.HUNG
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

void setTimerResend(int duration);
void timer_run();

extern int timerResend_flag;

#endif /* INC_TIMER_H_ */
