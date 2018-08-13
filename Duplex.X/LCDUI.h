//
//  LCDUI.h
//
//  Created by Nikhil Raghavendra and Ong Jun Wen on 22/6/18.
//  Copyright © 2018 Nikhil Raghavendra and Ong Jun Wen. All rights reserved.
//
#ifndef _LCD_UI_
#define _LCD_UI_
// Initialize LCD
void initLCDUI(void);

// Clear display and cursor home
void clearDisplay(void);

// Move the cursor to a specific location
void moveCursorTo(int row, int col);

// Clear the display and move the cursor to a specific location
void clearDisplayAndCursorTo(int row, int col);

// Display alphabets and numbers
void displayAlphaNumeric(char *message);

// Display custom graphics
void customGraphics(int selectedGraphic);
#endif