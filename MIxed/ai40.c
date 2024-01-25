//This program is only for find Bigger in three Number
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    printf("Enter the value of num2:");
    scanf("%d",&num2);
    printf("Enter the value of num3:");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3)
        printf("num1 is bigger.");
    else if(num1<num2 && num2>num3)
        printf("num2 is bigger.");
    else
        printf("num3 is bigger.");

    return 0;
}
