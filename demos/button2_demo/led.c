#include <msp430.h>
#include "led.h"
#include "switches.h"

void led_init()
{
  P1DIR |= LEDS;
  switch_state_changed = 1;
  led_update();
}

void led_update()
{
  static int state = 0;
  char ledFlags = 0;
  if (switch_state_changed && switch_state_down) {
    if (state) {
      ledFlags |= LED_RED;
      state = 0;
    }
    else {
      ledFlags |= LED_GREEN;
      state = 1;
    }
    P1OUT &= (0xff - LEDS) | ledFlags;
    P1OUT |= ledFlags;
    switch_state_changed = 0;
  }
}
