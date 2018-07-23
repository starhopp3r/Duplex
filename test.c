//
//  test.c
//  Duplex
//
//  Created by Nikhil Raghavendra on 22/6/18.
//  Copyright © 2018 Nikhil Raghavendra and Ong Jun Wen. All rights reserved.
//
#include <xc.h>
#include <stdio.h>
#include "amt.h"
#include "LCDUI.h"

#pragma config XINST = OFF
#pragma config FOSC = HS
#pragma config WDT = OFF


void interrupt HighIsr(void) // High priority interrupt
{

}

void interrupt low_priority LowIsr(void) //Low priority interrupt
{

}

void main(void) {
    // Initialize LCD
    initLCDUI();
    // Move cursor to row 1, col 2
    moveCursorTo(1, 2);
    // Display alphanumeric characters
    displayAlphaNumeric("Hello 33");
    // Delay for 5 seconds
    delay_ms(5000);
    // Clear display and cursor to row 2, col 3
    clearDisplayAndCursorTo(2, 3);
    // Display alphanumeric characters
    displayAlphaNumeric("Bye 88");
    // Trap CPU
    while(1);
}
