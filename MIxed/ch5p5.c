#include<stdio.h>

int main(){
    double loan_amount,interest_rate,total_amount,monthly_amount,number_of_years;

    printf("Enter your loan amount:");
    scanf("%lf",&loan_amount);
    printf("Enter your interest rate:");
    scanf("%lf",&interest_rate);
    printf("Enter Number of years:");
    scanf("%lf",&number_of_years);
    total_amount = loan_amount+(loan_amount*interest_rate)/100;
    monthly_amount = (total_amount)/(number_of_years*12);
    printf("Your Total Amount:%0.2lf \n Your Monthly Amount:%0.2lf",total_amount,monthly_amount);



}
