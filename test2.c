#include <cs50.h>
#include <stdio.h>
#include "helpers.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>


int duration(string fraction);
int main(void){

    string word = get_string("enter the word: ");
    int converted = note(word);
    printf("%i",converted);

}

int frequency(string note)
{
        
        int num = strlen(note);
        if(num==2){
            
                    if((int)note[0]>=65 && (int)(note[0])<=71){
                                
                                //store note[0]
                                
                                //Return as an int the note’s corresponding frequency,
                                //The frequency, f, of some note is 2n/12 × 440,
                                //where n is the number of semitones from that note to A4
                                
                                
                                
                            //Y is any of 0 through 8, or Y is # or b
                            }else if((int)note[1]>=0 && (int)note[1]<=8){
                                
                                
                                
                            }else{
                                return 1;
                            }
            
        }
        else if(num==3){
                    //take as input as a string a note formatted as XY (e.g., A4)
                    //where X is any of A through G and Y is any of 0 through 8, or
                    //XYZ (e.g., A#4), where X is any of A through G,
                    //Y is # or b, and Z is any of 0 through 8,
                    //rounded to the nearest integer;
                    
                    //where X is any of A through G 
                    if((int)note[0]>=65 && (int)(note[0])<=71){
                        
                        //store note[0]
                        //Return as an int the note’s corresponding frequency,
                        //The frequency, f, of some note is 2n/12 × 440,
                        //where n is the number of semitones from that note to A4
                        
                        
                        
                    //Y is any of 0 through 8, or Y is # or b
                    }else if((int)note[1]==35 ||(int)note[1]==98){
                        
                        //store note
                        
                    }else if((int)note[1]>=0 && (int)note[1]<=8) {
                        //store note
                        
                    }
            }
            else{
                return 1;
            }
}