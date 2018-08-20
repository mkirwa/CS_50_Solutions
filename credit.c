#include <stdio.h>
#include <cs50.h>

int main(void){

    //prompts the user for credit card number
    //multipy every other digit
    //sum those digits
    //add to remaining digits
    //validate check sums
    //validate company's identifier
    //validate number's length
    //reports whether it's a valide mastercard, visa card or amex

    //prompting the user for an input
    long long int number = get_long_long("enter the credit card number: ");

    int count = 0;

    while(number != 0)
    {
        // n = n/10
        number /= 10;
        printf("%11lld\n",number);
        count++;
    }

    printf("Number of digits: %d\n", count);


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


    //while(the first two numbers are 34 or 35 and the length is 15-digit numbers){

       // printf("AMEX\n");
  //  }

    //while(the first two numbers are 51 or 52 or 53 or 54 or 55 and the length is 16-digit numbers){

       // printf("MASTERCARD\n");
    //}
    //while(the first two numbers starts with 4 and the length is 13- or 16-digit numbers){

       // printf(" VISA\n");
   // }
    //while(invalid){
        //printf("invalid\n");
    //}

}