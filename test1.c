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
    int converted = duration(word);
    printf("%i",converted);

}

int duration(string fraction)
{
        //which should take as input as a string a fraction (e.g., 1/4)
        //return as an int a corresponding number of eigths
        //(2, in this case, since 1/4 is equivalent to 2/8);
        int num = strlen(fraction);
        //checks to make sure X and Y is a positive decimal digits if not then return 1
        if(num>3){
            return 1;
        }
        else{
                    //Y should be a power of 2 if not then return 1
                    if(fraction[2]%2!=0){
                        return 1;
                    }else{
                        //converts the string into some integral number of eights
                        double result1= atof(&fraction[2]);
                        result1 = trunc(log2(result1));
                        return atof(&fraction[0])*result1;
                        }
            }
}