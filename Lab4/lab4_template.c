/**
 * lab4_template.c
 *
 * Template file for CprE 288 lab 4
 *
 * @author Zhao Zhang, Chad Nelson, Zachary Glanz
 * @date 08/14/2016
 */


#include "button.h"
#include "Timer.h"
#include "lcd.h"
#include "cyBot_uart.h"  // Functions for communicating between CyBot and Putty (via UART)
                         // PuTTy: Baud=115200, 8 data bits, No Flow Control, No Parity, COM1

//#warning "Possible unimplemented functions"
#define REPLACEME 0



int main(void) {
	button_init();
	timer_init(); // Must be called before lcd_init(), which uses timer functions
	lcd_init();
	cyBot_uart_init();

	            // Don't forget to initialize the cyBot UART before trying to use it



	
	while(1) {




        if (button_getButton() == 0){
            lcd_printf("0");
        }
        else if(button_getButton() == 1) {
            lcd_printf("1");
        }
        else if(button_getButton() == 2) {
            lcd_printf("2");
            }
        else if(button_getButton() == 3) {
            lcd_printf("3");
        }
        else if(button_getButton() == 4) {
            lcd_printf("4");
        }
	}
}
