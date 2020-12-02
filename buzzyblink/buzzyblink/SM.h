#ifndef stateMachine_included
#define stateMachine_included

void blinkbuzz();

void siren();

void state_advance();
void d10();
void d20();
void d30();
void d40();
void d50();
void d60();
void d70();
void d80();
void d90();
void on();
void off();

extern char blinkbuzz_state; //for our blinkbuzz() function

extern char siren_state; //for our siren() function
extern int frequency; //for our siren() function

extern char dim_state; //for our dim state intensity
extern char start; //for our dim intesity state

#endif // included
