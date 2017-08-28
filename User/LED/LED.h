/****************************************************************
 * Copyright (C) 2017, XinLi, all right reserved.
 * File name:    LED.h
 * Date:         2017.08.28
 * Description:  LED driver.
*****************************************************************/

#ifndef __LED_H
#define __LED_H

/****************************************************************
 *                        Header include
*****************************************************************/
#include "stm32f4xx.h"

/****************************************************************
 *                       Macro definition
*****************************************************************/

/******************** Interface configuration *******************/

#define LEDn                        (2)

#define LED1_RCC_AHB1Periph_GPIO    RCC_AHB1Periph_GPIOF
#define LED1_GPIO                   GPIOF
#define LED1_GPIO_Pin               GPIO_Pin_9

#define LED2_RCC_AHB1Periph_GPIO    RCC_AHB1Periph_GPIOF
#define LED2_GPIO                   GPIOF
#define LED2_GPIO_Pin               GPIO_Pin_10

/****************************************************************/

/****************************************************************
 *                       Type definition
*****************************************************************/
typedef enum
{
  LEDPin1   = 0,
  LEDPin2   = 1
  
}LEDPin;

typedef enum
{
  LEDStateOn   = 0,
  LEDStateOff  = 1
  
}LEDState;

/****************************************************************
 *                     Structure definition
*****************************************************************/



#ifdef __cplusplus
 extern "C" {
#endif  /* __cplusplus */

/****************************************************************
 *                     Variable declaration
*****************************************************************/


/****************************************************************
 *                     Function declaration
*****************************************************************/
void LED_SetState(LEDPin pin, LEDState state);
LEDState LED_GetState(LEDPin pin);

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif	/* __LED_H */
