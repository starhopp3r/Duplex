# Duplex

Library Routine for the LCD (Parallel Port) Display of a Smart Washing Machine. The LCD is connected to the microcontroller via the Serial Peripheral Interface (SPI).

### Library routine functions

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

```

### Latency

Every function in this library has an innate latency that will introduce a slight delay
into the program during execution. The delay was added to improve the visibility of characters being displayed on the display.

|Function|Latency (ms)|
|:-:|:-:|
|initLCDUI|100|
|clearDisplay|100|
|moveCursorTo|100|
|clearDisplayAndCursorTo|200|
|displayAlphaNumeric|100|



## Contributors
Nikhil Raghavendra (@nikhilraghava) and Ong Jun Wen (@Jw0699)
