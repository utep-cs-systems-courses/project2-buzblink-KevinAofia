#include <msp430.h>
#include "SM.h"
#include "led.h"
#include "buzzer.h"
//Variables below are defined in our header but re-declared and 
//available so that we can change/update keys parts to our
//program if need be

char blinkbuzz_state = 0;

char siren_state = 0;
int frequency = 700;

char dim_state = 0;
char start = 0;

void blinkbuzz() {
  switch(blinkbuzz_state)
    {
    case 0:
      G_on();
      buzzer_set_period(4500);
      blinkbuzz_state = 1;
      break;
    case 1:
      G_off();
      buzzer_set_period(2000);
      blinkbuzz_state = 0;
      break;
    }
}
void siren() { 
  switch(siren_state)
    {
    case 0:
      buzzer_set_period(frequency);
      frequency = frequency + 10;
      R_on();
      G_off();
      if(frequency == 1600) {
	siren_state = 1;
      }
      break;
    case 1:
      buzzer_set_period(frequency);
      frequency = frequency - 10;
      G_on();
      R_off();
      if(frequency == 700) {
	siren_state = 0;
      }
      break;
    }
}
void state_advance(){
  switch(dim_state)
    {
    case 0:off();start=0;break;
    case 1:d10();start++;break;
    case 2:d20();start++;break;
    case 3:d30();start++;break;
    case 4:d40();start++;break;
    case 5:d50();start++;break;
    case 6:d60();start++;break;
    case 7:d70();start++;break;
    case 8:d80();start++;break;
    case 9:d90();start++;break;
    case 10:on();start++;break;
    default:dim_state = 0;
    }
}
void off(){
  R_off();
}
void d10() {
  switch(start)
    {
    case 0:R_on();break;
    case 1:R_off();break;
    case 2:R_off();break;
    case 3:R_off();break;
    case 4:R_off();break;
    case 5:R_off();break;
    case 6:R_off();break;
    case 7:R_off();break;
    case 8:R_off();break;
    case 9:R_off();break;
    default:start=0;break;
    }
}
void d20() {
  switch(start)
    {
    case 0:R_on();break;
    case 1:R_on();break;
    case 2:R_off();break;
    case 3:R_off();break;
    case 4:R_off();break;
    case 5:R_off();break;
    case 6:R_off();break;
    case 7:R_off();break;
    case 8:R_off();break;
    case 9:R_off();break;
    default:start=0;break;
    }
}
void d30() {
  switch(start)
    {
    case 0:R_on();break;
    case 1:R_on();break;
    case 2:R_on();break;
    case 3:R_off();break;
    case 4:R_off();break;
    case 5:R_off();break;
    case 6:R_off();break;
    case 7:R_off();break;
    case 8:R_off();break;
    case 9:R_off();break;
    default:start=0;break;
    }
}
void d40() {
  switch(start)
    {
    case 0:R_on();break;
    case 1:R_on();break;
    case 2:R_on();break;
    case 3:R_on();break;
    case 4:R_off();break;
    case 5:R_off();break;
    case 6:R_off();break;
    case 7:R_off();break;
    case 8:R_off();break;
    case 9:R_off();break;
    default:start=0;break;
    }
}
void d50() {
  switch(start)
    {
    case 0:R_on();break;
    case 1:R_on();break;
    case 2:R_on();break;
    case 3:R_on();break;
    case 4:R_on();break;
    case 5:R_off();break;
    case 6:R_off();break;
    case 7:R_off();break;
    case 8:R_off();break;
    case 9:R_off();break;
    default:start=0;break;
    }
}
void d60() {
  switch(start)
    {
    case 0:R_on();break;
    case 1:R_on();break;
    case 2:R_on();break;
    case 3:R_on();break;
    case 4:R_on();break;
    case 5:R_on();break;
    case 6:R_off();break;
    case 7:R_off();break;
    case 8:R_off();break;
    case 9:R_off();break;
    default:start=0;break;
    }
}
void d70() {
  switch(start)
    {
    case 0:R_on();break;
    case 1:R_on();break;
    case 2:R_on();break;
    case 3:R_on();break;
    case 4:R_on();break;
    case 5:R_on();break;
    case 6:R_on();break;
    case 7:R_off();break;
    case 8:R_off();break;
    case 9:R_off();break;
    default:start=0;break;
    }
}
void d80() {
  switch(start)
    {
    case 0:R_on();break;
    case 1:R_on();break;
    case 2:R_on();break;
    case 3:R_on();break;
    case 4:R_on();break;
    case 5:R_on();break;
    case 6:R_on();break;
    case 7:R_on();break;
    case 8:R_off();break;
    case 9:R_off();break;
    default:start=0;break;
    }
}
void d90() {
  switch(start)
    {
    case 0:R_on();break;
    case 1:R_on();break;
    case 2:R_on();break;
    case 3:R_on();break;
    case 4:R_on();break;
    case 5:R_on();break;
    case 6:R_on();break;
    case 7:R_on();break;
    case 8:R_on();break;
    case 9:R_off();break;
    default:start=0;break;
    }
}
void on(){
  R_on();
}
