#include <stdio.h>
#include <cs50.h>

int main(void){

    //prompting the user for an input
    long long int number = get_long_long("enter the credit card number: ");

    //validate the card
     //multipy every other digit
    //sum those digits
    //add to remaining digits
    //validate check sums
    //validate company's identifier
    //validate number's length
    //reports whether it's a valide mastercard, visa card or amex

    int count = 0;

    int product = 0;
    //int sum = 0;

    while(number != 0)
    {
        // n = n/10

        printf("%lld\n",number%10);

        number /= 10;
        count++;


        if(count%2==0){
        product = (number%10)*2;
       printf(" this is the product: %d\n",product);
        }
    }


    //printf("the sum is :%d", sum);

    printf("Number of digits: %d\n", count);

    if(count==15){
        //the first two numbers are 34 or 35 and the length is 15-digit numbers
        printf("AMEX\n");
    }

    if(count==16){

        //the first two numbers are 51 or 52 or 53 or 54 or 55 and the length is 16-digit numbers

         printf("MASTERCARD\n");

    }

    if(count==13 || count==16){

        //the first two numbers starts with 4 and the length is 13- or 16-digit numbers

        printf(" VISA\n");
    }

    //while (number != 0) {
      // printf("%11lld\n",number % 10);
       //number /= 10;
    //}
        //uint32_t n = 1191223;

    // do {
           // long long int number1 = number%10;
           // printf("%11lld\n",number1);
       // }
       // while (number/=10);






    //while(invalid){
        //printf("invalid\n");
    //}

}