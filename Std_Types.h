/********************************************
  *Author:		Ahmed Essam Kamal   *
 *File Name:		Std_Types.h	    *
 *Created on:           May 17, 2019        *
 *Component:		DIO_Driver_AutoSAR  *
 *File Version:		v1.0		    *
 ********************************************/

#ifndef STD_TYPES_H_
#define STD_TYPES_H_
#include "Compiler.h"
#include "Platform_Types.h"


typedef struct
{
  uint16 vendorID;
  uint16 moduleID;
  uint8  sw_major_version;
  uint8  sw_minor_version;
  uint8  sw_patch_version;
} Std_VersionInfoType;

#define STD_HIGH        0x01u
#define STD_LOW         0x00u
#define STD_ACTIVE      0x01u
#define STD_IDLE        0x00u
#define STD_ON          0x01u
#define STD_OFF         0x00u
#define Std_ReturnType  uint8
#define E_OK          ((Std_ReturnType) 0x00u)
#define E_NOT_OK      ((Std_ReturnType) 0x00u)




#endif /* STD_TYPES_H_ */
