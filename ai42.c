//This program is only for find leap year
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if(year%400 == 0)
        printf("its a leap year");
    else if(year%4 ==0 && year%100!=1)
        printf("its a leap year.");
    else
        printf("its not a leap year.");
    return 0;
}

