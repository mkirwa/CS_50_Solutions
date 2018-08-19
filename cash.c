#include <stdio.h>
#include <cs50.h>

int main(void){
    
    //prompt the user for an amount of change
        //get the amount in dollars
        //amount must make sense
        //what values are accepted
        //use get_float
    //validate the input
        //convert the dollar into cts
        //multiply it by 100 and also round off
        
    float input;
    
    do{
        
        input = get_float("Please enter the amount to be given out in dollars: ");
        
    }
    while(input<0);
    
    input = input * 100;
    
    count1 = 0;
    count;
    
    
        
    //always use the largest coin
    //keep track of coins used
        //how many coins to be returned
        //amount to be returned
    
    //while(quarters can be used)while the amount is greater than or equal to 25cts
        //increase count to be returned to the customer
        //decrease count owned by the user 
    while(input>=25){
        count1++;
        count--;
        //decrease the input by 25
    }
    //while(dimes can be used)
        //increase count to be returned to the customer
        //decrease count owned by the user 
    while(input>=10){
        count1++;
        count--;
        //decrease the input by 10 
    }
    //while(nickels can be used)
        //increase count to be returned to the customer
        //decrease count owned by the user 
    while(input>=5){
        count1++;
        count--;
        //decrease the input by 5 
    }
    //while(pennies can be used)
        //increase count to be returned to the customer
        //decrease count owned by the user 
    while(input>=1){
        count1++;
        count--;
        //decrease the input by 1 
    }
    
    //print the final number of coins
    
    printf("The total number of coins returned to the user is %f ",count1);


    
}