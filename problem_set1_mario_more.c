#include <stdio.h>

int main(void){

	int n=4;
	int counter=3;

	for(int j=0; j<n; j++){

		for(int i=0; i<n ;i++){
			if(counter<=i)
			{
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