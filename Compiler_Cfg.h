/********************************************
 *Author:		Ahmed Essam Kamal   *
 *File Name:		Compiler_Cfg.h	    *
 *Created on:           May 18, 2019             *
 *Component:		DIO_Driver_AutoSAR	    *
 *File Version:		v1.0		    *
 ********************************************/

#ifndef COMPILER_CFG_H
#define COMPILER_CFG_H

#include <string.h>

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/


/*******************************************************************************
**                      Configuration data                                    **
*******************************************************************************/
/*
 * The following memory and pointer classes can be configured per module.
 * Those defines are passed to the compiler abstraction macros in Compiler.h
 *
 * Note:
 * module internal functions (statics) that get into one section
 * (together with API) shall fit into one page, if __near
 */

/* -------------------------------------------------------------------------- */
/*            OS (Operating System)                                           */
/* -------------------------------------------------------------------------- */
#define OS_VECTORTABLE


/* -------------------------------------------------------------------------- */
/*             NvM (Non Volatile Memory Manager)                              */
/* -------------------------------------------------------------------------- */
#define NVM_PRIVATE_CODE                 /* module internal functions         */
#define NVM_PRIVATE_CONST                /* module internal consts            */
#define NVM_FAST_DATA                    /* module internal data in fast RAM  */
#define NVM_PRIVATE_DATA    __far        /* module internal data              */

#define NVM_PUBLIC_CODE                  /* API functions                     */
#define NVM_PUBLIC_CONST                 /* API constants                     */

#define NVM_APPL_CODE                    /* callbacks of the Application      */
#define NVM_APPL_CONST                   /* Applications' ROM Data            */

/*
 * the applications' data blocks must have the same classifier
 * like the EEPIF expects
 */
#define NVM_APPL_DATA     __far   /* Applications' Ram Data                   */

#define NVM_CONFIG_CONST          /* Descriptor Tables -> Config-dependent    */
#define NVM_CONFIG_DATA   __far   /* Configuration dependent (reg. size) data */

/* -------------------------------------------------------------------------- */
/*             EepIf (EEPROM Interface)                                       */
/* -------------------------------------------------------------------------- */
#define EEPIF_CODE
#define EEPIF_VAR
#define EEPIF_CONST
#define EEPIF_APPL_DATA   NVM_APPL_DATA
#define EEPIF_APPL_CONST
#define EEPIF_APPL_CODE                 /* Callback functions called by EepIf */

/* -------------------------------------------------------------------------- */
/*             Eep (EEPROM Driver)                                            */
/* -------------------------------------------------------------------------- */
#define EEP_CODE
#define EEP_VAR_NOINIT                  /* __near not possible!               */
#define EEP_VAR                         /* __near not possible!               */
#define EEP_APPL_DATA     EEPIF_APPL_DATA
#define EEP_APPL_CONST    EEPIF_APPL_CONST
#define EEP_APPL_CODE     EEPIF_APPL_CODE
#define EEP_NEAR          __near

/* -------------------------------------------------------------------------- */
/*             CAN (CAN Driver)                                            */
/* -------------------------------------------------------------------------- */
#define CAN_CODE
#define CAN_ISR_CODE	__near
#define CAN_CONST

/* --------------- Pointer   ------------------ */
#define CAN_APPL_DATA
#define CAN_APPL_CONST
#define CAN_APPL_CODE

#define CAN_APPL_DATA_FAR  __far
#define CAN_APPL_CONST_FAR __far
#define CAN_APPL_CODE_FAR  __far

/* --------------- Varaibles ------------------ */
/* To be used for all global or static variables that are never initialized*/
#define CAN_VAR_NOINIT


/* To be used for all global or static variables that are initialized only after power on reset */
#define CAN_VAR_POWER_ON_INIT

/* To be used for all global or static variables that have
at least one of the following properties:
1. accessed bitwise
2. frequently used
3. high number of accesses in source code*/
#define CAN_VAR_FAST

/* to be used for global or static variable
that are initialized after every reset */
#define CAN_VAR

#define CAN_SHARED_VAR volatile

#define CAN_VAR_FAR  __far

#define CANTP_CONST  CAN_CONST

#define CANTP_VAR_FAST CAN_VAR_FAST

#define CANTP_VAR CAN_VAR

#define CANTP_VAR_FAR CAN_VAR_FAR

#define CANTP_APPL_DATA CAN_APPL_DATA

#define CANTP_APPL_DATA_FAR CAN_APPL_DATA_FAR


#endif /* COMPILER_CFG_H */
