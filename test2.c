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
        //how???
    //use the formula 2 power(2/12) * 440
//make this the 4th octave
    //check the 2nd or the 3rd
//if the user asks for the frequency
//take the octave for that particular key
//subtract that octave from the 4th octave
//take the result and multiply it by 2 call this total
//take total and multiply it by the frequency
//corresponding to that key in the 4th octave

int main(void){
    //create a space for 12 keys
    char array[13];

    //creates a space for 7 numbers
    //stores the
    int count = 0;
    //alphabetical count from A through G
    int count1 = 67;
    //Derives the n variable.
    int count2 = 9;

    double frequency;
    double power;
    double difference;

    //creating the base case
    //store all the keys in the spaces created
    for(int i = 0; i <= 11; i++){

        array[count]=count1;

        if (count1>73){

            count1=count1-11;
            difference = count-count2;
            power = pow(2,(difference/12));
            frequency = power*440;
            printf("The frequency of: %d is %f\n",count1,frequency);

        }else if(count1==68){
            count--;
            difference = count-count2;
            power = pow(2,(difference/12));
            frequency = power*440;
            printf("The frequency of C sharp or a flat : %d is %f\n",count1,frequency);


        }else if(count1==70){
            count--;
            difference = count-count2;
            power = pow(2,(difference/12));
            frequency = power*440;
            printf("The frequency of D sharp or flat: %d is %f\n",count1,frequency);

        }else if(count1==73){
            count--;
            difference = count-count2;
            power = pow(2,(difference/12));
            frequency = power*440;
            printf("The frequency of F sharp or flat: %d is %f\n",count1,frequency);

        }else if(count1==75){
            count--;
            difference = count-count2;
            power = pow(2,(difference/12));
            frequency = power*440;
            printf("The frequency of F sharp or flat: %d is %f\n",count1,frequency);

        }else if(count1==66){
            count--;
            difference = count-count2;
            power = pow(2,(difference/12));
            frequency = power*440;
            printf("The frequency of A sharp or flat: %d is %f\n",count1,frequency);

        }else{
        difference = count-count2;
        power = pow(2,(difference/12));
        frequency = power*440;
        printf("The frequency of: %d is %f\n",count1,frequency);
        }

        count++;
        count1++;


       // printf("result: %s\n",array);

        //if (count1==67){
            //count2++;
        //}else{
            //takes care of count1 being 66 and 67
            //assigns count1 66 to 6 and count 67 to 7


        //}
    }
    array[count]='\0';

    //calculating the frequency

    //printf("result: %s\n",array);

}