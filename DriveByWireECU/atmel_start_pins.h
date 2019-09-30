/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <hal_gpio.h>

// SAME54 has 14 pin functions

#define GPIO_PIN_FUNCTION_A 0
#define GPIO_PIN_FUNCTION_B 1
#define GPIO_PIN_FUNCTION_C 2
#define GPIO_PIN_FUNCTION_D 3
#define GPIO_PIN_FUNCTION_E 4
#define GPIO_PIN_FUNCTION_F 5
#define GPIO_PIN_FUNCTION_G 6
#define GPIO_PIN_FUNCTION_H 7
#define GPIO_PIN_FUNCTION_I 8
#define GPIO_PIN_FUNCTION_J 9
#define GPIO_PIN_FUNCTION_K 10
#define GPIO_PIN_FUNCTION_L 11
#define GPIO_PIN_FUNCTION_M 12
#define GPIO_PIN_FUNCTION_N 13

#define PA05 GPIO(GPIO_PORTA, 5)
#define SteerLeft GPIO(GPIO_PORTA, 6)
#define SteerRight GPIO(GPIO_PORTA, 7)
#define PA12 GPIO(GPIO_PORTA, 12)
#define PA13 GPIO(GPIO_PORTA, 13)
#define PA14 GPIO(GPIO_PORTA, 14)
#define PA15 GPIO(GPIO_PORTA, 15)
#define PA17 GPIO(GPIO_PORTA, 17)
#define PA18 GPIO(GPIO_PORTA, 18)
#define PA19 GPIO(GPIO_PORTA, 19)
#define SafetyLights2Mode GPIO(GPIO_PORTB, 1)
#define PB03 GPIO(GPIO_PORTB, 3)
#define SafetyLights2On GPIO(GPIO_PORTB, 6)
#define WheelSpeed2 GPIO(GPIO_PORTB, 7)
#define SteeringPosition GPIO(GPIO_PORTB, 8)
#define PB09 GPIO(GPIO_PORTB, 9)
#define PB12 GPIO(GPIO_PORTB, 12)
#define PB13 GPIO(GPIO_PORTB, 13)
#define PB15 GPIO(GPIO_PORTB, 15)
#define PB24 GPIO(GPIO_PORTB, 24)
#define PB25 GPIO(GPIO_PORTB, 25)
#define SafetyLights1On GPIO(GPIO_PORTC, 1)
#define SafetyLights1Mode GPIO(GPIO_PORTC, 10)
#define PC11 GPIO(GPIO_PORTC, 11)
#define PC12 GPIO(GPIO_PORTC, 12)
#define LED_0 GPIO(GPIO_PORTC, 18)
#define PC20 GPIO(GPIO_PORTC, 20)
#define ReverseDrive GPIO(GPIO_PORTC, 30)
#define WheelSpeed GPIO(GPIO_PORTD, 0)

#endif // ATMEL_START_PINS_H_INCLUDED
