/******************************************************************************
 * File Name: INT1.h
 *
 * Description: header file for the external Interrupt INT1 responsible for reversing the motor's motion
 *
 * Author: Solwan Shokry Ahmed
 *
 *******************************************************************************/


#ifndef INT1_H_
#define INT1_H_

#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"
#include "DCmotor.h"

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Function responsible for initializing INT0.
 */

void INT1_Init(void);

#endif /* INT1_H_ */
