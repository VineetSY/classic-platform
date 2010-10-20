/* 
* Configuration of module Os (Os_Cfg.h)
* 
* Created by: 
* Configured for (MCU): Undefined MCU
* 
* Module vendor:  ArcCore
* Module version: 2.0.10
* 
* 
* Generated by Arctic Studio (http://arccore.com)
*           on Sun Oct 10 21:14:06 CEST 2010
*/


#if (OS_SW_MAJOR_VERSION != 2) 
#error "Os: Configuration file version differs from BSW version."
#endif


#ifndef OS_CFG_H_
#define OS_CFG_H_


// Alarm Id's

// Counter Id's
#define COUNTER_ID_Counter1	0

// Counter macros
#define OSMAXALLOWEDVALUE_Counter1 65535


// Event masks
#define EVENT_MASK_go	1

// Isr Id's

// Resource Id's
#define RES_ID_std_1	0

// Linked resource id's

// Resource masks
#define RES_MASK_std_1	(1 << 0)

// Task Id's
#define TASK_ID_OsIdle	0
#define TASK_ID_btask_h_full	1
#define TASK_ID_btask_l_full	2
#define TASK_ID_btask_ll_non	3
#define TASK_ID_btask_m_full	4
#define TASK_ID_btask_m_non	5
#define TASK_ID_etask_h_full	6
#define TASK_ID_etask_l_full	7
#define TASK_ID_etask_m_full	8
#define TASK_ID_etask_m_full_2	9

// Task entry points
void OsIdle( void );
void btask_h_full( void );
void btask_l_full( void );
void btask_ll_non( void );
void btask_m_full( void );
void btask_m_non( void );
void etask_h_full( void );
void etask_l_full( void );
void etask_m_full( void );
void etask_m_full_2( void );

// Schedule table id's

// Stack size
#define OS_INTERRUPT_STACK_SIZE	2048
#define OS_OSIDLE_STACK_SIZE 512

#define OS_ALARM_CNT			0 
#define OS_TASK_CNT				10
#define OS_SCHTBL_CNT			0
#define OS_COUNTER_CNT			1
#define OS_EVENTS_CNT			1
#define OS_ISRS_CNT				0
#define OS_RESOURCE_CNT			1
#define OS_LINKED_RESOURCE_CNT	0

#define CFG_OS_DEBUG				STD_OFF

#define OS_SC1 						STD_ON     
#define OS_STACK_MONITORING			STD_ON
#define OS_STATUS_EXTENDED			STD_ON
#define OS_USE_GET_SERVICE_ID		STD_ON
#define OS_USE_PARAMETER_ACCESS		STD_ON
#define OS_RES_SCHEDULER			STD_ON

#endif /*OS_CFG_H_*/
