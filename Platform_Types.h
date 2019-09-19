/********************************************
 *Author:		Ahmed Essam Kamal   *
 *File Name:		Platform_Types.h	    *
 *Created on:           May 17, 2019             *
 *Component:		DIO_Driver_AutoSAR	    *
 *File Version:		v1.0		    *
 ********************************************/

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_
/********************************************************************************
 *                     AutoSAR DataTypes                                        *
 ********************************************************************************/

typedef unsigned char         boolean;

typedef unsigned char         uint8;
typedef unsigned short        uint16;
typedef unsigned long         uint32;
typedef unsigned long long    unit64;

typedef signed char           sint8;
typedef signed short          sint16;
typedef signed long           sint32;
typedef signed long long      sint64;

typedef float                 float32;
typedef double                float64;

typedef unsigned char         uint8_least;
typedef unsigned short        uint16_least;
typedef unsigned long         uint32_least;

typedef signed char           sint8_least;
typedef signed short          sint16_least;
typedef signed long           sint32_least;

/********************************************************************************
 *                     Constants Configuration                                  *
 ********************************************************************************/
#define CPU_TYPE_8       8u     /*Indicating a 8 bit processor*/
#define CPU_TYPE_16      16u    /*Indicating a 16 bit processor*/
#define CPU_TYPE_32      32u    /*Indicating a 32 bit processor*/
#define CPU_TYPE_64      64u    /*Indicating a 64 bit processor*/

#define MSB_FIRST        0u     /*MSB is the first bit of the bit sequence (big endian bit ordering)*/
#define LSB_FIRST        1u     /*LSB is the first bit of the bit sequence (little endian bit ordering)*/

#define HIGH_BYTE_FIRST  0u   /*big endian bit ordering*/
#define LOW_BYTE_FIRST   1u   /*little endian bit ordering*/

#ifndef TRUE
#define TRUE   ((boolean) 0x01)
#endif

#ifndef FALSE
#define FALSE  ((boolean) 0x00)
#endif


#endif /* PLATFORM_TYPES_H_ */
