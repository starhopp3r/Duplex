/*****************************************************/
/*           LCD UI Library Routine                  */
/*                                                   */
/*    Authors: Nikhil Raghavendra and Ong Jun Wen    */
/*               Date: 16 July 2018                  */
/*                                                   */
/*****************************************************/

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
