#include "io430.h"
#define LED1 BIT0
#define BTN BIT3


void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// Stop WDT
	
        P1OUT = 0x00;
        P1OUT |= LED1;
        P1DIR = LED1;
        P1DIR &= ~BTN;
        P1REN |= BTN;
        P1OUT |= BTN;
        
        for(;;){
          if((P1IN & BTN)== 0){
          P1OUT  &= ~LED1;
        }else {
          P1OUT |= LED1;
        }
     }
 }

