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


    //char array[8];

    //creates a space for 7 numbers
    //stores the
    int count = 1;
    //alphabetical count from A through G
    int count1 = 67;
    //Derives the n variable.
    int count2 = 10;

    double freq;

    double debug;
    double debug2;
    double debug3;

    int diff;

    double frequency;
    double power;
    double difference;
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
                            //calculates the difference between octaves

                            debug = (double)num1 - 4.0;






                            //change happend here!
                            if(debug<0){

                                debug = debug*-1.0;
                                freq = 1.0/pow(2.0,debug);

                            }else{

                                freq = pow(2,debug);
                            }





                            //diff will be used to determine the number of repetitions taken
                            //to find the frequency for the particular key
                            diff = (int)note[0] - count1;

                            if((int)note[0]==67){
                                for(int i = 0; i<=diff; i++){

                                                difference = count-count2;
                                                power = pow(2,(difference/12));
                                                debug2 = power*440.000;
                                                debug3 = freq*debug2;
                                                frequency=round(frequency);
                                                count++;
                                                count1++;

                                    }
                            }else if((int)note[0]==68){

                                diff=diff+1;

                                for(int i = 0; i<=diff; i++){
                                        if (count1>72){
                                                count1=count1-7;
                                                difference = count-count2;
                                                power = pow(2,(difference/12));
                                                frequency = freq*(power*440);
                                                frequency=round(frequency);
                                            }else{
                                                difference = count-count2;
                                                power = pow(2,(difference/12));
                                                frequency = freq*(power*440);
                                                frequency=round(frequency);
                                                count++;
                                                count1++;
                                                 }
                                    }



                            }else if((int)note[0]==69){

                                diff=diff+2;

                                for(int i = 0; i<=diff; i++){
                                        if (count1>72){
                                                count1=count1-7;
                                                difference = count-count2;
                                                power = pow(2,(difference/12));
                                                frequency = freq*(power*440);
                                                frequency=round(frequency);
                                            }else{
                                                difference = count-count2;
                                                power = pow(2,(difference/12));
                                                frequency = freq*(power*440);
                                                frequency=round(frequency);
                                                count++;
                                                count1++;
                                                 }
                                    }


                            }else if((int)note[0]==70){

                                diff=diff+2;

                                for(int i = 0; i<=diff; i++){
                                        if (count1>72){
                                                count1=count1-7;
                                                difference = count-count2;
                                                power = pow(2,(difference/12));
                                                frequency = freq*(power*440);
                                                frequency=round(frequency);
                                            }else{
                                                difference = count-count2;
                                                power = pow(2,(difference/12));
                                                frequency = freq*(power*440);
                                                frequency=round(frequency);
                                                count++;
                                                count1++;
                                                 }
                                    }


                            }else if((int)note[0]==71){

                                diff=diff+4;
                                for(int i = 0; i<=diff; i++){
                                        if (count1>72){
                                                count1=count1-7;
                                                difference = count-count2;
                                                power = pow(2,(difference/12));
                                                frequency = freq*(power*440);
                                                frequency=round(frequency);
                                            }else{
                                                difference = count-count2;
                                                power = pow(2,(difference/12));
                                                frequency = freq*(power*440);
                                                frequency=round(frequency);
                                                count++;
                                                count1++;
                                                 }
                                    }



                            }else if((int)note[0]==65){


                                diff=diff+12;
                                for(int i = 0; i<=diff; i++){
                                        if (count1>72){
                                                count1=count1-7;
                                                difference = count-count2;
                                                power = pow(2,(difference/12));
                                                frequency = freq*(power*440);
                                                frequency=round(frequency);
                                            }else{
                                                difference = count-count2;
                                                power = pow(2,(difference/12));
                                                frequency = freq*(power*440);
                                                frequency=round(frequency);
                                                count++;
                                                count1++;
                                                 }
                                    }


                            } else if((int)note[0]==66){


                                diff=diff+13;
                                for(int i = 0; i<=diff; i++){
                                        if (count1>72){
                                                count1=count1-7;
                                                difference = count-count2;
                                                power = pow(2,(difference/12));
                                                frequency = freq*(power*440);
                                                frequency=round(frequency);
                                            }else{
                                                difference = count-count2;
                                                power = pow(2,(difference/12));
                                                frequency = freq*(power*440);
                                                frequency=round(frequency);
                                                count++;
                                                count1++;
                                                 }
                                    }


                            }else{
                                return 1;
                            }

                                        return printf("%i",(int)frequency);

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

                                        int convertednum = atoi(&note[2]);

                                            if(convertednum>=0 && convertednum<=8){

                                                        if((int)note[1]==35 || (int)note[1]==98){

                                                                    int num1=atoi(&note[2]);
                                                                    freq = pow(2,(num1-4));
                                                                    diff = (int)note[0] - count1;



                                                                    if((int)note[0]==67){

                                                                        diff=diff+1;
                                                                        for(int i = 0; i<=diff; i++){
                                                                                if (count1>72){
                                                                                        count1=count1-7;
                                                                                        difference = count-count2;
                                                                                        power = pow(2,(difference/12));
                                                                                        frequency = freq*(power*440);
                                                                                        frequency=round(frequency);
                                                                                    }else{
                                                                                        difference = count-count2;
                                                                                        power = pow(2,(difference/12));
                                                                                        frequency = freq*(power*440);
                                                                                        frequency=round(frequency);
                                                                                        count++;
                                                                                        count1++;
                                                                                         }
                                                                            }
                                                                        return printf("%i",(int)frequency);


                                                                    }else if((int)note[0]==68){

                                                                        diff=diff+2;
                                                                        for(int i = 0; i<=diff; i++){
                                                                                if (count1>72){
                                                                                        count1=count1-7;
                                                                                        difference = count-count2;
                                                                                        power = pow(2,(difference/12));
                                                                                        frequency = freq*(power*440);
                                                                                        frequency=round(frequency);
                                                                                    }else{
                                                                                        difference = count-count2;
                                                                                        power = pow(2,(difference/12));
                                                                                        frequency = freq*(power*440);
                                                                                        frequency=round(frequency);
                                                                                        count++;
                                                                                        count1++;
                                                                                         }
                                                                            }
                                                                        return printf("%i",(int)frequency);

                                                                    }else if((int)note[0]==70){

                                                                        diff=diff+4;
                                                                        for(int i = 0; i<=diff; i++){
                                                                                if (count1>72){
                                                                                        count1=count1-7;
                                                                                        difference = count-count2;
                                                                                        power = pow(2,(difference/12));
                                                                                        frequency = freq*(power*440);
                                                                                        frequency=round(frequency);
                                                                                    }else{
                                                                                        difference = count-count2;
                                                                                        power = pow(2,(difference/12));
                                                                                        frequency = freq*(power*440);
                                                                                        frequency=round(frequency);
                                                                                        count++;
                                                                                        count1++;
                                                                                         }
                                                                            }
                                                                        return printf("%i",(int)frequency);

                                                                    }else if((int)note[0]==71){



                                                                        diff=diff+5;
                                                                        for(int i = 0; i<=diff; i++){
                                                                                if (count1>72){
                                                                                        count1=count1-7;
                                                                                        difference = count-count2;
                                                                                        power = pow(2,(difference/12));
                                                                                        frequency = freq*(power*440);
                                                                                        frequency=round(frequency);
                                                                                    }else{
                                                                                        difference = count-count2;
                                                                                        power = pow(2,(difference/12));
                                                                                        frequency = freq*(power*440);
                                                                                        frequency=round(frequency);
                                                                                        count++;
                                                                                        count1++;
                                                                                         }
                                                                            }
                                                                    return printf("%i",(int)frequency);

                                                                    }else if((int)note[0]==65){
                                                                        diff=diff+13;
                                                                        for(int i = 0; i<=diff; i++){
                                                                                if (count1>72){
                                                                                        count1=count1-7;
                                                                                        difference = count-count2;
                                                                                        power = pow(2,(difference/12));
                                                                                        frequency = freq*(power*440);
                                                                                        frequency=round(frequency);
                                                                                    }else{
                                                                                        difference = count-count2;
                                                                                        power = pow(2,(difference/12));
                                                                                        frequency = freq *(power*440);
                                                                                        frequency=round(frequency);
                                                                                        count++;
                                                                                        count1++;
                                                                                         }
                                                                            }
                                                                    return printf("%i",(int)frequency);

                                                                    }else {
                                                                        return 1;
                                                                    }

                                                       }else{

                                                            return 1;

                                                        }
                                            }else{
                                                return 1;
                                            }

                                    }else{
                                        return 1;
                                    }

    }else{
        return 1;
    }


}

