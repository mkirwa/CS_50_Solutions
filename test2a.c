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

        //loop through the length of the array until the input is equivalent to
        //one of the characters in the array
        //use a do while loop. While the position of that element in the array is not equal to
            const char array[] = {'C','C','D','D','E','F','G','G','A','A','B','B'};

            int count=0;

            do{
                 count++;

            }while((int)note[0]==(int)array[count]);

            //if it's a base or a shape then do this
            if((int)note[1]==98 || (int)note[1]==35){
                count++;
            }
            int difference = count - 9;

            int diff;

            int num1=atoi(&note[1]);


            if(strlen(note[0])==2){
                diff = num1 - 8;
            }else{
                num1=atoi(&note[2]);
                diff = num1 - 8;
            }

            double debug = (double)num1 - 4.0;

            //change happend here!
            double freq;

            if(debug<0){
                    debug = debug*-1.0;
                    freq = 1.0/pow(2.0,debug);

            }else{

                    freq = pow(2,debug);
            }




            double freq;



            for(int i = 0; i<=diff; i++){

                    int power = pow(2,(difference/12));
                    int debug2 = power*440.000;
                    int debug3 = freq*debug2;
                    int frequency1=round(frequency1);
                    //count++;
                    //count1++;

                }


        }else{
            return 1;
        }

    }else{
        return 1;
    }



}

