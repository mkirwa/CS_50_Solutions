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
  //create a space for 12 keys
    char array[13];
    //stores the
    int count = 0;
    //alphabetical count from A through G
    int count1=65;
    //Derives the n variable.
    int count2 = 1;

    //creating the base case
    //store all the keys in the spaces created
    for(int i = 0; i <= 11; i++){
        array[count]=count1;
        count++;
        count1++;

        if (count1==67){
            count2++;
        }else{
            //takes care of count1 being 66 and 67
            //assigns count66 to 6 and count 67 to 7
        }
    }
    array[count]='\0';

    //calculating the frequency



    printf("result: %s\n",array);





    //Getting the length of the string
    int num = strlen(note);
    //the input is does not have a flat or sharp
    if(num==2){
            //checking to make sure the first letter is in between A and G
            if((int)note[0]>=65 && (int)(note[0])<=71){
                //converting the 2nd string character to an integer string
                int num1=atoi(&note[1]);
                //making sure the 2nd string character is between 0 and 8
                if(num1>=0 && num1<=8){
                    return printf("it's working: %c%i\n",note[0],num1);
                }else{
                    return 1;
                }

            }else{
                return 1;
            }
    //the input has a sharp or flat
    }else if(num==3){
            //checking to make sure the first letter is in between A and G
            if((int)note[0]>=65 && (int)(note[0])<=71){


                int num2=(int)note[0];

            //checking to make sure the second string character is either a base or a sharp
            }else if((int)note[1]==35 ||(int)note[1]==98){


                if((int)note[1]==35){
                    char array[1]=note[1];
                }else if((int)note[1]==98){
                    char array[1]=note[1];
                }else{
                    return 1;
                }


            //checking to making sure the 2nd string character is between 0 and 8
            }else if((int)note[2]>=0 && (int)note[2]<=8){

                char array[2]=note[2];
                char array[3]='\0';
                return printf("%c%c%c",array[0],array[1],array[2]);

            }else{
                return 1;
            }

    }else{
        return 1;
    }


}

