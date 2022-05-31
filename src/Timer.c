/******************************************************************************
 *
 * File Name: Timer0.c
 *
 * Description: Source file for the MCU internal timer Timer0 working with Fast PWM mode to control the motor.
 *
 * Author: Solwan Shokry Ahmed
 *
 *******************************************************************************/
#include "Timer.h"

/*Function to initialize Timer0 with fast PWM mode operation, having a duty cycle as a function parameter*/
void Timer0_PWM_MODE_Init(uint8 dutyCycle)
{
	/*Initialize the timer's counter value in the timer counter register TCNT0=0*/
	TCNT0=0;
	/*The Output Compare Register OCR0 contains the duty cycle value received as a function input parameter from the ADC converted
	 * value of the analog variable voltage reading taken from the variable resistance that is continuously compared with
	 *  the counter value*/
	OCR0=dutyCycle;

	/*Configure the timer operation as:Waveform Generation Mode Fast PWM mode
	 * by writing the bits WGM01=1 && WGM00=1 in the timer0 control register TCCR0*
	SET_BIT(TCCR0,WGM01);
	SET_BIT(TCCR0,WGM00);
*/
	/*Configure the output compare mode to be Clear OC0 on compare match, set OC0 at BOTTOM, (non-inverting mode)
	 *by writing the bits COM01=1 && COM00=0 in the timer0 control register TCCR0 *
	SET_BIT(TCCR0,COM01);
	CLEAR_BIT(TCCR0,COM00);
*/
	/*Configure the timer's clock source as an internal source with frequency preScalar=F_CPU/8
	 *by writing the bits CS02=0 CS01=1 CS00=0 in the timer0 control register TCCR0
	CLEAR_BIT(TCCR0,CS00);
	SET_BIT(TCCR0,CS01);
	CLEAR_BIT(TCCR0,CS02);
	*/

	TCCR0|=(1<<WGM01)|(1<<WGM00)|(1<<COM01)|(1<<CS01);
}
