/******************************************************************************
 *
 * Module: Motor
 *
 * File Name: DCmotor.h
 *
 * Description: header file for the DCmotor controlled by the timer's PWM signal
 *
 * Author: Solwan Shokry Ahmed
 *
 *******************************************************************************/




#ifndef DCMOTOR_H_
#define DCMOTOR_H_


#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"


#define DC_MOTOR_MOVING_STOP	0
#define DC_MOTOR_MOVING_FORWARD	1
#define DC_MOTOR_MOVING_RIGHT	2
#define DC_MOTOR_MOVING_LEFT	3


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Function responsible for initialize the DCmotor.
 */
void DCmotor_Init(void);

/*
 * Description :
 * Function responsible for setting the DCmotor's operation mode.
 */
void DCmotor_set_Operation_DirectionMode(uint8 motorDirection);

#endif /* DCMOTOR_H_ */
