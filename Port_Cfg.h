/********************************************
 *Author:		Ahmed Essam Kamal   *
 *File Name:		Port_Cfg.h	    *
 *Created on:           May 29, 2019        *
 *Component:		PORT_Driver_AutoSAR *
 *File Version:		v1.0.0		    *
 ********************************************/

#ifndef PORT_CFG_H_
#define PORT_CFG_H_

     /* Module Version 1.0.0 */
#define PORT_CFG_SW_MAJOR_VERSION             (1U)
#define PORT_CFG_SW_MINOR_VERSION             (0U)
#define PORT_CFG_SW_PATCH_VERSION             (0U)

     /* AUTOSAR Version 4.3.1  */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (3U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (1U)


     /* Error Detection Property*/
#define PORT_DEV_ERROR_DETECT       STD_ON

    /*  API Version check */
#define PORT_VERSION_INFO_API       STD_ON

    /*  Pin mode changeable during runtime*/
#define PIN_MODE_CHANGEABLE         STD_OFF
    /*  Pin direction changeable during runtime*/
#define PIN_DIRECTION_CHANGEABLE    STD_OFF
    /*  Internal Pull-up Activation*/
#define INTERNAL_PULL_UP            STD_OFF
    /*  Micro-controller specific port pin properties*/
#define PORT_SPECIFIC_PIN           STD_OFF
    /*  Voltage or Current rate of change per unit time control*/
#define SLEW_RATE_CONTROL           STD_OFF



#endif /* PORT_CFG_H_ */
