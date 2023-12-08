#include<stdio.h>

int main(){
    int num1,num2,value;
    char sign;
    printf("Enter a Number:");
    scanf("%d",&num1);
    printf("Enter another Number:");
    scanf("%d",&num2);

    //We will start the process now

    value = num1 + num2;
    sign = '+';
    printf("%d %c %d = %d\n",num1,sign,num2,value);

    value = num1 - num2;
    sign = '-';
    printf("%d %c %d = %d\n",num1,sign,num2,value);

    value = num1 * num2;
    sign = '*';
    printf("%d %c %d = %d\n",num1,sign,num2,value);

    value = num1 / num2;
    sign = '/';
    printf("%d %c %d = %d\n",num1,sign,num2,value);

    return 0;

}
