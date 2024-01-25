#include<stdio.h>

int  main(){
    double loan_amount,interest_rate,total_amount,monhtly_amount,yearly_interest,number_of_years;
    //take input from user
    printf("Enter Your Loan Amount:");
    scanf("%lf",&loan_amount);
    printf("Enter the Interest rate of your loan amount:");
    scanf("%lf",&interest_rate);
    printf("Enter the number of years:");
    scanf("%lf",&number_of_years);
    yearly_interest =(interest_rate * loan_amount)/100;
    total_amount = loan_amount + yearly_interest*number_of_years;
    monhtly_amount = total_amount/(number_of_years * 12);

    printf("Total Amount :%0.2lf \n Monthly_amount:%0.2lf",total_amount,monhtly_amount);

}
