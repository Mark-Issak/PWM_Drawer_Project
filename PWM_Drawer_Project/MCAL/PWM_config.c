/*
 * PWM_config.c
 *
 * Created: 12/18/2023 1:49:46 AM
 *  Author: Mark Issak
 */ 
#include "PWM.h"

const PWM_ConfigurationType gaStrPWM_Config[NUM_OPERATING_PWM_CHANNELS] =
{
	{
		PWM_TIMER_0_CHANNEL,
		PWM_FAST,
		PWM_PRESCALE_8,
		PWM_INVERTED,
		256U,
		4U,
		90U
	}
};