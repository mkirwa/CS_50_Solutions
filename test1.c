#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

#include <stdlib.h>


// Converts a fraction formatted as X/Y to eighths
//takes as input string a fraction (e.g., 1/4)
//and return as an int a corresponding number of eigths
//(2, in this case, since 1/4 is equivalent to 2/8)
int duration(string fraction);
int main(void){
    
     // TODO
    //this function should take as input as a string a fraction
    //and convert it into some integral number of eighths. You may
    //assume that duration will only be passed a string formatted as X/Y,
    //whereby each of X and Y is a positive decimal digit, and Y is, moreover, a power of 2.

    //X and Y should be positive decimal digits if not then return 1
    //Y should be a power of 2 if not then return 1
    //Input is a string  and it should be converted into some integral number of eights!
        //what exactly does the user type in?
        //I need to know if atoi gets rid of the / if not, how do I get rid of the /


    string word = get_string("enter the word: ");
    int converted = atoi(word);
    printf("converted : %i\n",converted);
    
    //create a space for each character in the string 
    //store the characters in the spaces created
        int num = word.length; 
        int array[num+1];
        
        int count = 0;
    
        for(int i=0; i<num; i++){
            
              
            
        }
        
        array[count]='/0';
        
        
    //if that character is a number
        //if Y is a power of 2
            //convert it into some integral number of eighths
        //else return 1;
        
    //else store that character 
    //print the stored number
    

}

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
        //I need to know if atoi gets rid of the / if not, how do I get rid of the /

    return(atoi(fraction));



}