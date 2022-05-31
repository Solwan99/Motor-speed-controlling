/******************************************************************************
 * File Name: Timer0.h
 *
 * Description: header file for MCU internal Timer0
 *
 * Author: Solwan Shokry Ahmed
 *
 *******************************************************************************/

#ifndef TIMER_H_
#define TIMER_H_

#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description : Function responsible for initializing Timer0
 */

void Timer0_PWM_MODE_Init(uint8 dutyCycle);


#endif /* TIMER_H_ */
