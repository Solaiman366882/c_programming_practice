//This program is only for find bigger in three numbers
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    printf("Enter the Value of num2:");
    scanf("%d",&num2);
    printf("Enter the value of num3:");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3)
        printf("Num1 is bigger.");
    else if (num1<num2 && num2>num3)
        printf("num2 is bigger");
    else if(num1<num3 && num2<num3)
        printf("num3 is bigger.");
    else
        printf("All numbers are equal");
    return 0;
}

