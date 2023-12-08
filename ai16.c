//this program is only for find two numbers addition,substract,multiply and divide
#include<stdio.h>
int main()
{
    int num1, num2,sum,mul,sub;
    float div;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    printf("Enter the value of num2:");
    scanf("%d",&num2);
    sum = num1+num2;
    printf("Sum = %d\n",sum);
    sub = num1-num2;
    printf("Sub = %d\n",sub);
    mul = num1*num2;
    printf("Sum = %d\n",mul);
    div = (float)num1/num2;
    printf("Div = %.1f",div);

    return 0;
}
