/******************************************************************************
 *
 * File Name: INT1.c
 *
 * Description: Source file for the external Interrupt INT1 responsible for reversing the motor's motion source code
 *
 * Author: Solwan Shokry Ahmed
 *
 *******************************************************************************/
#include "INT1.h"


void INT1_Init(void){

	/*Configure the pin number 3 in PORTD as an input pin with an external pull-down-resistor-button configuration*/
	DDRD&=~(1<<PD3);

	/* Enable external interrupt pin INT1 by setting the bit number 7 in the global external interrupt control register */
	GICR  |= (1<<INT1);

	/* Configure INT1 to be Triggered with the raising edge */
	MCUCR |= (1<<ISC11) | (1<<ISC10);
}

/*When external interrupt INT1 occurs, the motor's rotating motion' direction changes to be Anti clock wise*/

ISR(INT1_vect){

	DCmotor_set_Operation_DirectionMode(DC_MOTOR_ROTATING_ANTI_CLOCK_WISE);
}
