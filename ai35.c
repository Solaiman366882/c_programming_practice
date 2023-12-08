#include<stdio.h>
//This program is only for find positive or negative number
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0)
        printf("The number is Positive.");
    else if(num < 0)
        printf("The number is Negative.");
    else
        printf("The Number is Zero.");
    return 0;



}
