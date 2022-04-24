/*
 */

#include "header.h"


int main(void)
{


	DDRB |= (1<<PB1);	/* Make OC1A pin as output */



	TCNT1 = 0;/* Set timer1 count zero */

	ICR1 = 2499;		/* Set TOP count for timer1 in ICR1 register */

	/* Set Fast PWM, TOP in ICR1, Clear OC1A on compare match, clk/64 */
	TCCR1A = (1<<WGM11)|(1<<COM1A1);
	TCCR1B = (1<<WGM12)|(1<<WGM13)|(1<<CS10)|(1<<CS11);


	while(1)
	{
        OCR1A = 90;	/* Set servo shaft at -90� position */
		_delay_ms(500);
		OCR1A = 180; /* Set servo shaft at 0� position */
		_delay_ms(250);
		OCR1A = 360; /* Set servo at +90� position */
		_delay_ms(500);

	}
	return 0;
}
