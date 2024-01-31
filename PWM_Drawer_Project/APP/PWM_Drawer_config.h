/*
 * PWM_Drawer_config.h
 *
 * Created: 12/17/2023 4:59:55 PM
 *  Author: Mark Issak
 */ 


#ifndef PWM_DRAWER_CONFIG_H_
#define PWM_DRAWER_CONFIG_H_

#define GENERATE_PWM_FROM_SAME_MCU			(1U)	

#if GENERATE_PWM_FROM_SAME_MCU == 0

#define GLCD_MCU						(0U)		
#endif


#endif /* PWM_DRAWER_CONFIG_H_ */