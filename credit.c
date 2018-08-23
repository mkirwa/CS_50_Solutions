#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){


    //prompting the user for an input
    long long int number = get_long_long("enter the credit card number: ");
    long long int number1= number;

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
    int sum = 0;
    int total=0;
    int total_final=0;

    //validating check sum
    while(number != 0)
    {

        //multiplying every other digit
        count++;
        if(count%2==0){
        product = (number%10)*2;

        }

        //suming up product result
        while(product!=0){
            int product1=product%10;
            sum=sum+product1;
            product=product/10;
        }

        //suming up every other digit other that was not used in the product
        if(count%2==1){
            int remainder_num = number%10;
            total=total+remainder_num;
        }

        number /= 10;

    }

    //suming up the total of the product and the sum of every other digit that was not used in the product
    total_final=total+sum;

    //validating the company's identifier
    if(total_final%10==0){
            //validating the number's length
            // if the first two numbers are 34 or 37
            //and the length is 15-digit numbers then it's a mastercard
            if(count==15){
                int number2= floor(number1/pow (10,count-2));

                if(number2==34 ||number2 == 37){
                    printf("AMEX\n");
                    }
                else{
                    printf("INVALID\n");
                    }
                 }
            // if the first two numbers are 51 or 52 or 53 or 54 or 55
            //and the length is 16-digit numbers then it's a mastercard or visa
            else if(count==16){
                int number3= floor(number1/ pow(10,count-2));
                int number4= floor(number1/ pow(10,count-1));

                    if(number3==51 ||number3 == 52 || number3==53 || number3==54 || number3==55){
                        printf("MASTERCARD\n");
                    }
                    else if(number4==4) {
                        printf("VISA\n");
                    }
                    else{
                        printf("INVALID\n");
                    }

                }
            else if(count==13){
                //if the first two numbers starts with 4 and the length is 13-
                //then it's a visa card
                int number4= floor(number1/ pow(10,count-1));

                    if(number4==4){
                            printf("VISA\n");
                        }
                    else{
                            printf("INVALID\n");
                        }
                }
                else{
                    printf("INVALID\n");
                }
    }

    else{
        printf("INVALID\n");
    }


}