/********************************************
 *Author:		Ahmed Essam Kamal   *
 *File Name:		Port.h	            *
 *Created on:           May 29, 2019        *
 *Component:		PORT_Driver_AutoSAR *
 *File Version:		v1.0.0		    *
 ********************************************/

#ifndef PORT_H_
#define PORT_H_

/******************************************************************************
 *                      Port Module Identification                            *
 ******************************************************************************/
     /* My Own Vendor ID */
#define PORT_VENDOR_ID    (1404U)

     /* Port Module ID */
#define PORT_MODULE_ID    (124U)

     /* Port Instance ID */
#define PORT_INSTANCE_ID  (0U)

     /* Module Version 1.0.0 */
#define PORT_SW_MAJOR_VERSION           (1U)
#define PORT_SW_MINOR_VERSION           (0U)
#define PORT_SW_PATCH_VERSION           (0U)

     /* AUTOSAR Version 4.3.1 */
#define PORT_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_AR_RELEASE_MINOR_VERSION   (3U)
#define PORT_AR_RELEASE_PATCH_VERSION   (1U)


/******************************************************************************
 *                      Port Module Included files                            *
 ******************************************************************************/
#include "Std_Types.h"
#include "Port_Cfg.h"
#include "Macros.h"

/******************************************************************************
 *                      Port Module SW & AR checks                            *
 ******************************************************************************/
  /* AR check between Std_Types.h and Port.h files */
#if (PORT_AR_RELEASE_MAJOR_VERSION != STD_TYPES_AR_RELEASE_MAJOR_VERSION)\
  ||(PORT_AR_RELEASE_MINOR_VERSION != STD_TYPES_AR_RELEASE_MINOR_VERSION)\
  ||(PORT_AR_RELEASE_PATCH_VERSION != STD_TYPES_AR_RELEASE_PATCH_VERSION)
  #error "The AR version of Std_Types.h does not match the expected version"
#endif
   /* AR check between Port_Cfg.h and Port.h files */
#if  (PORT_CFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION)
  #error "The AR version of PORT_Cfg.h does not match the expected version"
#endif

   /* SW check between Port_Cfg.h and Port.h files */
#if ((PORT_CFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_CFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_CFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of Port_Cfg.h does not match the expected version"
#endif

/******************************************************************************
 *                      Functions Service IDs                                 *
 ******************************************************************************/

#define PORT_INIT_SERVICE_ID                    (uint8) 0x00
#define Port_SET_PIN_DIRECTION_SERVICE_ID       (uint8) 0x01
#define PORT_REFRESH_PORT_DIRECTION_SERVICE_ID  (uint8) 0x02
#define PORT_GET_VERSION_INFO_SERVICE_ID        (uint8) 0x03
#define PORT_SET_PIN_MODE_SERVICE_ID            (uint8) 0x04

/******************************************************************************
 *                      Development Error IDs                                 *
 ******************************************************************************/
    /*  Invalid Port Pin ID requested */
#define PORT_E_PARAM_PIN                (uint8) 0x0A
    /*  Port Pin not configured as changeable */
#define PORT_E_DIRECTION_UNCHANGEABLE   (uint8) 0x0B
    /*  API Port_Init service called with wrong parameter */
#define PORT_E_INIT_FAILED              (uint8) 0x0C
    /*  API Port_SetPinMode service called when mode is unchangeable */
#define PORT_E_PARAM_INVALID_MODE       (uint8) 0x0D
#define PORT_E_MODE_UNCHANGEABLE        (uint8) 0x0E
    /*  API service called without module initialization */
#define PORT_E_UNINIT                   (uint8) 0x0F
    /*  APIs called with a Null Pointer */
#define PORT_E_PARAM_POINTER            (uint8) 0x10

/******************************************************************************
 *                      Port Module Data Types                                *
 ******************************************************************************/
typedef uint8 Port_PinModeType;
typedef uint8 Port_PinType;  /* Number of Ports in the mc*/
typedef enum
{
  PORT_PIN_IN,
  PORT_PIN_OUT
}Port_PinDirectionType;   /* Pin direction in the mc*/

typedef struct
{
  Port_PinModeType      Pin_mode;
  Port_PinDirectionType Pin_direction;
  uint8                 Pin_initValue;

#if (PIN_DIRECTION_CHANGEABLE == STD_ON)
  uint8 Pin_DirecChangeable;
#endif

#if (PIN_MODE_CHANGEABLE == STD_ON)
  uint8 Pin_ModeChangeable;
#endif

#if (INTERNAL_PULL_UP == STD_ON)
  uint8 Int_PullUp;
#endif

#if (PORT_SPECIFIC_PIN == STD_ON)
  uint8 Port_SpPin;
#endif

#if (SLEW_RATE_CONTROL == STD_ON)
  uint8 Slew_Rate;
#endif
}Port_ConfigType;

extern const Port_ConfigType Port_Configuration;
/******************************************************************************
 *                      Port Module Function Prototypes                       *
 ******************************************************************************/
/*Port_Init service called with wrong parameter --> PORT_E_INIT_FAILED*/
void Port_Init(const Port_ConfigType* ConfigPtr);
/* Incorrect Port Pin ID passed --> PORT_E_PARAM_PIN
 * Port Pin not configured as changeable --> PORT_E_DIRECTION_UNCHANGEABLEPORT_E_DIRECTION_UNCHANGEABLE
 * API service called prior to module initialization --> PORT_E_UNINIT
 */
void Port_SetPinDirection(Port_PinType Pin,Port_PinDirectionType Direction);
/*API service called prior to module initialization --> PORT_E_UNINIT*/
void Port_RefreshPortDirection(void);
/* Api called with a NULL Pointer Parameter -->PORT_E_PARAM_POINTER*/
void Port_GetVersionInfo(Std_VersionInfoType* versioninfo);

/* Incorrect Port Pin ID passed --> PORT_E_PARAM_PIN
 * Port Pin Mode passed not valid --> PORT_E_PARAM_INVALID_MODE
 * Port_SetPinMode service called when the mode is unchangeable --> PORT_E_MODE_UNCHANGEABLE
 * API service called prior to module initialization --> PORT_E_UNINIT
 */
void Port_SetPinMode(Port_PinType Pin,Port_PinModeType Mode);

#endif /* PORT_H_ */
