
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <ctype.h>
#include <string.h>



//getting the key from the user using
//a 2nd command line argument
int main(int argc, string argv[]){

    if(argc==2){

        string key = argv[1];
        int length1 = strlen(key);
        int counter1=0;


        for(int m=0; m<length1; m++){
            //loop through the key
            //if you find a letter that is not alphabetic,
            //exit and return 1 else store the string in an array counter called key

            if(isalpha(key[m])){

                 key[counter1]=key[m];

            }
            else{
                printf("invalid!");
                return 1;
            }

            counter1++;

        }

        //use get_string to prompt the user for a plain text
        string plain_text = get_string("please enter the plain text: ");

        int length = strlen(plain_text);

        char array[length+1];
       // char array1[length1+2];

        int counter=0;
        int counter2=0;
        int islowernum = 0;
        int isuppernum = 0;

        printf("plaintext: %s\n",plain_text);

                        for(int j=0; j<length ; j++){

                            int y = j%length1;

                            if(isalpha(plain_text[j-counter2])){
                                 //if alphabetic
                                           if(isalpha(plain_text[j])){

                                                //preserve case. All upper case letters should remain upper case
                                                if(isupper(plain_text[j]) && isupper(key[y])){
                                                    //convert it to alphabetical indexes - 65
                                                    //convert it back to ascii
                                                    //shift plain text character by key

                                                    //keep track of position in plain text
                                                    //keep track of position in key text

                                                    isuppernum = ((int)plain_text[j]-65)+((((int)key[y])-65));
                                                    isuppernum = isuppernum % 26;
                                                     array[counter] = isuppernum + 65;
                                                     counter++;
                                                     //counter2++;

                                                 }

                                                 if(islower(plain_text[j]) && isupper(key[y])){
                                                    //convert it to alphabetical indexes - 65
                                                    //convert it back to ascii
                                                    //shift plain text character by key

                                                    //keep track of position in plain text
                                                    //keep track of position in key text

                                                    isuppernum = ((int)plain_text[j]-97)+((((int)key[y])-65));
                                                     isuppernum = isuppernum % 26;
                                                     array[counter] = isuppernum + 97;

                                                     counter++;
                                                     //counter2++;

                                                 }

                                                 //all lower case letters should remain lower case
                                                 if(islower(plain_text[j]) && islower(key[y])){
                                                    //convert it to alphabetical indexes - 97
                                                    //convert it back to ascii
                                                    islowernum = ((int)plain_text[j]-97)+((((int)key[y])-97));
                                                    islowernum = islowernum % 26;
                                                    array[counter] = islowernum + 97;

                                                    counter++;
                                                    //counter2++;

                                                }

                                                if(isupper(plain_text[j]) && islower(key[y])){
                                                    //convert it to alphabetical indexes - 65
                                                    //convert it back to ascii
                                                    //shift plain text character by key
                                                    isuppernum = ((int)plain_text[j]-65)+((((int)key[y])-97));
                                                     isuppernum = isuppernum % 26;
                                                     array[counter] = isuppernum + 65;

                                                     counter++;
                                                     //counter2++;

                                                 }

                                            }
                                            else{
                                                array[counter]=plain_text[j];
                                                //Whenever it meets a plain text that is not alphabetic
                                                //assign the the key to the next available alphabetic letter
                                                //how do we assign the key to the next alphabetic letter
                                                    //by moving the position of the key to next position of plain_text
                                                    //how???
                                                    //store the value of j until you meet the next alphabetic letter but how??
                                                        //create another counter then increment that counter whenever you
                                                        //meet a non alphabetic letter
                                                        //decrement the position of the key by that counter
                                                            //will not work because the value of J will still
                                                            //be incremented!!
                                                                //what do we do now???
                                                                //there has to be a solution!!
                                                counter++;
                                                counter2++;
                                            }

                            }
                            else{

                                y=(j-counter2)%length1;

                                 //if alphabetic
                                           if(isalpha(plain_text[j])){

                                                //preserve case. All upper case letters should remain upper case
                                                if(isupper(plain_text[j]) && isupper(key[y])){
                                                    //convert it to alphabetical indexes - 65
                                                    //convert it back to ascii
                                                    //shift plain text character by key

                                                    //keep track of position in plain text
                                                    //keep track of position in key text

                                                    isuppernum = ((int)plain_text[j]-65)+((((int)key[y])-65));
                                                    isuppernum = isuppernum % 26;
                                                     array[counter] = isuppernum + 65;
                                                     counter++;
                                                     //counter2++;

                                                 }

                                                 if(islower(plain_text[j]) && isupper(key[y])){
                                                    //convert it to alphabetical indexes - 65
                                                    //convert it back to ascii
                                                    //shift plain text character by key

                                                    //keep track of position in plain text
                                                    //keep track of position in key text

                                                    isuppernum = ((int)plain_text[j]-97)+((((int)key[y])-65));
                                                     isuppernum = isuppernum % 26;
                                                     array[counter] = isuppernum + 97;

                                                     counter++;
                                                     //counter2++;

                                                 }

                                                 //all lower case letters should remain lower case
                                                 if(islower(plain_text[j]) && islower(key[y])){
                                                    //convert it to alphabetical indexes - 97
                                                    //convert it back to ascii
                                                    islowernum = ((int)plain_text[j]-97)+((((int)key[y])-97));
                                                    islowernum = islowernum % 26;
                                                    array[counter] = islowernum + 97;

                                                    counter++;
                                                    //counter2++;

                                                }

                                                if(isupper(plain_text[j]) && islower(key[y])){
                                                    //convert it to alphabetical indexes - 65
                                                    //convert it back to ascii
                                                    //shift plain text character by key
                                                    isuppernum = ((int)plain_text[j]-65)+((((int)key[y])-97));
                                                     isuppernum = isuppernum % 26;
                                                     array[counter] = isuppernum + 65;

                                                     counter++;
                                                     //counter2++;

                                                 }

                                            }
                                            else{
                                                array[counter]=plain_text[j];
                                                //Whenever it meets a plain text that is not alphabetic
                                                //assign the the key to the next available alphabetic letter
                                                //how do we assign the key to the next alphabetic letter
                                                    //by moving the position of the key to next position of plain_text
                                                    //how???
                                                    //store the value of j until you meet the next alphabetic letter but how??
                                                        //create another counter then increment that counter whenever you
                                                        //meet a non alphabetic letter
                                                        //decrement the position of the key by that counter
                                                            //will not work because the value of J will still
                                                            //be incremented!!
                                                                //what do we do now???
                                                                //there has to be a solution!!
                                                counter++;
                                                counter2++;
                                            }

                            }

                            array[counter] = '\0';
                            //array1[counter2] = '\0';
                          }
                           //print cypher text
                          printf("ciphertext: %s\n",array);

        }
    else
        {
            printf("invalid!");
            return 1;
        }

}

