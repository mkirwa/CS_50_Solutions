

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(void){

	int n;

	do{
		n=get_int("enter the pyramids height: ");
	}
	while(n<=0 || n>=23);


	int counter=n-1;

	for(int j=0; j<n; j++){

		for(int i=0; i<=n ;i++){
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