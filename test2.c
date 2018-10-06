#include <cs50.h>
#include <stdio.h>
#include "helpers.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>


int duration(string fraction);
int main(void){

    string word = get_string("enter the word: ");
    int converted = frequency(word);
    printf("HERE%i\n",converted);

}

int frequency(string note)
{

    //We need to find the frequency?
    //What do we need for that?
    //We need a base case to get started with

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

