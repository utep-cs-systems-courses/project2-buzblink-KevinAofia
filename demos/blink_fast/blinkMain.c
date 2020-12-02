//Alternate LEDs from Off, Green, and Red
#include <msp430.h>
#include "libTimer.h"
#include "led.h"

int main(void) {
  configureClocks();//setup master oscillator, CPU & peripheral clocks
  led_init(); //init LED but does not turn any on
  enableWDTInterrupts();//enable periodic interrupt
  //R_on();
  //G_on();
  //RG_on();
  //G_on();
  //RG_off();
  or_sr(0x18);		/* CPU off, GIE on */
}
