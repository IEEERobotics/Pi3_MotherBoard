/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 3.15.0
        Device            :  PIC16F1719
        Driver Version    :  1.02
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

#include <xc.h>
#include "pin_manager.h"
#include <stdbool.h>

void PIN_MANAGER_Initialize(void)
{
    WPUD = 0xF;
    LATB = 0x0;
    WPUE = 0x9;
    LATA = 0x0;
    LATE = 0x6;
    LATD = 0x0;
    LATC = 0x0;
    WPUA = 0xFF;
    WPUB = 0xF0;
    WPUC = 0xE4;
    ANSELE = 0x7;
    ANSELA = 0x3F;
    ANSELB = 0x30;
    ANSELC = 0xFC;
    ANSELD = 0xF;
    TRISD = 0xF;
    TRISE = 0x9;
    TRISB = 0xF0;
    TRISC = 0xFF;
    TRISA = 0xFF;

    OPTION_REGbits.nWPUEN = 0x1;


    bool state = GIE;
    GIE = 0;
    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x00; // unlock PPS

    RB1PPSbits.RB1PPS = 0x0D;   //RB1->CCP2:CCP2;
    RC1PPSbits.RC1PPS = 0x10;   //RC1->MSSP:SCL;
    SSPDATPPSbits.SSPDATPPS = 0x10;   //RC0->MSSP:SDA;
    RB0PPSbits.RB0PPS = 0x0C;   //RB0->CCP1:CCP1;
    RC0PPSbits.RC0PPS = 0x11;   //RC0->MSSP:SDA;
    RB3PPSbits.RB3PPS = 0x0F;   //RB3->PWM4:PWM4OUT;
    RB2PPSbits.RB2PPS = 0x0E;   //RB2->PWM3:PWM3OUT;
    SSPCLKPPSbits.SSPCLKPPS = 0x11;   //RC1->MSSP:SCL;

    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x01; // lock PPS

    GIE = state;

}


void PIN_MANAGER_IOC(void)
{    
}

/**
 End of File
*/
