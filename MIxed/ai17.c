// a program for find three integer addition and average
#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    printf("Enter the value of num2:");
    scanf("%d",&num2);
    printf("Enter the value of num3:");
    scanf("%d",&num3);
    sum = num1+num2+num3;
    avg = sum/3.0;
    printf("sum = %d\naverage = %0.1f",sum,avg);
    return 0;

}
