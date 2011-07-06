/*
* Configuration of module: Rte (Rte_Blinker.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC551x
*
* Module vendor:           ArcCore
* Generator version:       0.0.9
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Wed Jul 06 20:28:46 CEST 2011
*/

/* Rte_Blinker.c */
#include <string.h>
#include "Os.h"
#include "Rte_Blinker.h"
#include "Rte_Data.h"
#include "Rte_led_rte_ecuc_mpc5516_IoHwAbComponentType.h"

extern Rte_CDS_Blinker Rte_Inst_Blinker;

Std_ReturnType Rte_Call_Blinker_LED_Port_Write(const BooleanType Value) {
	return Rte_IoHwAb_Write_LEDS_LED5(Value);
}

