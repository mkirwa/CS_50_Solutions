// Helper functions for music

#include <cs50.h>

#include "helpers.h"

#include <stdlib.h>


// Converts a fraction formatted as X/Y to eighths
//takes as input string a fraction (e.g., 1/4) 
//and return as an int a corresponding number of eigths
//(2, in this case, since 1/4 is equivalent to 2/8)
int duration(string fraction)
{
    // TODO
    //this function should take as input as a string a fraction 
    //and convert it into some integral number of eighths. You may
    //assume that duration will only be passed a string formatted as X/Y,
    //whereby each of X and Y is a positive decimal digit, and Y is, moreover, a power of 2.
    
    //X and Y should be positive decimal digits if not then return 1
    //Y should be a power of 2 if not then return 1
    //Input is a string  and it should be converted into some integral number of eights!
        //what exactly does the user type in?
    
    string fraction = get_string("enter the whatever");
    int converted = atoi("fraction");
    
    //I need to know if the 

    
    
    
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
    //this function should take as input as a string a note (e.g., A4)
    //and return its corresponding frequency in hertz as an int.
    //The frequency, f, of some note is 2n/12 × 440, 
    //where n is the number of semitones from that note to A4.
    //Each key on a piano is said to be one semitone, otherwise known as a half step,
    //away from its adjacent neighbor, whether white or black.
    //The effect of # and b, otherwise known as accidentals, is to raise or lower,
    //respectively, the pitch of a note by one semitone.
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
