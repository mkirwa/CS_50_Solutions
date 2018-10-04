#include <cs50.h>
#include <stdio.h>
#include "helpers.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>



// Converts a fraction formatted as X/Y to eighths
//takes as input string a fraction (e.g., 1/4)
//and return as an int a corresponding number of eigths
//(2, in this case, since 1/4 is equivalent to 2/8)
int duration(string fraction);
int main(void){

    string word = get_string("enter the word: ");
    int converted = note(word);
    printf("%i",converted);

}

int frequency(string note)
{
        //which should take as input as a string a fraction (e.g., 1/4)
        //return as an int a corresponding number of eigths
        //(2, in this case, since 1/4 is equivalent to 2/8);
        int num = strlen(note);
        //checks to make sure X and Y is a positive decimal digits if not then return 1
        if(num>3){
            return 1;
        }
        else{
                    //take as input as a string a note formatted as XY (e.g., A4)
                    //where X is any of A through G and Y is any of 0 through 8, or
                    //XYZ (e.g., A#4), where X is any of A through G,
                    //Y is # or b, and Z is any of 0 through 8,
                    //and return as an int the note’s corresponding frequency,
                    //rounded to the nearest integer;
                    
                    //where X is any of A through G 
                    if(int(note[0])>=65 && int(note[0])<=71){
                        return 1;
                    }else{
                        //converts the string into some integral number of eights
                        double result1= atof(&fraction[2]);
                        result1 = trunc(log2(result1));
                        return atof(&fraction[0])*result1;
                        }
            }
}