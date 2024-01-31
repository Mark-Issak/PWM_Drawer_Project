/*
 * PWM_config.h
 *
 * Created: 12/18/2023 1:49:23 AM
 *  Author: Mark Issak
 */ 


#ifndef PWM_CONFIG_H_
#define PWM_CONFIG_H_
#define NUM_OPERATING_PWM_CHANNELS			(1U) 
#define PWM_TIMER_0_RESOLUTION				(255U)
#define PWM_TIMER_1_RESOLUTION				(65535U)
#define PWM_TIMER_2_RESOLUTION				(255U)


#if NUM_OPERATING_PWM_CHANNELS > 4
#pragma GCC error "ATmega32A has only 3 timers with 4 PWM channels!! Fix NUM_OPERATING_PWM_CHANNELS."
#endif





#endif /* PWM_CONFIG_H_ */