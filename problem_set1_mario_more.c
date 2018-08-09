#include <stdio.h>

int main(void){

	int n=4;
	int counter = 0;

	for(int i=0; i<n; i++){

		for(int j=0; j<n; j++){

			if(counter>=n){

				printf("#");
			}
			else{
				printf(" ");
			}
			counter++;
			counter=counter; 

		}
		counter--;
		n--; 
	}
}