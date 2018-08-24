
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>


//getting the key from the user using
//a 2nd command line argument
int main(int argc, string argv[]){

    if(argc==2){

        string num = argv[1];
        //atoi(new function) to change string to num
        int i = atoi(num);
        printf("%i",i);
        //get the plain text
        //use get_string to prompt the user for a plain text
        string plain_text = get_string();
        char array[strlen(plain_text)];
        
        int counter=0; 

        printf("%s",plain_text);


        //encypher it for them
        //one character
        //entire plain text
        //print cyphertext


       
        
        //for each character in the plain text string
        for(int i=0; i<strlen(plain_text); i++){
            
            if(isalpha(plain_text)){
            
                if(isupper(plain_text)){
                    //convert it to alphabetical indexes - 65
                    = (int)plain_text[i]-65+i;
                    
                
                }
                if(islower(plain_text)){
                    //convert it to alphabetical indexes - 97
                    = (int)plain_text[i]-97+i;
                
                }
            
            }
            
        }
        //if alphabetic
            //preserve case. All upper case letters should remain upper case
            //all lower case letters should remain lower case
            //shift plain text character by key
        //print cypher text



    }

}