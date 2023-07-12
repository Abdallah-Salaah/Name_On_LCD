/*
 * name on lcd.c
 *
 * Created: 3/22/2023 12:02:41 PM
 * Author : Abdallah
 */ 
//#include <avr/io.h>
#include "DIO.h"
#include "register.h"
#include "LCD.h"
#include <util/delay.h>
# define F_CPU 1000000UL


int main(void)
{
	char name[9]="Abdallah";
	DDRC =0xff;
	DDRD =0xff;
	DDRA =0xff;
	DDRB =0xff;
	lcd_command(0x38);
	lcd_command(0x0f);
	lcd_command(0x01);
    while (1) 
    {
		PORTA =0b00000110;
		PORTB =0b01011011;
	   lcd_command(0x80);
	   lcd_print(name);
    }
}

