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

    int num = strlen(note);
    if(num==2){

            if((int)note[0]>=65 && (int)(note[0])<=71){
                int num1=atoi(&note[1]);
                if(num1>=0 && num1<=8){
                    return printf("it's working: %c%i\n",note[0],num1);
                }else{
                    return 1;
                }

            }else{
                return 1;
            }

    }else if(num==3){

            char array[3];

            if((int)note[0]>=65 && (int)(note[0])<=71){


                char array[0]=note[0];


            }else if((int)note[1]==35 ||(int)note[1]==98){


                if((int)note[1]==35){
                    char array[1]=note[1];
                }else if((int)note[1]==98){
                    char array[1]=note[1];
                }else{
                    return 1;
                }



            }else if((int)note[2]>=0 && (int)note[2]<=8){

                char array[2]=note[2];
                char array[3]='\0';

            }else{
                return 1;
            }

    }else{
        return 1;
    }


}

