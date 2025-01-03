#include <msp430.h> 


/**
 * main.c
 */
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer

	P1DIR |= BIT0;
	PM5CTL0 &= ~LOCKLPM5;

	while(1){
	    _delay_cycles(1e6);
	    P1OUT ^= BIT0;
	}
}
