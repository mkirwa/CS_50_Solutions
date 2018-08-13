#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){

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
