// Helper functions for music

#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include "helpers.h"
// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    // Get the integer value of numerator and denominator
    int x = fraction[0] - '0';
    int y = fraction[2] - '0';
    // Calculate the number of eighths
    return (8/y) * x;
}
// Calculates frequency (in Hz) of a note
// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    if(strlen(note)==2 || strlen(note)==3){
            const char array[] = {'C','C','D','D','E','F','F','G','G','A','A','B'};
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
            double difference = count - 9;
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
        return (int)frequency1;
        }else{
            return 1;
        }

}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    // Check if it's a new line
    if (strlen(s) == 0)
    {
        return true;
    }
    return false;
}
