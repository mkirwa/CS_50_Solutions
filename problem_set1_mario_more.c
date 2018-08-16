#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){

	//Get the positive integer from the user which should be no greater than 23
	int n;

		do{

			n=get_int("Enter the pyramid's heights, a non-negative integer no greater than 23: ");

		}
		while(n<=0 || n>=23);

	//counters to increment and decrement the value of #
	int counter=n-1;
	int counter1=0;

	//The first for loop that prints the column
	for(int i=0; i<n; i++){

		//Prints rows
		for(int j=0; j<n; j++){

			if(counter<=j){
				printf("#");
			}
			else{
				printf(" ");
			}
		}
		counter--;

		printf("  ");
		//Prints rows
		for(int k=0;k<n;k++){
			if(counter1>=k){
				printf("#");
			}
			else{
				printf(" ");
			}

		}
		counter1++;

		printf("\n");

	}

}
