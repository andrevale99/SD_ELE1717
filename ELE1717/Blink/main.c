#include <avr/io.h>

#define F_CPU 16000000
#define BLINK_DELAY_MS 250

#include <util/delay.h>

int main (void)
{
  // Arduino digital pin 13 (pin 5 of PORTB) for output
  DDRD |= 0B000100; // PORTB5

  while(1) {
    // turn LED on
    PORTD |= 0B000100; // PORTB5
    _delay_ms(BLINK_DELAY_MS);

    // turn LED off
    PORTD &= ~ 0B000100; // PORTB5
    _delay_ms(BLINK_DELAY_MS);
  }
}
