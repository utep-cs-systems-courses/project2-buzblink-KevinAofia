#include <msp430.h>
#include "stateMachines.h"

void
__interrupt_vec(WDT_VECTOR) WDT(){//250 interrupts/sec
  static char blink_count = 0;
  blink_count += 1;
  state_advance();
  if(blink_count >= 125) {
    dim_state++; //advance into next dim level
    blink_count = 0;
  }
  
}
