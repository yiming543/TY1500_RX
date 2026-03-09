/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules
  selected in the GUI. Generation Information : Product Revision  :  PIC10 /
  PIC12 / PIC16 / PIC18 MCUs - 1.81.8 Device            :  PIC16F1936 Driver
  Version    :  2.00
 */

// 20260130 V01 CS:8144
// 整理程式 變數名稱
// 修復UART信號
// 改用狀態機 執行各個觸發事件
// 增加unlcok,lamp off信號

// 20260210 V02 CS:CAA2
// 增加LED_output.c
// 增加LED_output.h
// 修正Unlock,Clear 信號
// 修正HIBEAM 不能單獨亮

// 20260224 V03 CS:91C7
// 有近燈時，DRL OFF

//20260304 V04 CS:5703
// 增加WELCOME燈控制(unlock時輸出WELCOME_PIN)

//20260224 TY1489_all_in_one V05 CS:B409
//修正UART TX輸出

//20260309 TY1489_all_in_one_V06 CS:3CB4
//取消2秒沒收到LIN信號亮Lobeam和行車(P2)的功能.
//(auto白天模式沒有unlock信號 ACC OFF[由電池供電] 會造成沒有LIN信號亮燈)
//取消unlock信號


#include "tundra.h"

/*
                         Main application
 */
int main(void) {
  // initialize the device
  SYSTEM_Initialize();
  sofaware_initialize();
  // TMR0_SetInterruptHandler(TMR0_10MS_Even);
  // Clear_No_Call_Warning();

  // Enable the Global Interrupts
  INTERRUPT_GlobalInterruptEnable();

  // Enable the Peripheral Interrupts
  INTERRUPT_PeripheralInterruptEnable();

  while (1) {
    // Add your application code
    tundra_main();
  }
  return 0;
}
/**
 End of File
 */