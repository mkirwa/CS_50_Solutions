// Helper functions for music

#include <cs50.h>


#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
//takes as input string a fraction (e.g., 1/4) 
//and return as an int a corresponding number of eigths
//(2, in this case, since 1/4 is equivalent to 2/8)
int duration(string fraction)
{
    // TODO
}

// Calculates frequency (in Hz) of a note
//take as input as a string a note formatted as XY (e.g., A4),
//where X is any of A through G and Y is any of 0 through 8, or
//XYZ (e.g., A#4), where X is any of A through G, 
//Y is # or b, and Z is any of 0 through 8,
//and return as an int the note’s corresponding frequency, 
//rounded to the nearest integer;
int frequency(string note)
{
    // TODO
}

// Determines whether a string represents a rest
//should return true if its input, a string, 
//represents a rest in our machine-readable format, otherwise false.
bool is_rest(string s)
{
    // TODO
    //blank lines represents rests in our machine-readable format
    //synthesize will call this function in order to determine if 
    //one of the lines a user has typed in is indeed blank
    //If user inputs only a line ending, returns "", not NULL. Returns NULL
    //upon error or no input whatsoever (i.e., just EOF). Stores string
    //on heap, but library's destructor frees memory on program's exit.
 
}
