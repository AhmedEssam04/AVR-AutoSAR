/********************************************
 *Author:		Ahmed Essam Kamal   *
 *File Name:		Dio.h	            *
 *Created on:           May 17, 2019        *
 *Component:		DIO_Driver_AutoSAR  *
 *AutoSAR Version:	v4.3.1		    *
 *File Version:		v1.0.0		    *
 ********************************************/


#ifndef DIO_H_
#define DIO_H_
/********************************************************************************
 *                         Includes                                             *
 ********************************************************************************/
#include "Common_Macros.h"
#include "Std_Types.h"
#include "Dio_Cfg.h"

/********************************************************************************
 *                     Types Definitions                                        *
 ********************************************************************************/

typedef uint8 Dio_PortType;
typedef uint8 Dio_LevelType;
typedef uint8 Dio_ChannelType;
typedef uint8 Dio_PortLevelType;
typedef struct
{
   /*defines the positions of the channel group*/
   uint8        mask;
   /*position of the Channel Group on the port, counted from the LSB*/
   uint8        offset;
   /*port on which the Channel group is defined*/
   Dio_PortType port;

}  Dio_ChannelGroupType;

typedef struct
{
   uint8 Port_Num;
   uint8 Ch_Num;
}  Dio_ConfigChannel;

/*required for initializing the Dio Driver */
typedef struct
{
   Dio_ConfigChannel Channels[DIO_CONFIGURED_CHANNLES];
}  Dio_ConfigType;

/********************************************************************************
 *                     Function definitions                                     *
 ********************************************************************************/
void Dio_GetVersionIfo(Std_VersionInfoType* VersionInfo);
void Dio_WritePort(Dio_PortLevelType PortId,Dio_PortLevelType Level);
void Dio_WriteChannel(Dio_ChannelType ChannelId,Dio_LevelType Level);
void Dio_WriteChannelGroup(const Dio_ChannelGroupType* ChannelGroupIdPtr,Dio_PortLevelType Level);

Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId);
Dio_LevelType Dio_FlipChannel(Dio_ChannelType ChannelId);
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);
Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType* ChannelGroupIdPtr);

#endif /* DIO_H_ */
