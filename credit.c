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

    while(number != 0)
    {
        // n = n/10

        //printf("\n%lld",number%10);

        count++;
        if(count%2==0){
        product = (number%10)*2;
       //printf("%d\n",product);
        }

        while(product!=0){
            int product1=product%10;
            sum=sum+product1;
            product=product/10;
        }

        if(count%2==1){
            int remainder_num = number%10;
            //printf("%d\n",remainder_num);
            total=total+remainder_num;
        }

        number /= 10;

    }


    printf("the sum is :%d", sum);

    //printf("Number of digits: %d\n", count);
    //printf("sum: %d\n",sum);
    total_final=total+sum;
    printf("total sum: %d\n", total_final);



    if(total_final%10==0){


                    if(count==15){
                            //the first two numbers are 34 or 37 and the length is 15-digit numbers
                            int number2= floor(number1/10000000000000);
                            if(number2==34 ||number2 == 37){
                                printf("AMEX\n");
                            }
                            else{
                                printf("INVALID\n");
                            }

                            }



                    if(count==16){
                            //the first two numbers are 51 or 52 or 53 or 54 or 55 and the length is 16-digit numbers
                            int number3= floor(number1/100000000000000);
                            int number4= floor(number1/1000000000000000);
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

                    if(count==13){
                            //the first two numbers starts with 4 and the length is 13- or 16-digit numbers


                            int number4= floor(number1/1000000000000);
                            if(number4==4){
                                printf("VISA\n");

                            }
                            else{
                                printf("INVALID\n");
                            }


                        }



    }

    else{
        printf("INVALID\n");
    }




}