/*
 * LCD_config.h
 *
 * Created: 12/17/2023 8:32:59 PM
 *  Author: Mark Issak
 */ 


#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_

/*							LCD Characteristics                         */
/************************************************************************/
#define LCD_NUM_LINES					(4U)
#define LCD_MAX_LINE_WIDTH				(20U)

/*							LCD Configurations                          */
/************************************************************************/
#define LCD_8BIT_DATA_LENGTH			(0U)	
#define LCD_MAX_LINES					(1U)	
#define LCD_FONT_SIZE					(0U)	

#define LCD_CURSOR_MODE					(1U)	
#define LCD_CURSOR_BLINK_MODE			(1U)	

#define LCD_USE_TIMERS_FOR_DELAY		(0U)	

/*							LCD Connections                             */
/************************************************************************/
#define LCD_CTRL_PORT					(DIO_PORT_B)
#define LCD_RS_PIN						(DIO_PIN_1)
#define LCD_RW_PIN						(DIO_PIN_2)
#define LCD_ENABLE_PIN					(DIO_PIN_0)

#define LCD_DATA_PORT					(DIO_PORT_A)
#define LCD_DATA_D4_PIN					(DIO_PIN_4)
#define LCD_DATA_D5_PIN					(DIO_PIN_5)
#define LCD_DATA_D6_PIN					(DIO_PIN_6)
#define LCD_DATA_D7_PIN					(DIO_PIN_7)

/*				Some Compiler Checks on Configurations                  */
/************************************************************************/
#if LCD_MAX_LINES == 1 && LCD_FONT_SIZE == 1
#pragma GCC error "You can NOT use big font (5x10) in the 2-line mode!!"
#endif




#endif /* LCD_CONFIG_H_ */