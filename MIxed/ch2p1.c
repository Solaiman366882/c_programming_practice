#include<stdio.h>

int main(){
    int num1,num2,add,sub,div,mul;
    printf("enter the value of num1:");
    scanf("%d",&num1);
    printf("enter the value of num2:");
    scanf("%d",&num2);
    add = num1+num2;
    sub = num1-num2;
    div = num1/num2;
    mul = num1*num2;
    printf("%d + %d = %d\n",num1,num2,add);
    printf("%d - %d = %d\n",num1,num2,sub);
    printf("%d * %d = %d\n",num1,num2,mul);
    printf("%d / %d = %d\n",num1,num2,sub);
    return 0;


}
