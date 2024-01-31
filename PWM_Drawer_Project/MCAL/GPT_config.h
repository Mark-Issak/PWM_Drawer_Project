/*
 * GPT_config.h
 *
 * Created: 12/18/2023 1:47:07 AM
 *  Author: Mark Issak
 */ 


#ifndef GPT_CONFIG_H_
#define GPT_CONFIG_H_
#define NUM_TIMERS_OPERATING				(1U)


/*				Compiler Checks for Configurations                      */

#if NUM_TIMERS_OPERATING > 3
#pragma GCC error "There are only 3 timers in ATmega32A! Fix NUM_TIMERS_OPERATING to be of maximum 3."
#endif




#endif /* GPT_CONFIG_H_ */