/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 3.15.0
        Device            :  PIC16F1719
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.20

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set APH_1 aliases
#define APH_1_TRIS               TRISD4
#define APH_1_LAT                LATD4
#define APH_1_PORT               RD4
#define APH_1_WPU                WPUD4
#define APH_1_ANS                ANSD4
#define APH_1_SetHigh()    do { LATD4 = 1; } while(0)
#define APH_1_SetLow()   do { LATD4 = 0; } while(0)
#define APH_1_Toggle()   do { LATD4 = ~LATD4; } while(0)
#define APH_1_GetValue()         PORTDbits.RD4
#define APH_1_SetDigitalInput()    do { TRISD4 = 1; } while(0)
#define APH_1_SetDigitalOutput()   do { TRISD4 = 0; } while(0)

#define APH_1_SetPullup()    do { WPUD4 = 1; } while(0)
#define APH_1_ResetPullup()   do { WPUD4 = 0; } while(0)
#define APH_1_SetAnalogMode()   do { ANSD4 = 1; } while(0)
#define APH_1_SetDigitalMode()   do { ANSD4 = 0; } while(0)


// get/set BPH_1 aliases
#define BPH_1_TRIS               TRISD5
#define BPH_1_LAT                LATD5
#define BPH_1_PORT               RD5
#define BPH_1_WPU                WPUD5
#define BPH_1_ANS                ANSD5
#define BPH_1_SetHigh()    do { LATD5 = 1; } while(0)
#define BPH_1_SetLow()   do { LATD5 = 0; } while(0)
#define BPH_1_Toggle()   do { LATD5 = ~LATD5; } while(0)
#define BPH_1_GetValue()         PORTDbits.RD5
#define BPH_1_SetDigitalInput()    do { TRISD5 = 1; } while(0)
#define BPH_1_SetDigitalOutput()   do { TRISD5 = 0; } while(0)

#define BPH_1_SetPullup()    do { WPUD5 = 1; } while(0)
#define BPH_1_ResetPullup()   do { WPUD5 = 0; } while(0)
#define BPH_1_SetAnalogMode()   do { ANSD5 = 1; } while(0)
#define BPH_1_SetDigitalMode()   do { ANSD5 = 0; } while(0)


// get/set APH_2 aliases
#define APH_2_TRIS               TRISD6
#define APH_2_LAT                LATD6
#define APH_2_PORT               RD6
#define APH_2_WPU                WPUD6
#define APH_2_ANS                ANSD6
#define APH_2_SetHigh()    do { LATD6 = 1; } while(0)
#define APH_2_SetLow()   do { LATD6 = 0; } while(0)
#define APH_2_Toggle()   do { LATD6 = ~LATD6; } while(0)
#define APH_2_GetValue()         PORTDbits.RD6
#define APH_2_SetDigitalInput()    do { TRISD6 = 1; } while(0)
#define APH_2_SetDigitalOutput()   do { TRISD6 = 0; } while(0)

#define APH_2_SetPullup()    do { WPUD6 = 1; } while(0)
#define APH_2_ResetPullup()   do { WPUD6 = 0; } while(0)
#define APH_2_SetAnalogMode()   do { ANSD6 = 1; } while(0)
#define APH_2_SetDigitalMode()   do { ANSD6 = 0; } while(0)


// get/set BPH_2 aliases
#define BPH_2_TRIS               TRISD7
#define BPH_2_LAT                LATD7
#define BPH_2_PORT               RD7
#define BPH_2_WPU                WPUD7
#define BPH_2_ANS                ANSD7
#define BPH_2_SetHigh()    do { LATD7 = 1; } while(0)
#define BPH_2_SetLow()   do { LATD7 = 0; } while(0)
#define BPH_2_Toggle()   do { LATD7 = ~LATD7; } while(0)
#define BPH_2_GetValue()         PORTDbits.RD7
#define BPH_2_SetDigitalInput()    do { TRISD7 = 1; } while(0)
#define BPH_2_SetDigitalOutput()   do { TRISD7 = 0; } while(0)

#define BPH_2_SetPullup()    do { WPUD7 = 1; } while(0)
#define BPH_2_ResetPullup()   do { WPUD7 = 0; } while(0)
#define BPH_2_SetAnalogMode()   do { ANSD7 = 1; } while(0)
#define BPH_2_SetDigitalMode()   do { ANSD7 = 0; } while(0)


// get/set NSLEEP_2 aliases
#define NSLEEP_2_TRIS               TRISE1
#define NSLEEP_2_LAT                LATE1
#define NSLEEP_2_PORT               RE1
#define NSLEEP_2_WPU                WPUE1
#define NSLEEP_2_ANS                ANSE1
#define NSLEEP_2_SetHigh()    do { LATE1 = 1; } while(0)
#define NSLEEP_2_SetLow()   do { LATE1 = 0; } while(0)
#define NSLEEP_2_Toggle()   do { LATE1 = ~LATE1; } while(0)
#define NSLEEP_2_GetValue()         PORTEbits.RE1
#define NSLEEP_2_SetDigitalInput()    do { TRISE1 = 1; } while(0)
#define NSLEEP_2_SetDigitalOutput()   do { TRISE1 = 0; } while(0)

#define NSLEEP_2_SetPullup()    do { WPUE1 = 1; } while(0)
#define NSLEEP_2_ResetPullup()   do { WPUE1 = 0; } while(0)
#define NSLEEP_2_SetAnalogMode()   do { ANSE1 = 1; } while(0)
#define NSLEEP_2_SetDigitalMode()   do { ANSE1 = 0; } while(0)


// get/set NSLEEP_1 aliases
#define NSLEEP_1_TRIS               TRISE2
#define NSLEEP_1_LAT                LATE2
#define NSLEEP_1_PORT               RE2
#define NSLEEP_1_WPU                WPUE2
#define NSLEEP_1_ANS                ANSE2
#define NSLEEP_1_SetHigh()    do { LATE2 = 1; } while(0)
#define NSLEEP_1_SetLow()   do { LATE2 = 0; } while(0)
#define NSLEEP_1_Toggle()   do { LATE2 = ~LATE2; } while(0)
#define NSLEEP_1_GetValue()         PORTEbits.RE2
#define NSLEEP_1_SetDigitalInput()    do { TRISE2 = 1; } while(0)
#define NSLEEP_1_SetDigitalOutput()   do { TRISE2 = 0; } while(0)

#define NSLEEP_1_SetPullup()    do { WPUE2 = 1; } while(0)
#define NSLEEP_1_ResetPullup()   do { WPUE2 = 0; } while(0)
#define NSLEEP_1_SetAnalogMode()   do { ANSE2 = 1; } while(0)
#define NSLEEP_1_SetDigitalMode()   do { ANSE2 = 0; } while(0)



/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
*/