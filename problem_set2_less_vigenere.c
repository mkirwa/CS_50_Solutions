
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
        //atoi(new function) to change string to num
        //int i = atoi(num);
        //get the plain text
        //use get_string to prompt the user for a plain text
        string plain_text = get_string("please enter the plain text: ");

        int length = strlen(plain_text);
        int length1 = strlen(key);
        //int length1 = strlen(key);

        char array[length+1];

        int counter=0;
        int islowernum = 0;
        int isuppernum = 0;
        //int plain_text_num = 0;
        //int key_num = 0;

        printf("plaintext: %s\n",plain_text);

        //for(int k=0; k<length; k++){


            //if(isalpha(key[k])){

                        //for each character in the plain text string
                        for(int j=0; j<length; j++){


                            //if alphabetic
                           if(isalpha(plain_text[j])){

                                //preserve case. All upper case letters should remain upper case
                                if(isupper(plain_text[j]) && isupper(key[j])){
                                    //convert it to alphabetical indexes - 65
                                    //convert it back to ascii
                                    //shift plain text character by key

                                    //keep track of position in plain text
                                    //keep track of position in key text

                                    isuppernum = ((int)plain_text[j]-65)+((((int)key[j%length1])-65))%26;


                                     //if key[j]==/0 then start over
                                     //how do you start over?


                                     isuppernum = isuppernum % 26;
                                     array[counter] = isuppernum + 65;

                                     counter++;

                                 }

                                 //all lower case letters should remain lower case
                                 if(islower(plain_text[j]) && islower(key[j])){
                                    //convert it to alphabetical indexes - 97
                                    //convert it back to ascii
                                    //shift plain text character by key
                                    islowernum = ((int)plain_text[j]-97)+((((int)key[j%length1])-97))%26;
                                    islowernum = islowernum % 26;
                                    array[counter] = islowernum + 97;

                                    counter++;

                                }
                                
                                if(isupper(plain_text[j]) && islower(key[j])){
                                    //convert it to alphabetical indexes - 97
                                    //convert it back to ascii
                                    //shift plain text character by key
                                    islowernum = ((int)plain_text[j]-65)+((((int)key[j%length1])-97))%26;
                                    islowernum = islowernum % 26;
                                    array[counter] = islowernum + 97;

                                    counter++;

                                }




                            }

                            else{
                                array[counter]=plain_text[j];
                                counter++;
                            }

                            array[counter] = '\0';



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