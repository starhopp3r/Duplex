#include <xc.h>

#define LCDEN LATHbits.LATH0
#define LCDRS LATHbits.LATH2

void delay_ms(int x);
void delay_us(int x);
void LCD8init(void);
void LCD8send(char c, char mode);

void LCD8init(void)
{
	TRISE = 0x00;
	TRISH = 0b11111000;
	LATHbits.LATH1 = 0;
	LCDEN = 0;
	LCDRS = 0;
	delay_ms(200);

	LCD8send(0x30,0);
	LCD8send(0x30,0);
	LCD8send(0x30,0);
	LCD8send(0x38,0);
	LCD8send(0x10,0);
	LCD8send(0x0F,0);
	LCD8send(0x06,0);
    // BEGIN: LCD Custom Character
    // Hex codes for delicate wash, heavy duty wash, tumble dry and spin dry
    char customChar[] = {
        // 0 - delicate wash
        0x1F,
        0x1F,
        0x00,
        0x09,
        0x00,
        0x04,
        0x00,
        0x11,
        // 1 - heavy duty wash
        0x1F,
        0x1F,
        0x00,
        0x15,
        0x11,
        0x05,
        0x14,
        0x15,
        // 2 - tumble dry
        0x12,
        0x09,
        0x12,
        0x09,
        0x00,
        0x1F,
        0x00,
        0x1F,
        // 3 - spin dry
        0x0E,
        0x08,
        0x02,
        0x0E,
        0x00,
        0x1F,
        0x00,
        0x1F
    };
    // Set the CG RAM address of the fist character
    LCD8send(0x40, 0);
    delay_us(30);
    // Load all of the custom characters into CG RAM
    for (int i = 0; i < 64; i++) {
        LCD8send(customChar[i], 1);
        delay_us(30);
    }
    // END: LCD Custom Character
	LCD8send(0x01,0);
    delay_ms(100);
}

void LCD8send(char c, char mode)
{
	LCDRS = mode;
	delay_ms(1);

	LATE = c;
	LCDEN = 1;
	delay_us(1);
	LCDEN = 0;
	delay_us(50);  // 50 us in between commands or data
}


