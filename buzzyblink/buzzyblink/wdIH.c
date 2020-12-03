#include <msp430.h>
#include "SM.h"
#include "led.h"      //include so we can update our leds
#include "buzzer.h"   //included so we can update our frequency/buzzer 
#include "switches.h" //include so we can update our states/switches

char switch_state;     //defining our extern variable

void
__interrupt_vec(WDT_VECTOR) WDT(){	//250 interrupts/sec
  static char count = 0;//count is static so we can access variable for duration of our program
  count++;
  switch(switch_state)
    {
    case 1:
      if(count == 25){
	blinkbuzz();
	count = 0;
      }
      break;
    case 2:
      if(count == 125){
	blinkbuzz();
	count = 0;
      }
      break;
    case 3:
      state_advance();
      if(count == 125){
	blinkbuzz();
	dim_state++;
	count = 0;
      }
      break;
    case 4:
      if(count == 5) {
	siren();
	count = 0;
      }
      break;
    default:
      RG_off();
      buzzer_set_period(0);
      count = 0;
    }
}
