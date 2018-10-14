#include <cs50.h>
#include <stdio.h>
#include "helpers.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>


//create space for the 12 keys
//calculate the frequency for the 12 keys
    //compare the frequency with A frequency which is 440
    //find n the the number of semitones from that note to A4
    //use the formula 2 power(2/12) * 440
//make this the 4th octave
    //check the
//if the user asks for the frequency
//take the octave for that particular key
//subtract that octave from the 4th octave
//take the result and multiply it by 2 call this total
//take total and multiply it by the frequency
//corresponding to that key in the 4th octave

int frequency(string note);
int main(void){

    string word = get_string("enter the word: ");
    int converted = frequency(word);
    printf("HERE%i\n",converted);

}

int frequency(string note)
{


    if(strlen(note[0])=2 && num<=3){
            
            const char array = {'A','A','B','C','C','D','D','E','F','F','G','G'};

            //check the se
            
            for(int i = 0; i<=diff; i++){
                
                    
                
                    difference = count-count2;
                    power = pow(2,(difference/12));
                    debug2 = power*440.000;
                    debug3 = freq*debug2;
                    frequency=round(frequency);
                    count++;
                    count1++;
                    
                }
            
            
        }else{
            return 1;
        }
        
    }else{
        return 1;
    }



}

