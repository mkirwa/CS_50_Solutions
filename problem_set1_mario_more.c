#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){

//The height should be whatever the user puts in
//The rows is whatever the user put in * 2 and add 2
//The height is taken care of by the first for loop
//rows is taken care of by the second for loop
//In the inside loop, you will need two for loops. One that prints
//The pyramids to the left and one that prints the pyramids to the right
//You will also need two counters one for the right pyramid and one for the left pyramid



	int n=4;
	int counter=3;
	int counter1=0;

	for (int j=0;j<n;j++){

	for(int i=0;i<n;i++){

		if(i>=counter){
			printf("#");
			printf("  ");




						for(int e=0; e<n; e++){

								for(int f=0; f<n; f++){

										if(f<=counter1){
															printf("#");
														}
										else{
												printf(" ");
											}

									}

									counter1++;
									break;
								}







		}
		else{
			printf(" ");
		}
	}
	counter--;
	printf("\n");

	}
}
