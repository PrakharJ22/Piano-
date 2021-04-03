#include <conio.h>               // library for enhanced keyboard IO

//  Defining useful constants
//  *************************

const int Major_Color = WHITE;   // color for major piano keys
const int Sharp_Color = BLACK;   // color for minor piano keys
const int Flash_Color = RED;     // color used to flash a key
const int BG_Color    = BLUE;    // background color for program
const int FG_Color    = YELLOW;  // forground color for program
const int Flash_Time  = 200;     // initial length of a note

const char ExitKey = 'Q';        // character used to exit program

const char c_flat       = 'a' ;   const char c_sharp      = 'w' ;
const char d_flat       = 's' ;   const char d_sharp      = 'e' ;
const char e_flat       = 'd' ;
const char f_flat       = 'f' ;   const char f_sharp      = 't' ;
const char g_flat       = 'g' ;   const char g_sharp      = 'y' ;
const char a_flat       = 'h' ;   const char a_sharp      = 'u' ;
const char b_flat       = 'j' ;
const char c_flat_high  = 'k' ;   const char c_sharp_high = 'o' ;
const char d_flat_high  = 'l' ;   const char d_sharp_high = 'p' ;
const char e_flat_high  = ';' ;

// Defining useful functions

char GetAKey();
/* -----------------
   Reads a key from the keyboard without waiting for RETURN
     PRE:  none
     POST: variable Key will contain the key read from the keyboard
*/

void ChangeWritingColorTo(int);
/* ----------------------------
   Changes the writing color to the indicated color
     PRE:  input contains a valid color (see constants)
     POST: screen output will show up in the new color until writing
           color is changed again.
*/

void ClearTheScreen(void);
/* -----------------------
   Clears the screen in the current background color (see below)
     PRE:  none                                       
     POST: an empty screen in the current background color
*/

void WaitAWhile(int);
/* ------------------
   Waits for a time specified. The time is specified in miliseconds
     PRE:  input contains a positive integer
     POST: none - the computer waits longer the larger the value of time
*/

void ChangeBackgroundColorTo(int);
/* -------------------------------
   Changes the background color to the indicated color
     PRE:  input contains a valid color (see constants) 
     POST: Every clear-screen will erase the screen and paint the
           background in the indicated color until it is changed again.
*/

void TurnSoundOn(char);
/* --------------------
   Turns the PC speaker on in the specified note. The speaker will make 
   a sound until it is turned off.
     PRE:  input contains a character
     POST: If input is defined as a constant indicating a valid note 
           then the sound will be made in that note. If input contains 
           any other character, no sound will start.
*/

void TurnSoundOff(void);
/* ---------------------
   Turns the PC speaker off.
     PRE:  none
     POST: The sound will be turned off if is currently turned on.
           If the sound is not currently on, this will have no effect. 
*/

void DrawRectangleForNote(char);
/* -----------------------------
   Draws a rectangle corresponding to key from a piano keyboard
   corresponding to the input value.
     PRE:  Key must contain a character
     POST: If input is defined as a constant indicating a valid note
           then the corresponding piano key will be drawn in the
           appropriate color and at the appropriate place. If Key
           contains an invalid note, nothing will happen.
*/

void FlashRectangleForNote(char, int);
/* -----------------------------------
   Flashes a rectangle corresponding to input from a piano keyboard 
   corresponding to the first input variable. Length of flash is indicated
   by the second input value.
     PRE:  first variable must contain a character
     POST: If first parameter is a constant corresponding to a valid note
           the corresponding piano key will change colors to the color 
           indicated in the Flash_Color constant. After the time indicated
           indicated in the second parameter it changes back to the actual.
           color. If first parameter contains an invalid note, nothing happens.
*/

void CleanUp(void);
/* ----------------
   Clears the screen, restores Blach/White screen colors, and displays
   good-bye message.
*/