/*
 * LCD.h
 *
 * Created: 3/24/2023 11:13:28 PM
 *  Author: Abdallah
 */ 
#include "register.h"
//#include <avr/io.h>

#ifndef LCD_H_
#define LCD_H_
void lcd_command(uint8_t cmd);
void lcd_data(uint8_t data);
void lcd_print(char *p);







#endif /* LCD_H_ */