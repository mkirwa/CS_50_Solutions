#include <stdio.h>

int main(void){

//You cannot decrease the length of a string but you can equate the length of the string to a given variable and then 
//countinually decrease that variable
//
	int n=4;
	int counter = n;

	for(int i=0; i<n; i++){

		for(int j=0; j<n; j++){

			if(the position of the last element >=n){

				printf("#");
			}
			else{
				printf(" ");
			}

		}
		counter--;
	}
}