# Duplex

Library Routine for the LCD (Parallel Port) Display of a Smart Washing Machine. The LCD is connected to the microcontroller via the Serial Peripheral Interface (SPI).

Library Routine: LCDUI.h

Author: Nikhil Raghavendra and Ong Jun Wen (Group 2)

Functions:

// Initialise LCD
void initLCD();

// Turn off the display
void turnOffDisplay();

// Turn on the display
void turnOnDisplay();

// Display alphabets and numbers
void displayAlphaNumeric();

// Move the cursor to a specific location
void moveCursorTo();

// Clear display and cursor home
void clearDisplay();

// Clear the display and move the cursor to a specific location
void clearDisplayAndCursorTo();
