#include <stdio.h>

int main(void){


	int num = get_int("enter the height ");
	int array[num];
	int counter=num-1;

	for(int i=0; i<num; i++){

		for(int j=0; j<num; j++){

			if(array[j]>=counter){

				printf(" # ");
			}
			else{
				printf(" * ");
			}
		}
		printf("\n");
		counter--;
	}
}