/* 
 * File:   IO.h
 * Author: Diaa Eldeen
 *
 * Created on July 5, 2020, 9:04 AM
 */

#ifndef IO_H
#define	IO_H


#include "xc.h"
#include "stdint.h"

#define STATE_INIT  0
#define STATE_WAIT  1
#define STATE_BLINK 2

#ifdef	__cplusplus
extern "C" {
#endif


    
    
typedef struct led_t {
    uint8_t state;
    volatile uint8_t timerFlag;
} led_t;


typedef struct button_t {
    uint8_t state;
    uint8_t prevState;
    volatile uint8_t timerFlag;
} button_t;

void ledInit(void);
void buttonsInit(void);
void INTB0_ISR(void);

#ifdef	__cplusplus
}
#endif

#endif	/* IO_H */
