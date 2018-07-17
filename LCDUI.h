/*****************************************************/
/*              LCD UI Library Routine               */
/*                                                   */
/*    Authors: Nikhil Raghavendra and Ong Jun Wen    */
/*               Date: 17 July 2018                  */
/*                                                   */
/*****************************************************/

// Initialise LCD
void initLCDUI(void);

// Clear display and cursor home
void clearDisplay(void);

// Move the cursor to a specific location
void moveCursorTo(int row, int col);

// Clear the display and move the cursor to a specific location
void clearDisplayAndCursorTo(int row, int col);

// Display alphabets and numbers
// void displayAlphaNumeric(char *message);
