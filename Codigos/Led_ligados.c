#include "io430.h"
#define LED1  BIT0 
#define LED2  BIT6

 

int led_ligados( void )
{
    WDTCTL = WDTPW + WDTHOLD; // Stop watchdog timer to prevent time out reset
    P1OUT = 0x00;
    P1DIR = LED1; 
    
    for(;;){
      P1OUT ^= BIT0;
           
    }
 
    return 0;
}