#include <stdio.h>

int main(void){

//You cannot decrease the length of a string but you can equate the length of the string to a given variable and then
//countinually decrease that variable
//
	int num = get_int("enter the number of start ");
	int counter=num;

	for(int i=0; i<num; i++){

		for(int j=0; j<num; j++){

			if(counter>=num){

				printf("#");
			}
			else{
				printf(" ");
			}

		}
		printf("\n");
		counter--;
	}
}