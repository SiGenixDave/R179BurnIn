/******************************************************************************
*
* Copyright (C) 2014-15 Bombardier
*
* File Name: Version.c
*
* Revision History:
*   11/10/2015 - das - Created
*
******************************************************************************/
///   \file
///   This file contains the code that sets the version and allows other functions
///   to access it

#define version_C

/*--------------------------------------------------------------------------
                              INCLUDE FILES
  --------------------------------------------------------------------------*/
#include <stdio.h>
#include "Types.h"

/*--------------------------------------------------------------------------
                             MODULE CONSTANTS
  --------------------------------------------------------------------------*/
/////////////////////////////////////////////////////////////////////////////
// IMPORTANT: Developer must update this value when releasing new software
/////////////////////////////////////////////////////////////////////////////
const UINT_8 m_Version = 0x07;

/*--------------------------------------------------------------------------
                              MODULE MACROS
  --------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------
                             MODULE DATA TYPES
  --------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------
                              MODULE VARIABLES
  --------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------
                             MODULE PROTOTYPES
  --------------------------------------------------------------------------*/

//--------------------------------------------------------------------------
// Module:
//  GetSoftwareVersion
//
///   This function returns the binary software version. 
///
///   returns UINT_8 - software version
///
//--------------------------------------------------------------------------
UINT_8 GetSoftwareVersion (void)
{
	return m_Version;
}

//--------------------------------------------------------------------------
// Module:
//  GetSoftwareVersionString
//
///   This function returns the binary software version. 
///
///   returns CHAR * - software version
///
//--------------------------------------------------------------------------
CHAR * GetSoftwareVersionString (void)
{
	static CHAR swVersion[10];

	sprintf (swVersion, "%d", m_Version);

	return swVersion;

}
