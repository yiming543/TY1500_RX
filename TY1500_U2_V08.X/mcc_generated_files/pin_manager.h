/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1936
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set POS_enable aliases
#define POS_enable_TRIS                 TRISAbits.TRISA1
#define POS_enable_LAT                  LATAbits.LATA1
#define POS_enable_PORT                 PORTAbits.RA1
#define POS_enable_ANS                  ANSELAbits.ANSA1
#define POS_enable_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define POS_enable_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define POS_enable_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define POS_enable_GetValue()           PORTAbits.RA1
#define POS_enable_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define POS_enable_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define POS_enable_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define POS_enable_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set DRL_enable aliases
#define DRL_enable_TRIS                 TRISAbits.TRISA2
#define DRL_enable_LAT                  LATAbits.LATA2
#define DRL_enable_PORT                 PORTAbits.RA2
#define DRL_enable_ANS                  ANSELAbits.ANSA2
#define DRL_enable_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define DRL_enable_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define DRL_enable_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define DRL_enable_GetValue()           PORTAbits.RA2
#define DRL_enable_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define DRL_enable_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define DRL_enable_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define DRL_enable_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set P2_enable aliases
#define P2_enable_TRIS                 TRISAbits.TRISA3
#define P2_enable_LAT                  LATAbits.LATA3
#define P2_enable_PORT                 PORTAbits.RA3
#define P2_enable_ANS                  ANSELAbits.ANSA3
#define P2_enable_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define P2_enable_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define P2_enable_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define P2_enable_GetValue()           PORTAbits.RA3
#define P2_enable_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define P2_enable_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define P2_enable_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define P2_enable_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set HiBeam_enable aliases
#define HiBeam_enable_TRIS                 TRISBbits.TRISB3
#define HiBeam_enable_LAT                  LATBbits.LATB3
#define HiBeam_enable_PORT                 PORTBbits.RB3
#define HiBeam_enable_WPU                  WPUBbits.WPUB3
#define HiBeam_enable_ANS                  ANSELBbits.ANSB3
#define HiBeam_enable_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define HiBeam_enable_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define HiBeam_enable_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define HiBeam_enable_GetValue()           PORTBbits.RB3
#define HiBeam_enable_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define HiBeam_enable_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define HiBeam_enable_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define HiBeam_enable_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define HiBeam_enable_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define HiBeam_enable_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set LoBeam_enable aliases
#define LoBeam_enable_TRIS                 TRISBbits.TRISB4
#define LoBeam_enable_LAT                  LATBbits.LATB4
#define LoBeam_enable_PORT                 PORTBbits.RB4
#define LoBeam_enable_WPU                  WPUBbits.WPUB4
#define LoBeam_enable_ANS                  ANSELBbits.ANSB4
#define LoBeam_enable_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LoBeam_enable_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LoBeam_enable_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LoBeam_enable_GetValue()           PORTBbits.RB4
#define LoBeam_enable_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LoBeam_enable_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LoBeam_enable_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define LoBeam_enable_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define LoBeam_enable_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define LoBeam_enable_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set Fan_enable aliases
#define Fan_enable_TRIS                 TRISBbits.TRISB5
#define Fan_enable_LAT                  LATBbits.LATB5
#define Fan_enable_PORT                 PORTBbits.RB5
#define Fan_enable_WPU                  WPUBbits.WPUB5
#define Fan_enable_ANS                  ANSELBbits.ANSB5
#define Fan_enable_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define Fan_enable_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define Fan_enable_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define Fan_enable_GetValue()           PORTBbits.RB5
#define Fan_enable_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define Fan_enable_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define Fan_enable_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define Fan_enable_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define Fan_enable_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define Fan_enable_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set UR_TX aliases
#define UR_TX_TRIS                 TRISBbits.TRISB6
#define UR_TX_LAT                  LATBbits.LATB6
#define UR_TX_PORT                 PORTBbits.RB6
#define UR_TX_WPU                  WPUBbits.WPUB6
#define UR_TX_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define UR_TX_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define UR_TX_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define UR_TX_GetValue()           PORTBbits.RB6
#define UR_TX_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define UR_TX_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define UR_TX_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define UR_TX_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
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