#include <stdio.h>

int main(void){

//You cannot decrease the length of a string but you can equate the length of the string to a given variable and then
//countinually decrease that variable
//
	int num = get_int("enter the number of start ");
	int counter=num;

	for(int i=0; i<num; i++){

		for(int j=0; j<num; j++){

			//we need to only print the last element in the for loop 
			//then print the next last element all the way to the 
			//first element in the following preceding row 
			//How? Do we store it in an array? so we can access each place holder?
			//He taught arrays in that class so we should also be looking at arrays

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