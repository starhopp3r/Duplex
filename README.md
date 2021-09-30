# Duplex

Library routine for the LCD (parallel port) display of a smart washing machine. The LCD is connected to the microcontroller via the Serial Peripheral Interface (SPI). 

This library was written for the PIC18F97J60 microcontroller.

### Library Routine Functions

```c
// Initialise LCD
void initLCDUI(void);

// Clear display and cursor home
void clearDisplay(void);

// Move the cursor to a specific location
void moveCursorTo(int row, int col);

// Clear the display and move the cursor to a specific location
void clearDisplayAndCursorTo(int row, int col);

// Display alphabets and numbers
void displayAlphaNumeric(char *message);

// Display custom graphics preloaded in CG RAM
void customGraphics(int selectedGraphic);
```

### Caveat

The display functions are **not persistent**, you have to use a loop to ensure the display is persistent.

## Contributors
Nikhil Raghavendra (@starhopp3r) and Ong Jun Wen (@Jw0699)
