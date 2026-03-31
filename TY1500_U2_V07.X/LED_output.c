/*
 * File:   LED_output.c
 * Author: T00904
 *
 * Created on February 9, 2026, 1:07 PM
 */

#include "LED_output.h"
// extern bool fLamp_Conf;

void DRL_ON(void) { DRL_enable_LAT = 1; }

void DRL_OFF(void) { DRL_enable_LAT = 0; }

void POS_ON(void) { POS_enable_LAT = 1; }

void POS_OFF(void) { POS_enable_LAT = 0; }

void FAN_ON(void) { Fan_enable_LAT = 1; }

void FAN_OFF(void) { Fan_enable_LAT = 0; }

void LOBEAM_ON(void) { LoBeam_enable_LAT = 1; }

void LOBEAM_OFF(void) { LoBeam_enable_LAT = 0; }

void HIBEAM_ON(void) { HiBeam_enable_LAT = 1; }
void HIBEAM_OFF(void) { HiBeam_enable_LAT = 0; }

//void WELCOME_ON(void) { WELCOME_enable_LAT = 1; }
//void WELCOME_OFF(void) { WELCOME_enable_LAT = 0; }

// bool Is_HiPe(void) {
//   if (fLamp_Conf == LAMP_HiPe)
//     return true;
//   else
//     return false;
// }
