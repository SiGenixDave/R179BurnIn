/*****************************************************************************
*
* Copyright (C) 2010 Bombardier
*
* File Name: Timer.h
*
* Abstract: Header file for the serial communications driver
*
* Revision History:
*   08/31/2009 - das - Created
*
******************************************************************************/
#ifndef TIMER_H
#define TIMER_H

/*--------------------------------------------------------------------------
                             GLOBAL CONSTANTS
  --------------------------------------------------------------------------*/

/*-------------------------------------------------*/

/*--------------------------------------------------------------------------
                               GLOBAL TYPES
  --------------------------------------------------------------------------*/
struct Timer
{
    struct Timer *prev; /* used only when linked list are being used to maintain 
                           active timers; points to the previous active timer */
    BOOLEAN inUse;      /* used only when linked lists aren't being used to 
                           maintain active timers */
    INT_32 desiredValue;
    INT_32 runningTime;
    BOOLEAN *signal;    /* pointer to flag waiting for timer to expire; set to
                           NULL if timer is never meant to expire  */
    UINT_16 id;         /* a unique id that is assigned every time a new timer is 
						   allocated; aids in determining whether a timer can be 
						   freed properly */
    struct Timer *next; /* used only when linked list are being used to maintain 
                           active timers; points to the previous active timer */
};

/* This is needed to avoid compiler errors due to the linked list */
typedef struct Timer Timer;

/*--------------------------------------------------------------------------
                              GLOBAL VARIABLES
  --------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------
                              GLOBAL PROTOTYPES
  --------------------------------------------------------------------------*/
EXPORT void TM_Init(void);
EXPORT Timer* TM_Allocate(INT_32 aValue, BOOLEAN *aSignal);
EXPORT void TM_Service(void);
EXPORT INT_32 TM_Free(Timer *aTimer);
EXPORT void TM_Wait(INT_32 aTime);
EXPORT INT_32 TM_GetExpiredTime(Timer *aTm);
EXPORT INT_32 TM_ResetTimer(Timer *tm);
EXPORT INT_32 TM_TimeToExpire(Timer *aTm);
EXPORT UINT_16 TM_NumActiveTimers(void);

#endif 