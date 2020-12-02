#include <msp430.h>
#include "stateMachines.h"
#include "led.h"

char dim_state = 0; //extern

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
char start = 0;
void off(){
  R_off();
}
void on(){
  R_on();
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
