/*****************************************************************************
*
* Copyright (C) 2010 Bombardier
*
* File Name: DateTime.h
*
* Abstract: Header file for the serial communications driver
*
* Revision History:
*   08/31/2009 - das - Created
*
******************************************************************************/
#ifndef DATETIME_H
#define DATETIME_H

/*--------------------------------------------------------------------------
                             GLOBAL CONSTANTS
  --------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------
                               GLOBAL TYPES
  --------------------------------------------------------------------------*/
/* Structure used to update and read the real time clock (STK17T88).
   NOTE: Do not change the order of these structure members because they
         are mapped to the hardware registers on the STK17T88. */
typedef struct
{
    UINT_8  calOsc;         
    UINT_8  second;         /* 00 - 59 */
    UINT_8  minute;         /* 00 - 59 */
    UINT_8  hour;           /* 00 - 23 */
    UINT_8  dayofWeeek;     /* 01 - 07 */
    UINT_8  day;            /* 01 - 31 */
    UINT_8  month;          /* 01 - 12 */
    UINT_8  year;           /* 00 - 99 */
} RTC_t;
/*--------------------------------------------------------------------------
                              GLOBAL VARIABLES
  --------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------
                              GLOBAL PROTOTYPES
  --------------------------------------------------------------------------*/
EXPORT void DT_EnableOscillator(BOOLEAN aEnable);
EXPORT BOOLEAN DT_OscillatorEnabled(void);
EXPORT void DT_UpdateUsingBCD(RTC_t *aBCD);
EXPORT void DT_UpdateUsingRTC(RTC_t *aRTC);
EXPORT void DT_UpdateUsingString(CHAR *aString);
EXPORT void DT_UpdateUsingDelimitedString(CHAR *aString);
EXPORT void DT_UpdateUsingUTC(UINT_32 aUTC);
EXPORT void DT_ReadUsingBCD(RTC_t *aBCDData);
EXPORT void DT_ReadUsingRTC(RTC_t *aRTCData);
EXPORT void DT_ReadUsingString(CHAR *aString);
EXPORT void DT_ReadUsingDelimitedString(CHAR *aString, CHAR aDateDelimiter, CHAR aTimeDelimiter);
EXPORT void DT_ReadUsingUTC(UINT_32 *aUTC);

#endif 