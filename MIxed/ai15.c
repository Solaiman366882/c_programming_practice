//This program is for find two numbers sum and average
#include<stdio.h>
int main()
{
    int num1, num2,sum;
    float avg;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    printf("Enter the value of num2:");
    scanf("%d",&num2);
    sum = num1+num2;
    avg = (float)sum/2;
    printf("Sum = %d\n",sum);
    printf("Average = %.2f",avg);
    return 0;
}
