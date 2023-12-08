//This program is only for find bigger in two numbers
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the value of number 1:");
    scanf("%d",&num1);
    printf("Enter The Value of number 2:");
    scanf("%d",&num2);
    if(num1>num2)
        printf("Number 1 is bigger.");
    else if(num1<num2)
        printf("Number 2 is bigger.");
    else
        printf("Both are Equal.");
    return 0;
}
