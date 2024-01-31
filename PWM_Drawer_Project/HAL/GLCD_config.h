/*
 * GLCD_config.h
 *
 * Created: 12/17/2023 8:20:44 PM
 *  Author: Mark Issak
 */ 


#ifndef GLCD_CONFIG_H_
#define GLCD_CONFIG_H_
/*					Graphical LCD Characteristics                       */

#define GLCD_MAX_LINES							(8U)
#define GLCD_MAX_LINE_PIXEL_WIDTH				(128U)
#define GLCD_MAX_PAGE_PIXEL_WIDTH				(64U)


/*					Graphical LCD Configurations                        */

#define GLCD_USE_TIMERS_FOR_DELAY				(0U)	


/*					Graphical LCD Connections                           */
#define GLCD_CTRL_PORT							(DIO_PORT_B)
#define GLCD_ENABLE_PIN							(DIO_PIN_0)
#define GLCD_RW_PIN								(DIO_PIN_1)
#define GLCD_RS_PIN								(DIO_PIN_2)
#define GLCD_PAGE_SELECT_PIN_1					(DIO_PIN_4)
#define GLCD_PAGE_SELECT_PIN_2					(DIO_PIN_5)
#define GLCD_RESET_PIN							(DIO_PIN_6)


#define GLCD_DATA_PORT							(DIO_PORT_A)
#define GLCD_DATA_D0_PIN						(DIO_PIN_0)
#define GLCD_DATA_D1_PIN						(DIO_PIN_1)
#define GLCD_DATA_D2_PIN						(DIO_PIN_2)
#define GLCD_DATA_D3_PIN						(DIO_PIN_3)
#define GLCD_DATA_D4_PIN						(DIO_PIN_4)
#define GLCD_DATA_D5_PIN						(DIO_PIN_5)
#define GLCD_DATA_D6_PIN						(DIO_PIN_6)
#define GLCD_DATA_D7_PIN						(DIO_PIN_7)




#endif /* GLCD_CONFIG_H_ */