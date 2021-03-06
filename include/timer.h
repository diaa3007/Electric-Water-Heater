/*
 * Filename:     timer.h
 * Compiler:     XC8
 * Target:       PIC16F877A
 *
 * MIT License 
 *
 * Copyright (c) 2020 - Diaa Eldeen
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy 
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

/******************************************************************************
 * @file    timer.h
 * @brief   Timer peripheral driver interface
 * @author  Diaa Eldeen
 * @date    July 5, 2020
 ******************************************************************************/
 
 
/** 
 * @addtogroup Timer
 * @{
 */


#ifndef TIMER_H
#define	TIMER_H


#ifdef __cplusplus	// Provide C++ Compatibility
extern "C"{
#endif

    
//*****************************************************************************
// Includes
//*****************************************************************************    
#include "IO.h"



//*****************************************************************************
// Function Prototypes
//*****************************************************************************
void Timer0_Initialize(void);
void Timer0_ISR(void);



#ifdef	__cplusplus
}
#endif

#endif	/* TIMER_H */

