/*
 * UMRT_Led.h
 *
 *
 *  Created on: Nov 25, 2024
 *      Author: quinndt
 */

#ifndef INC_UMRT_LED_H_
#define INC_UMRT_LED_H_

#include "stm32f4xx_hal.h"

/**
 * Toggles the built-in LED on the board.
 *
 * This pin is on PA5.
 * PA5 means the 5th pin on port A, which means GPIOA, GPIO_PIN_5
 */
void UMRT_Led_Toggle();

#endif /* INC_UMRT_LED_H_ */
