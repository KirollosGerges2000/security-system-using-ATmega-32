/*
 * EEPROM.h
 *
* Created: 25/2/2024 11:25:15 AM
* Author: Kirollos Gerges
 */ 

#ifndef EEPROM_H_
#define EEPROM_H_
#define F_CPU 1000000UL
#include <util/delay.h>

void eeprom_write(unsigned int address, unsigned char data);
unsigned char eeprom_read(unsigned char address);

#endif /* EEPROM_H_ */