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
    //   Code goes here
    initLCDUI();
    clearDisplay();
    moveCursorTo(1, 0);
    clearDisplayAndCursorTo(1, 1);
}
