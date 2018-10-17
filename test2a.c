#include <cs50.h>
#include <stdio.h>
#include "helpers.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>
int frequency(string note);
int main(void){
    string word = get_string("enter the word: ");
    int converted = frequency(word);
    printf("HERE%i\n",converted);
}
int frequency(string note)
{
    if(strlen(note)==2 || strlen(note)==3){
            const char array[] = {'C','C','D','D','E','F','G','G','A','A','B','B'};
            int count=0;
            for(int i=0; i<=count; i++){
                if((int)note[0]!=(int)array[count]){
                    count++;
                }else{
                    break;
                }
            }
            int num1=0;
            if((int)note[1]==98 || (int)note[1]==35){
                 count++;
                 num1 = atoi(&note[2]);
            }else{
                num1=atoi(&note[1]);
            }
            double difference = count - 8;
            double difference1 = num1 - 4.0;
            double freq;
            double frequency1;
            double power;
            double debug2;
            double debug3;
            if(difference1<0){
                    difference1 = difference1*(-1.0);
                    freq = 1.0/pow(2.0,difference1);
            }else{
                    freq = pow(2,difference1);
            }
            for(int i = 0; i<=count; i++){
                    power = pow(2.0,(difference/12.0));
                    debug2 = power*440.000;
                    debug3 =  freq*debug2;
                    frequency1=round(debug3);
                }
        return printf("%f\n",frequency1);

        }else{
            return 1;
        }

}

