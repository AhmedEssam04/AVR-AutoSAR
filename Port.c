/********************************************
 *Author:		Ahmed Essam Kamal   *
 *File Name:		Port.c	            *
 *Created on:           May 29, 2019        *
 *Component:		PORT_Driver_AutoSAR *
 *File Version:		v1.0.0		    *
 ********************************************/

/******************************************************************************
 *                      Port Module Includes                                  *
 ******************************************************************************/
#include "AVR_Registers.h"
#include "Port.h"
#include "Det.h"

/******************************************************************************
 *                      Port Module SW & AR checks                            *
 ******************************************************************************/
   /* AR check between Det.h and Port.h files */
#if ((DET_AR_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 || (DET_AR_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 || (DET_AR_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Det.h does not match the expected version"
#endif

/******************************************************************************
 *                      Initialization Status                                 *
 ******************************************************************************/


/******************************************************************************
 *                     Functions Implementation                               *
 ******************************************************************************/

/************************************************************************************
* Service Name: Port_Init
* Service ID[hex]: 0x00
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Initialize the Port module.
************************************************************************************/

void Port_Init(const Port_ConfigType* ConfigPtr)
{

}

/************************************************************************************
* Service Name: Port_SetPinDirection
* Service ID[hex]: 0x01
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): Pin (Pin name to be set) , Direction (Input or Output)
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Set the Pin Direction to either input or output
************************************************************************************/

void Port_SetPinDirection(Port_PinType Pin,Port_PinDirectionType Direction)
{

}

/************************************************************************************
* Service Name: Port_RefreshPortDirection
* Service ID[hex]: 0x02
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Refreshes the port's existing state
************************************************************************************/

void Port_RefreshPortDirection(void)
{

}

/************************************************************************************
* Service Name: Port_GetVersionInfo
* Service ID[hex]: 0x03
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): versioninfo - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): VersionInfo - Pointer to where to store the version information
* Return value: None
* Description: Get the version information of the module
************************************************************************************/

void Port_GetVersionInfo(Std_VersionInfoType* versioninfo)
{

}

/************************************************************************************
* Service Name: Port_SetPinMode
* Service ID[hex]: 0x04
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): Pin &  Mode
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Sets the Pin Mode
************************************************************************************/

void Port_SetPinMode(Port_PinType Pin,Port_PinModeType Mode)
{

}
