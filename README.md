# Duplex

Library Routine for the LCD (Parallel Port) Display of a Smart Washing Machine. The LCD is connected to the microcontroller via the Serial Peripheral Interface (SPI).

### Library routine functions

```c
// Initialise LCD
void initLCDUI(void);

// Display alphabets and numbers
void displayAlphaNumeric(char *message);

// Move the cursor to a specific location
void moveCursorTo(int row, int col);

// Clear display and cursor home
void clearDisplay(void);

// Clear the display and move the cursor to a specific location
void clearDisplayAndCursorTo(int row, int col);

```

## Contributors
Nikhil Raghavendra and Ong Jun Wen (@Jw0699)
