/**
 * Copyright (c) 2015, Łukasz Marcin Podkalicki <lukasz@podkalicki.com>
 * [P001] Blinking LED - version with delay function.
 */

#include <avr/io.h>
#include <util/delay.h>

#define	LED_PIN	PB0				// PB0 as LED pin

int
main(void)
{

	DDRB |= 1 << LED_PIN; 			// Set LED pin as output

	while (1) {				// Infinity loop
		PORTB ^= 1 << LED_PIN;		// Toggle LED pin (HIGH/LOW)
		_delay_ms(500);			// Wait 0.5 sec
	}

	return (0);
}
