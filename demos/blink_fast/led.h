#ifndef led_included
#define led_included

#define LED_RED BIT0 //newboard is BIT6               // P1.0
#define LED_GREEN BIT6 //newboard is BIT0             // P1.6
#define LEDS (BIT0 | BIT6)

extern unsigned char red_on;
extern unsigned char green_on;
extern unsigned char led_changed;

void led_init();
void led_update();
void R_on();
void G_on();
void R_off();
void G_off();
void RG_on();
void RG_off();

#endif // included
