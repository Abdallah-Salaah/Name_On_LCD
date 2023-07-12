/*
 * LCD.c
 *
 * Created: 3/24/2023 11:13:04 PM
 *  Author: Abdallah
 */ 
#include "LCD.h"
#include <util/delay.h>
void lcd_command(uint8_t cmd){
		PORTC =0x00;
		PORTD =cmd;
		PORTC =0b00000010;
        _delay_ms(15);
		PORTC =0b00000000;
}
void lcd_data(uint8_t data){
			PORTC =0x01;
			PORTD =data;
			PORTC =0b00000011;
            _delay_ms(15);
	    	PORTC =0b00000001;
}
void lcd_print(char *name){
	for (uint8_t i=0;i<8;i++)
	{
		lcd_data(name[i]);
	}
}