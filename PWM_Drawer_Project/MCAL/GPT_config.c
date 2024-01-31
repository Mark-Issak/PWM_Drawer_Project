/*
 * GPT_config.c
 *
 * Created: 12/18/2023 1:47:33 AM
 *  Author: Mark Issak
 */ 
#include "GPT.h"
const GPT_ConfigurationType gaStrGPT_Config[NUM_TIMERS_OPERATING] =
{
	{
		GPT_TIMER_2,
		GPT_CTC_MODE,
		GPT_PRESCALE_8,
		GPT_INTERRUPT_DISABLED
	}
};