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

    int freq;

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


                                                freq = pow(2,(num1-4));

                                                diff = (int)note[0] - count1;

                                            for(int i = 0; i<=diff; i++){


                                                            if (count1>72){

                                                                    count1=count1-7;
                                                                    difference = count-count2;
                                                                    power = pow(2,(difference/12));
                                                                    frequency = freq*(power*440);

                                                                }else{
                                                                difference = count-count2;
                                                                power = pow(2,(difference/12));
                                                                frequency = freq*(power*440);
                                                                    //printf("I got here T!");
                                                                //printf("The frequency of: %d is %f\n",count1,frequency);
                                                               // }

                                                                count++;
                                                                count1++;
                                                                }
                                                }



                                                /*do{
                                                    //creating the base case
                                                    //store all the keys in the spaces created
                                                    //for(int i = 1; i <= 7; i++){

                                                        //array[count]=count1;

                                                        ///STOPPED HERE IDIOT. IT'S NOT 7 BUT 12!

                                                        if (count1>72){

                                                            count1=count1-7;
                                                            difference = count-count2;
                                                            power = pow(2,(difference/12));
                                                            frequency = freq*(power*440);

                                                        }else{
                                                        difference = count-count2;
                                                        power = pow(2,(difference/12));
                                                        frequency = freq*(power*440);
                                                            printf("I got here T!");
                                                        //printf("The frequency of: %d is %f\n",count1,frequency);
                                                       // }

                                                        count++;



                                                       // printf("result: %s\n",array);

                                                        //if (count1==67){
                                                            //count2++;
                                                        //}else{
                                                            //takes care of count1 being 66 and 67
                                                            //assigns count1 66 to 6 and count 67 to 7


                                                        //}
                                                    }
                                                    //array[count]='\0';


                                                    if((int)note[0]!=count1){
                                                            //printf("I got here!");
                                                            count1++;
                                                        }


                                                }

                                            while((int)note[0]!=count1);
                                            count1++;*/

                                        return printf("The frequency of: %s is %f\n",note,frequency);






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

                                            //checking to make sure the second string character is either a base or a sharp
                                            if((int)note[1]==35 ||(int)note[1]==98){

                                                    int convertednum = atoi(&note[2]);
                                                    if(convertednum>=0 && convertednum<=8){

                                                        return printf("here!%c%c%i",note[0],note[1],convertednum);

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

