/*
    FreeRTOS V7.2.0 - Copyright (C) 2012 Real Time Engineers Ltd.
	

    ***************************************************************************
     *                                                                       *
     *    FreeRTOS tutorial books are available in pdf and paperback.        *
     *    Complete, revised, and edited pdf reference manuals are also       *
     *    available.                                                         *
     *                                                                       *
     *    Purchasing FreeRTOS documentation will not only help you, by       *
     *    ensuring you get running as quickly as possible and with an        *
     *    in-depth knowledge of how to use FreeRTOS, it will also help       *
     *    the FreeRTOS project to continue with its mission of providing     *
     *    professional grade, cross platform, de facto standard solutions    *
     *    for microcontrollers - completely free of charge!                  *
     *                                                                       *
     *    >>> See http://www.FreeRTOS.org/Documentation for details. <<<     *
     *                                                                       *
     *    Thank you for using FreeRTOS, and thank you for your support!      *
     *                                                                       *
    ***************************************************************************


    This file is part of the FreeRTOS distribution.

    FreeRTOS is free software; you can redistribute it and/or modify it under
    the terms of the GNU General Public License (version 2) as published by the
    Free Software Foundation AND MODIFIED BY the FreeRTOS exception.
    >>>NOTE<<< The modification to the GPL is included to allow you to
    distribute a combined work that includes FreeRTOS without being obliged to
    provide the source code for proprietary components outside of the FreeRTOS
    kernel.  FreeRTOS is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
    or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
    more details. You should have received a copy of the GNU General Public
    License and the FreeRTOS license exception along with FreeRTOS; if not it
    can be viewed here: http://www.freertos.org/a00114.html and also obtained
    by writing to Richard Barry, contact details for whom are available on the
    FreeRTOS WEB site.

    1 tab == 4 spaces!
    
    ***************************************************************************
     *                                                                       *
     *    Having a problem?  Start by reading the FAQ "My application does   *
     *    not run, what could be wrong?                                      *
     *                                                                       *
     *    http://www.FreeRTOS.org/FAQHelp.html                               *
     *                                                                       *
    ***************************************************************************

    
    http://www.FreeRTOS.org - Documentation, training, latest information, 
    license and contact details.
    
    http://www.FreeRTOS.org/plus - A selection of FreeRTOS ecosystem products,
    including FreeRTOS+Trace - an indispensable productivity tool.

    Real Time Engineers ltd license FreeRTOS to High Integrity Systems, who sell 
    the code with commercial support, indemnification, and middleware, under 
    the OpenRTOS brand: http://www.OpenRTOS.com.  High Integrity Systems also
    provide a safety engineered and independently SIL3 certified version under 
    the SafeRTOS brand: http://www.SafeRTOS.com.
*/

#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

/*-----------------------------------------------------------
 * Application specific definitions.
 *
 * These definitions should be adjusted for your particular hardware and
 * application requirements.
 *
 * THESE PARAMETERS ARE DESCRIBED WITHIN THE 'CONFIGURATION' SECTION OF THE
 * FreeRTOS API DOCUMENTATION AVAILABLE ON THE FreeRTOS.org WEB SITE. 
 *
 * See http://www.freertos.org/a00110.html.
 *----------------------------------------------------------*/

#include "bsp_config.h"

#define configCORE1_START_IN_FREERTOS	0
#define configUSE_IDLE_SLEEP		1
#define configUSE_PREEMPTION		0
#define configUSE_IDLE_HOOK			0
#define configUSE_TICK_HOOK			0
#define configCPU_CLOCK_HZ			( ( unsigned long ) 200000000 )
#define configTICK_RATE_HZ			( ( portTickType ) 1000 )
#define configMINIMAL_STACK_SIZE	( ( unsigned short ) 70 )
#define configTOTAL_HEAP_SIZE		( ( size_t ) ( 65536 ) )
#define configMAX_TASK_NAME_LEN		( 10 )
#define configUSE_COUNTING_SEMAPHORES 1
#define configUSE_TRACE_FACILITY	0
#define configUSE_APPLICATION_TASK_TAG 0
#define configGENERATE_RUN_TIME_STATS 0
#define configUSE_16_BIT_TICKS		0
#define configIDLE_SHOULD_YIELD		0
#define configMAX_TASK_NUM			16
#define configUSE_MALLOC_FAILED_HOOK 0
#define configUSE_PORT_OPTIMISED_TASK_SELECTION	1
#define configMAIN_STACK_SIZE		2048
#define configUSE_CPU_UNBOUND_TASK	0
//#define configUSE_CPU_UNBOUND_TASK	1
//#define configMAX_PRIORITIES		( 5 )
#define configMAX_PRIORITIES		( 32 )
#define configCHECK_FOR_STACK_OVERFLOW 0

/* Set the following definitions to 1 to include the API function, or zero
to exclude the API function. */

#define INCLUDE_vTaskPrioritySet		1
#define INCLUDE_uxTaskPriorityGet		1
#define INCLUDE_vTaskDelayUntil			1
#define INCLUDE_vTaskDelay				1
#define INCLUDE_uxTaskGetStackHighWaterMark 0

#define configKERNEL_INTERRUPT_PRIORITY 		255
#define configMAX_SYSCALL_INTERRUPT_PRIORITY 	191 /* equivalent to 0xa0, or priority 5. */
#define configMBOX_INTERRUPT_PRIORITY			(configMAX_SYSCALL_INTERRUPT_PRIORITY)

#define configTEXT_CACHE 1
#define configDATA_CACHE 1

#define configTEXT_SIZE 0x10000
#define configDATA_SIZE 0x50000
//#define configSHARED_MEM_SIZE 0x100000
#define configSHARED_MEM_SIZE 0x0
#define configRPMSG_FEATURES  (1 << 0)

#endif /* FREERTOS_CONFIG_H */