/******************************************************************************
 *
 * Module: ADC
 *
 * File Name: ADC.h
 *
 * Description: header file for the ATmega328P ADC driver
 *
 * Author: Solwan Shokry Ahmed
 *
 *******************************************************************************/



#ifndef ADC_H_
#define ADC_H_

#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Function responsible for initialize the ADC driver.
 */

void ADC_Init(void);

/*
 * Description :
 * Function responsible for reading the ADC value.
 */

uint16 ADC_readChannel(uint8 channelNumber);

#endif /* ADC_H_ */
