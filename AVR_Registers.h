 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio_Regs.h
 *
 * Description: Header file for Dio Module Registers.
 *
 * Author: Mohamed Tarek
 ******************************************************************************/

#ifndef DIO_REGS_H
#define DIO_REGS_H

#include "Std_Types.h"

/* Definition for PORTA Registers */
#define PORTA_REG	(*(volatile uint8 * const)0x003B) /*casting pointer to character 3shan 2l register one byte only law kan 2 bytes knt 7a3'ayarha l uint16 \*/
#define DDRA_REG	(*(volatile uint8 * const)0x003A)
#define PINA_REG 	(*(volatile const uint8 * const)0x0039) /*PINA da read only fa a7ot const 2abl uint la2eonno pointer l const data */

/* Definition for PORTB Registers */
#define PORTB_REG	(*(volatile uint8 * const)0x0038)
#define DDRB_REG	(*(volatile uint8 * const)0x0037)
#define PINB_REG 	(*(volatile const uint8 * const)0x0036)

/* Definition for PORTC Registers */
#define PORTC_REG	(*(volatile uint8 * const)0x0035)
#define DDRC_REG	(*(volatile uint8 * const)0x0034)
#define PINC_REG 	(*(volatile const uint8 * const)0x0033)

/* Definition for PORTD Registers */
#define PORTD_REG	(*(volatile uint8 * const)0x0032)
#define DDRD_REG	(*(volatile uint8 * const)0x0031)
#define PIND_REG 	(*(volatile const uint8 * const)0x0030)

#endif /* DIO_REGS_H */
