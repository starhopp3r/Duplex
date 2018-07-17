/*****************************************************/
/*              LCD UI Library Routine               */
/*                                                   */
/*    Authors: Nikhil Raghavendra and Ong Jun Wen    */
/*               Date: 17 July 2018                  */
/*                                                   */
/*****************************************************/

#include <xc.h>
#include <stdio.h>
#include <string.h>
#include "amt.h"

// Cursor location
int cursorLocation = 0x00;

void initLCDUI() {
    // Initialise LCD panel
    LCD8init();
    // Clear display and cursor home
    LCD8send(0x01, 0);
}

void clearDisplay() {
    // Clear the display and cursor home
    LCD8send(0x01, 0);
}

void moveCursorTo(int row, int col) {
    // Check if row and column fit hardware specs of the LCD
    // The row cannot be bigger than 2, col cannot be bigger than 16
    if (row > 2 || col > 16) {
        // Row is bigger than 2 or col is bigger than 16, clear display
        clearDisplay();
    } else {
        if (row == 1) {
        // Compute cursor location
        cursorLocation = 0x80 + col;
        // Move cursor to specified location
        LCD8send(cursorLocation, 0);
    } else if (row == 2) {
        // Compute cursor location
        cursorLocation = 0xC0 + col;
        // Move cursor to specified location
        LCD8send(cursorLocation, 0);
    }
  }
}

void clearDisplayAndCursorTo(int row, int col) {
    // Clear the display
    clearDisplay();
    // Move cursor to specified location
    moveCursorTo(row, col);
}
