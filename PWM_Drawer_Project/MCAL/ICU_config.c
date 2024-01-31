/*
 * ICU_config.c
 *
 * Created: 12/18/2023 1:48:30 AM
 *  Author: Mark Issak
 */ 
#include "ICU.h"

const ICU_ConfigurationType gStrICU_Config =
{
	ICU_TIMER_1,
	ICU_PRESCALE_8,
	ICU_TRIGGER_FALLING_EDGE,
	ICU_INTERRUPT_DISABLED
};