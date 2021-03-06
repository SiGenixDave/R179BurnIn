/*****************************************************************************
*
* Copyright (C) 2014-15 Bombardier
*
* File Name: Debug.h
*
* Abstract: Header file for debug information in serial port
*
* Revision History:
*   08/31/2014 - das - Created
*
******************************************************************************/
#ifndef DEBUG_H
#define DEBUG_H

/*--------------------------------------------------------------------------
                             GLOBAL CONSTANTS
  --------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------
                               GLOBAL TYPES
  --------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------
                              GLOBAL VARIABLES
  --------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------
                              GLOBAL PROTOTYPES
  --------------------------------------------------------------------------*/
void DebugInit (BOOLEAN establishCPULoadbaseline);
void DebugService (void);
void DebugPrintSoftwareVersion (void);
void DebugUpdateLoadCounter (void);
void DebugCalculateCpuLoad (void);

#endif