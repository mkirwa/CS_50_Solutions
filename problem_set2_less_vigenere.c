

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
                //storing the string elements in the counter
                 key[counter1]=key[m];

            }
            else{
                //exit while a non-alphabetic letter is encountered
                printf("invalid!");
                return 1;
            }

            counter1++;

        }

        //use get_string to prompt the user for a plain text
        string plain_text = get_string("please enter the plain text: ");

        int length = strlen(plain_text);
        //creating space for string elements and a /0 that indicates the end of a string
        //Add 1 to take care of the /0
        char array[length+1];
        //counter to store the ciphertext
        int counter=0;
        //counter2 keeps track of the key values upon an encounter of
        //a non alphabetic letter
        int counter2=0;
        //stores the alphabetic value of the lower case alphabets
        int islowernum = 0;
        //stores the alphabetic value of the upper case alphabets
        int isuppernum = 0;

        printf("plaintext: %s\n",plain_text);

        for(int j=0; j<length; j++){

        int y = (j-counter2)%length1;
        //checks if the character is an alphabet
        if(isalpha(plain_text[j])){

            //checks if the both the plaintext and the key character are all upper cases,
            if(isupper(plain_text[j]) && isupper(key[y])){
            //convert it to alphabetical indexes - 65
            //shift plain text character by key
            isuppernum = ((int)plain_text[j]-65)+((((int)key[y])-65));
            isuppernum = isuppernum % 26;
            //convert it back to ascii and store it in array
            array[counter] = isuppernum + 65;
            counter++;
            }
            //checks if the plaintext character is lower case and if
            //the key character is uppercase
            if(islower(plain_text[j]) && isupper(key[y])){
            //convert it to alphabetical indexes - 97
            //convert it to alphabetical indexes -65
            //shift plain text character by key
            isuppernum = ((int)plain_text[j]-97)+((((int)key[y])-65));
            isuppernum = isuppernum % 26;
            //convert it back to ascii and store it in array
            array[counter] = isuppernum + 97;
            counter++;
            }
            //checks if both the plain text and if the key characters are all lowercases
            if(islower(plain_text[j]) && islower(key[y])){
            //convert it to alphabetical indexes - 97
            //shift plain text character by key
            islowernum = ((int)plain_text[j]-97)+((((int)key[y])-97));
            islowernum = islowernum % 26;
            //convert it back to ascii
            array[counter] = islowernum + 97;
            counter++;
            }
            //checks if the plain text character is upper case and
            //if the key character is lower case
            if(isupper(plain_text[j]) && islower(key[y])){
            //convert it to alphabetical indexes - 65
            //convert it to alphabetical indexes -97
            //shift plain text character by key
            isuppernum = ((int)plain_text[j]-65)+((((int)key[y])-97));
            isuppernum = isuppernum % 26;
            //convert it back to ascii
            array[counter] = isuppernum + 65;
            counter++;
            }

        }
        else{
            //if the plain text is not an alphabet
            //store it in the array
            array[counter]=plain_text[j];
            //counter to store the value of the plaintext
            //and the ciphertext
            counter++;
            //counter to keep track of the position of the key
            //makes sure the position of the key shifts to the alphabetical
            //plaintext and at the encounter of the non-alphabetical plain text
            counter2++;
            }
        //signals the end of the string
        array[counter] = '\0';
        }
        //print cypher text
        printf("ciphertext: %s\n",array);

        }
    else
        {
            //if there are not two arguments
            //the entry is invalid
            printf("invalid!");
            return 1;
        }

}

