/********************************************
 *Author:		Ahmed Essam Kamal   *
 *File Name:		Dio_Cfg.h	    *
 *Created on:           Mars 12, 2019       *
 *Component:		DIO_Driver          *
 *File Version:		v1.0.0		    *
 ********************************************/

#ifndef DIO_REG_H_
#define DIO_REG_H_

/* PORT A Registers */
#define DDRA  (*((u8 *)0x3A))
#define PORTA (*((u8 *)0x3B))
#define PINA  (*((u8 *)0x39))

/* PORT B Registers */
#define DDRB  (*((u8 *)0x37))
#define PORTB (*((u8 *)0x38))
#define PINB  (*((u8 *)0x36))

/* PORT C Registers */
#define DDRC  (*((u8 *)0x34))
#define PORTC (*((u8 *)0x35))
#define PINC  (*((u8 *)0x33))

/* PORT D Registers */
#define DDRD  (*((u8 *)0x31))
#define PORTD (*((u8 *)0x32))
#define PIND  (*((u8 *)0x30))

/*Error Definition*/

#define ERROR_OK      0
#define ERROR_NOT_OK  1
#endif /* DIO_REG_H_ */
