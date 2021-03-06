/*
 * Filename:     SSD.h
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
 * @file    SSD.h
 * @brief   7-Segment display device driver interface
 * @author  Diaa Eldeen
 * @date    July 5, 2020
 ******************************************************************************/
 
 
/** 
 * @addtogroup SSD
 * @{
 */


#ifndef SSD_H
#define	SSD_H


#ifdef	__cplusplus     // Provide C++ Compatibility
extern "C" {
#endif

    
//*****************************************************************************
// Includes
//*****************************************************************************
#include "xc.h"
#include "stdint.h"
#include "deviceConfig.h"


//*****************************************************************************
// Preprocessor Macros and Constants
//*****************************************************************************
#define SSD_TRIS    TRISD   ///< 7-segment display data port TRIS register
#define SSD_PORT    PORTD   ///< 7-segment display data port PORT register
    
#define SSD_TENS    RA4  ///< Ones digit 7-segment display control bit
#define SSD_ONES    RA5  ///< Tens digit 7-segment display control bit

#define SSD_TENS_TRIS   TRISA4 ///< Ones digit 7-segment display control TRIS bit
#define SSD_ONES_TRIS   TRISA5 ///< Tens digit 7-segment display control TRIS bit

    
//*****************************************************************************
// Typedefs
//*****************************************************************************
/**
 * @brief   Available 7-segment displays digits.
 */
typedef enum {
    ONES,   ///< Selects the ones 7-segment display when passed to SSD_Print()
    TENS    ///< Selects the tens 7-segment display when passed to SSD_Print()
}unit_t;    

    
//*****************************************************************************
// Function Prototypes
//*****************************************************************************
void SSD_Print(unit_t unit, uint8_t digit);
void SSD_Initialize(void);



#ifdef	__cplusplus
}
#endif

#endif	/* SSD_H */

