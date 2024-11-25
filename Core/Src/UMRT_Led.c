/*
 * UMRT_Led.c
 *
 *  Created on: Nov 25, 2024
 *      Author: quinndt
 */

#include <UMRT_Led.h>

void UMRT_Led_Toggle() {
	HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
}
